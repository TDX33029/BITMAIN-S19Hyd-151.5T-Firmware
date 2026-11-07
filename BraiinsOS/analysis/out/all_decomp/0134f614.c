// FUN_0134f614 @ 0134f614 size=708 calls_out=1 calls_in=0
// strings: patternProperties | unevaluatedProperties | properties | additionalProperties | allOf | anyOf

void FUN_0134f614(undefined4 *param_1,int param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  
  if (0x13 < *(int *)(param_2 + 8) - 2U) goto switchD_0134f640_caseD_6;
  piVar7 = *(int **)(param_2 + 4);
  switch(*(int *)(param_2 + 8)) {
  case 2:
    if ((short)*piVar7 != 0x6669) goto switchD_0134f640_caseD_6;
    goto LAB_0134f8f0;
  case 3:
    uVar4 = 3;
    pcVar2 = "not";
    break;
  case 4:
    if ((*piVar7 == 0x65736c65) || (*piVar7 == 0x6e656874)) goto LAB_0134f8f0;
    goto switchD_0134f640_caseD_6;
  case 5:
    iVar1 = thunk_FUN_016dd50a(piVar7,"allOf",5);
    if (((iVar1 == 0) || (iVar1 = thunk_FUN_016dd50a(piVar7,"anyOf",5), iVar1 == 0)) ||
       (iVar1 = thunk_FUN_016dd50a(piVar7,"oneOf",5), iVar1 == 0)) {
      if (*param_3 == '\x04') {
LAB_0134f90c:
        iVar1 = *(int *)(param_3 + 8);
        iVar3 = *(int *)(param_3 + 0xc);
        param_1[1] = iVar1;
        param_1[2] = iVar1 + iVar3 * 0x18;
        *param_1 = 1;
        return;
      }
      goto switchD_0134f640_caseD_6;
    }
    iVar1 = thunk_FUN_016dd50a(piVar7,"$defs",5);
    if (iVar1 != 0) {
      iVar1 = thunk_FUN_016dd50a(piVar7,&DAT_004146ea,5);
      if (iVar1 == 0) {
        if (*param_3 != '\x04') goto LAB_0134f8f0;
        goto LAB_0134f90c;
      }
      goto switchD_0134f640_caseD_6;
    }
    goto LAB_0134f88c;
  default:
    goto switchD_0134f640_caseD_6;
  case 8:
    uVar4 = 8;
    pcVar2 = &DAT_0056aa28;
    break;
  case 10:
    iVar1 = thunk_FUN_016dd50a(piVar7,"properties",10);
    goto joined_r0x0134f81c;
  case 0xb:
    iVar1 = thunk_FUN_016dd50a(piVar7,"definitions",0xb);
joined_r0x0134f81c:
    if (iVar1 == 0) {
LAB_0134f88c:
      if (*param_3 == '\x05') {
        iVar1 = *(int *)(param_3 + 4);
        uVar5 = *(undefined4 *)(param_3 + 8);
        uVar4 = *(undefined4 *)(param_3 + 0xc);
        if (iVar1 == 0) {
          uVar4 = 0;
        }
        *param_1 = 2;
        param_1[9] = uVar4;
        uVar6 = (uint)(iVar1 != 0);
        param_1[2] = 0;
        param_1[3] = iVar1;
        param_1[4] = uVar5;
        param_1[5] = uVar6;
        param_1[1] = uVar6;
        param_1[6] = 0;
        param_1[7] = iVar1;
        param_1[8] = uVar5;
        return;
      }
    }
    goto switchD_0134f640_caseD_6;
  case 0xd:
    iVar1 = thunk_FUN_016dd50a(piVar7,"contentSchema",0xd);
    if (iVar1 == 0) goto LAB_0134f8f0;
    uVar4 = 0xd;
    pcVar2 = "propertyNames";
    break;
  case 0xf:
    uVar4 = 0xf;
    pcVar2 = "additionalItems";
    break;
  case 0x10:
    iVar1 = thunk_FUN_016dd50a(piVar7,"unevaluatedItemsconversion error",0x10);
    if (iVar1 == 0) goto LAB_0134f8f0;
    iVar1 = thunk_FUN_016dd50a(piVar7,"dependentSchemas",0x10);
    goto joined_r0x0134f6c4;
  case 0x11:
    iVar1 = thunk_FUN_016dd50a(piVar7,"patternProperties",0x11);
joined_r0x0134f6c4:
    if (iVar1 != 0) goto switchD_0134f640_caseD_6;
    goto LAB_0134f88c;
  case 0x14:
    uVar4 = 0x14;
    pcVar2 = "additionalProperties";
    break;
  case 0x15:
    uVar4 = 0x15;
    pcVar2 = "unevaluatedProperties";
  }
  iVar1 = thunk_FUN_016dd50a(piVar7,pcVar2,uVar4);
  if (iVar1 == 0) {
LAB_0134f8f0:
    param_1[1] = param_3;
    *param_1 = 0;
    return;
  }
switchD_0134f640_caseD_6:
  *param_1 = 4;
  return;
}

