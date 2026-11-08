// FUN_017f0178 @ 017f0178 size=180 calls_out=6 calls_in=0
// strings: 

void FUN_017f0178(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)param_1[0x32];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01784968(param_1[0x32]);
  }
  if (*param_1 == 3 && param_1[1] == 0) {
    FUN_017e2dac(param_1[2]);
    return;
  }
  if ((9 < *(byte *)(param_1 + 0x2b)) && (param_1[0x2d] != 0)) {
    thunk_FUN_01be4678(param_1[0x2c]);
  }
  FUN_019bb7e0(param_1[0x14],param_1[0x15]);
  FUN_0142e6dc(param_1);
  if (param_1[0x26] == 0) {
    return;
  }
  FUN_017c30a4(param_1 + 0x27);
  return;
}

