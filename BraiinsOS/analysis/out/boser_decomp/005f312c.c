// FUN_005f312c @ 005f312c size=36 calls_out=2 calls_in=6
// strings: 

void FUN_005f312c(int param_1)

{
  if (*(char *)(param_1 + 4) == '\x03') {
    FUN_019ede44(param_1 + 0xc);
    return;
  }
  if (*(char *)(param_1 + 4) == '\x04') {
    FUN_01431b40(param_1 + 8);
    return;
  }
  return;
}

