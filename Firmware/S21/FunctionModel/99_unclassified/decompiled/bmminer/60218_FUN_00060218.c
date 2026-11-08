// FUN_00060218 @ 00060218  size=1292  callers=2
// program: bmminer


void FUN_00060218(int *param_1)

{
  char local_810 [2048];
  uint local_10;
  int local_c;
  
  local_10 = 0;
  local_c = 0;
  memset(param_1,0,0x124);
  FUN_00061240(2,&local_10);
  if (local_10 == 0) {
    builtin_strncpy(local_810,"Cannot Find Any Plug In!\r\n",0x1b);
    FUN_0004948c(0,local_810,0);
  }
  else if ((int)local_10 < 0) {
    DAT_00944b94 = 1;
    local_10 = local_10 >> 0x18;
    snprintf(local_810,0x800,"HASH_ON_PLUG T9 = 0x%x\n",local_10);
    FUN_0004948c(2,local_810,0);
    for (; local_10 != 0; local_10 = local_10 >> 1) {
      if ((local_10 & 1) != 0) {
        param_1[*param_1 * 0x12 + 1] = local_c;
        if (local_c == 1) {
          param_1[*param_1 * 0x12 + 3] = 2;
          param_1[*param_1 * 0x12 + 4] = 10;
          param_1[*param_1 * 0x12 + 5] = 0xb;
          param_1[*param_1 * 0x12 + 2] = 3;
        }
        else if (local_c == 0) {
          param_1[*param_1 * 0x12 + 3] = 1;
          param_1[*param_1 * 0x12 + 4] = 8;
          param_1[*param_1 * 0x12 + 5] = 9;
          param_1[*param_1 * 0x12 + 2] = 3;
        }
        else if (local_c == 2) {
          param_1[*param_1 * 0x12 + 3] = 3;
          param_1[*param_1 * 0x12 + 4] = 0xc;
          param_1[*param_1 * 0x12 + 5] = 0xd;
          param_1[*param_1 * 0x12 + 2] = 3;
        }
        *param_1 = *param_1 + 1;
      }
      local_c = local_c + 1;
    }
  }
  else {
    DAT_00944b94 = 0;
    for (local_10 = local_10 & 0xffff; local_10 != 0; local_10 = local_10 >> 1) {
      if ((local_10 & 1) != 0) {
        param_1[*param_1 * 0x12 + 1] = local_c;
        param_1[*param_1 * 0x12 + param_1[*param_1 * 0x12 + 2] + 3] = local_c;
        param_1[*param_1 * 0x12 + 2] = param_1[*param_1 * 0x12 + 2] + 1;
        *param_1 = *param_1 + 1;
      }
      local_c = local_c + 1;
    }
  }
  return;
}

