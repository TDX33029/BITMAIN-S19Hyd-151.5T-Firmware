// FUN_018f0940 @ 018f0940 size=336 calls_out=3 calls_in=1
// strings: 

void FUN_018f0940(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (*param_1 != -0x7fffffd7) {
    FUN_0193b140();
    return;
  }
  piVar4 = (int *)param_1[1];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar3 + -1;
  if (iVar3 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  iVar3 = param_1[1];
  if (*(int *)(iVar3 + 0x44) != 0) {
    thunk_FUN_01be4678(*(undefined4 *)(iVar3 + 0x40));
  }
  if (*(int *)(iVar3 + 0x58) != 0) {
    thunk_FUN_01be4678(*(undefined4 *)(iVar3 + 0x54));
  }
  if (*(int *)(iVar3 + 0x60) != 0) {
    thunk_FUN_01be4678(*(undefined4 *)(iVar3 + 0x5c));
  }
  if (*(int *)(iVar3 + 0x68) != 0) {
    thunk_FUN_01be4678(*(undefined4 *)(iVar3 + 100));
  }
  if (*(int *)(iVar3 + 0x7c) != 0) {
    thunk_FUN_01be4678(*(undefined4 *)(iVar3 + 0x78));
  }
  if (*(int *)(iVar3 + 0x84) != 0) {
    thunk_FUN_01be4678(*(undefined4 *)(iVar3 + 0x80));
  }
  if (*(int *)(iVar3 + 0xc) != 0) {
    thunk_FUN_01be4678(*(undefined4 *)(iVar3 + 8));
  }
  if (*(int *)(iVar3 + 0x1c) != 0) {
    thunk_FUN_01be4678(*(undefined4 *)(iVar3 + 0x18));
  }
  if (*(int *)(iVar3 + 0x30) != 0) {
    thunk_FUN_01be4678(*(undefined4 *)(iVar3 + 0x2c));
  }
  if (*(int *)(iVar3 + 0x3c) != 0) {
    thunk_FUN_01be4678(*(undefined4 *)(iVar3 + 0x38));
  }
  if (iVar3 == -1) {
    return;
  }
  piVar4 = (int *)(iVar3 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(iVar3);
    return;
  }
  return;
}

