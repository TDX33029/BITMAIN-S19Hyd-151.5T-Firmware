// FUN_0185c0fc @ 0185c0fc size=160 calls_out=3 calls_in=3
// strings: 

void FUN_0185c0fc(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0182a8d4(param_1 + 0x2c);
  piVar2 = *(int **)(param_1 + 0x40);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01853618(*(undefined4 *)(param_1 + 0x40));
  }
  if (*(char *)(param_1 + 0x28) != '\x02') {
    (**(code **)(*(int *)(param_1 + 0x18) + 0x10))
              (param_1 + 0x24,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
  }
  piVar2 = *(int **)(param_1 + 0x10);
  if (piVar2 == (int *)0x0) {
    return;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    return;
  }
  return;
}

