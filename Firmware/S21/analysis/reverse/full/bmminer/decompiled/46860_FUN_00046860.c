// FUN_00046860 @ 00046860  size=484  callers=0
// program: bmminer


undefined4 FUN_00046860(undefined1 param_1,int param_2,uint param_3,uint *param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_2030 [8];
  char acStack_2028 [8196];
  
  iVar2 = FUN_0002a6f0(param_3);
  if (iVar2 != 0) {
    pthread_mutex_lock((pthread_mutex_t *)&DAT_000c9630);
    FUN_00019678();
    DAT_000c9648 = 1;
    FUN_00045c7c();
    iVar2 = FUN_0002a584();
    FUN_00082f14(param_3 & 0xff,param_2 * iVar2,param_1);
    usleep(100000);
    do {
      pthread_mutex_lock((pthread_mutex_t *)&DAT_000c9614);
      iVar2 = DAT_00a5f358;
      if (DAT_00a5f358 < 1) {
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_000c9614);
        if (iVar2 == 0) {
          usleep(1000);
        }
      }
      else {
        iVar6 = 0;
        do {
          DAT_00a5f358 = DAT_00a5f358 + -1;
          iVar6 = iVar6 + 1;
          uVar5 = DAT_00a5f354 + 1;
          iVar4 = uVar5 * 8;
          DAT_00a5f354 = uVar5;
          if (0xffe < uVar5) {
            DAT_00a5f354 = 0;
          }
          if ((*(byte *)((int)&DAT_00a5f358 + iVar4 + 3) == param_3) &&
             (*(char *)((int)&DAT_00a5f358 + iVar4 + 2) == '@')) {
            uVar1 = *(undefined1 *)((int)&DAT_00a5f358 + iVar4 + 1);
            uVar3 = FUN_0002a584();
            iVar4 = FUN_00098658(uVar1,uVar3);
            if (iVar4 == param_2) {
              *param_4 = (uint)*(ushort *)(&DAT_00a5f354 + uVar5 * 2);
            }
          }
        } while (iVar2 != iVar6);
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_000c9614);
      }
      FUN_0004bd34(acStack_2028);
      iVar2 = FUN_0004c008(acStack_2028,auStack_2030);
    } while (iVar2 < 200);
    DAT_000c9648 = 0;
    FUN_0001968c();
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

