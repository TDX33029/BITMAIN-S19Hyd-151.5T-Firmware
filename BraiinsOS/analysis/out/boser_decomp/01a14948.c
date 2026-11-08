// FUN_01a14948 @ 01a14948 size=68 calls_out=2 calls_in=0
// strings: 

void FUN_01a14948(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2 + 1;
  iVar1 = param_1 + 8;
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_01a149c0(iVar1);
    iVar1 = iVar1 + 0x68;
  }
  if (param_2 == 0) {
    return;
  }
  thunk_FUN_01be4678(param_1);
  return;
}

