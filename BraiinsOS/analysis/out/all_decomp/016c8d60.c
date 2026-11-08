// FUN_016c8d60 @ 016c8d60 size=476 calls_out=0 calls_in=2
// strings: 

void FUN_016c8d60(undefined4 *param_1,int *param_2)

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
  uint uVar14;
  
  uVar10 = param_2[1];
  uVar11 = param_2[2];
  uVar8 = 0x80000000;
  if (uVar10 <= uVar11) goto switchD_016c8dfc_default;
  iVar9 = *param_2;
  uVar13 = uVar11 + 1;
  param_2[2] = uVar13;
  bVar1 = *(byte *)(iVar9 + uVar11);
  if (((~bVar1 & 0x1f) == 0) || (uVar10 <= uVar13)) goto switchD_016c8dfc_default;
  bVar2 = *(byte *)(iVar9 + uVar13);
  uVar13 = (uint)bVar2;
  uVar14 = uVar11 + 2;
  param_2[2] = uVar14;
  if ((char)bVar2 < '\0') {
    switch(uVar13) {
    case 0x81:
      if (uVar10 <= uVar14) goto switchD_016c8dfc_default;
      bVar2 = *(byte *)(iVar9 + uVar14);
      uVar13 = (uint)bVar2;
      uVar14 = uVar11 + 3;
      param_2[2] = uVar14;
      if ((uint)(int)(char)bVar2 < 0x80000000) goto switchD_016c8dfc_default;
      goto LAB_016c8db0;
    case 0x82:
      if (uVar10 <= uVar14) goto switchD_016c8dfc_default;
      uVar13 = uVar11 + 3;
      param_2[2] = uVar13;
      if (uVar10 <= uVar13) goto switchD_016c8dfc_default;
      cVar6 = *(char *)(iVar9 + uVar14);
      uVar14 = uVar11 + 4;
      uVar7 = *(undefined1 *)(iVar9 + uVar13);
      param_2[2] = uVar14;
      if (cVar6 == '\0') goto switchD_016c8dfc_default;
      uVar13 = (uint)CONCAT11(cVar6,uVar7);
      break;
    case 0x83:
      if (uVar10 <= uVar14) goto switchD_016c8dfc_default;
      bVar2 = *(byte *)(iVar9 + uVar14);
      uVar13 = uVar11 + 3;
      param_2[2] = uVar13;
      if (uVar10 <= uVar13) goto switchD_016c8dfc_default;
      uVar12 = uVar11 + 4;
      param_2[2] = uVar12;
      if (uVar10 <= uVar12) goto switchD_016c8dfc_default;
      bVar3 = *(byte *)(iVar9 + uVar13);
      uVar14 = uVar11 + 5;
      bVar4 = *(byte *)(iVar9 + uVar12);
      param_2[2] = uVar14;
      if (bVar2 == 0) goto switchD_016c8dfc_default;
      uVar13 = (uint)bVar3 << 8 | (uint)bVar2 << 0x10 | (uint)bVar4;
      break;
    case 0x84:
      if (uVar10 <= uVar14) goto switchD_016c8dfc_default;
      bVar2 = *(byte *)(iVar9 + uVar14);
      uVar13 = uVar11 + 3;
      param_2[2] = uVar13;
      if (uVar10 <= uVar13) goto switchD_016c8dfc_default;
      bVar3 = *(byte *)(iVar9 + uVar13);
      uVar13 = uVar11 + 4;
      param_2[2] = uVar13;
      if (uVar10 <= uVar13) goto switchD_016c8dfc_default;
      uVar14 = uVar11 + 5;
      param_2[2] = uVar14;
      if (uVar10 <= uVar14) goto switchD_016c8dfc_default;
      bVar4 = *(byte *)(iVar9 + uVar14);
      uVar14 = uVar11 + 6;
      bVar5 = *(byte *)(iVar9 + uVar13);
      param_2[2] = uVar14;
      if (bVar2 == 0) goto switchD_016c8dfc_default;
      uVar13 = (uint)bVar3 << 0x10 | (uint)bVar2 << 0x18 | (uint)bVar5 << 8 | (uint)bVar4;
      break;
    default:
      goto switchD_016c8dfc_default;
    }
    if (0xfffe < uVar13) goto switchD_016c8dfc_default;
  }
LAB_016c8db0:
  if ((!CARRY4(uVar14,uVar13)) && (uVar14 + uVar13 <= uVar10)) {
    param_2[2] = uVar14 + uVar13;
    if (bVar1 == 0xa1) {
      param_1[1] = 0;
    }
    else {
      if (bVar1 != 0xa0) goto switchD_016c8dfc_default;
      param_1[1] = iVar9 + uVar14;
      param_1[2] = uVar13;
      param_1[3] = 0;
    }
    uVar8 = 0x8000002d;
  }
switchD_016c8dfc_default:
  *param_1 = uVar8;
  return;
}

