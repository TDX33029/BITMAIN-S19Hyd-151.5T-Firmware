// FUN_01351ebc @ 01351ebc size=824 calls_out=1 calls_in=0
// strings: unevaluatedProperties | dependentSchemas | unevaluatedItemsconversion error | additionalProperties | properties | patternProperties

void FUN_01351ebc(undefined4 *param_1,int param_2,byte *param_3)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  bool bVar9;
  
  if (0x13 < *(int *)(param_2 + 8) - 2U) goto switchD_01351ee8_caseD_6;
  piVar7 = *(int **)(param_2 + 4);
  switch(*(int *)(param_2 + 8)) {
  case 2:
    if ((short)*piVar7 != 0x6669) goto switchD_01351ee8_caseD_6;
    goto LAB_01352234;
  case 3:
    iVar1 = thunk_FUN_016dd50a(piVar7,"not",3);
    goto joined_r0x013521f0;
  case 4:
    if ((*piVar7 == 0x65736c65) || (*piVar7 == 0x6e656874)) goto LAB_01352234;
    goto switchD_01351ee8_caseD_6;
  case 5:
    iVar1 = thunk_FUN_016dd50a(piVar7,&DAT_004146ea,5);
    if (iVar1 == 0) {
      if (*param_3 != 4) goto LAB_01352234;
      goto LAB_01352218;
    }
    iVar1 = thunk_FUN_016dd50a(piVar7,"allOf",5);
    if (((iVar1 == 0) || (iVar1 = thunk_FUN_016dd50a(piVar7,"anyOf",5), iVar1 == 0)) ||
       (iVar1 = thunk_FUN_016dd50a(piVar7,"oneOf",5), iVar1 == 0)) goto LAB_013521f8;
    uVar5 = 5;
    pcVar3 = "$defs";
    break;
  default:
    goto switchD_01351ee8_caseD_6;
  case 8:
    iVar1 = thunk_FUN_016dd50a(piVar7,&DAT_0056aa28,8);
    goto joined_r0x013521f0;
  case 10:
    uVar5 = 10;
    pcVar3 = "properties";
    break;
  case 0xb:
    iVar1 = thunk_FUN_016dd50a(piVar7,"prefixItems",0xb);
    if (iVar1 == 0) {
LAB_013521f8:
      if (*param_3 == 4) {
LAB_01352218:
        iVar1 = *(int *)(param_3 + 8);
        iVar4 = *(int *)(param_3 + 0xc);
        *param_1 = 1;
        param_1[1] = iVar1;
        param_1[2] = iVar1 + iVar4 * 0x18;
        return;
      }
      goto switchD_01351ee8_caseD_6;
    }
    uVar5 = 0xb;
    pcVar3 = "definitions";
    break;
  case 0xc:
    uVar2 = thunk_FUN_016dd50a(piVar7,"dependencies",0xc);
    bVar9 = uVar2 != 0;
    if (!bVar9) {
      uVar2 = (uint)*param_3;
    }
    if (bVar9 || uVar2 != 5) goto switchD_01351ee8_caseD_6;
    iVar1 = *(int *)(param_3 + 4);
    uVar6 = *(undefined4 *)(param_3 + 8);
    uVar5 = *(undefined4 *)(param_3 + 0xc);
    uVar8 = 3;
    goto LAB_0135216c;
  case 0xd:
    iVar1 = thunk_FUN_016dd50a(piVar7,"contentSchema",0xd);
    if (iVar1 == 0) goto LAB_01352234;
    iVar1 = thunk_FUN_016dd50a(piVar7,"propertyNames",0xd);
joined_r0x013521f0:
    if (iVar1 == 0) {
LAB_01352234:
      param_1[1] = param_3;
      *param_1 = 0;
      return;
    }
    goto switchD_01351ee8_caseD_6;
  case 0xf:
    uVar5 = 0xf;
    pcVar3 = "additionalItems";
    goto LAB_013521a4;
  case 0x10:
    iVar1 = thunk_FUN_016dd50a(piVar7,"dependentSchemas",0x10);
    if (iVar1 != 0) {
      iVar1 = thunk_FUN_016dd50a(piVar7,"unevaluatedItemsconversion error",0x10);
      goto joined_r0x01351f68;
    }
    goto LAB_01352110;
  case 0x11:
    uVar5 = 0x11;
    pcVar3 = "patternProperties";
    break;
  case 0x14:
    uVar5 = 0x14;
    pcVar3 = "additionalProperties";
LAB_013521a4:
    uVar2 = thunk_FUN_016dd50a(piVar7,pcVar3,uVar5);
    bVar9 = uVar2 == 0;
    if (bVar9) {
      uVar2 = (uint)*param_3;
    }
    if (!bVar9 || uVar2 != 5) goto switchD_01351ee8_caseD_6;
    goto LAB_01352234;
  case 0x15:
    iVar1 = thunk_FUN_016dd50a(piVar7,"unevaluatedProperties",0x15);
joined_r0x01351f68:
    if (iVar1 != 0) goto switchD_01351ee8_caseD_6;
    goto LAB_01352234;
  }
  iVar1 = thunk_FUN_016dd50a(piVar7,pcVar3,uVar5);
  if (iVar1 == 0) {
LAB_01352110:
    if (*param_3 == 5) {
      iVar1 = *(int *)(param_3 + 4);
      uVar6 = *(undefined4 *)(param_3 + 8);
      uVar5 = *(undefined4 *)(param_3 + 0xc);
      uVar8 = 2;
LAB_0135216c:
      if (iVar1 == 0) {
        uVar5 = 0;
      }
      *param_1 = uVar8;
      param_1[9] = uVar5;
      uVar2 = (uint)(iVar1 != 0);
      param_1[2] = 0;
      param_1[3] = iVar1;
      param_1[4] = uVar6;
      param_1[5] = uVar2;
      param_1[1] = uVar2;
      param_1[6] = 0;
      param_1[7] = iVar1;
      param_1[8] = uVar6;
      return;
    }
  }
switchD_01351ee8_caseD_6:
  *param_1 = 4;
  return;
}

