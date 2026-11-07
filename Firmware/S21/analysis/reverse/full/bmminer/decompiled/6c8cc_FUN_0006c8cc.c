// FUN_0006c8cc @ 0006c8cc  size=100  callers=3
// program: bmminer


void FUN_0006c8cc(uint param_1)

{
  uint local_c;
  
  local_c = 0;
  FUN_00061240(0xd,&local_c);
  local_c = local_c & ~(1 << (param_1 & 0xff));
  FUN_000612bc(0xd,local_c);
  return;
}

