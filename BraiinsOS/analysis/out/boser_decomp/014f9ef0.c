// FUN_014f9ef0 @ 014f9ef0 size=364 calls_out=1 calls_in=2
// strings: 

undefined4 FUN_014f9ef0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  switch(param_2) {
  case 1:
    if ((char)*param_1 == '.') {
      return 0;
    }
    break;
  case 2:
    if ((short)*param_1 == 0x2e2e) {
      return 1;
    }
    break;
  case 3:
    iVar1 = thunk_FUN_01bed842(param_1,&DAT_005327b3,3);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = thunk_FUN_01bed842(param_1,&DAT_005327b0,3);
    if (iVar1 == 0) {
      return 0;
    }
    break;
  case 4:
    if (*param_1 == 0x4532252e) {
      return 1;
    }
    if (*param_1 == 0x6532252e) {
      return 1;
    }
    if (*param_1 == 0x2e453225) {
      return 1;
    }
    if (*param_1 == 0x2e653225) {
      return 1;
    }
    return 2;
  case 6:
    iVar1 = thunk_FUN_01bed842(param_1,&DAT_005327aa,6);
    if (iVar1 == 0) {
      return 1;
    }
    iVar1 = thunk_FUN_01bed842(param_1,&DAT_005327a4,6);
    if (iVar1 == 0) {
      return 1;
    }
    iVar1 = thunk_FUN_01bed842(param_1,&DAT_0053279e,6);
    if (iVar1 == 0) {
      return 1;
    }
    iVar1 = thunk_FUN_01bed842(param_1,&DAT_00532798,6);
    if (iVar1 == 0) {
      return 1;
    }
    return 2;
  }
  return 2;
}

