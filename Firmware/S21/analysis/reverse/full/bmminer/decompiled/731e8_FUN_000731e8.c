// FUN_000731e8 @ 000731e8  size=512  callers=1
// program: bmminer


uint FUN_000731e8(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  char local_824 [2048];
  undefined4 local_24;
  uint local_20;
  undefined2 local_1c;
  undefined4 local_18;
  undefined2 local_14;
  undefined2 local_12;
  undefined4 local_10;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  
  local_9 = 4;
  local_a = 0xd;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_10 = 0x80000300;
  local_12 = 0x11;
  local_18 = 0x55;
  local_14 = 0x11;
  local_b = 6;
  iVar1 = FUN_0006f4a8(param_1,&local_18,6,&local_24,10);
  if (iVar1 == 0) {
    uVar2 = local_20 & 0xff000000 | (local_20 >> 0x10 & 0xff) << 0x10 | (local_20 >> 8 & 0xff) << 8
            | local_20 & 0xff;
  }
  else {
    builtin_strncpy(local_824,"get power input status failed\n",0x1f);
    FUN_0004948c(0,local_824,0);
    uVar2 = 0x80000300;
  }
  return uVar2;
}

