function lazygit() {
    git add .
    git commit -A -m "$*"
    git push
}
