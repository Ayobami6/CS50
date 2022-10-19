#!/bin/bash
read -p 'Commit Message: ' uservar
git add . && git commit -m "$uservar" && git push
echo Done!
