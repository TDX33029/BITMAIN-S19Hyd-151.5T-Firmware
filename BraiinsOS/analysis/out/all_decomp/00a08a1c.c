// FUN_00a08a1c @ 00a08a1c size=452 calls_out=13 calls_in=1
// strings: 

void FUN_00a08a1c(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  switch(*(undefined1 *)(param_1 + 0x2d)) {
  case 3:
    if (*(char *)(param_1 + 0x95) == '\x03') {
      FUN_00a09070(param_1 + 0x38);
      return;
    }
    return;
  case 4:
    if (*(char *)(param_1 + 0x7c) == '\x03') {
      FUN_00a091b0(param_1 + 0x3c);
    }
    goto LAB_00a08b20;
  case 5:
    if (*(char *)(param_1 + 0x48) == '\x04') {
      FUN_00a9abbc(param_1 + 0x60);
      FUN_005c3320(param_1 + 0x60);
    }
    else if (*(char *)(param_1 + 0x48) == '\x03') {
      FUN_00a07b4c(param_1 + 0x50);
    }
    goto LAB_00a08b20;
  case 6:
    cVar1 = *(char *)(param_1 + 0x44);
    if (cVar1 == '\x05') {
      FUN_00a09274(param_1 + 0x48);
    }
    else {
      if (cVar1 == '\x04') {
        cVar1 = *(char *)(param_1 + 0x68);
        iVar4 = 0x60;
      }
      else {
        if (cVar1 != '\x03') break;
        cVar1 = *(char *)(param_1 + 0x54);
        iVar4 = 0x4c;
      }
      if (cVar1 == '\x03') {
        iVar3 = *(int *)(param_1 + iVar4);
        if (iVar3 != 0) {
          FUN_00aa0a58(iVar3,((int *)(param_1 + iVar4))[1],1);
        }
      }
    }
    break;
  case 7:
    FUN_00a0937c(param_1 + 0x34);
    break;
  case 8:
    FUN_00a096e0(param_1 + 0x30);
    break;
  case 9:
    if (*(char *)(param_1 + 0x90) == '\x03') {
      if (*(char *)(param_1 + 0x44) == '\x04') {
        cVar1 = *(char *)(param_1 + 0x8c);
        bVar5 = cVar1 == '\x03';
        if (bVar5) {
          cVar1 = *(char *)(param_1 + 0x88);
        }
        if (bVar5 && cVar1 == '\x03') {
          FUN_00a09b58(param_1 + 0x50);
        }
        FUN_00aa13c0(*(undefined4 *)(param_1 + 0x40));
        return;
      }
      if (*(char *)(param_1 + 0x44) != '\x03') {
        return;
      }
      if (*(int *)(param_1 + 0x48) != 0) {
        FUN_00aa0a58(*(int *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),1);
        return;
      }
    }
  default:
    goto switchD_00a08a3c_default;
  }
  piVar2 = *(int **)(param_1 + 0x20);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar5 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar5);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078ecac(*(undefined4 *)(param_1 + 0x20));
  }
LAB_00a08b20:
  if (*(int *)(param_1 + 0x10) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x14));
  }
  *(undefined1 *)(param_1 + 0x2c) = 0;
switchD_00a08a3c_default:
  return;
}

