// FUN_000513ac @ 000513ac  size=512  callers=1
// program: bmminer


int FUN_000513ac(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  int local_82c;
  undefined1 uStack_825;
  int *local_824;
  char local_820 [16];
  undefined4 local_810;
  undefined2 uStack_80c;
  undefined1 local_80a;
  
  local_82c = param_1;
  local_824 = (int *)pthread_mutex_lock((pthread_mutex_t *)&DAT_0050fc64);
  if (local_824 == (int *)0x0) {
    iVar3 = FUN_00048c84(DAT_0050fc60,&local_82c,&local_824);
    piVar2 = local_824;
    if (iVar3 == 1) {
      if (param_3 != 0) {
        pbVar6 = (byte *)(param_2 + -1);
        do {
          uVar5 = piVar2[1];
          pbVar6 = pbVar6 + 1;
          bVar1 = *pbVar6;
          iVar4 = *piVar2;
          iVar3 = FUN_00050ee8();
          if (iVar3 == 0) {
            free(local_824);
            builtin_strncpy(local_820,"iic not ready 4 ",0x10);
            local_810._0_1_ = 'w';
            local_810._1_1_ = 'r';
            local_810._2_1_ = 'i';
            local_810._3_1_ = 't';
            uStack_80c = 0xa65;
            local_80a = 0;
            FUN_00032218(0,local_820,0);
            pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc64);
            return -2;
          }
          FUN_00045c40(0xc,(uint)bVar1 | (uVar5 >> 4) << 0x14 | iVar4 << 0x1a | (uVar5 & 0xe) << 0xf
                      );
          iVar3 = FUN_00050f44(&uStack_825);
          if (iVar3 == 0) {
            builtin_strncpy(local_820,"iic write failed",0x10);
            local_810 = CONCAT22(local_810._2_2_,10);
            FUN_00032218(0,local_820,0);
            free(local_824);
            pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc64);
            return -3;
          }
        } while ((byte *)(param_2 + param_3 + -1) != pbVar6);
      }
      free(local_824);
      usleep(10000);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc64);
      return param_3;
    }
    snprintf(local_820,0x800,"ctx %d not inited\n",local_82c);
    FUN_00032218(0,local_820,0);
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc64);
    iVar3 = -2;
  }
  else {
    builtin_strncpy(local_820,"failed to i2c lo",0x10);
    local_810._0_1_ = 'c';
    local_810._1_1_ = 'k';
    local_810._2_1_ = '\n';
    local_810._3_1_ = '\0';
    FUN_00032218(0,local_820);
    iVar3 = -1;
  }
  return iVar3;
}

