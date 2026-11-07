// FUN_01a149c0 @ 01a149c0 size=104 calls_out=3 calls_in=2
// strings: 

void FUN_01a149c0(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 == 3 && param_1[1] == 0) {
    return;
  }
  FUN_0134c054(param_1[0xc],param_1[0xd],4,4);
  FUN_019bb7e0(param_1[0xf],param_1[0x10]);
  piVar2 = (int *)param_1[0x12];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38404(param_1[0x12]);
    return;
  }
  return;
}

