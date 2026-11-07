// FUN_01267130 @ 01267130 size=124 calls_out=1 calls_in=1
// strings: errors | components

void FUN_01267130(undefined1 *param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  if (param_3 == 10) {
    iVar2 = thunk_FUN_01bed842(param_2,"components",10);
    if (iVar2 == 0) {
      uVar1 = 1;
      goto LAB_01267194;
    }
  }
  else if ((param_3 == 6) && (iVar2 = thunk_FUN_01bed842(param_2,"errors",6), iVar2 == 0)) {
    uVar1 = 0;
    goto LAB_01267194;
  }
  uVar1 = 2;
LAB_01267194:
  param_1[1] = uVar1;
  *param_1 = 0;
  return;
}

