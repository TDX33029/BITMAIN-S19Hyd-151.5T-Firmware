// FUN_012e3198 @ 012e3198 size=284 calls_out=1 calls_in=0
// strings: 

void FUN_012e3198(uint *param_1,undefined4 param_2,uint param_3,short param_4,undefined4 param_5)

{
  uint local_28;
  uint local_24;
  ushort local_1a;
  
  local_1a = param_4 << 8;
  FUN_012d7418(&local_28,param_5,&local_1a,2);
  if (((char)local_28 == '\x04') || ((local_28 & 0xff) == 4)) {
    local_1a = (ushort)((param_3 & 0xff) << 8) | (ushort)(param_3 >> 8) & 0xff;
    FUN_012d7418(&local_28,param_5,&local_1a,2);
    if (((char)local_28 == '\x04') || ((local_28 & 0xff) == 4)) {
      FUN_012d7418(&local_28,param_5,param_2,param_3);
      if (((char)local_28 == '\x04') || ((local_28 & 0xff) == 4)) {
        FUN_012d7418(&local_28,param_5,"",-param_3 & 3);
        if (((char)local_28 == '\x04') || ((local_28 & 0xff) == 4)) {
          *(undefined1 *)param_1 = 4;
          param_1[1] = param_3 + (-param_3 & 3) + 4;
          return;
        }
      }
    }
  }
  *param_1 = local_28;
  param_1[1] = local_24;
  return;
}

