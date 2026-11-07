// FUN_0199c4b0 @ 0199c4b0 size=80 calls_out=3 calls_in=1
// strings: 

void FUN_0199c4b0(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01986bf0(param_1);
  }
  FUN_0199b6d8(param_1 + 1);
  FUN_0199b76c(param_1[5],param_1[6]);
  return;
}

