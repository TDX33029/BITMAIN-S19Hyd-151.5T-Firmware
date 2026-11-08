// FUN_000717d0 @ 000717d0  size=428  callers=1
// program: bmminer


uint FUN_000717d0(undefined4 param_1)

{
  int iVar1;
  char local_824 [2048];
  undefined4 local_24;
  undefined2 local_20;
  undefined4 local_1c;
  uint local_18;
  undefined4 local_14;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined4 local_c;
  
  local_c = 0x80000300;
  local_d = 4;
  local_e = 0xb;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0xffffffff;
  local_24 = 0x55;
  local_20 = 4;
  local_f = 6;
  iVar1 = FUN_0006f67c(param_1,&local_24,6,&local_1c,8);
  if (iVar1 == 0) {
    local_18 = local_18 & 0xffff;
  }
  else {
    builtin_strncpy(local_824,"get power aging time failed\n",0x1d);
    FUN_0004948c(0,local_824,0);
    local_18 = 0x80000300;
  }
  return local_18;
}

