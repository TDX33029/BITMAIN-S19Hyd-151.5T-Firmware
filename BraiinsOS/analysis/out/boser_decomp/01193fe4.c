// FUN_01193fe4 @ 01193fe4 size=164 calls_out=5 calls_in=1
// strings: 

void FUN_01193fe4(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 == 2) {
    return;
  }
  FUN_01193f64(param_1 + 0x41);
  FUN_010785f4(param_1 + 0x42);
  FUN_01194058(param_1);
  piVar2 = (int *)param_1[0x45];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1[0x45]);
  }
  piVar2 = (int *)param_1[0x46];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(param_1[0x46],param_1[0x47]);
    return;
  }
  return;
}

