// FUN_01aea258 @ 01aea258 size=476 calls_out=0 calls_in=2
// strings: 

void FUN_01aea258(undefined4 *param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar9 = param_2[1];
  uVar10 = param_2[2];
  if (uVar9 <= uVar10) goto switchD_01aea2fc_default;
  iVar8 = *param_2;
  uVar11 = uVar10 + 1;
  param_2[2] = uVar11;
  bVar1 = *(byte *)(iVar8 + uVar10);
  if (((~bVar1 & 0x1f) == 0) || (uVar9 <= uVar11)) goto switchD_01aea2fc_default;
  bVar2 = *(byte *)(iVar8 + uVar11);
  uVar12 = (uint)bVar2;
  uVar11 = uVar10 + 2;
  param_2[2] = uVar11;
  if ((char)bVar2 < '\0') {
    switch(uVar12) {
    case 0x81:
      if (uVar9 <= uVar11) goto switchD_01aea2fc_default;
      bVar2 = *(byte *)(iVar8 + uVar11);
      uVar12 = (uint)bVar2;
      uVar11 = uVar10 + 3;
      param_2[2] = uVar11;
      if (-1 < (char)bVar2) goto switchD_01aea2fc_default;
      goto LAB_01aea2a4;
    case 0x82:
      if (uVar9 <= uVar11) goto switchD_01aea2fc_default;
      cVar6 = *(char *)(iVar8 + uVar11);
      uVar11 = uVar10 + 3;
      param_2[2] = uVar11;
      if (uVar9 <= uVar11) goto switchD_01aea2fc_default;
      uVar7 = *(undefined1 *)(iVar8 + uVar11);
      uVar11 = uVar10 + 4;
      param_2[2] = uVar11;
      if (cVar6 == '\0') goto switchD_01aea2fc_default;
      uVar12 = (uint)CONCAT11(cVar6,uVar7);
      break;
    case 0x83:
      if (uVar9 <= uVar11) goto switchD_01aea2fc_default;
      bVar2 = *(byte *)(iVar8 + uVar11);
      uVar11 = uVar10 + 3;
      param_2[2] = uVar11;
      if (uVar9 <= uVar11) goto switchD_01aea2fc_default;
      bVar3 = *(byte *)(iVar8 + uVar11);
      uVar11 = uVar10 + 4;
      param_2[2] = uVar11;
      if (uVar9 <= uVar11) goto switchD_01aea2fc_default;
      bVar4 = *(byte *)(iVar8 + uVar11);
      uVar11 = uVar10 + 5;
      param_2[2] = uVar11;
      if (bVar2 == 0) goto switchD_01aea2fc_default;
      uVar12 = (uint)bVar3 << 8 | (uint)bVar2 << 0x10 | (uint)bVar4;
      break;
    case 0x84:
      if (uVar9 <= uVar11) goto switchD_01aea2fc_default;
      bVar2 = *(byte *)(iVar8 + uVar11);
      uVar11 = uVar10 + 3;
      param_2[2] = uVar11;
      if (uVar9 <= uVar11) goto switchD_01aea2fc_default;
      bVar3 = *(byte *)(iVar8 + uVar11);
      uVar11 = uVar10 + 4;
      param_2[2] = uVar11;
      if (uVar9 <= uVar11) goto switchD_01aea2fc_default;
      bVar4 = *(byte *)(iVar8 + uVar11);
      uVar11 = uVar10 + 5;
      param_2[2] = uVar11;
      if (uVar9 <= uVar11) goto switchD_01aea2fc_default;
      bVar5 = *(byte *)(iVar8 + uVar11);
      uVar11 = uVar10 + 6;
      param_2[2] = uVar11;
      if (bVar2 == 0) goto switchD_01aea2fc_default;
      uVar12 = (uint)bVar3 << 0x10 | (uint)bVar2 << 0x18 | (uint)bVar4 << 8 | (uint)bVar5;
      break;
    default:
      goto switchD_01aea2fc_default;
    }
    if (0xfffe < uVar12) goto switchD_01aea2fc_default;
  }
LAB_01aea2a4:
  if ((((!CARRY4(uVar12,uVar11)) && (uVar12 + uVar11 <= uVar9)) &&
      (param_2[2] = uVar12 + uVar11, bVar1 == 3)) &&
     ((uVar12 != 0 && (*(char *)(iVar8 + uVar11) == '\0')))) {
    *param_1 = (char *)(iVar8 + uVar11) + 1;
    param_1[1] = uVar12 - 1;
    return;
  }
switchD_01aea2fc_default:
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}

