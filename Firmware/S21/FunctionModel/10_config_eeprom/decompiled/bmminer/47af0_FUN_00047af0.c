// FUN_00047af0 @ 00047af0  size=1064  callers=1
// program: bmminer


undefined4 FUN_00047af0(uint param_1,uint param_2,int param_3)

{
  bool bVar1;
  byte bVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  uint param7;
  uint param8;
  int local_2138;
  int local_2134;
  char acStack_2128 [256];
  char acStack_2028 [8196];
  
  memset(acStack_2128,0,0x100);
  iVar5 = FUN_0002a6f0(param_1);
  if (iVar5 == 0) {
    if (DAT_000be63c < 4) {
      return 0;
    }
    snprintf(acStack_2028,0x2000,"Chain %d is not exist.\n",param_1);
    FUN_0004948c(3,acStack_2028,0);
    return 0;
  }
  iVar5 = 0;
  local_2134 = 0;
  local_2138 = 0;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_000c9630);
  FUN_00045c7c();
  FUN_0002c9f4(param_1 & 0xff,1,0,param_2 & 0xff);
  do {
    while( true ) {
      FUN_0004bf68(0x1e);
      pthread_mutex_lock((pthread_mutex_t *)&DAT_000c9614);
      iVar9 = DAT_00a5f358;
      local_2138 = local_2138 + DAT_00a5f358;
      if (DAT_00a5f358 < 1) break;
      iVar5 = 0;
      do {
        while( true ) {
          iVar12 = DAT_00a5f354 + 1;
          iVar8 = iVar12 * 8;
          iVar11 = iVar12 * 8;
          bVar2 = *(byte *)((int)&DAT_00a5f358 + iVar8 + 3);
          uVar3 = *(undefined1 *)((int)&DAT_00a5f358 + iVar8 + 1);
          param7 = (uint)*(byte *)((int)&DAT_00a5f358 + iVar8 + 2);
          param8 = (&DAT_00a5f354)[iVar12 * 2];
          uVar6 = FUN_0002a584();
          uVar7 = FUN_00098658(uVar3,uVar6);
          bVar4 = *(byte *)(&DAT_00a5f358 + iVar12 * 2);
          DAT_00a5f354 = DAT_00a5f354 + 1;
          DAT_00a5f358 = DAT_00a5f358 + -1;
          if (0xffe < DAT_00a5f354) {
            DAT_00a5f354 = 0;
          }
          if (*(byte *)((int)&DAT_00a5f358 + iVar11 + 3) != param_1) break;
          uVar3 = *(undefined1 *)((int)&DAT_00a5f358 + iVar11 + 1);
          uVar6 = FUN_0002a584();
          iVar8 = FUN_00098658(uVar3,uVar6);
          iVar12 = FUN_0002a514();
          if (iVar8 < iVar12) {
            if (param7 == param_2) {
              uVar3 = *(undefined1 *)((int)&DAT_00a5f358 + iVar11 + 1);
              local_2134 = local_2134 + 1;
              uVar6 = FUN_0002a584();
              iVar8 = FUN_00098658(uVar3,uVar6);
              uVar6 = 1;
              *(uint *)(param_3 + iVar8 * 4) = param8;
              uVar3 = *(undefined1 *)((int)&DAT_00a5f358 + iVar11 + 1);
              uVar10 = FUN_0002a584();
              iVar8 = FUN_00098658(uVar3,uVar10);
              acStack_2128[iVar8] = '\x01';
              iVar8 = FUN_0002a514();
              if (iVar8 == local_2134) goto LAB_00047dfc;
            }
            else if (3 < DAT_000be63c) {
              iVar8 = 0x481;
              goto LAB_00047d0c;
            }
          }
          else if (3 < DAT_000be63c) {
            iVar8 = 0x471;
            goto LAB_00047d0c;
          }
LAB_00047c34:
          iVar5 = iVar5 + 1;
          if (iVar9 == iVar5) goto LAB_00047d58;
        }
        if (DAT_000be63c < 4) goto LAB_00047c34;
        iVar8 = 0x46c;
LAB_00047d0c:
        iVar5 = iVar5 + 1;
        snprintf(acStack_2028,0x2000,
                 "%s, %d, chain_number:%d, chip_addr:%d, reg_addr:%d, reg_value:0x%x, crc:%d",
                 "get_chain_reg_value",iVar8,(uint)bVar2,uVar7 & 0xff,param7,param8,(uint)bVar4);
        FUN_0004948c(3,acStack_2028,0);
      } while (iVar9 != iVar5);
LAB_00047d58:
      iVar5 = FUN_0002a514();
      iVar9 = FUN_0002a6e0();
      if (iVar9 * iVar5 * 5 < local_2138) {
        uVar6 = 0;
LAB_00047dfc:
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_000c9614);
        goto LAB_00047e08;
      }
      iVar5 = 0;
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_000c9614);
    }
    iVar8 = FUN_0002a514();
    iVar11 = FUN_0002a6e0();
    if (iVar11 * iVar8 * 5 < local_2138) {
      uVar6 = 0;
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_000c9614);
      goto LAB_00047e08;
    }
    if (iVar9 == 0) {
      iVar5 = iVar5 + 1;
      FUN_0004bf68(0x1e);
    }
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_000c9614);
  } while (iVar5 != 0x3c);
  uVar6 = 0;
LAB_00047e08:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_000c9630);
  pcVar13 = acStack_2128;
  for (iVar5 = 0; iVar9 = FUN_0002a514(), iVar5 < iVar9; iVar5 = iVar5 + 1) {
    if (((*pcVar13 == '\0') &&
        (uVar7 = DAT_000c9660 + 1, bVar1 = DAT_000c9660 < 0x100, DAT_000c9660 = uVar7, bVar1)) &&
       (3 < DAT_000be63c)) {
      snprintf(acStack_2028,0x2000,"chain %d asic %d get reg value failed",param_1,iVar5);
      FUN_0004948c(3,acStack_2028,0);
    }
    pcVar13 = pcVar13 + 1;
  }
  return uVar6;
}

