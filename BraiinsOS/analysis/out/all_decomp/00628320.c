// FUN_00628320 @ 00628320 size=76 calls_out=3 calls_in=0
// strings: 

void FUN_00628320(undefined4 *param_1)

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
    FUN_006143f8(param_1);
  }
  FUN_00620a84(param_1 + 1);
  FUN_00620b14(param_1[5],param_1[6]);
  return;
}

