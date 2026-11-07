// FUN_0177a174 @ 0177a174 size=64 calls_out=2 calls_in=2
// strings: 

longlong FUN_0177a174(void)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = FUN_01ae63f8();
  if (bVar1 == 2) {
    return 0x200000001;
  }
  if ((bVar1 & 1) == 0) {
    return 0;
  }
  uVar2 = FUN_0143b8e8(5,0);
  return (ulonglong)uVar2 << 0x20;
}

