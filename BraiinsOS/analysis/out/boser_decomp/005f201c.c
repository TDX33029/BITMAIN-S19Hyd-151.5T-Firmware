// FUN_005f201c @ 005f201c size=68 calls_out=4 calls_in=6
// strings: 

void FUN_005f201c(int param_1)

{
  if (*(char *)(param_1 + 0xe8) == '\0') {
    FUN_005f649c(param_1);
    return;
  }
  if (*(char *)(param_1 + 0xe8) == '\x03') {
    FUN_005f5ea8(param_1 + 0xcc);
    FUN_005f9d30(param_1 + 0xc0);
    FUN_005f32d0(param_1 + 0x40);
    return;
  }
  return;
}

