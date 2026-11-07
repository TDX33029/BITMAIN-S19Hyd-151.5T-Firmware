// FUN_00066c30 @ 00066c30  size=132  callers=4
// program: bmminer


undefined4 FUN_00066c30(undefined1 *param_1)

{
  bool bVar1;
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  local_c = 0;
  do {
    FUN_00061240(0xc,&local_10);
    if (local_10 >> 0x1e == 2) {
      *param_1 = (char)local_10;
      return 1;
    }
    usleep(5000);
    bVar1 = local_c < 600;
    local_c = local_c + 1;
  } while (bVar1);
  return 0;
}

