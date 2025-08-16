#!/bin/bash

# Stop if any command fails
set -e

# Add all changes
git add .

# Ask for commit message
read -p "Enter commit message: " commit_message

# If empty, use default
if [ -z "$commit_message" ]; then
  commit_message="update"
fi

# Commit with the message
git commit -m "$commit_message"

# Push to the current branch
git push origin $(git rev-parse --abbrev-ref HEAD)
