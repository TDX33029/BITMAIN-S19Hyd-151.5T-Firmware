// FUN_0069c9ac @ 0069c9ac size=264 calls_out=2 calls_in=1
// strings: 

void FUN_0069c9ac(undefined2 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 local_24;
  undefined4 local_20;
  
  FUN_0069c5d0(&local_24);
  if ((char)local_24 != '\x01') {
    uVar4 = local_24 >> 8;
    FUN_0069c5d0(&local_24,param_2);
    if ((char)local_24 != '\x01') {
      uVar1 = local_24 >> 8;
      FUN_0069c5d0(&local_24,param_2);
      uVar3 = (undefined2)local_24;
      if ((char)local_24 != '\x01') {
        uVar2 = local_24 >> 8;
        local_24._0_2_ = uVar3;
        FUN_0069c5d0(&local_24,param_2);
        if ((char)local_24 != '\x01') {
          uVar4 = (int)*(short *)(&DAT_00525616 + (uVar2 & 0xff) * 2) |
                  (int)(short)(*(ushort *)(&DAT_00525416 + (uVar1 & 0xff) * 2) |
                              *(ushort *)(&DAT_00525616 + (uVar4 & 0xff) * 2)) << 8 |
                  (int)*(short *)(&DAT_00525416 + (uint)local_24._1_1_ * 2);
          if (-1 < (int)uVar4) {
            param_1[1] = (short)uVar4;
            *param_1 = 0;
            return;
          }
          local_24 = 0xc;
          local_20 = FUN_01966fbc(&local_24,*(undefined4 *)(param_2 + 0x10),
                                  *(undefined4 *)(param_2 + 0x14));
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 2) = local_20;
  *param_1 = 1;
  return;
}

