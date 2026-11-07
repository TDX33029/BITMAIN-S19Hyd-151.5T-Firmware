// FUN_019eefa4 @ 019eefa4 size=656 calls_out=8 calls_in=1
// strings: park missing | core missing

int FUN_019eefa4(int *param_1,int param_2,undefined1 *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = *(int *)(param_2 + 0x5c);
  *(undefined4 *)(param_2 + 0x5c) = 0;
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("park missing",0xc,&DAT_01d29720);
  }
  if (param_1[1] != 0) {
    FUN_01306fc8(&DAT_01d29730);
    goto LAB_019ef234;
  }
  param_1[1] = -1;
  if (param_1[2] == 0) {
    iVar3 = 0;
  }
  else {
    FUN_019eeaa0();
    iVar3 = param_1[1] + 1;
  }
  param_1[1] = iVar3;
  piVar4 = (int *)(iVar8 + 8);
  param_1[2] = param_2;
  iVar3 = *(int *)(*param_1 + 8) + 0xb8;
  if (param_3 == &DAT_3b9aca00) {
    piVar6 = (int *)(iVar8 + 0xc);
    if (*piVar6 == 3) {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(piVar6);
        if (bVar2) {
          *piVar6 = 0;
          goto LAB_019ef11c;
        }
      } while (*piVar6 == 3);
    }
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
    iVar9 = *piVar4;
    pcVar7 = (char *)(iVar9 + 0x2c);
    if (*pcVar7 == '\0') {
      DataMemoryBarrier(0xb);
LAB_019ef078:
      bVar2 = (bool)hasExclusiveAccess(pcVar7);
      if (!bVar2) goto code_r0x019ef084;
      *pcVar7 = '\x01';
      DataMemoryBarrier(0xb);
      FUN_019f9154(piVar4,iVar9 + 8,iVar3);
LAB_019ef110:
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar9 + 0x2c) = 0;
LAB_019ef11c:
      DataMemoryBarrier(0xb);
      goto LAB_019ef120;
    }
LAB_019ef090:
    ClearExclusiveLocal();
    param_3 = &DAT_3b9aca00;
    DataMemoryBarrier(0xb);
LAB_019ef0e4:
    FUN_019f9314(piVar4,param_3);
  }
  else {
    iVar9 = *piVar4;
    pcVar7 = (char *)(iVar9 + 0x2c);
    if (*pcVar7 == '\0') {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(pcVar7);
        if (bVar2) {
          *pcVar7 = '\x01';
          DataMemoryBarrier(0xb);
          FUN_019f9154(piVar4,iVar9 + 8,iVar3,param_3);
          goto LAB_019ef110;
        }
      } while (*pcVar7 == '\0');
    }
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
    if (param_3 != (undefined1 *)0x0) goto LAB_019ef0e4;
  }
LAB_019ef120:
  FUN_019f993c(param_1 + 3);
  if (param_1[1] == 0) {
    iVar3 = param_1[2];
    param_1[1] = -1;
    param_1[2] = 0;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("core missing",0xc,&DAT_01d29750);
    }
    param_1[1] = 0;
    piVar4 = *(int **)(iVar3 + 0x5c);
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar9 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar9 + -1;
      if (iVar9 == 1) {
        DataMemoryBarrier(0xb);
        FUN_019db294(*(undefined4 *)(iVar3 + 0x5c));
      }
    }
    *(int *)(iVar3 + 0x5c) = iVar8;
    if (*(char *)(iVar3 + 0x65) == '\0') {
      iVar8 = *(int *)(iVar3 + 0x50);
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      uVar5 = *(int *)(iVar8 + 0x10) - *(int *)(iVar8 + 8);
      if (*(int *)(iVar3 + 0x58) != 0) {
        uVar5 = uVar5 + 1;
      }
      if (1 < uVar5) {
        FUN_019ec500(*(int *)(*param_1 + 8) + 8,*(int *)(iVar3 + 0x58),*(int *)(iVar8 + 8),
                     *(undefined4 *)(iVar8 + 0xc));
      }
    }
    return iVar3;
  }
  FUN_01306fc8(&DAT_01d29740);
LAB_019ef234:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x19ef234);
  (*pcVar1)();
code_r0x019ef084:
  if (*pcVar7 != '\0') goto LAB_019ef090;
  goto LAB_019ef078;
}

