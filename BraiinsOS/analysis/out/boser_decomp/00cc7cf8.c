// FUN_00cc7cf8 @ 00cc7cf8 size=192 calls_out=4 calls_in=1
// strings: 

void FUN_00cc7cf8(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)((int)param_1 + 0x2d) == '\x03') {
    if (*(char *)(param_1 + 0x16b) == '\x03') {
      FUN_00ba71b0(param_1 + 0x10);
    }
  }
  else {
    if (*(char *)((int)param_1 + 0x2d) != '\x04') {
      return;
    }
    FUN_00fe4378(param_1[0xc],param_1[0xd]);
  }
  piVar2 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0121cce0(*param_1);
  }
  if (*(char *)(param_1 + 0xb) != '\0') {
    piVar2 = (int *)param_1[9];
    DataMemoryBarrier(0xb);
    *(undefined1 *)(piVar2 + 2) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(param_1[9]);
    }
  }
  *(undefined1 *)(param_1 + 0xb) = 0;
  return;
}

