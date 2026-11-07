// FUN_012da258 @ 012da258 size=336 calls_out=1 calls_in=0
// strings: 

void FUN_012da258(uint *param_1,int param_2,undefined2 param_3,undefined4 param_4)

{
  int iVar1;
  uint local_28;
  uint local_24;
  undefined4 local_1c;
  
  iVar1 = *(int *)(param_2 + 8);
  local_1c._0_2_ = param_3;
  FUN_012d7418(&local_28,param_4,&local_1c,2);
  if (((char)local_28 == '\x04') || ((local_28 & 0xff) == 4)) {
    local_1c = CONCAT22(local_1c._2_2_,(short)(iVar1 + 4));
    FUN_012d7418(&local_28,param_4,&local_1c,2);
    if (((char)local_28 == '\x04') || ((local_28 & 0xff) == 4)) {
      local_1c = *(undefined4 *)(param_2 + 0xc);
      FUN_012d7418(&local_28,param_4,&local_1c,4);
      if (((char)local_28 == '\x04') || ((local_28 & 0xff) == 4)) {
        FUN_012d7418(&local_28,param_4,*(undefined4 *)(param_2 + 4),iVar1);
        if (((char)local_28 == '\x04') || ((local_28 & 0xff) == 4)) {
          FUN_012d7418(&local_28,param_4,"",-iVar1 & 3U);
          if (((char)local_28 == '\x04') || ((local_28 & 0xff) == 4)) {
            *(undefined1 *)param_1 = 4;
            param_1[1] = iVar1 + 4 + (-iVar1 & 3U) + 4;
            return;
          }
        }
      }
    }
  }
  *param_1 = local_28;
  param_1[1] = local_24;
  return;
}

