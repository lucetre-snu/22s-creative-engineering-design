Help() {
   echo "-p   Set serial board rate"
   echo "-s   Show serial monitor"
}

scripts/compile.sh $1
scripts/upload.sh $1 
shift

Rate=9600
while getopts ":hsp:" option; do
   case $option in
      h) # display Help
         Help
         exit;;
      p)
         Rate=$OPTARG;;
      s)
         scripts/serial.sh -p $Rate;;
     \?) # Invalid option
         echo "Error: Invalid option"
         exit;;
   esac
done
