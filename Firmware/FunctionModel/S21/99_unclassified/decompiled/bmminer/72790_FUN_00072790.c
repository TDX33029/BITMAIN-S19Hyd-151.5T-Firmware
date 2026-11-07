// FUN_00072790 @ 00072790  size=180  callers=1
// program: bmminer


int FUN_00072790(undefined4 param_1)

{
  char local_80c [2048];
  int local_c;
  
  local_c = 0x80000300;
  local_c = FUN_00071450(param_1);
  if (local_c == -0x7ffffd00) {
    builtin_strncpy(local_80c,"check power version failed, use v2 protocal to try it again\n",0x3d);
    FUN_0004948c(0,local_80c,0);
    local_c = FUN_00071b34(param_1);
  }
  return local_c;
}

