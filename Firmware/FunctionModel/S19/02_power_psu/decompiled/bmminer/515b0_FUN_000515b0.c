// FUN_000515b0 @ 000515b0  size=596  callers=1
// program: bmminer


uint FUN_000515b0(int param_1,byte *param_2,int param_3,int param_4,uint param_5,char param_6)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int local_834 [2];
  int *local_82c;
  char local_828 [20];
  undefined4 uStack_814;
  char acStack_810 [2028];
  
  local_834[0] = param_1;
  if (param_3 - 1U < 2) {
    local_82c = (int *)pthread_mutex_lock((pthread_mutex_t *)&DAT_0050fc64);
    if (local_82c == (int *)0x0) {
      iVar2 = FUN_00048c84(DAT_0050fc60,local_834,&local_82c);
      piVar1 = local_82c;
      if (iVar2 == 1) {
        if (param_5 != 0) {
          uVar6 = 0;
          do {
            uVar4 = piVar1[1];
            uVar5 = *piVar1 << 0x1a;
            uVar3 = uVar5 | 0x2080000;
            if (param_3 == 2) {
              uVar3 = uVar5 | 0x2000000;
            }
            uVar5 = uVar3 | (uVar4 >> 4) << 0x14 | (uVar4 & 0xe) << 0xf;
            if (param_6 != '\0') {
              uVar5 = uVar5 | (*param_2 + uVar6) * 0x100 | 0x1000000;
            }
            iVar2 = FUN_00050ee8();
            if (iVar2 == 0) {
              builtin_strncpy(local_828,"iic not ready 4 read",0x14);
              uStack_814 = CONCAT13(uStack_814._3_1_,0xa31);
              FUN_00032218(0,local_828,0);
              free(local_82c);
              pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc64);
              return 0xfffffffe;
            }
            FUN_00045c40(0xc,uVar5);
            iVar2 = param_4 + uVar6;
            uVar6 = uVar6 + param_3 + 1;
            iVar2 = FUN_00050f44(iVar2);
            if (iVar2 == 0) {
              free(local_82c);
              pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc64);
              return 0xfffffffd;
            }
          } while (uVar6 < param_5);
        }
        free(local_82c);
        usleep(10000);
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc64);
        return param_5;
      }
      snprintf(local_828,0x800,"ctx %d not inited\n",local_834[0]);
      FUN_00032218(0,local_828,0);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc64);
      uVar6 = 0xfffffffe;
    }
    else {
      builtin_strncpy(local_828,"failed to i2c lock\n",0x14);
      FUN_00032218(0,local_828);
      uVar6 = 0xffffffff;
    }
  }
  else {
    builtin_strncpy(local_828,"more than two byte r",0x14);
    uStack_814._0_1_ = 'e';
    uStack_814._1_1_ = 'g';
    uStack_814._2_1_ = ' ';
    uStack_814._3_1_ = 'd';
    builtin_strncpy(acStack_810,"ata len is not supported\n",0x1a);
    FUN_00032218(0,local_828);
    uVar6 = 0xfffffffd;
  }
  return uVar6;
}

