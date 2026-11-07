// FUN_01a388cc @ 01a388cc size=104 calls_out=3 calls_in=3
// strings: 

void FUN_01a388cc(int param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = *(undefined4 *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 0xc);
  FUN_01a38934(uVar3,iVar4);
  if (iVar4 != 0) {
    thunk_FUN_01be4678(uVar3);
  }
  if (param_1 == -1) {
    return;
  }
  piVar2 = (int *)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(param_1);
    return;
  }
  return;
}

