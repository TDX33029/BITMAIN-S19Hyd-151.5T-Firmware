// FUN_00072174 @ 00072174  size=536  callers=2
// program: bmminer


uint FUN_00072174(undefined4 param_1,byte param_2)

{
  int iVar1;
  char local_824 [2048];
  undefined4 local_24;
  uint local_20;
  undefined4 local_1c;
  uint local_18;
  short local_12;
  undefined4 local_10;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  
  local_9 = 6;
  local_a = 0x83;
  local_24 = 0;
  local_20 = 0;
  local_10 = 0x80000300;
  local_12 = param_2 + 0x89;
  local_1c = 0x55;
  local_18 = (uint)param_2;
  local_b = 8;
  iVar1 = FUN_0006f4a8(param_1,&local_1c,8,&local_24,8);
  if (iVar1 == 0) {
    local_20 = local_20 & 0xffff;
  }
  else {
    builtin_strncpy(local_824,"set DA conversion N failed\n",0x1c);
    FUN_0004948c(0,local_824,0);
    local_20 = 0x80000300;
  }
  return local_20;
}

