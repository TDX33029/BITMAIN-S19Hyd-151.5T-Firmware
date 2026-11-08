// FUN_000708dc @ 000708dc  size=364  callers=2
// program: bmminer


undefined4 FUN_000708dc(void)

{
  int iVar1;
  undefined1 auStack_844 [4];
  char acStack_840 [28];
  char local_824 [2048];
  undefined4 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  int local_18;
  undefined2 local_12;
  undefined4 local_10;
  int local_c;
  
  local_10 = 0;
  iVar1 = FUN_0006f8d0();
  if (iVar1 == 0) {
    local_24 = 0;
  }
  else {
    local_20 = 0x804aa55;
    local_1c = 0x804;
    memset(auStack_844,0,0x20);
    local_12 = 0;
    local_18 = FUN_0006f67c(DAT_009451f0,&local_20,6,auStack_844,10);
    if (local_18 == 0) {
      for (local_c = 0; local_c < 4; local_c = local_c + 1) {
        local_824[local_c + 0x800] = acStack_840[local_c];
      }
    }
    else {
      builtin_strncpy(local_824,"Get ac power failed\n",0x15);
      FUN_0004948c(3,local_824,0);
      local_24 = 0;
    }
  }
  return local_24;
}

