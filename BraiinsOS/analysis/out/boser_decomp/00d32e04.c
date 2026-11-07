// FUN_00d32e04 @ 00d32e04 size=200 calls_out=3 calls_in=3
// strings: 

void FUN_00d32e04(int param_1)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  
  if (*(char *)(param_1 + 0x6e) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x28);
  if (cVar1 != '\x04') {
    if (cVar1 != '\x03') {
      if (cVar1 == '\0') {
        FUN_00ba80d8(param_1 + 4);
        return;
      }
      return;
    }
    if (*(char *)(param_1 + 100) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x60);
      bVar3 = cVar1 == '\x03';
      if (bVar3) {
        cVar1 = *(char *)(param_1 + 0x3c);
      }
      if (bVar3 && cVar1 == '\x04') {
        FUN_0193c3cc(param_1 + 0x40);
      }
    }
    goto LAB_00d32eb8;
  }
  piVar2 = *(int **)(param_1 + 0x30);
  if (*piVar2 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar3 = (bool)hasExclusiveAccess(piVar2);
    if (!bVar3) goto LAB_00d32e98;
    *piVar2 = 0x84;
  }
  else {
    ClearExclusiveLocal();
LAB_00d32e98:
    (**(code **)(piVar2[2] + 0x10))();
  }
  *(undefined1 *)(param_1 + 0x29) = 0;
  FUN_019f8c54(*(undefined4 *)(param_1 + 0x24),1);
LAB_00d32eb8:
  FUN_00ba80d8(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x2a) = 0;
  return;
}

