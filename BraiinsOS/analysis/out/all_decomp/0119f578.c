// FUN_0119f578 @ 0119f578 size=240 calls_out=4 calls_in=1
// strings: 

void FUN_0119f578(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 == 2) {
    return;
  }
  piVar2 = (int *)param_1[5];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_013c0df4(param_1[5]);
  }
  if (param_1[2] != 0) {
    thunk_FUN_016d3fb4(param_1[3]);
  }
  FUN_00aa21e4(param_1 + 0x9a);
  if (param_1[0xb5] != -0x80000000) {
    if (param_1[0xb5] != 0) {
      thunk_FUN_016d3fb4(param_1[0xb6]);
    }
    if (param_1[0xb8] != 0) {
      thunk_FUN_016d3fb4(param_1[0xb9]);
    }
  }
  if ((param_1[0x96] & 0x7fffffffU) == 0) {
    iVar3 = param_1[0x92];
  }
  else {
    thunk_FUN_016d3fb4(param_1[0x97]);
    iVar3 = param_1[0x92];
  }
  if (iVar3 != 2) {
    FUN_00aa22ac(param_1 + 0x36);
    FUN_00aa22ac(param_1 + 0x66);
  }
  if (param_1[0x32] == 2) {
    return;
  }
  FUN_00aa22ac(param_1 + 6);
  return;
}

