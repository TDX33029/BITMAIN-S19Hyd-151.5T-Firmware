// FUN_00c43ffc @ 00c43ffc size=112 calls_out=2 calls_in=0
// strings: 

void FUN_00c43ffc(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*param_1 != 0) {
    thunk_FUN_016d3fb4(param_1[1]);
  }
  iVar3 = param_1[0x37];
  iVar4 = param_1[0x38];
  for (iVar2 = 0; iVar4 != iVar2; iVar2 = iVar2 + 1) {
    iVar1 = iVar3 + iVar2 * 0x20;
    if (*(int *)(iVar1 + 8) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar1 + 0xc));
    }
  }
  if (param_1[0x36] != 0) {
    thunk_FUN_016d3fb4(iVar3);
  }
  FUN_00c2db98(param_1 + 4);
  return;
}

