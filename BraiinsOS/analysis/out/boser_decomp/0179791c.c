// FUN_0179791c @ 0179791c size=100 calls_out=2 calls_in=6
// strings: 

void FUN_0179791c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_017979e8(param_1 + 0x24);
  piVar2 = *(int **)(param_1 + 0x38);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01784b8c(*(undefined4 *)(param_1 + 0x38));
  }
  if (*(char *)(param_1 + 0x20) == '\x02') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0179797c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x10) + 0x10))
            (param_1 + 0x1c,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18));
  return;
}

