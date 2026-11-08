// FUN_0006b63c @ 0006b63c  size=132  callers=1
// program: bmminer


void FUN_0006b63c(void)

{
  uint local_c;
  
  local_c = 0;
  FUN_00061240(0xd,&local_c);
  FUN_000612bc(0xd,~(~(local_c >> 0x10) << 0x10));
  sleep(3);
  FUN_00061240(0xd,&local_c);
  FUN_000612bc(0xd,local_c & 0xffff0000);
  sleep(1);
  FUN_0006a9e8();
  return;
}

