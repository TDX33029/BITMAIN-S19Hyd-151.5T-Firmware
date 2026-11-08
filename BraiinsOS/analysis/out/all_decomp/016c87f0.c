// FUN_016c87f0 @ 016c87f0 size=548 calls_out=1 calls_in=2
// strings: 

void FUN_016c87f0(undefined4 *param_1,int *param_2)

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
  undefined1 *local_40;
  undefined1 local_3c;
  
  uVar11 = param_2[1];
  uVar12 = param_2[2];
  if (uVar11 <= uVar12) goto switchD_016c88c4_default;
  iVar9 = *param_2;
  uVar10 = uVar12 + 1;
  param_2[2] = uVar10;
  bVar1 = *(byte *)(iVar9 + uVar12);
  if (((~bVar1 & 0x1f) == 0) || (uVar11 <= uVar10)) goto switchD_016c88c4_default;
  bVar2 = *(byte *)(iVar9 + uVar10);
  uVar10 = (uint)bVar2;
  uVar14 = uVar12 + 2;
  param_2[2] = uVar14;
  if ((char)bVar2 < '\0') {
    switch(uVar10) {
    case 0x81:
      if (uVar11 <= uVar14) goto switchD_016c88c4_default;
      bVar2 = *(byte *)(iVar9 + uVar14);
      uVar10 = (uint)bVar2;
      uVar14 = uVar12 + 3;
      param_2[2] = uVar14;
      if ((uint)(int)(char)bVar2 < 0x80000000) goto switchD_016c88c4_default;
      goto LAB_016c8840;
    case 0x82:
      if (uVar11 <= uVar14) goto switchD_016c88c4_default;
      uVar10 = uVar12 + 3;
      param_2[2] = uVar10;
      if (uVar11 <= uVar10) goto switchD_016c88c4_default;
      cVar6 = *(char *)(iVar9 + uVar14);
      uVar14 = uVar12 + 4;
      uVar7 = *(undefined1 *)(iVar9 + uVar10);
      param_2[2] = uVar14;
      if (cVar6 == '\0') goto switchD_016c88c4_default;
      uVar10 = (uint)CONCAT11(cVar6,uVar7);
      break;
    case 0x83:
      if (uVar11 <= uVar14) goto switchD_016c88c4_default;
      bVar2 = *(byte *)(iVar9 + uVar14);
      uVar10 = uVar12 + 3;
      param_2[2] = uVar10;
      if (uVar11 <= uVar10) goto switchD_016c88c4_default;
      uVar13 = uVar12 + 4;
      param_2[2] = uVar13;
      if (uVar11 <= uVar13) goto switchD_016c88c4_default;
      bVar3 = *(byte *)(iVar9 + uVar10);
      uVar14 = uVar12 + 5;
      bVar4 = *(byte *)(iVar9 + uVar13);
      param_2[2] = uVar14;
      if (bVar2 == 0) goto switchD_016c88c4_default;
      uVar10 = (uint)bVar3 << 8 | (uint)bVar2 << 0x10 | (uint)bVar4;
      break;
    case 0x84:
      if (uVar11 <= uVar14) goto switchD_016c88c4_default;
      bVar2 = *(byte *)(iVar9 + uVar14);
      uVar10 = uVar12 + 3;
      param_2[2] = uVar10;
      if (uVar11 <= uVar10) goto switchD_016c88c4_default;
      bVar3 = *(byte *)(iVar9 + uVar10);
      uVar10 = uVar12 + 4;
      param_2[2] = uVar10;
      if (uVar11 <= uVar10) goto switchD_016c88c4_default;
      uVar14 = uVar12 + 5;
      param_2[2] = uVar14;
      if (uVar11 <= uVar14) goto switchD_016c88c4_default;
      bVar4 = *(byte *)(iVar9 + uVar14);
      uVar14 = uVar12 + 6;
      bVar5 = *(byte *)(iVar9 + uVar10);
      param_2[2] = uVar14;
      if (bVar2 == 0) goto switchD_016c88c4_default;
      uVar10 = (uint)bVar3 << 0x10 | (uint)bVar2 << 0x18 | (uint)bVar5 << 8 | (uint)bVar4;
      break;
    default:
      goto switchD_016c88c4_default;
    }
    if (0xfffe < uVar10) goto switchD_016c88c4_default;
  }
LAB_016c8840:
  if (((!CARRY4(uVar10,uVar14)) && (uVar10 + uVar14 <= uVar11)) &&
     (param_2[2] = uVar10 + uVar14, bVar1 == 3)) {
    local_3c = 0;
    local_40 = &DAT_8000001d;
    uVar8 = 0x80000000;
    if ((uVar10 != 0) && (*(char *)(iVar9 + uVar14) == '\0')) {
      param_1[1] = (char *)(iVar9 + uVar14) + 1;
      param_1[2] = uVar10 - 1;
      uVar8 = 0x8000002d;
    }
    *param_1 = uVar8;
    FUN_016c3a1c(&local_40);
    return;
  }
switchD_016c88c4_default:
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &DAT_8000001d;
  local_40 = (undefined1 *)0x80000000;
  FUN_016c3a1c(&local_40);
  return;
}

