// FUN_01280da8 @ 01280da8 size=1048 calls_out=13 calls_in=270
// strings: 

void FUN_01280da8(byte *param_1)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  uint extraout_r1_03;
  uint extraout_r1_04;
  uint extraout_r1_05;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  undefined8 uVar12;
  int local_90;
  int local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  int local_78;
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
  int iStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar12 = thunk_FUN_016de0ee(0x9e3779b9,0x1c4);
  uVar8 = (uint)((ulonglong)uVar12 >> 0x20);
  piVar3 = (int *)((int)uVar12 + uVar8);
  uVar6 = 0;
  uVar9 = (uint)*param_1;
LAB_01280e0c:
  while ((uVar9 & 1) == 0) {
    uVar8 = (uint)*param_1;
    if (uVar8 == uVar9) {
      bVar1 = (bool)hasExclusiveAccess(param_1);
      if (bVar1) {
        *param_1 = (byte)uVar9 | 1;
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
    if (bVar2) {
      return;
    }
LAB_01280e08:
    uVar9 = uVar8;
  }
  if ((uVar9 & 2) == 0) {
    if (9 < uVar6) {
      uVar8 = (uint)*param_1;
      if (uVar8 == uVar9) {
        bVar2 = (bool)hasExclusiveAccess(param_1);
        if (bVar2) {
          *param_1 = (byte)uVar9 | 2;
          goto LAB_01280e94;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      goto LAB_01280e08;
    }
    uVar5 = uVar6 + 1;
    if (uVar6 < 3) {
      uVar8 = 2;
      iVar11 = 2 << (uVar6 & 0xff);
      do {
        iVar11 = iVar11 + -1;
        HintYield();
      } while (iVar11 != 0);
    }
    else {
      FUN_016da3a8(uVar6,uVar8);
      uVar8 = extraout_r1_04;
    }
  }
  else {
LAB_01280e94:
    local_90 = 0;
    piVar7 = piVar3;
    if ((char)piVar3[0xd] != '\x01') {
      piVar7 = (int *)FUN_01280554(piVar3);
      if ((piVar7 == (int *)0x0) && (piVar7 = &local_8c, local_90 == 0)) {
        FUN_01283788(&local_58);
        FUN_0127d2e4(&local_90);
        local_90 = 1;
        local_8c = local_58;
        uStack_88 = uStack_54;
        uStack_84 = uStack_50;
        uStack_80 = uStack_4c;
        local_7c = local_48;
        local_78 = iStack_44;
        local_70 = iStack_3c;
        local_6c = local_38;
        uStack_68 = uStack_34;
        uStack_64 = uStack_30;
        uStack_60 = uStack_2c;
        uStack_5c = uStack_28;
      }
    }
LAB_01280ea8:
    DataMemoryBarrier(0xb);
    piVar4 = DAT_018dd950;
    if (DAT_018dd950 == (int *)0x0) {
      piVar4 = (int *)FUN_01283a38();
    }
    uVar8 = (uint)((int)param_1 * -0x61c88647) >> (-piVar4[2] & 0x1fU);
    if ((uint)piVar4[1] <= (uint)((int)param_1 * -0x61c88647) >> (-piVar4[2] & 0x1fU)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar8,piVar4[1],&DAT_0188b980);
    }
    iVar11 = *piVar4 + uVar8 * 0x40;
    puVar10 = (uint *)(iVar11 + 0x18);
    if (*puVar10 == 0) {
      bVar2 = (bool)hasExclusiveAccess(puVar10);
      if (!bVar2) goto LAB_01280f40;
      *puVar10 = 1;
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_01280f40:
      FUN_01286a10(puVar10);
    }
    if (DAT_018dd950 != piVar4) {
      DataMemoryBarrier(0xb);
      do {
        uVar8 = *puVar10;
        bVar2 = (bool)hasExclusiveAccess(puVar10);
      } while (!bVar2);
      *puVar10 = uVar8 - 1;
      if ((3 < uVar8) && ((uVar8 & 2) == 0)) {
        FUN_01286894(puVar10);
      }
      goto LAB_01280ea8;
    }
    if (*param_1 != 3) {
      DataMemoryBarrier(0xb);
      do {
        uVar6 = *puVar10;
        uVar8 = uVar6 - 1;
        bVar2 = (bool)hasExclusiveAccess(puVar10);
      } while (!bVar2);
      *puVar10 = uVar8;
      if ((3 < uVar6) && ((uVar6 & 2) == 0)) {
        FUN_01286894(puVar10);
        uVar8 = extraout_r1_05;
      }
      if (local_90 != 0) {
        do {
          uVar8 = DAT_018dd954 - 1;
          bVar2 = (bool)hasExclusiveAccess(0x18dd954);
        } while (!bVar2);
        DAT_018dd954 = uVar8;
        if (local_70 != 0) {
          thunk_FUN_016d3fb4(local_6c);
          uVar8 = extraout_r1_02;
        }
        if (local_78 != 3) {
          FUN_0128155c();
          uVar8 = extraout_r1_03;
        }
      }
      uVar6 = 0;
      uVar9 = (uint)*param_1;
      goto LAB_01280e0c;
    }
    piVar7[2] = 0;
    *(undefined1 *)(piVar7 + 0xc) = 0;
    piVar7[1] = (int)param_1;
    piVar7[4] = 0;
    *piVar7 = 1;
    if (*(int *)(iVar11 + 0x1c) == 0) {
      *(int **)(iVar11 + 0x1c) = piVar7;
    }
    else {
      *(int **)(*(int *)(iVar11 + 0x20) + 8) = piVar7;
    }
    *(int **)(iVar11 + 0x20) = piVar7;
    DataMemoryBarrier(0xb);
    do {
      uVar8 = *puVar10;
      bVar2 = (bool)hasExclusiveAccess(puVar10);
    } while (!bVar2);
    *puVar10 = uVar8 - 1;
    if ((3 < uVar8) && ((uVar8 & 2) == 0)) {
      FUN_01286894(puVar10);
    }
    iVar11 = *piVar7;
    DataMemoryBarrier(0xb);
    while (iVar11 != 0) {
      FUN_016d6968(0xf0,piVar7,0x80,1,0);
      iVar11 = *piVar7;
      DataMemoryBarrier(0xb);
    }
    FUN_012826f4(piVar7);
    iVar11 = piVar7[3];
    uVar8 = extraout_r1;
    if (local_90 != 0) {
      do {
        uVar8 = DAT_018dd954 - 1;
        bVar2 = (bool)hasExclusiveAccess(0x18dd954);
      } while (!bVar2);
      DAT_018dd954 = uVar8;
      if (local_70 != 0) {
        thunk_FUN_016d3fb4(local_6c);
        uVar8 = extraout_r1_00;
      }
      if (local_78 != 3) {
        FUN_0128155c();
        uVar8 = extraout_r1_01;
      }
    }
    uVar5 = 0;
    if (iVar11 == 1) {
      return;
    }
  }
  uVar9 = (uint)*param_1;
  uVar6 = uVar5;
  goto LAB_01280e0c;
}

