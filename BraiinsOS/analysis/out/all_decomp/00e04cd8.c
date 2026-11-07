// FUN_00e04cd8 @ 00e04cd8 size=56 calls_out=2 calls_in=0
// strings: 

void FUN_00e04cd8(char *param_1)

{
  if (param_1[0xd0] != '\x03') {
    return;
  }
  FUN_00ddf2bc(param_1 + 0x30);
  if (*param_1 == '\x04') {
    FUN_00ddf46c(param_1 + 4);
    return;
  }
  return;
}

