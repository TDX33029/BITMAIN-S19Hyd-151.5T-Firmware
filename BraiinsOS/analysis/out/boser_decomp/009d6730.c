// FUN_009d6730 @ 009d6730 size=160 calls_out=3 calls_in=2
// strings: 

void FUN_009d6730(byte *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  iVar2 = *param_1 - 3;
  if (*param_1 < 3 || iVar2 == 0) {
    iVar2 = 0;
  }
  if (iVar2 == 1) {
    uVar5 = *(undefined4 *)(param_1 + 4);
    puVar6 = *(undefined4 **)(param_1 + 8);
    pcVar4 = (code *)*puVar6;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar5);
    }
    if (puVar6[1] != 0) {
      thunk_FUN_01be4678(uVar5);
      return;
    }
  }
  else if (iVar2 == 0) {
    piVar3 = *(int **)(param_1 + 0x2c);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a75e6c(*(undefined4 *)(param_1 + 0x2c));
    }
    if (*param_1 == 3) {
      return;
    }
    FUN_01706d0c(param_1);
    return;
  }
  return;
}

