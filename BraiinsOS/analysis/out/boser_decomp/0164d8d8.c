// FUN_0164d8d8 @ 0164d8d8 size=916 calls_out=12 calls_in=8
// strings: 

void FUN_0164d8d8(uint *param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  bool bVar7;
  uint uVar8;
  byte bVar9;
  int extraout_r2;
  int *piVar10;
  uint *puVar11;
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
  
  iVar2 = thunk_FUN_01bee35a(0x9e3779b9,param_2,0x184);
  uVar8 = *param_1;
  piVar10 = (int *)(iVar2 + extraout_r2);
  uVar3 = 0;
LAB_0164d91c:
  if ((uVar8 & 0xc) == 0) {
    do {
      uVar5 = *param_1;
      if (uVar5 == uVar8) {
        bVar1 = (bool)hasExclusiveAccess(param_1);
        if (bVar1) {
          *param_1 = uVar8 | 8;
        }
        bVar7 = false;
        if (bVar1) {
          DataMemoryBarrier(0xb);
          bVar7 = true;
        }
      }
      else {
        bVar7 = false;
        ClearExclusiveLocal();
      }
      if (bVar7) goto LAB_0164dc4c;
      uVar8 = uVar5;
    } while ((uVar5 & 0xc) == 0);
  }
  else {
    uVar5 = uVar8;
  }
  if (((uVar5 & 3) != 0) || (9 < uVar3)) {
    if ((uVar5 & 1) == 0) goto code_r0x0164d98c;
    goto LAB_0164d9c0;
  }
  uVar5 = uVar3 + 1;
  if (uVar3 < 3) {
    iVar2 = 2 << (uVar3 & 0xff);
    do {
      iVar2 = iVar2 + -1;
      HintYield();
    } while (iVar2 != 0);
  }
  else {
    FUN_01bea67c();
  }
  goto LAB_0164dbd0;
code_r0x0164d98c:
  uVar8 = *param_1;
  if (uVar8 == uVar5) {
    bVar9 = hasExclusiveAccess(param_1);
    if ((bool)bVar9) {
      *param_1 = uVar5 | 1;
    }
  }
  else {
    bVar9 = 0;
    ClearExclusiveLocal();
  }
  if ((bool)(bVar9 & 1)) {
LAB_0164d9c0:
    local_90 = 0;
    piVar6 = piVar10;
    if ((char)piVar10[0xd] != '\x01') {
      piVar6 = (int *)FUN_01652ae4(piVar10);
      if ((piVar6 == (int *)0x0) && (piVar6 = &local_8c, local_90 == 0)) {
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
LAB_0164d9d8:
    DataMemoryBarrier(0xb);
    piVar4 = DAT_01d519e4;
    if (DAT_01d519e4 == (int *)0x0) {
      piVar4 = (int *)FUN_016518b8();
    }
    uVar3 = (uint)((int)param_1 * -0x61c88647) >> (-piVar4[2] & 0x1fU);
    if ((uint)piVar4[1] <= (uint)((int)param_1 * -0x61c88647) >> (-piVar4[2] & 0x1fU)) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar3,piVar4[1],&DAT_01d068e8);
    }
    iVar2 = *piVar4 + uVar3 * 0x40;
    puVar11 = (uint *)(iVar2 + 0x18);
    if (*puVar11 == 0) {
      bVar7 = (bool)hasExclusiveAccess(puVar11);
      if (!bVar7) goto LAB_0164da74;
      *puVar11 = 1;
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_0164da74:
      FUN_01652ed8(puVar11);
    }
    if (DAT_01d519e4 != piVar4) {
      DataMemoryBarrier(0xb);
      do {
        uVar3 = *puVar11;
        bVar7 = (bool)hasExclusiveAccess(puVar11);
      } while (!bVar7);
      *puVar11 = uVar3 - 1;
      if ((3 < uVar3) && ((uVar3 & 2) == 0)) {
        FUN_01652d70(puVar11);
      }
      goto LAB_0164d9d8;
    }
    if ((*param_1 & 1) == 0 || (*param_1 & 0xc) == 0) {
      DataMemoryBarrier(0xb);
      do {
        uVar3 = *puVar11;
        bVar7 = (bool)hasExclusiveAccess(puVar11);
      } while (!bVar7);
      *puVar11 = uVar3 - 1;
      if ((3 < uVar3) && ((uVar3 & 2) == 0)) {
        FUN_01652d70(puVar11);
      }
      FUN_0164cc04(&local_90);
      uVar5 = 0;
    }
    else {
      piVar6[2] = 0;
      *(undefined1 *)(piVar6 + 0xc) = 0;
      piVar6[1] = (int)param_1;
      piVar6[4] = 8;
      *piVar6 = 1;
      if (*(int *)(iVar2 + 0x1c) == 0) {
        *(int **)(iVar2 + 0x1c) = piVar6;
      }
      else {
        *(int **)(*(int *)(iVar2 + 0x20) + 8) = piVar6;
      }
      *(int **)(iVar2 + 0x20) = piVar6;
      DataMemoryBarrier(0xb);
      do {
        uVar3 = *puVar11;
        bVar7 = (bool)hasExclusiveAccess(puVar11);
      } while (!bVar7);
      *puVar11 = uVar3 - 1;
      if ((3 < uVar3) && ((uVar3 & 2) == 0)) {
        FUN_01652d70(puVar11);
      }
      while (DataMemoryBarrier(0xb), *piVar6 != 0) {
        FUN_01be6c3c(0xf0,piVar6,0x80,1,0);
      }
      FUN_01650ba0(piVar6);
      iVar2 = piVar6[3];
      FUN_0164cc04(&local_90);
      uVar5 = 0;
      if (iVar2 == 1) {
LAB_0164dc4c:
        FUN_0164c85c(param_1);
        return;
      }
    }
LAB_0164dbd0:
    uVar8 = *param_1;
    uVar3 = uVar5;
  }
  goto LAB_0164d91c;
}

