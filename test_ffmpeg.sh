# -----------------------------------------------------------
# test_ffmpeg.sh - testa processo do ffmpeg esta em execucao
# Criado em: 22/05/2022
# Revisao: 00
# Copyright (c) 2022 by Alan Lopes
# -----------------------------------------------------------
# config crontab:
#                 */1 * * * *   root    /path/test_ffmpeg.sh

#!/bin/bash
pidof  ffmpeg > /dev/null
if [[ $? -ne 0 ]] ; then
        echo "Restarting ffmpeg: $(date)" >> /var/log/ffmpeg.txt
        /path/ffmpeg &
fi