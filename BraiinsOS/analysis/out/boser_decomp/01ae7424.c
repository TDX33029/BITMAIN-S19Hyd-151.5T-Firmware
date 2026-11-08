// FUN_01ae7424 @ 01ae7424 size=448 calls_out=0 calls_in=2
// strings: 

void FUN_01ae7424(int *param_1,int *param_2)

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
  if (uVar9 <= uVar10) goto switchD_01ae74ac_default;
  iVar8 = *param_2;
  uVar11 = uVar10 + 1;
  param_2[2] = uVar11;
  bVar1 = *(byte *)(iVar8 + uVar10);
  if (((~bVar1 & 0x1f) == 0) || (uVar9 <= uVar11)) goto switchD_01ae74ac_default;
  bVar2 = *(byte *)(iVar8 + uVar11);
  uVar11 = (uint)bVar2;
  uVar12 = uVar10 + 2;
  param_2[2] = uVar12;
  if ((char)bVar2 < '\0') {
    switch(uVar11) {
    case 0x81:
      if (uVar9 <= uVar12) goto switchD_01ae74ac_default;
      bVar2 = *(byte *)(iVar8 + uVar12);
      uVar11 = (uint)bVar2;
      uVar12 = uVar10 + 3;
      param_2[2] = uVar12;
      if (-1 < (char)bVar2) goto switchD_01ae74ac_default;
      goto LAB_01ae7470;
    case 0x82:
      if (uVar9 <= uVar12) goto switchD_01ae74ac_default;
      cVar6 = *(char *)(iVar8 + uVar12);
      uVar11 = uVar10 + 3;
      param_2[2] = uVar11;
      if (uVar9 <= uVar11) goto switchD_01ae74ac_default;
      uVar7 = *(undefined1 *)(iVar8 + uVar11);
      uVar12 = uVar10 + 4;
      param_2[2] = uVar12;
      if (cVar6 == '\0') goto switchD_01ae74ac_default;
      uVar11 = (uint)CONCAT11(cVar6,uVar7);
      break;
    case 0x83:
      if (uVar9 <= uVar12) goto switchD_01ae74ac_default;
      bVar2 = *(byte *)(iVar8 + uVar12);
      uVar11 = uVar10 + 3;
      param_2[2] = uVar11;
      if (uVar9 <= uVar11) goto switchD_01ae74ac_default;
      bVar3 = *(byte *)(iVar8 + uVar11);
      uVar11 = uVar10 + 4;
      param_2[2] = uVar11;
      if (uVar9 <= uVar11) goto switchD_01ae74ac_default;
      bVar4 = *(byte *)(iVar8 + uVar11);
      uVar12 = uVar10 + 5;
      param_2[2] = uVar12;
      if (bVar2 == 0) goto switchD_01ae74ac_default;
      uVar11 = (uint)bVar3 << 8 | (uint)bVar2 << 0x10 | (uint)bVar4;
      break;
    case 0x84:
      if (uVar9 <= uVar12) goto switchD_01ae74ac_default;
      bVar2 = *(byte *)(iVar8 + uVar12);
      uVar11 = uVar10 + 3;
      param_2[2] = uVar11;
      if (uVar9 <= uVar11) goto switchD_01ae74ac_default;
      bVar3 = *(byte *)(iVar8 + uVar11);
      uVar11 = uVar10 + 4;
      param_2[2] = uVar11;
      if (uVar9 <= uVar11) goto switchD_01ae74ac_default;
      bVar4 = *(byte *)(iVar8 + uVar11);
      uVar11 = uVar10 + 5;
      param_2[2] = uVar11;
      if (uVar9 <= uVar11) goto switchD_01ae74ac_default;
      bVar5 = *(byte *)(iVar8 + uVar11);
      uVar12 = uVar10 + 6;
      param_2[2] = uVar12;
      if (bVar2 == 0) goto switchD_01ae74ac_default;
      uVar11 = (uint)bVar3 << 0x10 | (uint)bVar2 << 0x18 | (uint)bVar4 << 8 | (uint)bVar5;
      break;
    default:
      goto switchD_01ae74ac_default;
    }
    if (0xfffe < uVar11) goto switchD_01ae74ac_default;
  }
LAB_01ae7470:
  if (((!CARRY4(uVar12,uVar11)) && (uVar12 + uVar11 <= uVar9)) &&
     (param_2[2] = uVar12 + uVar11, bVar1 == 2)) {
    *param_1 = iVar8 + uVar12;
    param_1[1] = uVar11;
    return;
  }
switchD_01ae74ac_default:
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}

