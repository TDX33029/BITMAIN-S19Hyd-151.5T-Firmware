// FUN_014eefd8 @ 014eefd8 size=272 calls_out=2 calls_in=1
// strings: assets | release_date | toolbox_version | description

void FUN_014eefd8(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  switch(param_3) {
  case 6:
    iVar2 = thunk_FUN_01bed842(param_2,&DAT_004ba595,6);
    if (iVar2 == 0) {
      uVar1 = 1;
    }
    else {
      iVar2 = thunk_FUN_01bed842(param_2,"assets",6);
      if (iVar2 != 0) goto switchD_014eeffc_caseD_7;
      uVar1 = 4;
    }
    break;
  default:
    goto switchD_014eeffc_caseD_7;
  case 0xb:
    iVar2 = thunk_FUN_01bed842(param_2,"description",0xb);
    if (iVar2 != 0) goto switchD_014eeffc_caseD_7;
    uVar1 = 3;
    break;
  case 0xc:
    iVar2 = thunk_FUN_01bed842(param_2,"release_date",0xc);
    if (iVar2 != 0) goto switchD_014eeffc_caseD_7;
    uVar1 = 2;
    break;
  case 0xf:
    iVar2 = thunk_FUN_01bed842(param_2,"toolbox_version",0xf);
    if (iVar2 == 0) {
      uVar1 = 0;
      param_1[1] = 0;
      goto LAB_014ef0e4;
    }
    goto switchD_014eeffc_caseD_7;
  }
  param_1[1] = uVar1;
  uVar1 = 0;
LAB_014ef0e4:
  *param_1 = uVar1;
  return;
switchD_014eeffc_caseD_7:
  uVar3 = FUN_014dedb0(param_2,param_3,&DAT_01cfa31c,5);
  *(undefined4 *)(param_1 + 4) = uVar3;
  uVar1 = 1;
  goto LAB_014ef0e4;
}

