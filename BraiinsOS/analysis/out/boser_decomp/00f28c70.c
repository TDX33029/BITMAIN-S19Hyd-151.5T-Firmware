// FUN_00f28c70 @ 00f28c70 size=132 calls_out=2 calls_in=1
// strings: 

void FUN_00f28c70(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x18);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01181c68(*(undefined4 *)(param_1 + 0x18));
  }
  FUN_00f28d54(param_1);
  if (*(uint *)(param_1 + 0x20) - 5 < 3) {
    return;
  }
  if ((*(uint *)(param_1 + 0x20) < 4) || (*(int *)(param_1 + 0x24) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00f28cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 0x24) + 0x10))
              (param_1 + 0x30,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
    return;
  }
  return;
}

