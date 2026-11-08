// FUN_00ba6dc4 @ 00ba6dc4 size=188 calls_out=3 calls_in=18
// strings: 

void FUN_00ba6dc4(int param_1)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  
  cVar1 = *(char *)(param_1 + 0x24);
  if (cVar1 == '\0') {
    FUN_00ba80d8(param_1);
    return;
  }
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x60) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x5c);
      bVar3 = cVar1 == '\x03';
      if (bVar3) {
        cVar1 = *(char *)(param_1 + 0x38);
      }
      if (bVar3 && cVar1 == '\x04') {
        FUN_0193c3cc(param_1 + 0x3c);
      }
    }
    goto LAB_00ba6e6c;
  }
  if (cVar1 != '\x04') {
    return;
  }
  piVar2 = *(int **)(param_1 + 0x2c);
  if (*piVar2 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar3 = (bool)hasExclusiveAccess(piVar2);
    if (!bVar3) goto LAB_00ba6e4c;
    *piVar2 = 0x84;
  }
  else {
    ClearExclusiveLocal();
LAB_00ba6e4c:
    (**(code **)(piVar2[2] + 0x10))();
  }
  *(undefined1 *)(param_1 + 0x25) = 0;
  FUN_019f8c54(*(undefined4 *)(param_1 + 0x20),1);
LAB_00ba6e6c:
  FUN_00ba80d8(param_1 + 0x14);
  *(undefined1 *)(param_1 + 0x26) = 0;
  return;
}

