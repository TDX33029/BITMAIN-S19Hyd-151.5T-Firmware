// FUN_0120cd3c @ 0120cd3c size=268 calls_out=11 calls_in=1
// strings: 

void FUN_0120cd3c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if (*(char *)(param_1 + 0x17d) == '\x03') {
    if (*(char *)(param_1 + 0x164) == '\x03') {
      FUN_01a17e08(param_1 + 0x14c);
      if (*(int *)(param_1 + 0x150) != 0) {
        (**(code **)(*(int *)(param_1 + 0x150) + 0xc))(*(undefined4 *)(param_1 + 0x154));
      }
    }
    FUN_011e80e4(param_1 + 0x168);
    iVar3 = 0x10;
    FUN_011e81bc(param_1);
  }
  else {
    iVar3 = 0xb0;
    if (*(char *)(param_1 + 0x17d) != '\0') {
      return;
    }
  }
  param_1 = param_1 + iVar3;
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
  FUN_0120cf54(param_1);
  FUN_01206678();
  FUN_011e7820(param_1 + 0x78);
  FUN_005faf6c(param_1 + 0x7c);
  return;
}

