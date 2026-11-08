// FUN_00d2c7b8 @ 00d2c7b8 size=244 calls_out=3 calls_in=1
// strings: 

void FUN_00d2c7b8(int param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 8) == '\x03') {
    if (*(char *)(param_1 + 0xa4) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x27);
      if (cVar1 == '\x03') {
        FUN_00cea588(param_1 + 0x38);
      }
      else if (cVar1 == '\x04') {
        FUN_00ceb2d4(param_1 + 0x30);
      }
      else if (cVar1 != '\x05') {
        return;
      }
      *(undefined1 *)(param_1 + 0x25) = 0;
      if (*(char *)(param_1 + 0x24) != '\0') {
        FUN_00ceb2d4(param_1 + 0x30);
      }
      *(undefined1 *)(param_1 + 0x26) = 0;
      *(undefined1 *)(param_1 + 0x24) = 0;
      return;
    }
  }
  else if (*(char *)(param_1 + 8) == '\x04') {
    cVar1 = *(char *)(param_1 + 0x1f);
    if (cVar1 != '\x05') {
      if (cVar1 == '\x04') {
        FUN_00cea648(param_1 + 0x20);
      }
      else {
        if (cVar1 != '\x03') {
          return;
        }
        FUN_00cea588(param_1 + 0x28);
      }
    }
    *(undefined1 *)(param_1 + 0x1d) = 0;
    if (*(char *)(param_1 + 0x1c) != '\0') {
      FUN_00cea648(param_1 + 0x20);
    }
    *(undefined1 *)(param_1 + 0x1e) = 0;
    *(undefined1 *)(param_1 + 0x1c) = 0;
    return;
  }
  return;
}

