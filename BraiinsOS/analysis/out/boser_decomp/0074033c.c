// FUN_0074033c @ 0074033c size=232 calls_out=7 calls_in=1
// strings: 

void FUN_0074033c(int param_1)

{
  switch(*(undefined1 *)(param_1 + 0x66)) {
  case 3:
    FUN_007404c0(param_1 + 0x68);
    return;
  case 4:
    if (*(char *)(param_1 + 0xbd) == '\x03') {
      FUN_00740564(param_1 + 0x68);
      *(undefined1 *)(param_1 + 0xbc) = 0;
    }
    goto LAB_00740420;
  case 5:
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
    break;
  case 6:
    FUN_007405d4(param_1 + 0x68);
    break;
  case 7:
    if (*(char *)(param_1 + 0x98) == '\x03') {
      FUN_00b6bb40(param_1 + 0x78);
    }
    break;
  case 8:
    if (*(char *)(param_1 + 0xcd) == '\x03') {
      FUN_00740fe0(param_1 + 0x80);
      *(undefined1 *)(param_1 + 0xcc) = 0;
    }
    break;
  case 9:
    FUN_007405d4(param_1 + 0x68);
    FUN_005f649c(param_1 + 0xb8);
    break;
  default:
    return;
  }
  if (*(char *)(param_1 + 100) != '\0') {
    FUN_005f649c(param_1);
  }
LAB_00740420:
  *(undefined1 *)(param_1 + 100) = 0;
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
  *(undefined1 *)(param_1 + 0x65) = 0;
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48));
  return;
}

