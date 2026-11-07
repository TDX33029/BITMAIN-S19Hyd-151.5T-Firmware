// FUN_00b35708 @ 00b35708 size=96 calls_out=1 calls_in=1
// strings: status

undefined4 FUN_00b35708(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 4) {
    iVar1 = thunk_FUN_01bed842(param_1 + 8,&DAT_0056ca38,4);
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 2;
    if (param_2 == 6) {
      iVar1 = thunk_FUN_01bed842(param_1 + 8,"status",6);
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = 2;
      }
    }
  }
  return uVar2;
}

