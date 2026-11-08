// FUN_009386bc @ 009386bc size=96 calls_out=1 calls_in=1
// strings: update | removePassword

undefined4 FUN_009386bc(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0xe) {
    iVar1 = thunk_FUN_01bed842(param_1 + 8,"removePassword",0xe);
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 2;
    if (param_2 == 6) {
      iVar1 = thunk_FUN_01bed842(param_1 + 8,"update",6);
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = 2;
      }
    }
  }
  return uVar2;
}

