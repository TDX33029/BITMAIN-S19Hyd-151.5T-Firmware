// FUN_0071cf74 @ 0071cf74 size=104 calls_out=4 calls_in=4
// strings: 

void FUN_0071cf74(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0134c298(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  FUN_0134c054(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),8,0x68);
  FUN_007251fc(param_1 + 0x14);
  if (param_1 == -1) {
    return;
  }
  piVar2 = (int *)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(param_1);
    return;
  }
  return;
}

