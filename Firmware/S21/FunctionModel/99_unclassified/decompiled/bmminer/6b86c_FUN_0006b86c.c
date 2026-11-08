// FUN_0006b86c @ 0006b86c  size=84  callers=2
// program: bmminer


void FUN_0006b86c(uint param_1)

{
  uint local_c;
  
  if (param_1 < 0x20000) {
    local_c = param_1 & 0x1ffff;
  }
  else {
    local_c = 0x1ffff;
  }
  FUN_0006b834(local_c | 0x80000000);
  return;
}

