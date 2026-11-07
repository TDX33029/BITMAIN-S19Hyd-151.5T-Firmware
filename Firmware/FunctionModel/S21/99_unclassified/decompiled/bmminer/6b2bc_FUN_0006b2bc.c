// FUN_0006b2bc @ 0006b2bc  size=80  callers=0
// program: bmminer


void FUN_0006b2bc(void)

{
  uint local_c;
  
  local_c = 0;
  FUN_00061240(0xd,&local_c);
  local_c = ~(~(local_c >> 0x10) << 0x10);
  FUN_000612bc(0xd,local_c);
  return;
}

