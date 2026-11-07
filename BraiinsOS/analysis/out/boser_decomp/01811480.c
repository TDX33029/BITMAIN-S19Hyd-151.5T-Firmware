// FUN_01811480 @ 01811480 size=68 calls_out=1 calls_in=2
// strings: 

void FUN_01811480(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  FUN_018817d0(piVar4 + 2);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar2 + -1;
  if (iVar2 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x21) != '\x02') {
    FUN_014323b0(iVar2 + 0x14);
    FUN_0177749c(iVar2 + 8);
  }
  if (*(int *)(iVar2 + 0x28) != 0) {
    (**(code **)(*(int *)(iVar2 + 0x28) + 0xc))(*(undefined4 *)(iVar2 + 0x2c));
  }
  if (*(int *)(iVar2 + 0x34) != 0) {
    (**(code **)(*(int *)(iVar2 + 0x34) + 0xc))(*(undefined4 *)(iVar2 + 0x38));
  }
  if (iVar2 == -1) {
    return;
  }
  piVar4 = (int *)(iVar2 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(iVar2);
    return;
  }
  return;
}

