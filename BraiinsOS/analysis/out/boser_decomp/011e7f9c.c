// FUN_011e7f9c @ 011e7f9c size=188 calls_out=11 calls_in=2
// strings: 

void FUN_011e7f9c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x60);
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
    FUN_00a96a44(*(undefined4 *)(param_1 + 0x60));
  }
  FUN_005fc298(*(undefined4 *)(param_1 + 100));
  FUN_011e82d8(*(undefined4 *)(param_1 + 0x68));
  FUN_011e8238(param_1 + 0x6c);
  FUN_011e8374(*(undefined4 *)(param_1 + 0x70));
  FUN_011e8410(*(undefined4 *)(param_1 + 0x74));
  FUN_011e84ac(param_1);
  FUN_01206678();
  FUN_011e7820(param_1 + 0x78);
  FUN_005faf6c(param_1 + 0x7c);
  return;
}

