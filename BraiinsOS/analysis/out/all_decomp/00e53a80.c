// FUN_00e53a80 @ 00e53a80 size=312 calls_out=6 calls_in=1
// strings: 

void FUN_00e53a80(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  cVar1 = *(char *)(param_1 + 0xf1);
  if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 0x109) == '\x04') {
      if (*(char *)(param_1 + 0x120) == '\x04') {
        cVar1 = *(char *)(param_1 + 0x150);
        bVar4 = cVar1 == '\x03';
        if (bVar4) {
          cVar1 = *(char *)(param_1 + 0x14c);
        }
        if ((bVar4 && cVar1 == '\x03') && (*(int *)(param_1 + 0x144) != 0)) {
          FUN_00e44660(*(int *)(param_1 + 0x144),*(undefined4 *)(param_1 + 0x148),1);
        }
        FUN_00e44114(*(undefined4 *)(param_1 + 0x11c));
      }
      else if ((*(char *)(param_1 + 0x120) == '\x03') && (*(int *)(param_1 + 0x124) != 0)) {
        FUN_00e43e74(*(int *)(param_1 + 0x124),*(undefined4 *)(param_1 + 0x128),1);
      }
      piVar2 = *(int **)(param_1 + 0x10c);
      if (piVar2 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar4 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar4);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0078e66c(*(undefined4 *)(param_1 + 0x10c));
        }
      }
      *(undefined1 *)(param_1 + 0x108) = 0;
    }
    else if (*(char *)(param_1 + 0x109) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x120);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0x11c);
      }
      if ((bVar4 && cVar1 == '\x03') && (*(int *)(param_1 + 0x114) != 0)) {
        FUN_00e43e74(*(int *)(param_1 + 0x114),*(undefined4 *)(param_1 + 0x118),1);
      }
    }
    FUN_005c33e4(param_1 + 0x158);
    *(undefined1 *)(param_1 + 0xf0) = 0;
  }
  else if (cVar1 != '\x03') {
    iVar3 = 0xe4;
    if (cVar1 != '\0') {
      return;
    }
    goto LAB_00e53aa8;
  }
  iVar3 = 0xd8;
LAB_00e53aa8:
  FUN_005c3b6c(param_1 + iVar3);
  return;
}

