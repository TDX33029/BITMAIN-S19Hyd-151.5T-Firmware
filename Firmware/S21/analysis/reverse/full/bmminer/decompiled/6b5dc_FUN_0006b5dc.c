// FUN_0006b5dc @ 0006b5dc  size=96  callers=0
// program: bmminer


void FUN_0006b5dc(void)

{
  uint uVar1;
  uint local_c;
  
  local_c = 0;
  FUN_00061240(0x1b,&local_c);
  local_c = local_c & 0xffbfffff;
  FUN_000612bc(0x1b,local_c);
  uVar1 = FUN_0006b35c();
  FUN_0006b390(uVar1 & 0xffffffbf);
  return;
}

