// FUN_017995b8 @ 017995b8 size=272 calls_out=7 calls_in=1
// strings: 

void FUN_017995b8(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x11d) == '\0') {
    FUN_0179791c(param_1);
    FUN_01435814(param_1 + 0xa8);
    return;
  }
  if (*(char *)(param_1 + 0x11d) != '\x03') {
    return;
  }
  FUN_01139b38(*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4));
  FUN_01799830(param_1 + 0x80);
  piVar2 = *(int **)(param_1 + 0x10c);
  *(undefined1 *)(param_1 + 0x11f) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018bcb30(*(undefined4 *)(param_1 + 0x10c));
  }
  FUN_01784e10(param_1 + 0x100);
  piVar2 = *(int **)(param_1 + 0x74);
  *(undefined1 *)(param_1 + 0x120) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018bcb30(*(undefined4 *)(param_1 + 0x74));
  }
  piVar2 = *(int **)(param_1 + 0x78);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01784b8c(*(undefined4 *)(param_1 + 0x78));
  }
  if (*(char *)(param_1 + 0x60) == '\x02') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x017996ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x50) + 0x10))
            (param_1 + 0x5c,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  return;
}

