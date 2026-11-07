// FUN_00cea1dc @ 00cea1dc size=152 calls_out=3 calls_in=2
// strings: 

void FUN_00cea1dc(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == '\x03') {
    cVar1 = *(char *)(param_1 + 0x2f);
    if (cVar1 == '\x03') {
      FUN_00cea588(param_1 + 0x40);
    }
    else if (cVar1 == '\x04') {
      FUN_00ceb2d4(param_1 + 0x38);
    }
    else if (cVar1 != '\x05') {
      return;
    }
    *(undefined1 *)(param_1 + 0x2d) = 0;
    if (*(char *)(param_1 + 0x2c) != '\0') {
      FUN_00ceb2d4(param_1 + 0x38);
    }
    *(undefined1 *)(param_1 + 0x2e) = 0;
    *(undefined1 *)(param_1 + 0x2c) = 0;
    return;
  }
  if (cVar1 != '\x04') {
    if (cVar1 == '\x05') {
      FUN_00cea2b8(param_1 + 0x18);
      return;
    }
    return;
  }
  cVar1 = *(char *)(param_1 + 0x2f);
  if (cVar1 != '\x05') {
    if (cVar1 == '\x04') {
      FUN_00ceb2d4(param_1 + 0x30);
    }
    else {
      if (cVar1 != '\x03') {
        return;
      }
      FUN_00cea588(param_1 + 0x38);
    }
  }
  *(undefined1 *)(param_1 + 0x2d) = 0;
  if (*(char *)(param_1 + 0x2c) != '\0') {
    FUN_00ceb2d4(param_1 + 0x30);
  }
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  return;
}

