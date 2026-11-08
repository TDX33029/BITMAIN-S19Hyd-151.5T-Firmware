// FUN_014ff38c @ 014ff38c size=52 calls_out=0 calls_in=2
// strings: i8i16

longlong FUN_014ff38c(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 0x61U & 0xff;
  if (uVar1 < 0x1a) {
    return CONCAT44(*(undefined4 *)(&DAT_00422564 + uVar1 * 4),(&PTR_s_i8i16_018b3924)[uVar1]);
  }
  return (ulonglong)uVar1 << 0x20;
}

