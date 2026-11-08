// FUN_01143880 @ 01143880 size=64 calls_out=2 calls_in=11
// strings: 

void FUN_01143880(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2 + 1;
  iVar1 = param_1;
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_011438f4(iVar1);
    iVar1 = iVar1 + 0xb8;
  }
  if (param_2 == 0) {
    return;
  }
  thunk_FUN_01be4678(param_1);
  return;
}

