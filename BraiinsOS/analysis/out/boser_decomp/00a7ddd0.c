// FUN_00a7ddd0 @ 00a7ddd0 size=152 calls_out=5 calls_in=1
// strings: 

void FUN_00a7ddd0(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_01707d70(param_1 + 0x18);
  FUN_00943998(param_1 + 0x38);
  FUN_00943adc(param_1 + 0x58);
  FUN_00a7dd44(param_1 + 0x8c);
  piVar2 = *(int **)(param_1 + 0x78);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c));
  }
  piVar2 = *(int **)(param_1 + 0x80);
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
    FUN_018531c0(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
    return;
  }
  return;
}

