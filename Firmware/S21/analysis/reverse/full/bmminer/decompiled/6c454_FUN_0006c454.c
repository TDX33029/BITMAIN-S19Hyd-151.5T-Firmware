// FUN_0006c454 @ 0006c454  size=132  callers=3
// program: bmminer


void FUN_0006c454(int param_1)

{
  int iVar1;
  uint local_c;
  
  local_c = 0;
  FUN_000612bc(0x1b,param_1);
  if (param_1 < 0) {
    do {
      iVar1 = FUN_0006c428();
      if (-1 < iVar1) {
        return;
      }
      usleep(1000);
      local_c = local_c + 1;
    } while (local_c < 0xbb9);
  }
  else {
    FUN_0006c428();
  }
  return;
}

