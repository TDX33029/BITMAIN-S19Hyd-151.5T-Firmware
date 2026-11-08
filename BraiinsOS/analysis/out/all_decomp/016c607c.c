// FUN_016c607c @ 016c607c size=448 calls_out=0 calls_in=11
// strings: 

void FUN_016c607c(undefined4 *param_1,int *param_2,byte param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  
  uVar9 = param_2[1];
  uVar8 = 0x80000000;
  uVar12 = param_2[2];
  if (uVar9 <= uVar12) goto switchD_016c6110_default;
  iVar14 = *param_2;
  uVar10 = uVar12 + 1;
  param_2[2] = uVar10;
  bVar1 = *(byte *)(iVar14 + uVar12);
  if (((~bVar1 & 0x1f) == 0) || (uVar9 <= uVar10)) goto switchD_016c6110_default;
  bVar2 = *(byte *)(iVar14 + uVar10);
  uVar10 = (uint)bVar2;
  uVar13 = uVar12 + 2;
  param_2[2] = uVar13;
  if ((char)bVar2 < '\0') {
    switch(uVar10) {
    case 0x81:
      if (uVar9 <= uVar13) goto switchD_016c6110_default;
      bVar2 = *(byte *)(iVar14 + uVar13);
      uVar10 = (uint)bVar2;
      uVar13 = uVar12 + 3;
      param_2[2] = uVar13;
      if ((uint)(int)(char)bVar2 < 0x80000000) goto switchD_016c6110_default;
      goto LAB_016c60d0;
    case 0x82:
      if (uVar9 <= uVar13) goto switchD_016c6110_default;
      uVar10 = uVar12 + 3;
      param_2[2] = uVar10;
      if (uVar9 <= uVar10) goto switchD_016c6110_default;
      cVar6 = *(char *)(iVar14 + uVar13);
      uVar13 = uVar12 + 4;
      uVar7 = *(undefined1 *)(iVar14 + uVar10);
      param_2[2] = uVar13;
      if (cVar6 == '\0') goto switchD_016c6110_default;
      uVar10 = (uint)CONCAT11(cVar6,uVar7);
      break;
    case 0x83:
      if (uVar9 <= uVar13) goto switchD_016c6110_default;
      bVar2 = *(byte *)(iVar14 + uVar13);
      uVar10 = uVar12 + 3;
      param_2[2] = uVar10;
      if (uVar9 <= uVar10) goto switchD_016c6110_default;
      uVar11 = uVar12 + 4;
      param_2[2] = uVar11;
      if (uVar9 <= uVar11) goto switchD_016c6110_default;
      bVar3 = *(byte *)(iVar14 + uVar10);
      uVar13 = uVar12 + 5;
      bVar4 = *(byte *)(iVar14 + uVar11);
      param_2[2] = uVar13;
      if (bVar2 == 0) goto switchD_016c6110_default;
      uVar10 = (uint)bVar3 << 8 | (uint)bVar2 << 0x10 | (uint)bVar4;
      break;
    case 0x84:
      if (uVar9 <= uVar13) goto switchD_016c6110_default;
      bVar2 = *(byte *)(iVar14 + uVar13);
      uVar10 = uVar12 + 3;
      param_2[2] = uVar10;
      if (uVar9 <= uVar10) goto switchD_016c6110_default;
      bVar3 = *(byte *)(iVar14 + uVar10);
      uVar10 = uVar12 + 4;
      param_2[2] = uVar10;
      if (uVar9 <= uVar10) goto switchD_016c6110_default;
      uVar13 = uVar12 + 5;
      param_2[2] = uVar13;
      if (uVar9 <= uVar13) goto switchD_016c6110_default;
      bVar4 = *(byte *)(iVar14 + uVar13);
      uVar13 = uVar12 + 6;
      bVar5 = *(byte *)(iVar14 + uVar10);
      param_2[2] = uVar13;
      if (bVar2 == 0) goto switchD_016c6110_default;
      uVar10 = (uint)bVar3 << 0x10 | (uint)bVar2 << 0x18 | (uint)bVar5 << 8 | (uint)bVar4;
      break;
    default:
      goto switchD_016c6110_default;
    }
    if (0xfffe < uVar10) goto switchD_016c6110_default;
  }
LAB_016c60d0:
  uVar12 = uVar13 + uVar10;
  if (!CARRY4(uVar13,uVar10)) {
    bVar15 = uVar12 == uVar9;
    if (uVar12 <= uVar9) {
      param_2[2] = uVar12;
      bVar15 = param_3 == bVar1;
    }
    if (bVar15) {
      uVar8 = 0x8000002d;
      param_1[1] = iVar14 + uVar13;
      param_1[2] = uVar10;
    }
  }
switchD_016c6110_default:
  *param_1 = uVar8;
  return;
}

