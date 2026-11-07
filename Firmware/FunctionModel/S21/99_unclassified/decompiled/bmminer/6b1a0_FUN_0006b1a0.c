// FUN_0006b1a0 @ 0006b1a0  size=88  callers=0
// program: bmminer


void FUN_0006b1a0(void)

{
  uint local_c;
  
  local_c = 0;
  FUN_00061240(0xd,&local_c);
  local_c = local_c & 0xffff0000;
  FUN_000612bc(0xd,local_c);
  sleep(2);
  return;
}

