// FUN_0006c86c @ 0006c86c  size=96  callers=3
// program: bmminer


void FUN_0006c86c(uint param_1)

{
  uint local_c;
  
  local_c = 0;
  FUN_00061240(0xd,&local_c);
  local_c = 1 << (param_1 & 0xff) | local_c;
  FUN_000612bc(0xd,local_c);
  return;
}

