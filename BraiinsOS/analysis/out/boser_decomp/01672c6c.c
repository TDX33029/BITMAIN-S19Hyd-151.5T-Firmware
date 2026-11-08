// FUN_01672c6c @ 01672c6c size=752 calls_out=1 calls_in=0
// strings: unevaluatedProperties | unevaluatedItems | additionalProperties | properties | patternProperties | itemsInlineTable

void FUN_01672c6c(undefined4 *param_1,int param_2,byte *param_3)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint *puVar8;
  undefined4 uVar9;
  bool bVar10;
  
  uVar9 = 4;
  if (0x13 < *(int *)(param_2 + 8) - 2U) goto switchD_01672c98_caseD_6;
  puVar8 = *(uint **)(param_2 + 4);
  switch(*(int *)(param_2 + 8)) {
  case 2:
    uVar1 = (uint)(ushort)*puVar8;
    uVar4 = 0x6669;
LAB_01672e30:
    if (uVar1 != uVar4) goto switchD_01672c98_caseD_6;
    goto LAB_01672f68;
  case 3:
    uVar6 = 3;
    pcVar3 = "not";
    break;
  case 4:
    if (*puVar8 != 0x65736c65) {
      uVar1 = *puVar8;
      uVar4 = 0x6e656874;
      goto LAB_01672e30;
    }
    goto LAB_01672f68;
  case 5:
    iVar2 = thunk_FUN_01bed842(puVar8,"itemsInlineTable",5);
    if (iVar2 == 0) {
      if (*param_3 == 4) goto LAB_01672f94;
      goto LAB_01672f68;
    }
    iVar2 = thunk_FUN_01bed842(puVar8,"allOf",5);
    if (((iVar2 == 0) || (iVar2 = thunk_FUN_01bed842(puVar8,"anyOf",5), iVar2 == 0)) ||
       (iVar2 = thunk_FUN_01bed842(puVar8,"oneOf",5), iVar2 == 0)) goto LAB_01672f78;
    uVar6 = 5;
    pcVar3 = "$defsInvalidPctEncodedOctetUnexpectedCharInvalidIpv6Addr";
    goto LAB_01672e7c;
  default:
    goto switchD_01672c98_caseD_6;
  case 8:
    uVar6 = 8;
    pcVar3 = &DAT_005710a8;
    break;
  case 10:
    uVar6 = 10;
    pcVar3 = "properties";
    goto LAB_01672e7c;
  case 0xb:
    iVar2 = thunk_FUN_01bed842(puVar8,"prefixItems",0xb);
    if (iVar2 == 0) {
LAB_01672f78:
      if (*param_3 != 4) goto switchD_01672c98_caseD_6;
LAB_01672f94:
      iVar2 = *(int *)(param_3 + 8);
      iVar5 = *(int *)(param_3 + 0xc);
      uVar9 = 1;
      param_1[1] = iVar2;
      param_1[2] = iVar2 + iVar5 * 0x18;
      goto switchD_01672c98_caseD_6;
    }
    uVar6 = 0xb;
    pcVar3 = "definitions";
    goto LAB_01672e7c;
  case 0xc:
    uVar1 = thunk_FUN_01bed842(puVar8,"dependencies",0xc);
    bVar10 = uVar1 != 0;
    if (!bVar10) {
      uVar1 = (uint)*param_3;
    }
    if (bVar10 || uVar1 != 5) goto switchD_01672c98_caseD_6;
    iVar2 = *(int *)(param_3 + 4);
    uVar7 = *(undefined4 *)(param_3 + 8);
    uVar6 = *(undefined4 *)(param_3 + 0xc);
    uVar9 = 3;
    goto LAB_01672ee4;
  case 0xd:
    iVar2 = thunk_FUN_01bed842(puVar8,"contentSchema",0xd);
    if (iVar2 == 0) goto LAB_01672f68;
    uVar6 = 0xd;
    pcVar3 = "propertyNames";
    break;
  case 0xf:
    uVar6 = 0xf;
    pcVar3 = "additionalItems";
    goto LAB_01672f18;
  case 0x10:
    iVar2 = thunk_FUN_01bed842(puVar8,&DAT_00567d98,0x10);
    if (iVar2 != 0) {
      uVar6 = 0x10;
      pcVar3 = "unevaluatedItems";
      break;
    }
    goto LAB_01672e88;
  case 0x11:
    uVar6 = 0x11;
    pcVar3 = "patternProperties";
LAB_01672e7c:
    iVar2 = thunk_FUN_01bed842(puVar8,pcVar3,uVar6);
    if (iVar2 == 0) {
LAB_01672e88:
      if (*param_3 == 5) {
        iVar2 = *(int *)(param_3 + 4);
        uVar7 = *(undefined4 *)(param_3 + 8);
        uVar6 = *(undefined4 *)(param_3 + 0xc);
        uVar9 = 2;
LAB_01672ee4:
        if (iVar2 == 0) {
          uVar6 = 0;
        }
        param_1[9] = uVar6;
        uVar1 = (uint)(iVar2 != 0);
        param_1[2] = 0;
        param_1[3] = iVar2;
        param_1[4] = uVar7;
        param_1[5] = uVar1;
        param_1[1] = uVar1;
        param_1[6] = 0;
        param_1[7] = iVar2;
        param_1[8] = uVar7;
      }
    }
    goto switchD_01672c98_caseD_6;
  case 0x14:
    uVar6 = 0x14;
    pcVar3 = "additionalProperties";
LAB_01672f18:
    uVar1 = thunk_FUN_01bed842(puVar8,pcVar3,uVar6);
    bVar10 = uVar1 == 0;
    if (bVar10) {
      uVar1 = (uint)*param_3;
    }
    if (!bVar10 || uVar1 != 5) goto switchD_01672c98_caseD_6;
    goto LAB_01672f68;
  case 0x15:
    uVar6 = 0x15;
    pcVar3 = "unevaluatedProperties";
  }
  iVar2 = thunk_FUN_01bed842(puVar8,pcVar3,uVar6);
  if (iVar2 == 0) {
LAB_01672f68:
    param_1[1] = param_3;
    uVar9 = 0;
  }
switchD_01672c98_caseD_6:
  *param_1 = uVar9;
  return;
}

