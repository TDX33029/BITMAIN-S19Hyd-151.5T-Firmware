// FUN_016578f4 @ 016578f4 size=192 calls_out=1 calls_in=1
// strings: counter | summary | histogram | gauge

undefined4 FUN_016578f4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 5) {
    iVar1 = thunk_FUN_01bed842(param_1,"gauge",5);
    if (iVar1 == 0) {
      return 1;
    }
  }
  else {
    if (param_2 == 9) {
      iVar1 = thunk_FUN_01bed842(param_1,"histogram",9);
      uVar2 = 4;
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      return uVar2;
    }
    if (param_2 == 7) {
      iVar1 = thunk_FUN_01bed842(param_1,"counter",7);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = thunk_FUN_01bed842(param_1,"summary",7);
      uVar2 = 4;
      if (iVar1 == 0) {
        uVar2 = 3;
      }
      return uVar2;
    }
  }
  return 4;
}

