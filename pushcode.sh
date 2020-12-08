echo "Hello!"
git config --global credential.helper store
git config --global user.name "RealRadOne"
git add .
git pull origin main
git commit -m "Adding updates"
git push -u origin master
