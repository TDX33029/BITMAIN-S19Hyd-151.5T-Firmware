// FUN_01350520 @ 01350520 size=652 calls_out=1 calls_in=0
// strings: additionalProperties | properties | unevaluatedProperties | prefixItems | definitions | contentSchema

void FUN_01350520(undefined4 *param_1,int param_2,byte *param_3)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  bool bVar8;
  
  if (0x13 < *(int *)(param_2 + 8) - 2U) goto switchD_0135054c_caseD_6;
  piVar7 = *(int **)(param_2 + 4);
  switch(*(int *)(param_2 + 8)) {
  case 2:
    if ((short)*piVar7 != 0x6669) goto switchD_0135054c_caseD_6;
    goto LAB_01350734;
  case 3:
    uVar5 = 3;
    pcVar3 = "not";
    break;
  case 4:
    if ((*piVar7 == 0x65736c65) || (*piVar7 == 0x6e656874)) goto LAB_01350734;
    goto switchD_0135054c_caseD_6;
  case 5:
    iVar1 = thunk_FUN_016dd50a(piVar7,&DAT_004146ea,5);
    if (iVar1 == 0) goto LAB_01350734;
    iVar1 = thunk_FUN_016dd50a(piVar7,"allOf",5);
    if (((iVar1 == 0) || (iVar1 = thunk_FUN_016dd50a(piVar7,"anyOf",5), iVar1 == 0)) ||
       (iVar1 = thunk_FUN_016dd50a(piVar7,"oneOf",5), iVar1 == 0)) goto LAB_013507d4;
    uVar5 = 5;
    pcVar3 = "$defs";
    goto LAB_01350784;
  default:
    goto switchD_0135054c_caseD_6;
  case 8:
    uVar5 = 8;
    pcVar3 = &DAT_0056aa28;
    break;
  case 10:
    uVar5 = 10;
    pcVar3 = "properties";
    goto LAB_01350784;
  case 0xb:
    iVar1 = thunk_FUN_016dd50a(piVar7,"prefixItems",0xb);
    if (iVar1 == 0) {
LAB_013507d4:
      if (*param_3 == 4) {
        iVar1 = *(int *)(param_3 + 8);
        iVar4 = *(int *)(param_3 + 0xc);
        *param_1 = 1;
        param_1[1] = iVar1;
        param_1[2] = iVar1 + iVar4 * 0x18;
        return;
      }
      goto switchD_0135054c_caseD_6;
    }
    uVar5 = 0xb;
    pcVar3 = "definitions";
    goto LAB_01350784;
  case 0xd:
    iVar1 = thunk_FUN_016dd50a(piVar7,"contentSchema",0xd);
    if (iVar1 == 0) goto LAB_01350734;
    uVar5 = 0xd;
    pcVar3 = "propertyNames";
    break;
  case 0x10:
    iVar1 = thunk_FUN_016dd50a(piVar7,"unevaluatedItemsconversion error",0x10);
    if (iVar1 == 0) goto LAB_01350734;
    uVar5 = 0x10;
    pcVar3 = "dependentSchemas";
    goto LAB_01350784;
  case 0x11:
    uVar5 = 0x11;
    pcVar3 = "patternProperties";
LAB_01350784:
    uVar2 = thunk_FUN_016dd50a(piVar7,pcVar3,uVar5);
    bVar8 = uVar2 == 0;
    if (bVar8) {
      uVar2 = (uint)*param_3;
    }
    if (bVar8 && uVar2 == 5) {
      iVar1 = *(int *)(param_3 + 4);
      uVar6 = *(undefined4 *)(param_3 + 8);
      uVar5 = *(undefined4 *)(param_3 + 0xc);
      if (iVar1 == 0) {
        uVar5 = 0;
      }
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
      *param_1 = 2;
      return;
    }
    goto switchD_0135054c_caseD_6;
  case 0x14:
    uVar5 = 0x14;
    pcVar3 = "additionalProperties";
    break;
  case 0x15:
    uVar5 = 0x15;
    pcVar3 = "unevaluatedProperties";
  }
  iVar1 = thunk_FUN_016dd50a(piVar7,pcVar3,uVar5);
  if (iVar1 == 0) {
LAB_01350734:
    param_1[1] = param_3;
    *param_1 = 0;
    return;
  }
switchD_0135054c_caseD_6:
  *param_1 = 4;
  return;
}

