// FUN_00ef7e6c @ 00ef7e6c size=164 calls_out=3 calls_in=2
// strings: 

undefined4 FUN_00ef7e6c(char param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 local_26;
  char local_25;
  undefined1 auStack_24 [12];
  char *local_18;
  code *local_14;
  undefined1 *local_10;
  code *local_c;
  
  local_26 = 0;
  local_25 = param_1;
  if (param_1 == '\0') {
    FUN_00ef78d0(&local_18,*param_3);
    if (local_18 != (char *)0x1) {
      *(bool *)param_2 = local_10 != (undefined1 *)0x0 || local_c != (code *)0x0;
      local_14 = (code *)0x0;
    }
  }
  else {
    local_10 = &local_26;
    local_c = FUN_00ef7f4c;
    local_14 = FUN_00ef7f4c;
    local_18 = &local_25;
    FUN_01a8da38(auStack_24,&DAT_005bfb48,&local_18);
    local_14 = (code *)FUN_01aa428c(auStack_24);
  }
  return local_14;
}

