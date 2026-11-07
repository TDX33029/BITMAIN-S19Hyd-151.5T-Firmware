// FUN_00072c38 @ 00072c38  size=464  callers=2
// program: bmminer


uint FUN_00072c38(undefined4 param_1)

{
  int iVar1;
  char local_820 [2048];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  undefined2 local_14;
  undefined2 local_12;
  undefined4 local_10;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  
  local_9 = 4;
  local_a = 10;
  local_20 = 0;
  local_1c = 0;
  local_10 = 0x80000300;
  local_12 = 0xe;
  local_18 = 0x55;
  local_14 = 0xe;
  local_b = 6;
  iVar1 = FUN_0006f4a8(param_1,&local_18,6,&local_20,8);
  if (iVar1 == 0) {
    local_1c = local_1c & 0xffff;
  }
  else {
    builtin_strncpy(local_820,"get power status failed\n",0x19);
    FUN_0004948c(0,local_820,0);
    local_1c = 0x80000300;
  }
  return local_1c;
}

