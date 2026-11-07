// FUN_00046548 @ 00046548  size=788  callers=1
// program: bmminer


undefined4 FUN_00046548(uint param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int extraout_r1;
  int extraout_r1_00;
  uint uVar7;
  int iVar8;
  int local_2048;
  int local_2040;
  undefined1 auStack_2038 [8];
  undefined1 auStack_2030 [8];
  char acStack_2028 [8196];
  
  iVar4 = FUN_0002a6f0(param_3);
  if (iVar4 != 0) {
    uVar7 = param_3 & 0xff;
    pthread_mutex_lock((pthread_mutex_t *)&DAT_000c9630);
    FUN_00019678();
    DAT_000c9648 = 1;
    usleep(100000);
    FUN_00045c7c();
    if (param_1 == 4) {
      iVar4 = FUN_0002a584();
      FUN_00082934(uVar7,param_2 * iVar4);
    }
    else if (param_1 == 0x10) {
      iVar4 = FUN_0002a584();
      FUN_00082950(uVar7,param_2 * iVar4,2);
    }
    else {
      iVar4 = FUN_0002a584();
      FUN_00082eac(uVar7,param_2 * iVar4,param_1 & 0xff);
    }
    local_2048 = 0;
    local_2040 = 0;
    usleep(100000);
    do {
      pthread_mutex_lock((pthread_mutex_t *)&DAT_000c9614);
      iVar4 = DAT_00a5f358;
      if (DAT_00a5f358 < 1) {
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_000c9614);
        if (iVar4 == 0) {
          usleep(1000);
        }
      }
      else {
        iVar8 = 0;
        do {
          DAT_00a5f358 = DAT_00a5f358 + -1;
          iVar8 = iVar8 + 1;
          uVar7 = DAT_00a5f354 + 1;
          iVar1 = uVar7 * 8;
          DAT_00a5f354 = uVar7;
          if (0xffe < uVar7) {
            DAT_00a5f354 = 0;
          }
          if ((*(byte *)((int)&DAT_00a5f358 + iVar1 + 3) == param_3) &&
             (*(char *)((int)&DAT_00a5f358 + iVar1 + 2) == '@')) {
            uVar2 = *(undefined1 *)((int)&DAT_00a5f358 + iVar1 + 1);
            uVar5 = FUN_0002a584();
            iVar6 = FUN_00098658(uVar2,uVar5);
            if (iVar6 == param_2) {
              uVar3 = *(undefined2 *)((int)&DAT_00a5f354 + iVar1 + 2);
              local_2048 = local_2048 + 1;
              uVar5 = FUN_0002a544();
              FUN_0009863c(uVar3,uVar5);
              if (*(int *)(param_4 + extraout_r1 * 4) == 0) {
                uVar7 = (&DAT_00a5f354)[uVar7 * 2];
                local_2040 = local_2040 + 1;
                uVar5 = FUN_0002a544();
                FUN_0009863c(uVar7 >> 0x10,uVar5);
                *(uint *)(param_4 + extraout_r1_00 * 4) = uVar7 & 0xffff;
              }
            }
          }
        } while (iVar4 != iVar8);
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_000c9614);
      }
      FUN_0004bd34(auStack_2030);
      iVar4 = FUN_0004c008(auStack_2030,auStack_2038);
    } while (iVar4 < 200);
    iVar4 = FUN_0002a544();
    if ((local_2040 != iVar4) && (3 < DAT_000be63c)) {
      iVar4 = FUN_0002a544();
      snprintf(acStack_2028,0x2000,
               "recv core response not enough!!!, total recv::%d, valid::%d, need::%d.\n",local_2048
               ,local_2040,iVar4);
      FUN_0004948c(3,acStack_2028,0);
    }
    DAT_000c9648 = 0;
    FUN_0001968c();
    usleep(100000);
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_000c9630);
    return 0;
  }
  if (DAT_000be63c < 4) {
    return 0xffffffff;
  }
  snprintf(acStack_2028,0x2000,"chain::%d don\'t exist!!!\n",param_3);
  FUN_0004948c(3,acStack_2028,0);
  return 0xffffffff;
}

