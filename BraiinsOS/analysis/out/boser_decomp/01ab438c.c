// FUN_01ab438c @ 01ab438c size=76 calls_out=2 calls_in=1
// strings: 

void FUN_01ab438c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = param_2 + 1;
    iVar1 = param_1 + 0x20;
    while (iVar2 = iVar2 + -1, iVar2 != 0) {
      FUN_01aae24c(iVar1);
      iVar1 = iVar1 + 0x40;
    }
    if (param_2 != 0) {
      thunk_FUN_01be4678(param_1);
      return;
    }
  }
  return;
}

