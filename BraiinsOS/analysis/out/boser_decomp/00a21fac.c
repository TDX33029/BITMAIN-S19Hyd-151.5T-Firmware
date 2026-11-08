// FUN_00a21fac @ 00a21fac size=136 calls_out=1 calls_in=1
// strings: login | logout

undefined4 FUN_00a21fac(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  param_1 = param_1 + 8;
  if (param_2 == 6) {
    iVar1 = thunk_FUN_01bed842(param_1,"logout",6);
    if (iVar1 == 0) {
      return 1;
    }
    iVar1 = thunk_FUN_01bed842(param_1,&DAT_004e972d,6);
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    return uVar2;
  }
  if (param_2 != 5) {
    return 3;
  }
  iVar1 = thunk_FUN_01bed842(param_1,"login",5);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 3;
  }
  return uVar2;
}

