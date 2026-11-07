// FUN_00060b1c @ 00060b1c  size=228  callers=1
// program: bmminer


int FUN_00060b1c(uint param_1)

{
  uint local_14;
  uint local_10;
  int local_c;
  
  local_10 = 0;
  FUN_00061240(0,&local_14);
  local_14 = local_14 & 0xffff;
  local_c = 0;
  while( true ) {
    if (5 < local_c) {
      return -1;
    }
    FUN_00061240(1,&local_10);
    if (param_1 == (local_10 >> 8 & 7)) break;
    usleep(10000);
    local_c = local_c + 1;
  }
  if (local_14 == 0xb025) {
    return (local_10 & 0xff) * 0xf0;
  }
  return (local_10 & 0xff) * 0x78;
}

