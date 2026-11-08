// FUN_018b72bc @ 018b72bc size=104 calls_out=2 calls_in=1
// strings: 

void FUN_018b72bc(undefined4 *param_1)

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
    FUN_018531c0(*param_1,param_1[1]);
  }
  if (*(char *)(param_1 + 0xdf) == '\0') {
    FUN_0134bd64(param_1[0xe0],param_1[0xe1]);
  }
  if (param_1[0xda] == -0x80000000) {
    return;
  }
  FUN_0134bd64(param_1[0xda],param_1[0xdb]);
  return;
}

