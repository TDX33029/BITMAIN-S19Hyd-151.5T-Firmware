// FUN_0190e9b0 @ 0190e9b0 size=200 calls_out=5 calls_in=2
// strings: 

void FUN_0190e9b0(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)param_1[0x40];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018fa168(param_1[0x40]);
  }
  if (param_1[0xb] != -0x80000000) {
    FUN_0190ebd8(param_1 + 2);
  }
  if (((char)param_1[0x41] == '\0') && (param_1[0x42] != -0x80000000)) {
    FUN_0134bd64(param_1[0x42],param_1[0x43]);
  }
  FUN_01902274(param_1 + 0x46);
  piVar2 = (int *)*param_1;
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018fa118(*param_1);
    }
  }
  iVar3 = 0;
  do {
    *(undefined1 *)((int)param_1 + iVar3 + 0xd0) = 0;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x30);
  return;
}

