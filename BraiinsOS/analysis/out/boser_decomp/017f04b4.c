// FUN_017f04b4 @ 017f04b4 size=116 calls_out=2 calls_in=3
// strings: 

void FUN_017f04b4(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (*param_2 == 3 && param_2[1] == 0) {
    piVar3 = (int *)param_2[0x32];
    iVar2 = param_2[2];
    *param_1 = 3;
    param_1[1] = 0;
    param_1[2] = iVar2;
  }
  else {
    piVar3 = (int *)param_2[0x32];
    FUN_0178234c(param_1,piVar3,param_2);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01784968(param_2[0x32]);
    return;
  }
  return;
}

