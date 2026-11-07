// FUN_00062e78 @ 00062e78  size=204  callers=0
// program: bmminer


undefined4 FUN_00062e78(int param_1,uint *param_2)

{
  char local_80c [2048];
  undefined4 local_c;
  
  local_c = 0xfffffffb;
  if (param_1 + -1 < 2) {
    if (param_1 == 1) {
      FUN_00061240(0x13,param_2);
      *param_2 = *param_2 >> 0x10;
      local_c = 0;
    }
  }
  else {
    builtin_strncpy(local_80c,"bad param\n",0xb);
    FUN_0004948c(0,local_80c,0);
    local_c = 0xfffffffd;
  }
  return local_c;
}

