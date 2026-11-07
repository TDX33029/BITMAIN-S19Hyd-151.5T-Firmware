// FUN_00b35770 @ 00b35770 size=96 calls_out=1 calls_in=1
// strings: connect | setEnabled

undefined4 FUN_00b35770(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 10) {
    iVar1 = thunk_FUN_01bed842(param_1 + 8,"setEnabled",10);
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 2;
    if (param_2 == 7) {
      iVar1 = thunk_FUN_01bed842(param_1 + 8,"connect",7);
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = 2;
      }
    }
  }
  return uVar2;
}

