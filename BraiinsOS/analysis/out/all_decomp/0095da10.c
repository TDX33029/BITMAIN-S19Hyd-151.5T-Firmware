// FUN_0095da10 @ 0095da10 size=184 calls_out=6 calls_in=1
// strings: 

void FUN_0095da10(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  cVar1 = *(char *)(param_1 + 0x194);
  if (cVar1 == '\0') {
    piVar3 = *(int **)(param_1 + 0x184);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078d010(*(undefined4 *)(param_1 + 0x184));
    }
    FUN_00b40204(param_1 + 0x188);
    FUN_0095de10(param_1);
    return;
  }
  if (cVar1 == '\x03') {
    FUN_0095dea8(param_1 + 0x1a8);
    if (4 < *(ushort *)(param_1 + 0x19e)) {
      *(undefined2 *)(param_1 + 0x1a0) = 0;
    }
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    FUN_009605ac(param_1 + 0x198);
    FUN_00963b14(param_1 + 0x90);
  }
  *(undefined1 *)(param_1 + 0x195) = 0;
  FUN_0095de10(param_1 + 0x48);
  return;
}

