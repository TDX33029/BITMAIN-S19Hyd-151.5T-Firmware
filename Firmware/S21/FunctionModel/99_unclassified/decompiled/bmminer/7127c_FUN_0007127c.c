// FUN_0007127c @ 0007127c  size=468  callers=2
// program: bmminer


uint FUN_0007127c(undefined4 param_1)

{
  int iVar1;
  char local_828 [2048];
  undefined4 local_28;
  undefined2 local_24;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  undefined2 local_12;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined4 local_c;
  
  local_c = 0x80000300;
  local_d = 4;
  local_e = 1;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0xffffffff;
  local_12 = 5;
  local_28 = 0x55;
  local_24 = 5;
  local_f = 6;
  iVar1 = FUN_0006f4a8(param_1,&local_28,6,&local_20,8);
  if (iVar1 == 0) {
    local_1c = local_1c & 0xffff;
  }
  else {
    builtin_strncpy(local_828,"get power version failed\n",0x1a);
    FUN_0004948c(0,local_828,0);
    local_1c = 0x80000300;
  }
  return local_1c;
}

