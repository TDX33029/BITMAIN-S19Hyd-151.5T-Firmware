// FUN_01aea060 @ 01aea060 size=488 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_01aea060(int *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  uVar11 = param_1[1];
  uVar12 = param_1[2];
  uVar9 = 0;
  uVar8 = 0;
  if (uVar11 <= uVar12) goto switchD_01aea104_default;
  iVar10 = *param_1;
  uVar8 = 0;
  if (*(char *)(iVar10 + uVar12) != '\x01') goto switchD_01aea104_default;
  uVar13 = uVar12 + 1;
  param_1[2] = uVar13;
  uVar8 = 1;
  if (uVar11 <= uVar13) goto switchD_01aea104_default;
  bVar1 = *(byte *)(iVar10 + uVar13);
  uVar14 = (uint)bVar1;
  uVar13 = uVar12 + 2;
  param_1[2] = uVar13;
  if ((char)bVar1 < '\0') {
    uVar7 = 1;
    switch(uVar14) {
    case 0x81:
      uVar8 = uVar7;
      if (uVar11 <= uVar13) goto switchD_01aea104_default;
      bVar1 = *(byte *)(iVar10 + uVar13);
      uVar14 = (uint)bVar1;
      uVar13 = uVar12 + 3;
      param_1[2] = uVar13;
      if (-1 < (char)bVar1) goto switchD_01aea104_default;
      goto LAB_01aea0bc;
    case 0x82:
      uVar8 = uVar7;
      if (uVar11 <= uVar13) goto switchD_01aea104_default;
      cVar5 = *(char *)(iVar10 + uVar13);
      uVar13 = uVar12 + 3;
      param_1[2] = uVar13;
      if (uVar11 <= uVar13) goto switchD_01aea104_default;
      uVar6 = *(undefined1 *)(iVar10 + uVar13);
      uVar13 = uVar12 + 4;
      param_1[2] = uVar13;
      if (cVar5 == '\0') goto switchD_01aea104_default;
      uVar14 = (uint)CONCAT11(cVar5,uVar6);
      break;
    case 0x83:
      uVar8 = uVar7;
      if (uVar11 <= uVar13) goto switchD_01aea104_default;
      bVar1 = *(byte *)(iVar10 + uVar13);
      uVar13 = uVar12 + 3;
      param_1[2] = uVar13;
      if (uVar11 <= uVar13) goto switchD_01aea104_default;
      bVar2 = *(byte *)(iVar10 + uVar13);
      uVar13 = uVar12 + 4;
      param_1[2] = uVar13;
      if (uVar11 <= uVar13) goto switchD_01aea104_default;
      bVar3 = *(byte *)(iVar10 + uVar13);
      uVar13 = uVar12 + 5;
      param_1[2] = uVar13;
      if (bVar1 == 0) goto switchD_01aea104_default;
      uVar14 = (uint)bVar2 << 8 | (uint)bVar1 << 0x10 | (uint)bVar3;
      break;
    case 0x84:
      uVar8 = uVar7;
      if (uVar11 <= uVar13) goto switchD_01aea104_default;
      bVar1 = *(byte *)(iVar10 + uVar13);
      uVar13 = uVar12 + 3;
      param_1[2] = uVar13;
      if (uVar11 <= uVar13) goto switchD_01aea104_default;
      bVar2 = *(byte *)(iVar10 + uVar13);
      uVar13 = uVar12 + 4;
      param_1[2] = uVar13;
      if (uVar11 <= uVar13) goto switchD_01aea104_default;
      bVar3 = *(byte *)(iVar10 + uVar13);
      uVar13 = uVar12 + 5;
      param_1[2] = uVar13;
      if (uVar11 <= uVar13) goto switchD_01aea104_default;
      bVar4 = *(byte *)(iVar10 + uVar13);
      uVar13 = uVar12 + 6;
      param_1[2] = uVar13;
      if (bVar1 == 0) goto switchD_01aea104_default;
      uVar14 = (uint)bVar2 << 0x10 | (uint)bVar1 << 0x18 | (uint)bVar3 << 8 | (uint)bVar4;
      break;
    default:
      goto switchD_01aea104_default;
    }
    uVar8 = uVar7;
    if (0xfffe < uVar14) goto switchD_01aea104_default;
  }
LAB_01aea0bc:
  uVar8 = 1;
  if (((!CARRY4(uVar14,uVar13)) && (uVar14 + uVar13 <= uVar11)) &&
     (param_1[2] = uVar14 + uVar13, uVar14 != 0)) {
    if (*(char *)(iVar10 + uVar13) == -1) {
      uVar9 = 1;
    }
    else if (*(char *)(iVar10 + uVar13) != '\0') goto switchD_01aea104_default;
    if (uVar14 != 1) {
      uVar9 = 0;
    }
    uVar8 = 0;
    if (uVar14 != 1) {
      uVar8 = 1;
    }
  }
switchD_01aea104_default:
  return CONCAT44(uVar9,uVar8);
}

