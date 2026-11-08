// FUN_00fad050 @ 00fad050 size=68 calls_out=2 calls_in=0
// strings: 

void FUN_00fad050(undefined4 *param_1)

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
    FUN_01177340(*param_1);
  }
  FUN_01139b38(param_1[1],param_1[2]);
  return;
}

