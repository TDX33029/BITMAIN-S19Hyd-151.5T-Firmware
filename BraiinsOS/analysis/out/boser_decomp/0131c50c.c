// FUN_0131c50c @ 0131c50c size=852 calls_out=11 calls_in=2
// strings: 

void FUN_0131c50c(uint *param_1)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  int *piVar10;
  uint *puVar11;
  int iVar12;
  undefined8 uVar13;
  int local_90;
  int local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar13 = thunk_FUN_01bee35a(0x9e3779b9,0x184);
  piVar10 = (int *)((int)uVar13 + (int)((ulonglong)uVar13 >> 0x20));
  uVar9 = 0xfffffffc;
LAB_0131c548:
  uVar3 = 0;
  do {
    uVar6 = *param_1;
LAB_0131c550:
    while (uVar6 < 4) {
      uVar7 = *param_1;
      if (uVar7 == uVar6) {
        bVar1 = (bool)hasExclusiveAccess(param_1);
        if (bVar1) {
          *param_1 = uVar9 | uVar6;
        }
        bVar2 = false;
        if (bVar1) {
          DataMemoryBarrier(0xb);
          bVar2 = true;
        }
      }
      else {
        bVar2 = false;
        ClearExclusiveLocal();
      }
      uVar6 = uVar7;
      if (bVar2) {
        return;
      }
    }
    if ((uVar6 & 2) != 0) goto LAB_0131c61c;
    if (9 < uVar3) break;
    if (uVar3 < 3) {
      iVar12 = 2 << (uVar3 & 0xff);
      do {
        iVar12 = iVar12 + -1;
        HintYield();
      } while (iVar12 != 0);
    }
    else {
      FUN_01bea67c();
    }
    uVar3 = uVar3 + 1;
  } while( true );
  uVar7 = *param_1;
  if (uVar7 == uVar6) {
    bVar8 = hasExclusiveAccess(param_1);
    if ((bool)bVar8) {
      *param_1 = uVar6 | 2;
    }
  }
  else {
    bVar8 = 0;
    ClearExclusiveLocal();
  }
  uVar6 = uVar7;
  if ((bool)(bVar8 & 1)) {
LAB_0131c61c:
    local_90 = 0;
    piVar5 = piVar10;
    if ((char)piVar10[0xd] != '\x01') {
      piVar5 = (int *)FUN_01652ae4(piVar10);
      if ((piVar5 == (int *)0x0) && (piVar5 = &local_8c, local_90 == 0)) {
        FUN_01651608(&local_58);
        FUN_0164cc04(&local_90);
        local_90 = 1;
        local_8c = local_58;
        uStack_88 = uStack_54;
        uStack_84 = uStack_50;
        uStack_80 = uStack_4c;
        local_7c = local_48;
        uStack_78 = uStack_44;
        uStack_74 = uStack_40;
        uStack_70 = uStack_3c;
        local_6c = local_38;
        uStack_68 = uStack_34;
        uStack_64 = uStack_30;
        uStack_60 = uStack_2c;
        uStack_5c = uStack_28;
      }
    }
    goto LAB_0131c638;
  }
  goto LAB_0131c550;
LAB_0131c638:
  DataMemoryBarrier(0xb);
  piVar4 = DAT_01d519e4;
  if (DAT_01d519e4 == (int *)0x0) {
    piVar4 = (int *)FUN_016518b8();
  }
  uVar9 = (uint)((int)param_1 * -0x61c88647) >> (-piVar4[2] & 0x1fU);
  if ((uint)piVar4[1] <= (uint)((int)param_1 * -0x61c88647) >> (-piVar4[2] & 0x1fU)) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar9,piVar4[1],&DAT_01d068e8);
  }
  iVar12 = *piVar4 + uVar9 * 0x40;
  puVar11 = (uint *)(iVar12 + 0x18);
  if (*puVar11 == 0) {
    bVar2 = (bool)hasExclusiveAccess(puVar11);
    if (!bVar2) goto LAB_0131c6d4;
    *puVar11 = 1;
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0131c6d4:
    FUN_01652ed8(puVar11);
  }
  if (DAT_01d519e4 != piVar4) {
    DataMemoryBarrier(0xb);
    do {
      uVar9 = *puVar11;
      bVar2 = (bool)hasExclusiveAccess(puVar11);
    } while (!bVar2);
    *puVar11 = uVar9 - 1;
    if ((3 < uVar9) && ((uVar9 & 2) == 0)) {
      FUN_01652d70(puVar11);
    }
    goto LAB_0131c638;
  }
  if ((*param_1 < 4) || ((*param_1 & 2) == 0)) {
    DataMemoryBarrier(0xb);
    do {
      uVar9 = *puVar11;
      bVar2 = (bool)hasExclusiveAccess(puVar11);
    } while (!bVar2);
    *puVar11 = uVar9 - 1;
    if ((3 < uVar9) && ((uVar9 & 2) == 0)) {
      FUN_01652d70(puVar11);
    }
  }
  else {
    piVar5[2] = 0;
    *(undefined1 *)(piVar5 + 0xc) = 0;
    piVar5[1] = (int)param_1;
    piVar5[4] = 0;
    *piVar5 = 1;
    if (*(int *)(iVar12 + 0x1c) == 0) {
      *(int **)(iVar12 + 0x1c) = piVar5;
    }
    else {
      *(int **)(*(int *)(iVar12 + 0x20) + 8) = piVar5;
    }
    *(int **)(iVar12 + 0x20) = piVar5;
    DataMemoryBarrier(0xb);
    do {
      uVar9 = *puVar11;
      bVar2 = (bool)hasExclusiveAccess(puVar11);
    } while (!bVar2);
    *puVar11 = uVar9 - 1;
    if ((3 < uVar9) && ((uVar9 & 2) == 0)) {
      FUN_01652d70(puVar11);
    }
    while (DataMemoryBarrier(0xb), *piVar5 != 0) {
      FUN_01be6c3c(0xf0,piVar5,0x80,1,0);
    }
    FUN_01650ba0(piVar5);
  }
  FUN_0164cc04(&local_90);
  uVar9 = 0xfffffffe;
  goto LAB_0131c548;
}

