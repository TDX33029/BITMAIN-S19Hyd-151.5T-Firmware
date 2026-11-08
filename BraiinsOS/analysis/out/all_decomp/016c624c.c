// FUN_016c624c @ 016c624c size=612 calls_out=1 calls_in=4
// strings: 

void FUN_016c624c(undefined4 *param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar9 = param_2[1];
  uVar10 = param_2[2];
  if ((uVar9 <= uVar10) || (iVar7 = *param_2, *(char *)(iVar7 + uVar10) != '\x01')) {
    *param_1 = 0x8000002d;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  uVar8 = uVar10 + 1;
  param_2[2] = uVar8;
  if (uVar9 <= uVar8) goto switchD_016c632c_default;
  bVar1 = *(byte *)(iVar7 + uVar8);
  uVar8 = (uint)bVar1;
  uVar12 = uVar10 + 2;
  param_2[2] = uVar12;
  if ((char)bVar1 < '\0') {
    switch(uVar8) {
    case 0x81:
      if (uVar9 <= uVar12) goto switchD_016c632c_default;
      bVar1 = *(byte *)(iVar7 + uVar12);
      uVar8 = (uint)bVar1;
      uVar12 = uVar10 + 3;
      param_2[2] = uVar12;
      if ((uint)(int)(char)bVar1 < 0x80000000) goto switchD_016c632c_default;
      goto LAB_016c6298;
    case 0x82:
      if (uVar9 <= uVar12) goto switchD_016c632c_default;
      uVar8 = uVar10 + 3;
      param_2[2] = uVar8;
      if (uVar9 <= uVar8) goto switchD_016c632c_default;
      cVar5 = *(char *)(iVar7 + uVar12);
      uVar12 = uVar10 + 4;
      uVar6 = *(undefined1 *)(iVar7 + uVar8);
      param_2[2] = uVar12;
      if (cVar5 == '\0') goto switchD_016c632c_default;
      uVar8 = (uint)CONCAT11(cVar5,uVar6);
      break;
    case 0x83:
      if (uVar9 <= uVar12) goto switchD_016c632c_default;
      bVar1 = *(byte *)(iVar7 + uVar12);
      uVar8 = uVar10 + 3;
      param_2[2] = uVar8;
      if (uVar9 <= uVar8) goto switchD_016c632c_default;
      uVar11 = uVar10 + 4;
      param_2[2] = uVar11;
      if (uVar9 <= uVar11) goto switchD_016c632c_default;
      bVar2 = *(byte *)(iVar7 + uVar8);
      uVar12 = uVar10 + 5;
      bVar3 = *(byte *)(iVar7 + uVar11);
      param_2[2] = uVar12;
      if (bVar1 == 0) goto switchD_016c632c_default;
      uVar8 = (uint)bVar2 << 8 | (uint)bVar1 << 0x10 | (uint)bVar3;
      break;
    case 0x84:
      if (uVar9 <= uVar12) goto switchD_016c632c_default;
      bVar1 = *(byte *)(iVar7 + uVar12);
      uVar8 = uVar10 + 3;
      param_2[2] = uVar8;
      if (uVar9 <= uVar8) goto switchD_016c632c_default;
      bVar2 = *(byte *)(iVar7 + uVar8);
      uVar8 = uVar10 + 4;
      param_2[2] = uVar8;
      if (uVar9 <= uVar8) goto switchD_016c632c_default;
      uVar12 = uVar10 + 5;
      param_2[2] = uVar12;
      if (uVar9 <= uVar12) goto switchD_016c632c_default;
      bVar3 = *(byte *)(iVar7 + uVar12);
      uVar12 = uVar10 + 6;
      bVar4 = *(byte *)(iVar7 + uVar8);
      param_2[2] = uVar12;
      if (bVar1 == 0) goto switchD_016c632c_default;
      uVar8 = (uint)bVar2 << 0x10 | (uint)bVar1 << 0x18 | (uint)bVar4 << 8 | (uint)bVar3;
      break;
    default:
      goto switchD_016c632c_default;
    }
    if (0xfffe < uVar8) goto switchD_016c632c_default;
  }
LAB_016c6298:
  if ((CARRY4(uVar8,uVar12)) || (uVar9 < uVar8 + uVar12)) {
switchD_016c632c_default:
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = &DAT_8000001d;
    local_38 = (undefined1 *)0x80000000;
    FUN_016c3a1c(&local_38);
    return;
  }
  param_2[2] = uVar8 + uVar12;
  local_34 = CONCAT31(local_34._1_3_,1);
  local_38 = &DAT_8000001d;
  if (uVar8 == 0) {
LAB_016c6364:
    *param_1 = 0x80000000;
    FUN_016c3a1c(&local_38);
    return;
  }
  uVar6 = 0;
  if (*(char *)(iVar7 + uVar12) != '\0') {
    if (*(char *)(iVar7 + uVar12) != -1) goto LAB_016c6364;
    uVar6 = 1;
  }
  if (uVar8 == 1) {
    *(undefined1 *)(param_1 + 1) = uVar6;
    *param_1 = 0x8000002d;
    FUN_016c3a1c(&local_38);
    return;
  }
  *param_1 = &DAT_8000001d;
  param_1[1] = local_34;
  param_1[2] = uStack_30;
  param_1[3] = uStack_2c;
  param_1[4] = local_28;
  param_1[5] = uStack_24;
  param_1[6] = uStack_20;
  param_1[7] = uStack_1c;
  return;
}

