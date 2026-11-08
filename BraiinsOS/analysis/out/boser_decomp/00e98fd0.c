// FUN_00e98fd0 @ 00e98fd0 size=228 calls_out=3 calls_in=2
// strings: 

void FUN_00e98fd0(int param_1)

{
  int iVar1;
  
  switch(*(undefined1 *)(param_1 + 0x11)) {
  case 3:
    if (*(char *)(param_1 + 0xd4) == '\x03') {
      FUN_00b99500(param_1 + 0x18);
      return;
    }
    return;
  case 4:
    if (*(char *)(param_1 + 0x5b4) == '\x03') {
      if (*(char *)(param_1 + 0x5a8) == '\x03') {
        iVar1 = param_1 + 0x2e0;
      }
      else {
        if (*(char *)(param_1 + 0x5a8) != '\0') break;
        iVar1 = param_1 + 0x18;
      }
      FUN_00df9ef8(iVar1);
    }
    break;
  case 5:
    if (*(char *)(param_1 + 0x5b4) == '\x03') {
      if (*(char *)(param_1 + 0x5a8) == '\x03') {
        iVar1 = param_1 + 0x2e0;
      }
      else {
        if (*(char *)(param_1 + 0x5a8) != '\0') break;
        iVar1 = param_1 + 0x18;
      }
      FUN_00df9ef8(iVar1);
    }
    break;
  case 6:
    if (*(char *)(param_1 + 0x5b4) == '\x03') {
      if (*(char *)(param_1 + 0x5a8) == '\x03') {
        iVar1 = param_1 + 0x2e0;
      }
      else {
        if (*(char *)(param_1 + 0x5a8) != '\0') break;
        iVar1 = param_1 + 0x18;
      }
      FUN_00df9ef8(iVar1);
    }
    break;
  default:
    return;
  }
  FUN_0084ec48(param_1);
  return;
}

