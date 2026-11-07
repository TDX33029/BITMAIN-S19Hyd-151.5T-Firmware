// FUN_00ef8cd4 @ 00ef8cd4 size=264 calls_out=2 calls_in=1
// strings: 

void FUN_00ef8cd4(undefined2 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char local_24;
  byte local_23;
  undefined4 local_20;
  
  FUN_00ef8ba8(&local_24);
  if (local_24 != '\x01') {
    uVar1 = (uint)local_23;
    FUN_00ef8ba8(&local_24,param_2);
    if (local_24 != '\x01') {
      uVar2 = (uint)local_23;
      FUN_00ef8ba8(&local_24,param_2);
      if (local_24 != '\x01') {
        uVar3 = (uint)local_23;
        FUN_00ef8ba8(&local_24,param_2);
        if (local_24 != '\x01') {
          uVar1 = (int)*(short *)(&DAT_0040ebd0 + uVar3 * 2) |
                  (int)(short)(*(ushort *)(&DAT_0040e9d0 + uVar2 * 2) |
                              *(ushort *)(&DAT_0040ebd0 + uVar1 * 2)) << 8 |
                  (int)*(short *)(&DAT_0040e9d0 + (uint)local_23 * 2);
          if (-1 < (int)uVar1) {
            param_1[1] = (short)uVar1;
            *param_1 = 0;
            return;
          }
          local_20 = FUN_0157c50c(&local_24,*(undefined4 *)(param_2 + 0x14),
                                  *(undefined4 *)(param_2 + 0x18));
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 2) = local_20;
  *param_1 = 1;
  return;
}

