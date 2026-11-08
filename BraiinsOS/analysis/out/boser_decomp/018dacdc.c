// FUN_018dacdc @ 018dacdc size=136 calls_out=3 calls_in=0
// strings: 

void FUN_018dacdc(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)param_1[0x5b];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018bcb30(param_1[0x5b]);
  }
  if (param_1[6] != -0x80000000) {
    FUN_018c4448(param_1 + 4);
  }
  if ((char)param_1[0x56] == '\0') {
    FUN_0134bd64(param_1[0x57],param_1[0x58]);
  }
  if (param_1[0x52] != -0x80000000) {
    FUN_0134bd64(param_1[0x52],param_1[0x53]);
  }
  if (*param_1 == -0x80000000) {
    return;
  }
  FUN_0134bd64(*param_1,param_1[1]);
  return;
}

