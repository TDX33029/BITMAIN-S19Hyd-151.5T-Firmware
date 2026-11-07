// FUN_016503cc @ 016503cc size=1124 calls_out=12 calls_in=2
// strings: internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016503cc(int *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  undefined1 *puVar14;
  int *piVar15;
  int *piVar16;
  uint uVar17;
  int *piVar18;
  int iVar19;
  int *local_60;
  int *local_5c;
  undefined1 *local_58;
  int *local_50;
  int *local_4c;
  undefined1 *puStack_48;
  int *local_40;
  int *local_3c;
  undefined1 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  piVar15 = (int *)param_1[1];
  iVar19 = *param_1;
  FUN_01656cb0(&local_40);
  piVar8 = local_3c;
  if (local_40 == (int *)&DAT_00000001) {
    local_4c = (int *)CONCAT31(local_4c._1_3_,local_38._0_1_);
    local_50 = local_3c;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_50,&DAT_01d06988,&DAT_01d06978);
  }
  uVar17 = (uint)local_38 & 0xff;
  do {
    iVar4 = *param_2;
    bVar2 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar2);
  *param_2 = iVar4 + 1;
  if (iVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x165080c);
    (*pcVar1)();
  }
  iVar4 = local_3c[4];
  if (iVar4 == local_3c[2]) {
    FUN_019ee178();
  }
  puVar5 = (undefined4 *)(piVar8[3] + iVar4 * 0xc);
  *puVar5 = param_2;
  puVar5[1] = iVar19;
  puVar5[2] = 0;
  iVar6 = iVar4 + 1;
  piVar8[4] = iVar6;
  if (iVar4 == -1) {
    iVar6 = piVar8[7];
  }
  DataMemoryBarrier(0xb);
  *(bool *)(piVar15 + 0x1b) = iVar4 == -1 && iVar6 == 0;
  DataMemoryBarrier(0xb);
  FUN_00a97e8c(piVar8,uVar17);
  DataMemoryBarrier(0xb);
  DataMemoryBarrier(0xb);
  if ((piVar15[0x11] + *piVar15 != (piVar15[8] & ~piVar15[0x12])) ||
     (DataMemoryBarrier(0xb), (piVar15[0x12] & piVar15[8]) != 0)) {
    piVar8 = param_2 + 3;
    if (*piVar8 == 0) {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(piVar8);
        if (bVar2) {
          *piVar8 = 1;
          goto LAB_016504f0;
        }
      } while (*piVar8 == 0);
    }
    ClearExclusiveLocal();
LAB_016504f0:
    DataMemoryBarrier(0xb);
  }
  puVar5 = (undefined4 *)param_1[2];
  piVar18 = param_2 + 3;
  puVar14 = (undefined1 *)puVar5[2];
  piVar8 = (int *)*puVar5;
  piVar9 = (int *)puVar5[1];
  while( true ) {
    DataMemoryBarrier(0xb);
    if (*piVar18 != 0) break;
    if (puVar14 == &DAT_3b9aca00) {
      FUN_019b0a28(param_2[2]);
    }
    else {
      FUN_019ac130(&local_40,1);
      bVar2 = (int)((int)local_3c - ((int)piVar9 + (uint)(local_40 < piVar8))) < 0 ==
              (SBORROW4((int)local_3c,(int)piVar9) !=
              SBORROW4((int)local_3c - (int)piVar9,(uint)(local_40 < piVar8)));
      if (local_40 == piVar8 && local_3c == piVar9) {
        bVar2 = puVar14 <= local_38;
      }
      if (bVar2) {
        iVar4 = *piVar18;
        if (iVar4 != 0) goto LAB_01650768;
        bVar2 = true;
        DataMemoryBarrier(0xb);
        goto LAB_01650750;
      }
      local_50 = local_40;
      local_4c = local_3c;
      puStack_48 = local_38;
      local_60 = piVar8;
      local_5c = piVar9;
      local_58 = puVar14;
      FUN_019ac248(&local_40,&local_60,&local_50);
      piVar16 = (int *)(param_2[2] + 0x18);
      do {
        iVar4 = *piVar16;
        bVar2 = (bool)hasExclusiveAccess(piVar16);
      } while (!bVar2);
      *piVar16 = iVar4 + -1;
      DataMemoryBarrier(0xb);
      if (iVar4 != 1) {
        puVar11 = local_38;
        uVar10 = local_34;
        uVar7 = local_30;
        if (((uint)local_40 & 1) != 0) {
          uVar7 = 0;
          uVar10 = 0;
          puVar11 = (undefined1 *)0x0;
        }
        FUN_019ae574(piVar16,uVar10,puVar11,uVar10,uVar7);
        do {
          bVar2 = (bool)hasExclusiveAccess(piVar16);
        } while (!bVar2);
        *piVar16 = 0;
        DataMemoryBarrier(0xb);
      }
    }
  }
  if (1 < *piVar18 - 1U) {
    return;
  }
  goto LAB_01650654;
  while (iVar4 = *piVar18, iVar4 == 0) {
LAB_01650750:
    bVar3 = (bool)hasExclusiveAccess(piVar18);
    if (bVar3) {
      *piVar18 = 1;
      goto LAB_01650770;
    }
  }
LAB_01650768:
  bVar2 = false;
  ClearExclusiveLocal();
LAB_01650770:
  DataMemoryBarrier(0xb);
  if ((!bVar2) && (1 < iVar4 - 1U)) {
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d06928);
    }
    return;
  }
LAB_01650654:
  FUN_01656cb0(&local_40,piVar15 + 0x13);
  if (local_40 == (int *)&DAT_00000001) {
    local_4c = (int *)CONCAT31(local_4c._1_3_,local_38._0_1_);
    local_50 = local_3c;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_50,&DAT_01d06988,&DAT_01d06958);
  }
  iVar13 = local_3c[4];
  iVar6 = local_3c[3];
  iVar4 = iVar13 * 0xc;
  iVar12 = -1;
  do {
    if (iVar4 == 0) {
      local_40 = (int *)0x0;
      goto LAB_016506d0;
    }
    piVar8 = (int *)(iVar6 + 4);
    iVar4 = iVar4 + -0xc;
    iVar12 = iVar12 + 1;
    iVar6 = iVar6 + 0xc;
  } while (*piVar8 != iVar19);
  FUN_012e8fb8(&local_40,local_3c + 2,iVar12,&DAT_01d06a88);
  iVar13 = local_3c[4];
LAB_016506d0:
  piVar8 = local_40;
  uVar17 = 0;
  if (iVar13 == 0) {
    uVar17 = local_3c[7];
  }
  DataMemoryBarrier(0xb);
  if (iVar13 == 0) {
    uVar17 = (uint)(uVar17 == 0);
  }
  *(char *)(piVar15 + 0x1b) = (char)uVar17;
  DataMemoryBarrier(0xb);
  FUN_00a97e8c(local_3c,(uint)local_38 & 0xff);
  if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d06938);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar19 = *piVar8;
    bVar2 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar2);
  *piVar8 = iVar19 + -1;
  if (iVar19 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019db128(piVar8);
    return;
  }
  return;
}

