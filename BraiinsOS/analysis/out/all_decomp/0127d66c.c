// FUN_0127d66c @ 0127d66c size=1144 calls_out=14 calls_in=72
// strings: RwLock reader count overflow

void FUN_0127d66c(uint *param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int extraout_r2;
  uint uVar8;
  int *piVar9;
  uint *puVar10;
  int local_90;
  int local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  int local_78;
  undefined4 local_74;
  int local_70;
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
  int iStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar2 = thunk_FUN_016de0ee(0x9e3779b9,param_2,0x1c4);
  uVar6 = *param_1;
  piVar9 = (int *)(iVar2 + extraout_r2);
  uVar3 = 0;
LAB_0127d6c4:
  while ((uVar6 & 8) != 0) {
    uVar8 = uVar6;
    if ((uVar6 & 3) == 0) goto LAB_0127d740;
LAB_0127d748:
    if ((uVar8 & 1) != 0) goto LAB_0127d778;
    uVar6 = *param_1;
    if (uVar6 == uVar8) goto code_r0x0127d75c;
    ClearExclusiveLocal();
  }
  uVar8 = 0;
  do {
    if (0xffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("RwLock reader count overflow",0x1c,&DAT_0188b8b0);
    }
    if (*param_1 == uVar6) {
      bVar1 = (bool)hasExclusiveAccess(param_1);
      if (bVar1) {
        *param_1 = uVar6 + 0x10;
        DataMemoryBarrier(0xb);
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (8 < uVar8) {
      uVar8 = 9;
    }
    iVar2 = 2 << (uVar8 & 0xff);
    do {
      iVar2 = iVar2 + -1;
      HintYield();
    } while (iVar2 != 0);
    uVar6 = *param_1;
    uVar8 = uVar8 + 1;
  } while ((uVar6 & 8) == 0);
  uVar8 = uVar6;
  if ((uVar6 & 3) != 0) goto LAB_0127d748;
LAB_0127d740:
  uVar8 = uVar6;
  if (9 < uVar3) goto LAB_0127d748;
  uVar8 = uVar3 + 1;
  if (uVar3 < 3) {
    iVar2 = 2 << (uVar3 & 0xff);
    do {
      iVar2 = iVar2 + -1;
      HintYield();
    } while (iVar2 != 0);
  }
  else {
    FUN_016da3a8();
  }
  goto LAB_0127da18;
code_r0x0127d75c:
  bVar1 = (bool)hasExclusiveAccess(param_1);
  if (bVar1) {
    *param_1 = uVar8 | 1;
LAB_0127d778:
    local_90 = 0;
    piVar5 = piVar9;
    if ((char)piVar9[0xd] != '\x01') {
      piVar5 = (int *)FUN_01280554(piVar9);
      if ((piVar5 == (int *)0x0) && (piVar5 = &local_8c, local_90 == 0)) {
        FUN_01283788(&local_58);
        FUN_0127d2e4(&local_90);
        local_90 = 1;
        local_8c = local_58;
        uStack_88 = uStack_54;
        uStack_84 = uStack_50;
        uStack_80 = uStack_4c;
        local_7c = local_48;
        local_78 = iStack_44;
        local_74 = uStack_40;
        local_70 = iStack_3c;
        local_6c = local_38;
        uStack_68 = uStack_34;
        uStack_64 = uStack_30;
        uStack_60 = uStack_2c;
        uStack_5c = uStack_28;
      }
    }
LAB_0127d790:
    DataMemoryBarrier(0xb);
    piVar4 = DAT_018dd950;
    if (DAT_018dd950 == (int *)0x0) {
      piVar4 = (int *)FUN_01283a38();
    }
    uVar3 = (uint)((int)param_1 * -0x61c88647) >> (-piVar4[2] & 0x1fU);
    if ((uint)piVar4[1] <= (uint)((int)param_1 * -0x61c88647) >> (-piVar4[2] & 0x1fU)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar3,piVar4[1],&DAT_0188b980);
    }
    iVar2 = *piVar4 + uVar3 * 0x40;
    puVar10 = (uint *)(iVar2 + 0x18);
    if (*puVar10 == 0) {
      bVar1 = (bool)hasExclusiveAccess(puVar10);
      if (!bVar1) goto LAB_0127d82c;
      *puVar10 = 1;
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_0127d82c:
      FUN_01286a10(puVar10);
    }
    if (DAT_018dd950 != piVar4) {
      DataMemoryBarrier(0xb);
      do {
        uVar3 = *puVar10;
        bVar1 = (bool)hasExclusiveAccess(puVar10);
      } while (!bVar1);
      *puVar10 = uVar3 - 1;
      if ((3 < uVar3) && ((uVar3 & 2) == 0)) {
        FUN_01286894(puVar10);
      }
      goto LAB_0127d790;
    }
    if ((~*param_1 & 9) == 0) {
      piVar5[2] = 0;
      *(undefined1 *)(piVar5 + 0xc) = 0;
      piVar5[1] = (int)param_1;
      piVar5[4] = 0x10;
      *piVar5 = 1;
      if (*(int *)(iVar2 + 0x1c) == 0) {
        *(int **)(iVar2 + 0x1c) = piVar5;
      }
      else {
        *(int **)(*(int *)(iVar2 + 0x20) + 8) = piVar5;
      }
      *(int **)(iVar2 + 0x20) = piVar5;
      DataMemoryBarrier(0xb);
      do {
        uVar3 = *puVar10;
        bVar1 = (bool)hasExclusiveAccess(puVar10);
      } while (!bVar1);
      *puVar10 = uVar3 - 1;
      if ((3 < uVar3) && ((uVar3 & 2) == 0)) {
        FUN_01286894(puVar10);
      }
      while (DataMemoryBarrier(0xb), *piVar5 != 0) {
        FUN_016d6968(0xf0,piVar5,0x80,1,0);
      }
      FUN_012826f4(piVar5);
      iVar2 = piVar5[3];
      if (local_90 != 0) {
        do {
          iVar7 = DAT_018dd954 + -1;
          bVar1 = (bool)hasExclusiveAccess(0x18dd954);
        } while (!bVar1);
        DAT_018dd954 = iVar7;
        if (local_70 != 0) {
          thunk_FUN_016d3fb4(local_6c);
        }
        if (local_78 != 3) {
          FUN_0128155c(local_78,local_74);
        }
      }
      uVar8 = 0;
      if (iVar2 == 1) {
        return;
      }
LAB_0127da18:
      uVar6 = *param_1;
      uVar3 = uVar8;
    }
    else {
      DataMemoryBarrier(0xb);
      do {
        uVar3 = *puVar10;
        bVar1 = (bool)hasExclusiveAccess(puVar10);
      } while (!bVar1);
      *puVar10 = uVar3 - 1;
      iVar2 = DAT_018dd954;
      if ((3 < uVar3) && ((uVar3 & 2) == 0)) {
        FUN_01286894(puVar10);
        iVar2 = DAT_018dd954;
      }
      DAT_018dd954 = iVar2;
      if (local_90 != 0) {
        do {
          DAT_018dd954 = iVar2 + -1;
          bVar1 = (bool)hasExclusiveAccess(0x18dd954);
        } while (!bVar1);
        if (local_70 != 0) {
          thunk_FUN_016d3fb4(local_6c);
        }
        if (local_78 != 3) {
          FUN_0128155c(local_78,local_74);
        }
      }
      uVar3 = 0;
      uVar6 = *param_1;
    }
  }
  goto LAB_0127d6c4;
}

