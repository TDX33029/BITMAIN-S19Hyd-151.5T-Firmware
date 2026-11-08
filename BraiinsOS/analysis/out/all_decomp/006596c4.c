// FUN_006596c4 @ 006596c4 size=88 calls_out=2 calls_in=2
// strings: 

void FUN_006596c4(int param_1)

{
  if (*(char *)(param_1 + 0x32) == '\x03') {
    FUN_007ab288(param_1 + 0x38);
    FUN_005c3320(param_1 + 0x38);
  }
  else if (*(char *)(param_1 + 0x32) != '\x04') {
    return;
  }
  *(undefined1 *)(param_1 + 0x31) = 0;
  if (*(char *)(param_1 + 0x30) != '\0') {
    FUN_005c3320(param_1);
  }
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}

