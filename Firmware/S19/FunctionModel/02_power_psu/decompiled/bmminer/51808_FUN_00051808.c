// FUN_00051808 @ 00051808  size=624  callers=1
// program: bmminer


int FUN_00051808(int param_1,byte *param_2,int param_3,int param_4,int param_5,char param_6)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  int local_834;
  undefined1 uStack_82d;
  uint *local_82c;
  char local_828 [20];
  undefined4 local_814;
  char acStack_810 [2028];
  
  local_834 = param_1;
  if (param_3 == 1) {
    local_82c = (uint *)pthread_mutex_lock((pthread_mutex_t *)&DAT_0050fc64);
    if (local_82c == (uint *)0x0) {
      iVar2 = FUN_00048c84(DAT_0050fc60,&local_834,&local_82c);
      puVar1 = local_82c;
      if (iVar2 == 1) {
        if (param_5 != 0) {
          pbVar7 = (byte *)(param_4 + -1);
          iVar2 = 0;
          do {
            uVar5 = puVar1[1];
            pbVar7 = pbVar7 + 1;
            uVar4 = *puVar1;
            uVar6 = uVar4 << 0x1a;
            if (param_6 != '\0') {
              uVar4 = (uint)*param_2;
            }
            uVar6 = (uint)*pbVar7 | (uVar5 >> 4) << 0x14 | uVar6 | (uVar5 & 0xe) << 0xf;
            if (param_6 != '\0') {
              uVar6 = uVar6 | 0x1000000 | (uVar4 + iVar2) * 0x100;
            }
            iVar2 = iVar2 + 1;
            iVar3 = FUN_00050ee8();
            if (iVar3 == 0) {
              builtin_strncpy(local_828,"iic not ready 4 writ",0x14);
              local_814 = CONCAT13(local_814._3_1_,0xa65);
              FUN_00032218(0,local_828,0);
              free(local_82c);
              pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc64);
              return -2;
            }
            FUN_00045c40(0xc,uVar6);
            iVar3 = FUN_00050f44(&uStack_82d);
            if (iVar3 == 0) {
              builtin_strncpy(local_828,"iic write reg failed",0x14);
              local_814 = CONCAT22(local_814._2_2_,10);
              FUN_00032218(0,local_828,0);
              free(local_82c);
              pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc64);
              return -3;
            }
          } while ((byte *)(param_4 + param_5 + -1) != pbVar7);
        }
        free(local_82c);
        usleep(10000);
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc64);
        return param_5;
      }
      snprintf(local_828,0x800,"ctx %d not inited\n",local_834);
      FUN_00032218(0,local_828,0);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc64);
      iVar2 = -2;
    }
    else {
      builtin_strncpy(local_828,"failed to i2c lock\n",0x14);
      FUN_00032218(0,local_828);
      iVar2 = -1;
    }
  }
  else {
    builtin_strncpy(local_828,"more than one byte r",0x14);
    local_814._0_1_ = 'e';
    local_814._1_1_ = 'g';
    local_814._2_1_ = ' ';
    local_814._3_1_ = 'a';
    builtin_strncpy(acStack_810,"ddress is not supported\n",0x19);
    FUN_00032218(0,local_828);
    iVar2 = -3;
  }
  return iVar2;
}

