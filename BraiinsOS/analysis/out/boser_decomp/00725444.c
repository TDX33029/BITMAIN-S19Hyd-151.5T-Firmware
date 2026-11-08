// FUN_00725444 @ 00725444 size=140 calls_out=4 calls_in=2
// strings: 

void FUN_00725444(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  piVar2 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0071ce80(param_1);
  }
  FUN_00725504(param_1 + 1);
  iVar3 = param_1[5];
  iVar5 = param_1[6];
  iVar6 = iVar5 + 1;
  iVar4 = iVar3;
  while (iVar6 = iVar6 + -1, iVar6 != 0) {
    FUN_007244d4(iVar4);
    iVar4 = iVar4 + 0x120;
  }
  if (iVar5 == 0) {
    return;
  }
  thunk_FUN_01be4678(iVar3);
  return;
}

