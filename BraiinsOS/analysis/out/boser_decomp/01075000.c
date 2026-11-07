// FUN_01075000 @ 01075000 size=56 calls_out=2 calls_in=0
// strings: 

void FUN_01075000(int param_1)

{
  if (*(char *)(param_1 + 0x46c) == '\x03') {
    FUN_0102d354(param_1 + 0x90);
    param_1 = param_1 + 0x48;
  }
  else if (*(char *)(param_1 + 0x46c) != '\0') {
    return;
  }
  FUN_00f9604c(param_1);
  return;
}

