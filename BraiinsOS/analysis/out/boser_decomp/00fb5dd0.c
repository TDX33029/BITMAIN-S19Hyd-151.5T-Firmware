// FUN_00fb5dd0 @ 00fb5dd0 size=204 calls_out=3 calls_in=0
// strings: 

void FUN_00fb5dd0(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  cVar1 = *(char *)(param_1 + 0x124);
  if (cVar1 == '\0') {
    piVar3 = *(int **)(param_1 + 0x120);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01182b58(*(undefined4 *)(param_1 + 0x120));
    }
    FUN_00ebabdc(param_1);
    return;
  }
  if (cVar1 == '\x03') {
    FUN_00fb5c10(param_1 + 0x128);
  }
  else if (cVar1 != '\x04') {
    return;
  }
  if (*(char *)(param_1 + 0x125) != '\0') {
    FUN_00ebabdc(param_1 + 0x90);
  }
  *(undefined1 *)(param_1 + 0x125) = 0;
  if (*(char *)(param_1 + 0x126) != '\0') {
    piVar3 = *(int **)(param_1 + 300);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01182b58(*(undefined4 *)(param_1 + 300));
    }
  }
  *(undefined1 *)(param_1 + 0x126) = 0;
  return;
}

