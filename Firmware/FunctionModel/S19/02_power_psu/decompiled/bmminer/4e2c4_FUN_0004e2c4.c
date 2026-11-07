// FUN_0004e2c4 @ 0004e2c4  size=520  callers=12
// program: bmminer


undefined4 FUN_0004e2c4(undefined4 param_1,char *param_2,uint param_3,short *param_4,uint param_5)

{
  short *psVar1;
  char cVar2;
  short sVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 local_829;
  char local_828 [2052];
  
  local_829 = 0x11;
  if ((param_5 & 1) == 0) {
    pthread_mutex_lock((pthread_mutex_t *)&DAT_0050fc28);
    cVar2 = '\x04';
    do {
      uVar5 = 0;
      do {
        pcVar4 = param_2 + uVar5;
        uVar5 = uVar5 + 1 & 0xff;
        FUN_00050e30(param_1,&local_829,1,pcVar4,1,0);
      } while (uVar5 < param_3);
      usleep(500000);
      uVar5 = 0;
      do {
        pcVar4 = (char *)((int)param_4 + uVar5);
        uVar5 = uVar5 + 1 & 0xff;
        FUN_00050d88(param_1,&local_829,1,pcVar4,1,0);
      } while (uVar5 < param_5);
      usleep(100000);
      sVar3 = 0;
      psVar1 = param_4;
      do {
        psVar1 = psVar1 + 1;
        sVar3 = sVar3 + *psVar1;
      } while ((short *)((int)param_4 + (param_5 - 5 & 0xfffffffe) + 2) != psVar1);
      if ((((sVar3 == CONCAT11(*(char *)((int)param_4 + (param_5 - 1)),
                               *(char *)((int)param_4 + (param_5 - 2)))) &&
           (*param_2 == (char)*param_4)) && (param_2[1] == *(char *)((int)param_4 + 1))) &&
         ((param_2[3] == *(char *)((int)param_4 + 3) && (param_5 == *(byte *)(param_4 + 1) + 2)))) {
        uVar6 = 0;
        goto LAB_0004e450;
      }
      cVar2 = cVar2 + -1;
    } while (cVar2 != '\0');
    uVar6 = 0x80000300;
LAB_0004e450:
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc28);
  }
  else {
    uVar6 = 0xffffffff;
    builtin_strncpy(local_828,"WARNING: exec_power_cmd_v2 only support even len\n",0x32);
    FUN_00032218(3,local_828,0);
  }
  return uVar6;
}

