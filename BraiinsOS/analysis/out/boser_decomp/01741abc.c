// FUN_01741abc @ 01741abc size=56 calls_out=2 calls_in=2
// strings: 

void FUN_01741abc(int param_1)

{
  if (*(char *)(param_1 + 0x348) == '\x03') {
    FUN_01741960(param_1 + 0x30);
    param_1 = param_1 + 0x18;
  }
  else if (*(char *)(param_1 + 0x348) != '\0') {
    return;
  }
  FUN_0178e1c4(param_1);
  return;
}

