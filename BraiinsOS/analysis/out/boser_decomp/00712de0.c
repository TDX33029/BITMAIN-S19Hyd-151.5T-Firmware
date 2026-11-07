// FUN_00712de0 @ 00712de0 size=56 calls_out=1 calls_in=1
// strings: 

void FUN_00712de0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != param_2) {
    iVar2 = (param_3 - param_2) + 1;
    iVar1 = param_1 + param_2 * 0x24;
    while (iVar2 = iVar2 + -1, iVar2 != 0) {
      FUN_00711da4(iVar1);
      iVar1 = iVar1 + 0x24;
    }
  }
  return;
}

