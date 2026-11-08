// FUN_00cf32fc @ 00cf32fc size=60 calls_out=2 calls_in=6
// strings: 

void FUN_00cf32fc(int param_1)

{
  if (*(char *)(param_1 + 0x14) == '\x03') {
    FUN_00cf3378(param_1 + 0x28);
  }
  else {
    if (*(char *)(param_1 + 0x14) != '\x04') {
      return;
    }
    FUN_00cf34b8(param_1 + 0x28);
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}

