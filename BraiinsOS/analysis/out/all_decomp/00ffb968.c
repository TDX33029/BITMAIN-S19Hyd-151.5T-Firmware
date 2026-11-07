// FUN_00ffb968 @ 00ffb968 size=88 calls_out=2 calls_in=0
// strings: 

void FUN_00ffb968(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x4c) != '\x03' && *(char *)(param_1 + 0x4c) != '\x02') {
    piVar2 = *(int **)(param_1 + 0x40);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
    }
  }
  FUN_00ffba98(param_1 + 0x58);
  return;
}

