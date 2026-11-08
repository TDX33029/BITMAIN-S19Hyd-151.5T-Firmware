// FUN_0006a9e8 @ 0006a9e8  size=136  callers=2
// program: bmminer


void FUN_0006a9e8(void)

{
  uint uVar1;
  uint local_c;
  
  uVar1 = FUN_0006b35c();
  FUN_0006b390(uVar1 & 0xffffffbf);
  local_c = 0;
  while( true ) {
    if (9 < local_c) {
      return;
    }
    usleep(1000);
    uVar1 = FUN_0006b35c();
    if ((uVar1 & 0x40) == 0) break;
    uVar1 = FUN_0006b35c();
    FUN_0006b390(uVar1 & 0xffffffbf);
    local_c = local_c + 1;
  }
  return;
}

