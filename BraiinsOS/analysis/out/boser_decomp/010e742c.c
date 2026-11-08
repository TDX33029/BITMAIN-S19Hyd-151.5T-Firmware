// FUN_010e742c @ 010e742c size=68 calls_out=2 calls_in=1
// strings: 

void FUN_010e742c(int param_1)

{
  if (*(char *)(param_1 + 0x24) == '\0') {
    FUN_00d32150(param_1);
    FUN_00d3238c(param_1 + 4);
    return;
  }
  if (*(char *)(param_1 + 0x24) == '\x03') {
    FUN_00d3238c(param_1 + 0x10);
    FUN_00d32150(param_1 + 0xc);
    return;
  }
  return;
}

