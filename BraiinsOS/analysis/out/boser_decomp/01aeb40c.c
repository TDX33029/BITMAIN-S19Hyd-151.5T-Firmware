// FUN_01aeb40c @ 01aeb40c size=436 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_01aeb40c(int *param_1,byte param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  uVar10 = param_1[1];
  uVar11 = param_1[2];
  if (uVar10 <= uVar11) {
    return 0;
  }
  iVar9 = *param_1;
  uVar12 = uVar11 + 1;
  param_1[2] = uVar12;
  bVar1 = *(byte *)(iVar9 + uVar11);
  if ((~bVar1 & 0x1f) == 0) {
    return 0;
  }
  if (uVar10 <= uVar12) {
    return 0;
  }
  bVar2 = *(byte *)(iVar9 + uVar12);
  uVar12 = (uint)bVar2;
  uVar13 = uVar11 + 2;
  param_1[2] = uVar13;
  if (-1 < (char)bVar2) goto LAB_01aeb460;
  switch(uVar12) {
  case 0x81:
    if (uVar10 <= uVar13) {
      return 0;
    }
    bVar2 = *(byte *)(iVar9 + uVar13);
    uVar12 = (uint)bVar2;
    uVar13 = uVar11 + 3;
    param_1[2] = uVar13;
    if (-1 < (char)bVar2) {
      return 0;
    }
    goto LAB_01aeb460;
  case 0x82:
    if (uVar10 <= uVar13) {
      return 0;
    }
    cVar6 = *(char *)(iVar9 + uVar13);
    uVar12 = uVar11 + 3;
    param_1[2] = uVar12;
    if (uVar10 <= uVar12) {
      return 0;
    }
    uVar7 = *(undefined1 *)(iVar9 + uVar12);
    uVar13 = uVar11 + 4;
    param_1[2] = uVar13;
    if (cVar6 == '\0') {
      return 0;
    }
    uVar12 = (uint)CONCAT11(cVar6,uVar7);
    goto LAB_01aeb5c0;
  case 0x83:
    if (uVar10 <= uVar13) {
      return 0;
    }
    bVar2 = *(byte *)(iVar9 + uVar13);
    uVar12 = uVar11 + 3;
    param_1[2] = uVar12;
    if (uVar10 <= uVar12) {
      return 0;
    }
    bVar3 = *(byte *)(iVar9 + uVar12);
    uVar12 = uVar11 + 4;
    param_1[2] = uVar12;
    if (uVar10 <= uVar12) {
      return 0;
    }
    bVar5 = *(byte *)(iVar9 + uVar12);
    uVar13 = uVar11 + 5;
    param_1[2] = uVar13;
    if (bVar2 == 0) {
      return 0;
    }
    uVar12 = (uint)bVar3 << 8 | (uint)bVar2 << 0x10;
    break;
  case 0x84:
    if (uVar10 <= uVar13) {
      return 0;
    }
    bVar2 = *(byte *)(iVar9 + uVar13);
    uVar12 = uVar11 + 3;
    param_1[2] = uVar12;
    if (uVar10 <= uVar12) {
      return 0;
    }
    bVar3 = *(byte *)(iVar9 + uVar12);
    uVar12 = uVar11 + 4;
    param_1[2] = uVar12;
    if (uVar10 <= uVar12) {
      return 0;
    }
    bVar4 = *(byte *)(iVar9 + uVar12);
    uVar12 = uVar11 + 5;
    param_1[2] = uVar12;
    if (uVar10 <= uVar12) {
      return 0;
    }
    bVar5 = *(byte *)(iVar9 + uVar12);
    uVar13 = uVar11 + 6;
    param_1[2] = uVar13;
    if (bVar2 == 0) {
      return 0;
    }
    uVar12 = (uint)bVar3 << 0x10 | (uint)bVar2 << 0x18 | (uint)bVar4 << 8;
    break;
  default:
    return 0;
  }
  uVar12 = uVar12 | bVar5;
LAB_01aeb5c0:
  if (0xfffe < uVar12) {
    return 0;
  }
LAB_01aeb460:
  uVar8 = 0;
  if ((!CARRY4(uVar13,uVar12)) && (uVar13 + uVar12 <= uVar10)) {
    if (param_2 == bVar1) {
      uVar8 = 0x26;
    }
    param_1[2] = uVar13 + uVar12;
  }
  return uVar8;
}

