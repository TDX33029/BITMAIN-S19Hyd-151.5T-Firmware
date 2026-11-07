// FUN_00bffddc @ 00bffddc size=340 calls_out=6 calls_in=0
// strings: 

void FUN_00bffddc(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) != '\x03') {
    if (*(char *)(param_1 + 0xc) != '\x04') {
      return;
    }
    cVar1 = *(char *)(param_1 + 300);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x118);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_00ba638c(param_1 + 0xc0);
    }
    if (*(int *)(param_1 + 0x38) == 0) {
      return;
    }
    FUN_00bffdc4(param_1 + 0x3c);
    return;
  }
  cVar1 = *(char *)(param_1 + 0x7a8);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x799);
  }
  if (!bVar2 || cVar1 != '\x03') {
    return;
  }
  switch(*(undefined1 *)(param_1 + 0x1b1)) {
  case 3:
    if (*(char *)(param_1 + 0x1ec) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x1e8);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x1e4);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x1c4);
      }
    }
    goto LAB_00bffd3c;
  case 4:
    if (*(char *)(param_1 + 0x1ec) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x1e8);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x1e4);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x1c4);
      }
    }
    goto LAB_00bffd1c;
  case 5:
    FUN_00c00754(param_1 + 0x1b8);
    break;
  case 6:
    FUN_00c00794(param_1 + 0x1b8);
    if (*(int *)(param_1 + 0x118) != 0) {
      FUN_00bffdc4(param_1 + 0x11c);
    }
    break;
  default:
    goto switchD_00bffc88_default;
  }
  *(undefined1 *)(param_1 + 0x1b3) = 0;
LAB_00bffd1c:
  *(undefined1 *)(param_1 + 0x1b4) = 0;
  if (*(char *)(param_1 + 0x1b2) != '\0') {
    FUN_019f8c54(*(undefined4 *)(param_1 + 0x1a4),*(undefined4 *)(param_1 + 0x1a8));
  }
LAB_00bffd3c:
  *(undefined1 *)(param_1 + 0x1b2) = 0;
switchD_00bffc88_default:
  return;
}

