// FUN_00dbdd6c @ 00dbdd6c size=104 calls_out=3 calls_in=2
// strings: 

void FUN_00dbdd6c(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    return;
  }
  piVar2 = (int *)param_1[0x13];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01182b58(param_1[0x13]);
  }
  FUN_019bb7e0(*param_1,param_1[1]);
  if (param_1[4] == -0x80000000) {
    return;
  }
  FUN_00dbdd2c(param_1 + 4);
  return;
}

