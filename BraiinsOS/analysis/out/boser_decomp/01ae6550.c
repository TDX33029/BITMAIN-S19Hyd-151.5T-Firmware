// FUN_01ae6550 @ 01ae6550 size=528 calls_out=0 calls_in=3
// strings: 

void FUN_01ae6550(undefined2 *param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar8 = param_2[1];
  uVar10 = param_2[2];
  if (uVar8 <= uVar10) goto switchD_01ae65cc_caseD_83;
  iVar7 = *param_2;
  uVar11 = uVar10 + 1;
  param_2[2] = uVar11;
  bVar1 = *(byte *)(iVar7 + uVar10);
  if (((~bVar1 & 0x1f) == 0) || (uVar8 <= uVar11)) goto switchD_01ae65cc_caseD_83;
  bVar6 = *(byte *)(iVar7 + uVar11);
  uVar11 = (uint)bVar6;
  uVar12 = uVar10 + 2;
  param_2[2] = uVar12;
  if ((char)bVar6 < '\0') {
    switch(uVar11) {
    case 0x81:
      if (uVar8 <= uVar12) goto switchD_01ae65cc_caseD_83;
      bVar6 = *(byte *)(iVar7 + uVar12);
      uVar11 = (uint)bVar6;
      uVar12 = uVar10 + 3;
      param_2[2] = uVar12;
      if (-1 < (char)bVar6) goto switchD_01ae65cc_caseD_83;
      goto LAB_01ae659c;
    case 0x82:
      if (uVar8 <= uVar12) goto switchD_01ae65cc_caseD_83;
      cVar5 = *(char *)(iVar7 + uVar12);
      uVar11 = uVar10 + 3;
      param_2[2] = uVar11;
      if (uVar8 <= uVar11) goto switchD_01ae65cc_caseD_83;
      uVar9 = *(undefined1 *)(iVar7 + uVar11);
      uVar12 = uVar10 + 4;
      param_2[2] = uVar12;
      if (cVar5 == '\0') goto switchD_01ae65cc_caseD_83;
      uVar11 = (uint)CONCAT11(cVar5,uVar9);
      break;
    case 0x83:
      if (uVar8 <= uVar12) goto switchD_01ae65cc_caseD_83;
      bVar6 = *(byte *)(iVar7 + uVar12);
      uVar11 = uVar10 + 3;
      param_2[2] = uVar11;
      if (uVar8 <= uVar11) goto switchD_01ae65cc_caseD_83;
      bVar2 = *(byte *)(iVar7 + uVar11);
      uVar11 = uVar10 + 4;
      param_2[2] = uVar11;
      if (uVar8 <= uVar11) goto switchD_01ae65cc_caseD_83;
      bVar3 = *(byte *)(iVar7 + uVar11);
      uVar12 = uVar10 + 5;
      param_2[2] = uVar12;
      if (bVar6 == 0) goto switchD_01ae65cc_caseD_83;
      uVar11 = (uint)bVar2 << 8 | (uint)bVar6 << 0x10 | (uint)bVar3;
      break;
    case 0x84:
      if (uVar8 <= uVar12) goto switchD_01ae65cc_caseD_83;
      bVar6 = *(byte *)(iVar7 + uVar12);
      uVar11 = uVar10 + 3;
      param_2[2] = uVar11;
      if (uVar8 <= uVar11) goto switchD_01ae65cc_caseD_83;
      bVar2 = *(byte *)(iVar7 + uVar11);
      uVar11 = uVar10 + 4;
      param_2[2] = uVar11;
      if (uVar8 <= uVar11) goto switchD_01ae65cc_caseD_83;
      bVar3 = *(byte *)(iVar7 + uVar11);
      uVar11 = uVar10 + 5;
      param_2[2] = uVar11;
      if (uVar8 <= uVar11) goto switchD_01ae65cc_caseD_83;
      bVar4 = *(byte *)(iVar7 + uVar11);
      uVar12 = uVar10 + 6;
      param_2[2] = uVar12;
      if (bVar6 == 0) goto switchD_01ae65cc_caseD_83;
      uVar11 = (uint)bVar2 << 0x10 | (uint)bVar6 << 0x18 | (uint)bVar3 << 8 | (uint)bVar4;
      break;
    default:
      goto switchD_01ae65cc_caseD_83;
    }
    if (0xfffe < uVar11) goto switchD_01ae65cc_caseD_83;
  }
LAB_01ae659c:
  if ((CARRY4(uVar12,uVar11)) || (uVar8 < uVar12 + uVar11)) {
switchD_01ae65cc_caseD_83:
    *param_1 = 4;
    return;
  }
  param_2[2] = uVar12 + uVar11;
  bVar6 = 0;
  uVar9 = 0;
  switch(bVar1) {
  case 0x81:
  case 0x86:
  case 0x88:
switchD_01ae65cc_caseD_81:
    bVar6 = bVar1 & 0x5f;
    uVar9 = 3;
    break;
  case 0x82:
    break;
  case 0x83:
  case 0x84:
  case 0x85:
    goto switchD_01ae65cc_caseD_83;
  case 0x87:
    uVar9 = 2;
    break;
  default:
    switch(bVar1) {
    case 0xa0:
    case 0xa3:
    case 0xa5:
      goto switchD_01ae65cc_caseD_81;
    default:
      goto switchD_01ae65cc_caseD_83;
    case 0xa4:
      uVar9 = 1;
      bVar6 = 0;
      break;
    }
  }
  *(uint *)(param_1 + 2) = iVar7 + uVar12;
  *(uint *)(param_1 + 4) = uVar11;
  *(byte *)((int)param_1 + 1) = bVar6;
  *(undefined1 *)param_1 = uVar9;
  return;
}

