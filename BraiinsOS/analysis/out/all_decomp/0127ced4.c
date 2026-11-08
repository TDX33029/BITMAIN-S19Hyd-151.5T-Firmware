// FUN_0127ced4 @ 0127ced4 size=944 calls_out=13 calls_in=2
// strings: 

void FUN_0127ced4(uint *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int extraout_r2;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  undefined8 uVar11;
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
  
  DataMemoryBarrier(0xb);
  if (*param_1 < 0x10) {
    return;
  }
  uVar10 = ((uint)param_1 | 1) * -0x61c88647;
  uVar11 = thunk_FUN_016de0ee(0x9e3779b9,*param_1,0x1c4);
  piVar2 = (int *)((int)uVar11 + extraout_r2);
  uVar8 = 0;
  uVar5 = (uint)((ulonglong)uVar11 >> 0x20);
  do {
    while (uVar8 < 10) {
      if (uVar8 < 3) {
        iVar3 = 2 << (uVar8 & 0xff);
        do {
          iVar3 = iVar3 + -1;
          HintYield();
        } while (iVar3 != 0);
      }
      else {
        FUN_016da3a8();
      }
      uVar8 = uVar8 + 1;
LAB_0127cf4c:
      DataMemoryBarrier(0xb);
      uVar5 = *param_1;
      if (*param_1 < 0x10) {
        return;
      }
    }
    if ((uVar5 & 2) != 0) {
LAB_0127cfe0:
      local_90 = 0;
      piVar7 = piVar2;
      if ((((char)piVar2[0xd] != '\x01') &&
          (piVar7 = (int *)FUN_01280554(piVar2), piVar7 == (int *)0x0)) &&
         (piVar7 = &local_8c, local_90 == 0)) {
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
LAB_0127cff4:
      DataMemoryBarrier(0xb);
      piVar6 = DAT_018dd950;
      if (DAT_018dd950 == (int *)0x0) {
        piVar6 = (int *)FUN_01283a38();
      }
      uVar5 = uVar10 >> (-piVar6[2] & 0x1fU);
      if ((uint)piVar6[1] <= uVar10 >> (-piVar6[2] & 0x1fU)) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar5,piVar6[1],&DAT_0188b980);
      }
      iVar3 = *piVar6 + uVar5 * 0x40;
      puVar9 = (uint *)(iVar3 + 0x18);
      if (*puVar9 == 0) {
        bVar1 = (bool)hasExclusiveAccess(puVar9);
        if (!bVar1) goto LAB_0127d08c;
        *puVar9 = 1;
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_0127d08c:
        FUN_01286a10(puVar9);
      }
      if (DAT_018dd950 != piVar6) {
        DataMemoryBarrier(0xb);
        do {
          uVar5 = *puVar9;
          bVar1 = (bool)hasExclusiveAccess(puVar9);
        } while (!bVar1);
        *puVar9 = uVar5 - 1;
        if ((3 < uVar5) && ((uVar5 & 2) == 0)) {
          FUN_01286894(puVar9);
        }
        goto LAB_0127cff4;
      }
      if ((*param_1 < 0x10) || ((*param_1 & 2) == 0)) {
        DataMemoryBarrier(0xb);
        do {
          uVar5 = *puVar9;
          bVar1 = (bool)hasExclusiveAccess(puVar9);
        } while (!bVar1);
        *puVar9 = uVar5 - 1;
        iVar3 = DAT_018dd954;
        if ((3 < uVar5) && ((uVar5 & 2) == 0)) {
          FUN_01286894(puVar9);
          iVar3 = DAT_018dd954;
        }
      }
      else {
        piVar7[2] = 0;
        *(undefined1 *)(piVar7 + 0xc) = 0;
        piVar7[1] = (uint)param_1 | 1;
        piVar7[4] = 8;
        *piVar7 = 1;
        if (*(int *)(iVar3 + 0x1c) == 0) {
          *(int **)(iVar3 + 0x1c) = piVar7;
        }
        else {
          *(int **)(*(int *)(iVar3 + 0x20) + 8) = piVar7;
        }
        *(int **)(iVar3 + 0x20) = piVar7;
        DataMemoryBarrier(0xb);
        do {
          uVar5 = *puVar9;
          bVar1 = (bool)hasExclusiveAccess(puVar9);
        } while (!bVar1);
        *puVar9 = uVar5 - 1;
        if ((3 < uVar5) && ((uVar5 & 2) == 0)) {
          FUN_01286894(puVar9);
        }
        iVar3 = *piVar7;
        DataMemoryBarrier(0xb);
        while (iVar3 != 0) {
          FUN_016d6968(0xf0,piVar7,0x80,1,0);
          iVar3 = *piVar7;
          DataMemoryBarrier(0xb);
        }
        FUN_012826f4(piVar7);
        iVar3 = DAT_018dd954;
      }
      DAT_018dd954 = iVar3;
      if (local_90 != 0) {
        do {
          DAT_018dd954 = iVar3 + -1;
          bVar1 = (bool)hasExclusiveAccess(0x18dd954);
        } while (!bVar1);
        if (local_70 != 0) {
          thunk_FUN_016d3fb4(local_6c);
        }
        if (local_78 != 3) {
          FUN_0128155c(local_78,local_74);
        }
      }
      goto LAB_0127cf4c;
    }
    uVar4 = *param_1;
    if (uVar4 == uVar5) {
      bVar1 = (bool)hasExclusiveAccess(param_1);
      if (bVar1) {
        *param_1 = uVar5 | 2;
      }
      DataMemoryBarrier(0xb);
      if (bVar1) goto LAB_0127cfe0;
    }
    else {
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
    }
    uVar5 = uVar4;
    if (uVar4 < 0x10) {
      return;
    }
  } while( true );
}

