// FUN_012e2d68 @ 012e2d68 size=720 calls_out=9 calls_in=2
// strings: internal error: entered unreachable code

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_012e2d68(undefined4 *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  undefined1 *puVar12;
  int *piVar13;
  undefined4 uVar14;
  int *local_60;
  uint uStack_5c;
  undefined1 *puStack_58;
  int *local_50;
  uint local_4c;
  undefined1 *local_48;
  int *local_40;
  uint local_3c;
  undefined1 *local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  
  uVar6 = *param_1;
  piVar10 = (int *)param_1[1];
  FUN_012e2adc(piVar10 + 0x13,uVar6,param_2);
  DataMemoryBarrier(0xb);
  DataMemoryBarrier(0xb);
  if ((piVar10[0x11] + *piVar10 != (piVar10[8] & ~piVar10[0x12])) ||
     (DataMemoryBarrier(0xb), (piVar10[0x12] & piVar10[8]) != 0)) {
    piVar3 = (int *)(param_2 + 0xc);
    if (*piVar3 == 0) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar3);
        if (bVar1) {
          *piVar3 = 1;
          goto LAB_012e2df8;
        }
      } while (*piVar3 == 0);
    }
    ClearExclusiveLocal();
LAB_012e2df8:
    DataMemoryBarrier(0xb);
  }
  puVar4 = (uint *)param_1[2];
  piVar13 = (int *)(param_2 + 0xc);
  puVar12 = (undefined1 *)puVar4[2];
  piVar3 = (int *)*puVar4;
  uVar7 = puVar4[1];
  while( true ) {
    DataMemoryBarrier(0xb);
    if (*piVar13 != 0) break;
    if (puVar12 == &DAT_3b9aca00) {
      FUN_019b0a28(*(undefined4 *)(param_2 + 8));
    }
    else {
      FUN_019ac130(&local_40,1);
      bVar1 = (int)(local_3c - (uVar7 + (local_40 < piVar3))) < 0 ==
              (SBORROW4(local_3c,uVar7) != SBORROW4(local_3c - uVar7,(uint)(local_40 < piVar3)));
      if (local_40 == piVar3 && local_3c == uVar7) {
        bVar1 = puVar12 <= local_38;
      }
      if (bVar1) {
        iVar9 = *piVar13;
        if (iVar9 != 0) goto LAB_012e2fe4;
        bVar1 = true;
        DataMemoryBarrier(0xb);
        goto LAB_012e2fcc;
      }
      local_4c = local_3c;
      local_50 = local_40;
      local_48 = local_38;
      local_60 = piVar3;
      uStack_5c = uVar7;
      puStack_58 = puVar12;
      FUN_019ac248(&local_40,&local_60,&local_50);
      piVar11 = (int *)(*(int *)(param_2 + 8) + 0x18);
      do {
        iVar9 = *piVar11;
        bVar1 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar1);
      *piVar11 = iVar9 + -1;
      DataMemoryBarrier(0xb);
      if (iVar9 != 1) {
        puVar8 = local_38;
        uVar14 = uStack_34;
        uVar5 = local_30;
        if (((uint)local_40 & 1) != 0) {
          uVar5 = 0;
          uVar14 = 0;
          puVar8 = (undefined1 *)0x0;
        }
        FUN_019ae574(piVar11,param_2,puVar8,uVar14,uVar5);
        do {
          bVar1 = (bool)hasExclusiveAccess(piVar11);
        } while (!bVar1);
        *piVar11 = 0;
        DataMemoryBarrier(0xb);
      }
    }
  }
  if (1 < *piVar13 - 1U) {
    return;
  }
  goto LAB_012e2f70;
  while (iVar9 = *piVar13, iVar9 == 0) {
LAB_012e2fcc:
    bVar2 = (bool)hasExclusiveAccess(piVar13);
    if (bVar2) {
      *piVar13 = 1;
      goto LAB_012e2fec;
    }
  }
LAB_012e2fe4:
  bVar1 = false;
  ClearExclusiveLocal();
LAB_012e2fec:
  DataMemoryBarrier(0xb);
  if ((!bVar1) && (1 < iVar9 - 1U)) {
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d06928);
    }
    return;
  }
LAB_012e2f70:
  FUN_012e2c2c(&local_40,piVar10 + 0x13,uVar6);
  if (local_40 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d06938);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar9 = *local_40;
    bVar1 = (bool)hasExclusiveAccess(local_40);
  } while (!bVar1);
  *local_40 = iVar9 + -1;
  if (iVar9 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019db128();
    return;
  }
  return;
}

