// FUN_00046048 @ 00046048  size=644  callers=3
// program: bmminer


undefined4 FUN_00046048(uint param_1,uint param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint extraout_r1;
  uint uVar7;
  uint extraout_r1_00;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  char acStack_2028 [8196];
  
  iVar2 = FUN_0002c678();
  iVar3 = FUN_0002a6f0(param_1);
  if (iVar3 == 0) {
    uVar5 = 0;
    if (3 < DAT_000be63c) {
      snprintf(acStack_2028,0x2000,"Chain %d is not exist.\n",param_1);
      FUN_0004948c(3,acStack_2028,0);
    }
  }
  else {
    if (param_2 == 0) {
      FUN_0002aa60(param_1,0);
    }
    iVar10 = 0;
    iVar3 = 0;
    FUN_00045c7c();
    FUN_0002c9f4(param_1 & 0xff,1,0,param_2 & 0xff);
LAB_000460dc:
    do {
      while( true ) {
        FUN_0004bf68(300);
        pthread_mutex_lock((pthread_mutex_t *)&DAT_000c9614);
        iVar4 = DAT_00a5f358;
        iVar10 = iVar10 + DAT_00a5f358;
        if (DAT_00a5f358 < 1) break;
        iVar3 = 0;
        uVar7 = extraout_r1;
        while( true ) {
          DAT_00a5f358 = DAT_00a5f358 + -1;
          uVar8 = DAT_00a5f354 + 1;
          iVar6 = uVar8 * 8;
          DAT_00a5f354 = uVar7;
          if (uVar8 < 0xfff) {
            DAT_00a5f354 = uVar8;
          }
          if (0xffe < uVar8) {
            DAT_00a5f354 = 0;
          }
          uVar8 = (&DAT_00a5f354)[uVar8 * 2];
          uVar7 = (uint)*(byte *)((int)&DAT_00a5f358 + iVar6 + 2);
          uVar1 = *(undefined1 *)((int)&DAT_00a5f358 + iVar6 + 1);
          if (*(byte *)((int)&DAT_00a5f358 + iVar6 + 3) == param_1) {
            if (uVar7 == 0) {
              uVar11 = FUN_0002a534();
              uVar7 = (uint)((ulonglong)uVar11 >> 0x20);
              if ((uint)uVar11 == uVar8 >> 0x10) {
                FUN_0002a9f0(param_1);
                uVar7 = extraout_r1_00;
              }
            }
            else if (uVar7 == 0xbd) {
              uVar5 = FUN_0002a584();
              iVar6 = FUN_000983e0(uVar1,uVar5);
              uVar7 = iVar6 * 5;
              iVar9 = *(int *)(iVar2 + iVar6 * 4);
              *(uint *)(iVar2 + (iVar9 + iVar6 * 10 + 0x100) * 4) = uVar8;
              *(int *)(iVar2 + iVar6 * 4) = iVar9 + 1;
            }
          }
          if (iVar4 == iVar3 + 1) break;
          iVar3 = iVar3 + 1;
        }
        iVar3 = FUN_0002a514();
        iVar4 = FUN_0002a6e0();
        if (iVar3 * iVar4 * 5 < iVar10) {
LAB_000461a8:
          pthread_mutex_unlock((pthread_mutex_t *)&DAT_000c9614);
          return 1;
        }
        iVar3 = 0;
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_000c9614);
      }
      iVar6 = FUN_0002a514();
      iVar9 = FUN_0002a6e0();
      if (iVar9 * iVar6 * 5 < iVar10) goto LAB_000461a8;
      if (iVar4 != 0) {
        if (param_2 == 0) {
          iVar4 = FUN_0002a514();
          iVar6 = FUN_0002aacc(param_1);
          if (iVar4 == iVar6) goto LAB_000461a8;
        }
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_000c9614);
        goto LAB_000460dc;
      }
      iVar3 = iVar3 + 1;
      FUN_0004bf68(100);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_000c9614);
    } while (iVar3 != 4);
    uVar5 = 1;
  }
  return uVar5;
}

