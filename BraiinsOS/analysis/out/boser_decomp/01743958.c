// FUN_01743958 @ 01743958 size=64 calls_out=2 calls_in=1
// strings: 

longlong FUN_01743958(void)

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
  uVar2 = FUN_01427b74(5,0);
  return (ulonglong)uVar2 << 0x20;
}

