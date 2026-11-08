// FUN_01156c50 @ 01156c50 size=388 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_01156c50(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  switch(param_2) {
  case 1:
    uVar2 = 0;
    if ((char)*param_1 != '.') {
      return 2;
    }
    break;
  case 2:
    if ((short)*param_1 == 0x2e2e) {
      return 1;
    }
    return 2;
  case 3:
    iVar1 = thunk_FUN_016dd50a(param_1,&DAT_00418634,3);
    uVar2 = 0;
    if (iVar1 != 0) {
      iVar1 = thunk_FUN_016dd50a(param_1,&DAT_00418631,3);
      uVar2 = 0;
      if (iVar1 != 0) {
        return 2;
      }
    }
    break;
  case 4:
    uVar2 = 1;
    if ((((*param_1 != 0x4532252e) && (*param_1 != 0x6532252e)) && (*param_1 != 0x2e453225)) &&
       (*param_1 != 0x2e653225)) {
      return 2;
    }
    break;
  default:
    return 2;
  case 6:
    iVar1 = thunk_FUN_016dd50a(param_1,&DAT_0041862b,6);
    uVar2 = 1;
    if (iVar1 != 0) {
      iVar1 = thunk_FUN_016dd50a(param_1,&DAT_00418625,6);
      if (iVar1 == 0) {
        return 1;
      }
      iVar1 = thunk_FUN_016dd50a(param_1,&DAT_0041861f,6);
      if (iVar1 == 0) {
        return 1;
      }
      iVar1 = thunk_FUN_016dd50a(param_1,&DAT_00418619,6);
      uVar2 = 2;
      if (iVar1 == 0) {
        uVar2 = 1;
      }
      return uVar2;
    }
  }
  return uVar2;
}

