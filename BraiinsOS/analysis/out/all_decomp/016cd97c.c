// FUN_016cd97c @ 016cd97c size=460 calls_out=0 calls_in=4
// strings: 

void FUN_016cd97c(undefined4 *param_1,int *param_2)

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
  uint uVar13;
  bool bVar14;
  bool bVar15;
  
  uVar9 = param_2[1];
  uVar12 = param_2[2];
  if (uVar9 <= uVar12) goto switchD_016cda08_default;
  iVar8 = *param_2;
  uVar11 = uVar12 + 1;
  param_2[2] = uVar11;
  bVar1 = *(byte *)(iVar8 + uVar12);
  if (((~(uint)bVar1 & 0x1f) == 0) || (uVar9 <= uVar11)) goto switchD_016cda08_default;
  bVar2 = *(byte *)(iVar8 + uVar11);
  uVar11 = (uint)bVar2;
  uVar13 = uVar12 + 2;
  param_2[2] = uVar13;
  if ((char)bVar2 < '\0') {
    switch(uVar11) {
    case 0x81:
      if (uVar9 <= uVar13) goto switchD_016cda08_default;
      bVar2 = *(byte *)(iVar8 + uVar13);
      uVar11 = (uint)bVar2;
      uVar13 = uVar12 + 3;
      param_2[2] = uVar13;
      if ((uint)(int)(char)bVar2 < 0x80000000) goto switchD_016cda08_default;
      goto LAB_016cd9d0;
    case 0x82:
      if (uVar9 <= uVar13) goto switchD_016cda08_default;
      uVar11 = uVar12 + 3;
      param_2[2] = uVar11;
      if (uVar9 <= uVar11) goto switchD_016cda08_default;
      cVar6 = *(char *)(iVar8 + uVar13);
      uVar13 = uVar12 + 4;
      uVar7 = *(undefined1 *)(iVar8 + uVar11);
      param_2[2] = uVar13;
      if (cVar6 == '\0') goto switchD_016cda08_default;
      uVar11 = (uint)CONCAT11(cVar6,uVar7);
      break;
    case 0x83:
      if (uVar9 <= uVar13) goto switchD_016cda08_default;
      bVar2 = *(byte *)(iVar8 + uVar13);
      uVar11 = uVar12 + 3;
      param_2[2] = uVar11;
      if (uVar9 <= uVar11) goto switchD_016cda08_default;
      uVar10 = uVar12 + 4;
      param_2[2] = uVar10;
      if (uVar9 <= uVar10) goto switchD_016cda08_default;
      bVar3 = *(byte *)(iVar8 + uVar11);
      uVar13 = uVar12 + 5;
      bVar4 = *(byte *)(iVar8 + uVar10);
      param_2[2] = uVar13;
      if (bVar2 == 0) goto switchD_016cda08_default;
      uVar11 = (uint)bVar3 << 8 | (uint)bVar2 << 0x10 | (uint)bVar4;
      break;
    case 0x84:
      if (uVar9 <= uVar13) goto switchD_016cda08_default;
      bVar2 = *(byte *)(iVar8 + uVar13);
      uVar11 = uVar12 + 3;
      param_2[2] = uVar11;
      if (uVar9 <= uVar11) goto switchD_016cda08_default;
      bVar3 = *(byte *)(iVar8 + uVar11);
      uVar11 = uVar12 + 4;
      param_2[2] = uVar11;
      if (uVar9 <= uVar11) goto switchD_016cda08_default;
      uVar13 = uVar12 + 5;
      param_2[2] = uVar13;
      if (uVar9 <= uVar13) goto switchD_016cda08_default;
      bVar4 = *(byte *)(iVar8 + uVar13);
      uVar13 = uVar12 + 6;
      bVar5 = *(byte *)(iVar8 + uVar11);
      param_2[2] = uVar13;
      if (bVar2 == 0) goto switchD_016cda08_default;
      uVar11 = (uint)bVar3 << 0x10 | (uint)bVar2 << 0x18 | (uint)bVar5 << 8 | (uint)bVar4;
      break;
    default:
      goto switchD_016cda08_default;
    }
    if (0xfffe < uVar11) goto switchD_016cda08_default;
  }
LAB_016cd9d0:
  uVar12 = uVar13 + uVar11;
  if (!CARRY4(uVar13,uVar11)) {
    bVar15 = uVar9 <= uVar12;
    bVar14 = uVar12 == uVar9;
    if (!bVar15 || bVar14) {
      uVar9 = bVar1 - 0x81;
      param_2[2] = uVar12;
      bVar15 = 0x23 < uVar9;
      bVar14 = uVar9 == 0x24;
    }
    if (!bVar15 || bVar14) {
                    /* WARNING: Could not recover jumptable at 0x016cda50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_016cda54 + *(int *)(&DAT_016cda54 + uVar9 * 4)))(param_1,0);
      return;
    }
  }
switchD_016cda08_default:
  *param_1 = 0x80000000;
  return;
}

