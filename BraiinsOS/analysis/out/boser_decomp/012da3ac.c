// FUN_012da3ac @ 012da3ac size=348 calls_out=1 calls_in=0
// strings: 

void FUN_012da3ac(uint *param_1,int param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint local_28;
  uint local_24;
  uint local_1c;
  
  iVar3 = *(int *)(param_2 + 8);
  local_1c._0_2_ = (ushort)((param_3 & 0xff) << 8) | (ushort)(param_3 >> 8) & 0xff;
  FUN_012d7418(&local_28,param_4,&local_1c,2);
  if (((char)local_28 == '\x04') || ((local_28 & 0xff) == 4)) {
    uVar2 = iVar3 + 4;
    local_1c = CONCAT22(local_1c._2_2_,(ushort)((uVar2 & 0xff) << 8) | (ushort)(uVar2 >> 8) & 0xff);
    FUN_012d7418(&local_28,param_4,&local_1c,2);
    if (((char)local_28 == '\x04') || ((local_28 & 0xff) == 4)) {
      uVar1 = *(uint *)(param_2 + 0xc);
      local_1c = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
                 uVar1 >> 0x18;
      FUN_012d7418(&local_28,param_4,&local_1c,4);
      if (((char)local_28 == '\x04') || ((local_28 & 0xff) == 4)) {
        FUN_012d7418(&local_28,param_4,*(undefined4 *)(param_2 + 4),iVar3);
        if (((char)local_28 == '\x04') || ((local_28 & 0xff) == 4)) {
          FUN_012d7418(&local_28,param_4,"",-iVar3 & 3U);
          if (((char)local_28 == '\x04') || ((local_28 & 0xff) == 4)) {
            *(undefined1 *)param_1 = 4;
            param_1[1] = uVar2 + (-iVar3 & 3U) + 4;
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

