git remote add origin https://github.com/davinci-tech/dev.git
git checkout main
git fetch
git add .
git commit -a -m "new files"
git pull origin main
git push -u origin main