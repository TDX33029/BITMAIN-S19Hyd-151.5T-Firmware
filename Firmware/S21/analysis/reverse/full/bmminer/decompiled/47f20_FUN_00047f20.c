// FUN_00047f20 @ 00047f20  size=596  callers=2
// program: bmminer


undefined4 FUN_00047f20(uint param_1,uint param_2,int param_3)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int local_2038;
  int local_2030;
  char acStack_2028 [8196];
  
  iVar3 = FUN_0002a6f0();
  if (iVar3 == 0) {
    if (DAT_000be63c < 4) {
      return 0;
    }
    snprintf(acStack_2028,0x2000,"Chain %d is not exist.\n",param_1);
    FUN_0004948c(3,acStack_2028,0);
    return 0;
  }
  if (param_2 == 0) {
    FUN_0002aa60(param_1,0);
  }
  iVar3 = 0;
  local_2030 = 0;
  local_2038 = 0;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_000c9630);
  FUN_00045c7c();
  FUN_0002c9f4(param_1 & 0xff,1,0,param_2 & 0xff);
  do {
    while( true ) {
      FUN_0004bf68(300);
      pthread_mutex_lock((pthread_mutex_t *)&DAT_000c9614);
      iVar6 = DAT_00a5f358;
      local_2038 = local_2038 + DAT_00a5f358;
      if (0 < DAT_00a5f358) break;
      iVar9 = FUN_0002a514();
      iVar7 = FUN_0002a6e0();
      if (iVar7 * iVar9 * 5 < local_2038) goto LAB_00048094;
      if (iVar6 == 0) {
        iVar3 = iVar3 + 1;
        FUN_0004bf68(100);
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_000c9614);
        if (iVar3 == 4) {
LAB_000480a0:
          pthread_mutex_unlock((pthread_mutex_t *)&DAT_000c9630);
          return 1;
        }
      }
      else {
        iVar6 = FUN_0002a514();
        if (iVar6 <= local_2030) goto LAB_00048094;
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_000c9614);
      }
    }
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 1;
      iVar9 = DAT_00a5f354 + 1;
      bVar1 = *(byte *)((int)&DAT_00a5f358 + iVar9 * 8 + 2);
      uVar8 = (&DAT_00a5f354)[iVar9 * 2];
      uVar2 = *(undefined1 *)((int)&DAT_00a5f358 + iVar9 * 8 + 1);
      uVar4 = FUN_0002a584();
      DAT_00a5f354 = DAT_00a5f354 + 1;
      DAT_00a5f358 = DAT_00a5f358 + -1;
      if (0xffe < DAT_00a5f354) {
        DAT_00a5f354 = 0;
      }
      if ((*(byte *)((int)&DAT_00a5f358 + iVar9 * 8 + 3) == param_1) && (bVar1 == param_2)) {
        uVar5 = FUN_00098658(uVar2,uVar4);
        iVar9 = FUN_0002a514();
        if (uVar5 <= iVar9 - 1U) {
          local_2030 = local_2030 + 1;
          *(undefined4 *)(param_3 + uVar5 * 4) = uVar8;
        }
      }
    } while (iVar6 != iVar3);
    iVar3 = FUN_0002a514();
    iVar6 = FUN_0002a6e0();
    if (iVar3 * iVar6 * 5 < local_2038) {
LAB_00048094:
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_000c9614);
      goto LAB_000480a0;
    }
    iVar3 = 0;
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_000c9614);
  } while( true );
}

