// FUN_0006bcc8 @ 0006bcc8  size=172  callers=1
// program: bmminer


int FUN_0006bcc8(uint param_1,int param_2,int param_3)

{
  uint local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0;
  while ((local_10 < 0x20 && (local_c < param_3))) {
    if ((param_1 & 1 << (local_10 & 0xff)) != 0) {
      *(char *)(param_2 + local_c) = (char)local_10;
      local_c = local_c + 1;
    }
    local_10 = local_10 + 1;
  }
  return local_c;
}

