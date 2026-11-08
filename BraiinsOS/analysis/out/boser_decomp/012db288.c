// FUN_012db288 @ 012db288 size=224 calls_out=1 calls_in=0
// strings: 

void FUN_012db288(uint *param_1,uint param_2,short param_3,undefined4 param_4)

{
  uint local_20;
  uint local_1c;
  uint local_14;
  
  local_14._0_2_ = param_3 << 8;
  FUN_012d7418(&local_20,param_4,&local_14,2);
  if (((char)local_20 == '\x04') || ((local_20 & 0xff) == 4)) {
    local_14 = CONCAT22(local_14._2_2_,0x400);
    FUN_012d7418(&local_20,param_4,&local_14,2);
    if (((char)local_20 == '\x04') || ((local_20 & 0xff) == 4)) {
      local_14 = param_2 << 0x18 | (param_2 >> 8 & 0xff) << 0x10 | (param_2 >> 0x10 & 0xff) << 8 |
                 param_2 >> 0x18;
      FUN_012d7418(&local_20,param_4,&local_14,4);
      if (((char)local_20 == '\x04') || ((local_20 & 0xff) == 4)) {
        *(undefined1 *)param_1 = 4;
        param_1[1] = 8;
        return;
      }
    }
  }
  *param_1 = local_20;
  param_1[1] = local_1c;
  return;
}

