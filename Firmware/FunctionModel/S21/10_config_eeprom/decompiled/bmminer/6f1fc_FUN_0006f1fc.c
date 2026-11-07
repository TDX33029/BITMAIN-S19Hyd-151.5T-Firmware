// FUN_0006f1fc @ 0006f1fc  size=684  callers=1
// program: bmminer


int FUN_0006f1fc(char *param_1,char *param_2,uint param_3)

{
  char acStack_814 [2048];
  ushort local_14;
  ushort local_12;
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) || (param_3 == 0)) {
    local_10 = -0x7ffffcff;
  }
  else {
    local_12 = 0;
    for (local_c = 2; local_c < param_3 - 2; local_c = local_c + 2) {
      local_12 = (ushort)(byte)param_2[local_c] +
                 (ushort)(byte)param_2[local_c + 1] * 0x100 + local_12;
    }
    local_14 = CONCAT11(param_2[param_3 - 1],param_2[param_3 - 2]);
    if (local_12 == local_14) {
      if (((*param_1 != *param_2) || (param_1[1] != param_2[1])) ||
         ((param_1[3] != param_2[3] || (param_3 != (byte)param_2[2] + 2)))) {
        local_10 = -0x7ffffd00;
      }
    }
    else {
      snprintf(acStack_814,0x800,"power reply the bad crc, crc = 0x%04x, crc_read = 0x%04x\n",
               (uint)local_12,(uint)local_14);
      FUN_0004948c(0,acStack_814,0);
      local_10 = -0x7ffffd00;
    }
    if (local_10 != 0) {
      for (local_c = 0; local_c < param_3; local_c = local_c + 1) {
        snprintf(acStack_814,0x800,"read_back_data[%d] = 0x%02x",local_c,
                 (uint)(byte)param_2[local_c]);
        FUN_0004948c(0,acStack_814,0);
      }
    }
  }
  return local_10;
}

