// FUN_00d32270 @ 00d32270 size=140 calls_out=7 calls_in=2
// strings: 

void FUN_00d32270(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  piVar2 = piVar4 + 0x11;
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    FUN_009d3b04(piVar4 + 2);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00a96a44(*param_1);
  }
  FUN_00d321d0(param_1 + 1);
  FUN_011e82d8(param_1[2]);
  FUN_012104a4(param_1[3]);
  FUN_011e8374(param_1[4]);
  FUN_00d31fd8(param_1 + 5);
  return;
}

