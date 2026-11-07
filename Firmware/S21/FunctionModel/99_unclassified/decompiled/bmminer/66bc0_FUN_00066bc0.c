// FUN_00066bc0 @ 00066bc0  size=112  callers=4
// program: bmminer


undefined4 FUN_00066bc0(void)

{
  bool bVar1;
  int local_10;
  uint local_c;
  
  local_10 = 0;
  local_c = 0;
  do {
    FUN_00061240(0xc,&local_10);
    if (local_10 < 0) {
      return 1;
    }
    usleep(5000);
    bVar1 = local_c < 600;
    local_c = local_c + 1;
  } while (bVar1);
  return 0;
}

