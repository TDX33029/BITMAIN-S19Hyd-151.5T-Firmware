// FUN_01926900 @ 01926900 size=132 calls_out=6 calls_in=1
// strings: 

void FUN_01926900(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x11c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018fa168(*(undefined4 *)(param_1 + 0x11c));
  }
  if (*(int *)(param_1 + 0x7c) != -0x80000000) {
    FUN_0191fb20(param_1 + 0x40);
  }
  if ((*(char *)(param_1 + 0x124) == '\0') && (*(int *)(param_1 + 0x128) != -0x80000000)) {
    FUN_0134bd64(*(int *)(param_1 + 0x128),*(undefined4 *)(param_1 + 300));
  }
  FUN_01902274(param_1 + 0x138);
  FUN_019217b0(param_1 + 0x88);
  FUN_01925dc4(param_1 + 0x154);
  return;
}

