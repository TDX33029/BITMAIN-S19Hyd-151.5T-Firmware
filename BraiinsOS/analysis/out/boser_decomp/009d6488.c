// FUN_009d6488 @ 009d6488 size=80 calls_out=2 calls_in=1
// strings: 

void FUN_009d6488(int *param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_0132b958(param_1[9],param_1[10],8,0x28);
  iVar1 = param_1[1];
  if (iVar1 == 0) {
    return;
  }
  iVar2 = iVar1 * 8 + 8;
  if (iVar1 + iVar2 == -5) {
    return;
  }
  thunk_FUN_01be4678(*param_1 - iVar2);
  return;
}

