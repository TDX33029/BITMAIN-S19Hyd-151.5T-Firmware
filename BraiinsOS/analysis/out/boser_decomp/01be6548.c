// FUN_01be6548 @ 01be6548 size=122 calls_out=0 calls_in=30
// strings: 

undefined4 FUN_01be6548(void)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong in_d0;
  undefined8 local_20;
  
  local_20._0_4_ = (uint)in_d0;
  local_20._4_4_ = (uint)(in_d0 >> 0x20);
  uVar4 = (local_20._4_4_ & 0x7fffffff) >> 0x14;
  uVar2 = uVar4 - 0x3f3;
  uVar1 = in_d0;
  if ((int)uVar2 < 0x40) {
    if ((int)uVar2 < 0xc) {
      uVar2 = 0xffffffff;
      uVar3 = 0x7fffffff;
    }
    else {
      uVar3 = 0xffffffff >> (uVar2 & 0xff);
      uVar2 = 0xffffffffU >> (uVar2 & 0xff) | -1 << (0x20 - uVar2 & 0xff) |
              0xffffffffU >> (uVar4 - 0x413 & 0xff);
    }
    uVar1 = in_d0;
    if (((uint)local_20 & uVar2) != 0 || (local_20._4_4_ & uVar3) != 0) {
      local_20 = (ulonglong)((uint)local_20 & ~uVar2);
      uVar1 = local_20;
    }
  }
  local_20 = uVar1;
  return (int)local_20;
}

