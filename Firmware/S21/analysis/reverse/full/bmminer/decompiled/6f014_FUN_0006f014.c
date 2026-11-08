// FUN_0006f014 @ 0006f014  size=488  callers=1
// program: bmminer


int FUN_0006f014(char *param_1,char *param_2,uint param_3)

{
  short local_12;
  int local_10;
  uint local_c;
  
  local_10 = 0;
  if (((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) || (param_3 == 0)) {
    local_10 = -0x7ffffcff;
  }
  else {
    local_12 = 0;
    for (local_c = 2; local_c < param_3 - 2; local_c = local_c + 1) {
      local_12 = (ushort)(byte)param_2[local_c] + local_12;
    }
    if (local_12 == CONCAT11(param_2[param_3 - 1],param_2[param_3 - 2])) {
      if (((*param_1 != *param_2) || (param_1[1] != param_2[1])) ||
         ((param_1[3] != param_2[3] || (param_3 != (byte)param_2[2] + 2)))) {
        local_10 = -0x7ffffd00;
      }
    }
    else {
      local_10 = -0x7ffffd00;
    }
    if (local_10 != 0) {
      for (local_c = 0; local_c < param_3; local_c = local_c + 1) {
      }
    }
  }
  return local_10;
}

