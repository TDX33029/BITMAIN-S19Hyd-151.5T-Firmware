// FUN_01a21cd4 @ 01a21cd4 size=272 calls_out=8 calls_in=1
// strings: 

void FUN_01a21cd4(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  switch(*(undefined1 *)(param_1 + 0x4d)) {
  case 0:
    piVar2 = *(int **)(param_1 + 0x44);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38404(*(undefined4 *)(param_1 + 0x44));
    }
    FUN_019fafc0(param_1 + 0x20);
    FUN_019fb03c(param_1 + 0x48);
    return;
  default:
    return;
  case 3:
    FUN_019faf5c(param_1 + 0x50);
    goto LAB_01a21dbc;
  case 4:
    cVar1 = *(char *)(param_1 + 0x7c);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x78);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x58);
    }
    goto LAB_01a21dbc;
  case 5:
    FUN_01139b38(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
    break;
  case 6:
    FUN_01139b38(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
    FUN_0134c054(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x58),1,0x10);
  }
  *(undefined1 *)(param_1 + 0x4c) = 0;
  FUN_019f8c54(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
LAB_01a21dbc:
  FUN_019fb03c(param_1 + 0x34);
  FUN_019fafc0(param_1);
  piVar2 = *(int **)(param_1 + 0x30);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38404(*(undefined4 *)(param_1 + 0x30));
    return;
  }
  return;
}

