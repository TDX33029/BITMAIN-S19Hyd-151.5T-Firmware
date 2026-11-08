// FUN_0006b258 @ 0006b258  size=100  callers=0
// program: bmminer


void FUN_0006b258(uint param_1)

{
  uint local_c;
  
  local_c = 0;
  FUN_00061240(0xd,&local_c);
  local_c = local_c & ~(1 << (param_1 & 0xff));
  FUN_000612bc(0xd,local_c);
  return;
}

