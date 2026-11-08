// FUN_0074dba0 @ 0074dba0 size=100 calls_out=5 calls_in=3
// strings: 

void FUN_0074dba0(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0074c5a4();
  FUN_007921ac(param_1 + 0xd0);
  FUN_01139b38(*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xcc));
  piVar2 = *(int **)(param_1 + 0x184);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0076db24(*(undefined4 *)(param_1 + 0x184));
  }
  if (*(short *)(param_1 + 0xdc) == 0x1b) {
    return;
  }
  FUN_0074d990((short *)(param_1 + 0xdc));
  return;
}

