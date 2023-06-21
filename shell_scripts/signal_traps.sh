#! /bin/bash
trap "echo exit signal is detected" SIGINT
echo "pid is $$"
while (( i<=10 ))
do
    sleep 10
    echo $i
    (( i++ ))
done
exit 0


# if user press ctrl+c to terminate script whis is a signal it is called intrupt signal
# In signal terms it is called sig in.
# while pressing ctrl+z is also used to terminate the script and this signal is called suspend signal.
# In Signal terms it is called sig tstp.
# we can use kill -9 (Name of pid)
    #* 9 stands for sig kill signal.
# trap command is used to display a signal received by user.
# trap will not catch SIGKILL and SIGSTOP.
# we can remove trap by trap - signal names.
# for debugging we can use bash -x ./file_name
# -x can be used at the top.
# set -x --> Point from where we have set the debugging.
# set +x --> Until the point we have set the debugging.
