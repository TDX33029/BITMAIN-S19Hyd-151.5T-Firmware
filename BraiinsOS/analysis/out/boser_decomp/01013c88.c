// FUN_01013c88 @ 01013c88 size=788 calls_out=2 calls_in=2
// strings: 

void FUN_01013c88(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar15 = FUN_019b00d0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  uVar3 = (uint)((ulonglong)uVar15 >> 0x20);
  uVar16 = FUN_019b00d0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  uVar4 = (uint)((ulonglong)uVar16 >> 0x20);
  iVar2 = (int)uVar16;
  if ((int)uVar15 == 0) {
    uVar1 = (uint)(iVar2 != 0);
  }
  else if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar4;
    if (uVar3 < uVar4) {
      uVar1 = uVar3;
    }
    uVar1 = FUN_01bed842((int)uVar15,iVar2,uVar1);
    if (uVar1 == 0) {
      uVar1 = uVar3 - uVar4;
    }
    uVar1 = uVar1 >> 0x1f;
  }
  uVar15 = FUN_019b00d0(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
  uVar3 = (uint)((ulonglong)uVar15 >> 0x20);
  uVar16 = FUN_019b00d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  uVar4 = (uint)((ulonglong)uVar16 >> 0x20);
  iVar2 = (int)uVar16;
  if ((int)uVar15 == 0) {
    puVar14 = (undefined4 *)(param_1 + (uVar1 | uVar1 << 1) * 4);
    puVar10 = (undefined4 *)(param_1 + (uVar1 ^ 1 | (uVar1 ^ 1) << 1) * 4);
    if (iVar2 == 0) goto LAB_01013dac;
LAB_01013d8c:
    iVar2 = 2;
    iVar5 = 0x24;
  }
  else {
    if (iVar2 == 0) {
      puVar14 = (undefined4 *)(param_1 + (uVar1 | uVar1 << 1) * 4);
      puVar10 = (undefined4 *)(param_1 + (uVar1 ^ 1 | (uVar1 ^ 1) << 1) * 4);
    }
    else {
      uVar6 = uVar4;
      if (uVar3 < uVar4) {
        uVar6 = uVar3;
      }
      iVar2 = FUN_01bed842((int)uVar15,iVar2,uVar6);
      if (iVar2 == 0) {
        iVar2 = uVar3 - uVar4;
      }
      puVar14 = (undefined4 *)(param_1 + (uVar1 | uVar1 << 1) * 4);
      puVar10 = (undefined4 *)(param_1 + (uVar1 ^ 1 | (uVar1 ^ 1) << 1) * 4);
      if (iVar2 < 0) goto LAB_01013d8c;
    }
LAB_01013dac:
    iVar2 = 3;
    iVar5 = 0x18;
  }
  puVar12 = (undefined4 *)(param_1 + iVar5);
  uVar15 = FUN_019b00d0(puVar14[1],puVar14[2]);
  uVar3 = (uint)((ulonglong)uVar15 >> 0x20);
  puVar11 = (undefined4 *)(param_1 + iVar2 * 0xc);
  uVar16 = FUN_019b00d0(puVar12[1],puVar12[2]);
  uVar4 = (uint)((ulonglong)uVar16 >> 0x20);
  iVar2 = (int)uVar16;
  if ((int)uVar15 == 0) {
    uVar1 = (uint)(iVar2 != 0);
  }
  else if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar4;
    if (uVar3 < uVar4) {
      uVar1 = uVar3;
    }
    uVar1 = FUN_01bed842((int)uVar15,iVar2,uVar1);
    if (uVar1 == 0) {
      uVar1 = uVar3 - uVar4;
    }
    uVar1 = uVar1 >> 0x1f;
  }
  uVar15 = FUN_019b00d0(puVar10[1],puVar10[2]);
  uVar3 = (uint)((ulonglong)uVar15 >> 0x20);
  uVar16 = FUN_019b00d0(puVar11[1],puVar11[2]);
  uVar4 = (uint)((ulonglong)uVar16 >> 0x20);
  iVar2 = (int)uVar16;
  puVar9 = puVar14;
  puVar13 = puVar10;
  if ((int)uVar15 == 0) {
    if (uVar1 != 0) {
      puVar9 = puVar12;
    }
    if (iVar2 == 0) goto LAB_01013e94;
LAB_01013ec0:
    if (uVar1 != 0) {
      puVar12 = puVar14;
    }
  }
  else {
    if (iVar2 == 0) {
      if (uVar1 != 0) {
        puVar9 = puVar12;
        puVar13 = puVar14;
        puVar12 = puVar10;
      }
    }
    else {
      uVar6 = uVar4;
      if (uVar3 < uVar4) {
        uVar6 = uVar3;
      }
      iVar2 = FUN_01bed842((int)uVar15,iVar2,uVar6);
      if (iVar2 == 0) {
        iVar2 = uVar3 - uVar4;
      }
      if (uVar1 != 0) {
        puVar9 = puVar12;
      }
      if (iVar2 < 0) goto LAB_01013ec0;
LAB_01013e94:
      if (uVar1 == 0) {
      }
      else {
        puVar12 = puVar10;
        puVar13 = puVar14;
      }
    }
    puVar10 = puVar11;
    puVar11 = puVar12;
    puVar12 = puVar13;
  }
  uVar15 = FUN_019b00d0(puVar12[1],puVar12[2]);
  uVar3 = (uint)((ulonglong)uVar15 >> 0x20);
  uVar16 = FUN_019b00d0(puVar11[1],puVar11[2]);
  uVar4 = (uint)((ulonglong)uVar16 >> 0x20);
  iVar2 = (int)uVar16;
  if ((int)uVar15 == 0) {
    if (iVar2 != 0) {
LAB_01013f5c:
      puVar14 = puVar11;
      goto LAB_01013f60;
    }
  }
  else if (iVar2 != 0) {
    uVar1 = uVar4;
    if (uVar3 < uVar4) {
      uVar1 = uVar3;
    }
    iVar2 = FUN_01bed842((int)uVar15,iVar2,uVar1);
    if (iVar2 == 0) {
      iVar2 = uVar3 - uVar4;
    }
    if (iVar2 < 0) goto LAB_01013f5c;
  }
  puVar14 = puVar12;
  puVar12 = puVar11;
LAB_01013f60:
  uVar7 = puVar9[1];
  uVar8 = puVar9[2];
  *param_2 = *puVar9;
  param_2[1] = uVar7;
  param_2[2] = uVar8;
  uVar7 = puVar14[1];
  uVar8 = puVar14[2];
  param_2[3] = *puVar14;
  param_2[4] = uVar7;
  param_2[5] = uVar8;
  uVar7 = puVar12[1];
  uVar8 = puVar12[2];
  param_2[6] = *puVar12;
  param_2[7] = uVar7;
  param_2[8] = uVar8;
  uVar7 = puVar10[1];
  uVar8 = puVar10[2];
  param_2[9] = *puVar10;
  param_2[10] = uVar7;
  param_2[0xb] = uVar8;
  return;
}

