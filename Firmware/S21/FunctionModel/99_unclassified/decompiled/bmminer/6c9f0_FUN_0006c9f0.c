// FUN_0006c9f0 @ 0006c9f0  size=128  callers=0
// program: bmminer


undefined4 FUN_0006c9f0(int param_1)

{
  uint local_c;
  
  local_c = 0;
  FUN_00061240(0,&local_c);
  if (param_1 == 0) {
    local_c = local_c & 0x7fffffff;
  }
  else if (param_1 == 1) {
    local_c = local_c | 0x80000000;
  }
  FUN_000612bc(0,local_c);
  return 0;
}

