// FUN_01450ea0 @ 01450ea0 size=848 calls_out=4 calls_in=2
// strings: 

undefined8 FUN_01450ea0(int param_1,uint param_2,uint param_3,uint *param_4,uint param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint extraout_r2;
  uint uVar6;
  uint extraout_r2_00;
  uint *puVar7;
  uint *extraout_r3;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  ushort *puVar11;
  uint uVar12;
  ushort *puVar13;
  ushort *puVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  
  uVar12 = (param_2 & 0xffff) >> 0xd;
  uVar2 = uVar12 + 2;
  iVar8 = 0;
  puVar11 = (ushort *)&DAT_00000001;
  uVar15 = 0xfffd;
  if ((!CARRY4(param_3,uVar2)) && (param_3 + uVar2 <= param_5)) {
    iVar8 = uVar12 + 1;
    param_4 = (uint *)((int)param_4 + param_3 * 2);
    uVar15 = (uint)(ushort)*param_4;
    puVar11 = (ushort *)((int)param_4 + 2);
    param_3 = uVar15 ^ 0xffefd800;
    if (param_3 < 0xffef0800) {
      uVar15 = 0xfffd;
    }
  }
  if ((param_2 & 0x1000) == 0) {
    iVar8 = iVar8 << 1;
    iVar17 = 0;
    puVar1 = (uint *)(param_1 + 4);
    iVar10 = 1;
    while (iVar8 != 0) {
      puVar9 = *(undefined4 **)(param_1 + 0x60);
      uVar12 = (uint)*puVar11;
      if ((uVar12 ^ 0xffefd800) < 0xffef0800) {
        uVar12 = 0xfffd;
      }
      if ((*(char *)(puVar9 + 0xb) == '\x01') && (uVar12 >> 0xc != 0)) {
        if (uVar12 < (uint)puVar9[7]) {
          uVar2 = FUN_01449040(puVar9,uVar12);
          param_3 = extraout_r2;
          param_4 = extraout_r3;
        }
        else {
          uVar2 = puVar9[5] - 2;
        }
      }
      else if (uVar12 >> 6 < (uint)puVar9[2]) {
        uVar2 = (uVar12 & 0x3f) + (uint)*(ushort *)(puVar9[1] + (uVar12 >> 6) * 2);
      }
      else {
        uVar2 = puVar9[5] - 1;
      }
      uVar3 = puVar9[5];
      if (uVar2 < uVar3) {
        param_3 = puVar9[4];
      }
      if (uVar2 < uVar3) {
        param_4 = *(uint **)(param_3 + uVar2 * 4);
      }
      uVar6 = *(uint *)(param_1 + 0x48);
      puVar5 = (uint *)*puVar9;
      if (uVar2 < uVar3) {
        puVar5 = param_4;
      }
      if (((uint)puVar5 & 0xffffff00) == 0xd800) {
        uVar12 = uVar12 | (int)puVar5 << 0x18;
      }
      if (uVar6 < 0x12) {
        param_3 = 0x11;
        uVar2 = uVar6;
        puVar4 = puVar1;
        param_4 = (uint *)(param_1 + 0x48);
      }
      else {
        uVar2 = *(uint *)(param_1 + 4);
        puVar4 = *(uint **)(param_1 + 8);
        param_3 = uVar6;
        param_4 = puVar1;
      }
      if (uVar2 == param_3) {
        FUN_01448a38(param_1);
        uVar2 = *(uint *)(param_1 + 4);
        puVar4 = *(uint **)(param_1 + 8);
        param_3 = extraout_r2_00;
        param_4 = puVar1;
      }
      puVar4[uVar2] = uVar12;
      iVar8 = iVar8 + -2;
      *param_4 = *param_4 + 1;
      iVar16 = iVar10;
      if (((uint)puVar5 & 0xffffff00) == 0xd800) {
        iVar16 = iVar17;
      }
      if (puVar5 != (uint *)0x2) {
        iVar17 = iVar16;
      }
      puVar11 = puVar11 + 1;
      iVar10 = iVar10 + 1;
    }
  }
  else {
    FUN_014489c8(param_1,iVar8);
    FUN_01ab1588();
    puVar1 = (uint *)(param_1 + 0x48);
    uVar12 = *puVar1;
    if (uVar12 < 0x12) {
      iVar17 = param_1 + 4;
      uVar3 = 0x11;
      uVar2 = uVar12;
      puVar5 = puVar1;
    }
    else {
      iVar17 = *(int *)(param_1 + 8);
      uVar2 = *(uint *)(param_1 + 4);
      uVar3 = uVar12;
      puVar5 = (uint *)(param_1 + 4);
    }
    if (uVar2 < uVar3) {
      iVar10 = iVar8 << 1;
      puVar13 = puVar11;
      do {
        if (iVar10 == 0) {
          *puVar5 = uVar2;
          goto LAB_014511dc;
        }
        puVar14 = puVar13 + 1;
        iVar10 = iVar10 + -2;
        uVar12 = 0xff00fffd;
        if (0xffef07ff < (*puVar13 ^ 0xffefd800)) {
          uVar12 = *puVar13 | 0xff000000;
        }
        *(uint *)(iVar17 + uVar2 * 4) = uVar12;
        uVar2 = uVar2 + 1;
        puVar13 = puVar14;
      } while (uVar3 != uVar2);
      uVar2 = uVar3;
    }
    else {
      puVar14 = puVar11;
    }
    puVar4 = (uint *)(param_1 + 4);
    *puVar5 = uVar2;
    while (puVar14 != puVar11 + iVar8) {
      uVar12 = *puVar1;
      uVar2 = 0xff00fffd;
      if (0xffef07ff < (*puVar14 ^ 0xffefd800)) {
        uVar2 = *puVar14 | 0xff000000;
      }
      if (uVar12 < 0x12) {
        uVar3 = 0x11;
        puVar5 = puVar4;
        puVar7 = puVar1;
      }
      else {
        puVar5 = *(uint **)(param_1 + 8);
        puVar7 = puVar4;
        uVar3 = uVar12;
        uVar12 = *(uint *)(param_1 + 4);
      }
      if (uVar12 == uVar3) {
        FUN_01448a38();
        uVar12 = *(uint *)(param_1 + 4);
        puVar5 = *(uint **)(param_1 + 8);
        puVar7 = puVar4;
      }
      puVar5[uVar12] = uVar2;
      *puVar7 = *puVar7 + 1;
      puVar14 = puVar14 + 1;
    }
LAB_014511dc:
    iVar17 = 0;
  }
  return CONCAT44(iVar17,uVar15);
}

