Help() {
   echo "-p   Set serial board rate"
}

Rate=9600

while getopts ":hp:" option; do
   case $option in
      h) # display Help
         Help
         exit;;
      p)
         Rate=$OPTARG;;
     \?) # Invalid option
         echo "Error: Invalid option"
         exit;;
   esac
done

putty COM3 -serial -sercfg $Rate,8,n,1,N &