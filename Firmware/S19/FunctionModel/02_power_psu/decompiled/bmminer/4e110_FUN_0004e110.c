// FUN_0004e110 @ 0004e110  size=432  callers=5
// program: bmminer


undefined4 FUN_0004e110(undefined4 param_1,char *param_2,uint param_3,char *param_4,uint param_5)

{
  byte *pbVar1;
  char cVar2;
  short sVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 local_29 [5];
  
  local_29[0] = 0;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0050fc28);
  cVar2 = '\x03';
  while( true ) {
    uVar5 = 0;
    do {
      pcVar4 = param_2 + uVar5;
      uVar5 = uVar5 + 1 & 0xff;
      FUN_00050e30(param_1,local_29,1,pcVar4,1,1);
    } while (uVar5 < param_3);
    uVar5 = 0;
    usleep(400000);
    do {
      pcVar4 = param_4 + uVar5;
      uVar5 = uVar5 + 1 & 0xff;
      FUN_00050d88(param_1,local_29,1,pcVar4,1,1);
    } while (uVar5 < param_5);
    usleep(100000);
    sVar3 = 0;
    pbVar1 = (byte *)(param_4 + 1);
    do {
      pbVar1 = pbVar1 + 1;
      sVar3 = sVar3 + (ushort)*pbVar1;
    } while ((byte *)(param_4 + (param_5 - 3)) != pbVar1);
    if ((((sVar3 == CONCAT11(param_4[param_5 - 1],param_4[param_5 - 2])) && (*param_2 == *param_4))
        && (param_2[1] == param_4[1])) &&
       ((param_2[3] == param_4[3] && (param_5 == (byte)param_4[2] + 2)))) break;
    cVar2 = cVar2 + -1;
    if (cVar2 == '\0') {
      uVar6 = 0x80000300;
LAB_0004e28c:
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc28);
      return uVar6;
    }
  }
  uVar6 = 0;
  goto LAB_0004e28c;
}

