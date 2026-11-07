// FUN_01a38238 @ 01a38238 size=172 calls_out=4 calls_in=1
// strings: 

void FUN_01a38238(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  
  piVar3 = (int *)*param_1;
  FUN_01a17ec4(piVar3);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  iVar2 = *param_1;
  uVar4 = *(undefined4 *)(iVar2 + 8);
  iVar5 = *(int *)(iVar2 + 0xc);
  FUN_01a38888(uVar4,iVar5);
  if (iVar5 != 0) {
    thunk_FUN_01be4678(uVar4);
  }
  if (iVar2 == -1) {
    return;
  }
  piVar3 = (int *)(iVar2 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(iVar2);
    return;
  }
  return;
}

