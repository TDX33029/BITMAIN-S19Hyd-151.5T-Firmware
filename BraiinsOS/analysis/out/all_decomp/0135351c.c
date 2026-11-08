// FUN_0135351c @ 0135351c size=592 calls_out=1 calls_in=0
// strings: dependencies | allOf | anyOf | oneOf | propertyNames | additionalItems

void FUN_0135351c(undefined4 *param_1,int param_2,byte *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  
  if (0x11 < *(int *)(param_2 + 8) - 3U) goto switchD_01353548_caseD_4;
  uVar1 = *(undefined4 *)(param_2 + 4);
  switch(*(int *)(param_2 + 8)) {
  case 3:
    iVar2 = thunk_FUN_016dd50a(uVar1,"not",3);
    break;
  default:
    goto switchD_01353548_caseD_4;
  case 5:
    iVar2 = thunk_FUN_016dd50a(uVar1,"allOf",5);
    if (((iVar2 == 0) || (iVar2 = thunk_FUN_016dd50a(uVar1,"anyOf",5), iVar2 == 0)) ||
       (iVar2 = thunk_FUN_016dd50a(uVar1,"oneOf",5), iVar2 == 0)) {
      if (*param_3 == 4) {
LAB_0135375c:
        iVar2 = *(int *)(param_3 + 8);
        iVar5 = *(int *)(param_3 + 0xc);
        *param_1 = 1;
        param_1[1] = iVar2;
        param_1[2] = iVar2 + iVar5 * 0x18;
        return;
      }
      goto switchD_01353548_caseD_4;
    }
    iVar2 = thunk_FUN_016dd50a(uVar1,&DAT_004146ea,5);
    if (iVar2 != 0) goto switchD_01353548_caseD_4;
    if (*param_3 == 4) goto LAB_0135375c;
    goto LAB_013536e4;
  case 8:
    iVar2 = thunk_FUN_016dd50a(uVar1,&DAT_0056aa28,8);
    goto joined_r0x01353688;
  case 10:
    uVar6 = 10;
    pcVar4 = "properties";
    goto LAB_01353700;
  case 0xb:
    uVar6 = 0xb;
    pcVar4 = "definitions";
    goto LAB_01353700;
  case 0xc:
    uVar3 = thunk_FUN_016dd50a(uVar1,"dependencies",0xc);
    bVar7 = uVar3 == 0;
    if (bVar7) {
      uVar3 = (uint)*param_3;
    }
    if (bVar7 && uVar3 == 5) {
      iVar2 = *(int *)(param_3 + 4);
      uVar6 = *(undefined4 *)(param_3 + 8);
      uVar1 = *(undefined4 *)(param_3 + 0xc);
      if (iVar2 == 0) {
        uVar1 = 0;
      }
      param_1[9] = uVar1;
      uVar3 = (uint)(iVar2 != 0);
      param_1[2] = 0;
      param_1[3] = iVar2;
      param_1[4] = uVar6;
      param_1[5] = uVar3;
      param_1[1] = uVar3;
      param_1[6] = 0;
      param_1[7] = iVar2;
      param_1[8] = uVar6;
      *param_1 = 3;
      return;
    }
    goto switchD_01353548_caseD_4;
  case 0xd:
    iVar2 = thunk_FUN_016dd50a(uVar1,"propertyNames",0xd);
joined_r0x01353688:
    if (iVar2 != 0) goto switchD_01353548_caseD_4;
    goto LAB_013536e4;
  case 0xf:
    iVar2 = thunk_FUN_016dd50a(uVar1,"additionalItems",0xf);
    break;
  case 0x11:
    uVar6 = 0x11;
    pcVar4 = "patternProperties";
LAB_01353700:
    uVar3 = thunk_FUN_016dd50a(uVar1,pcVar4,uVar6);
    bVar7 = uVar3 == 0;
    if (bVar7) {
      uVar3 = (uint)*param_3;
    }
    if (bVar7 && uVar3 == 5) {
      iVar2 = *(int *)(param_3 + 4);
      uVar6 = *(undefined4 *)(param_3 + 8);
      uVar1 = *(undefined4 *)(param_3 + 0xc);
      if (iVar2 == 0) {
        uVar1 = 0;
      }
      *param_1 = 2;
      param_1[9] = uVar1;
      uVar3 = (uint)(iVar2 != 0);
      param_1[2] = 0;
      param_1[3] = iVar2;
      param_1[4] = uVar6;
      param_1[5] = uVar3;
      param_1[1] = uVar3;
      param_1[6] = 0;
      param_1[7] = iVar2;
      param_1[8] = uVar6;
      return;
    }
    goto switchD_01353548_caseD_4;
  case 0x14:
    iVar2 = thunk_FUN_016dd50a(uVar1,"additionalProperties",0x14);
  }
  if (iVar2 == 0) {
LAB_013536e4:
    param_1[1] = param_3;
    *param_1 = 0;
    return;
  }
switchD_01353548_caseD_4:
  *param_1 = 4;
  return;
}

