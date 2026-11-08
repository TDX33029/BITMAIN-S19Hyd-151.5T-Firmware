// FUN_01347f20 @ 01347f20 size=140 calls_out=0 calls_in=5
// strings: 

undefined8 FUN_01347f20(void)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 local_20 [8];
  
  lVar1 = ZEXT48(local_20) * (ulonglong)(DAT_01d51158 ^ 0x3707344);
  DAT_01d51158 = (uint)lVar1 ^ (uint)(ZEXT48(local_20) * 0x13198a2e >> 0x20);
  uVar4 = (uint)((ulonglong)lVar1 >> 0x20) ^ (uint)(ZEXT48(local_20) * 0x13198a2e);
  uVar2 = (ulonglong)DAT_01d51158 * 0xa4093822 ^ (ulonglong)uVar4 * 0x299f31d0;
  uVar3 = (ulonglong)DAT_01d51158 * 0x299f31d0 ^ (ulonglong)uVar4 * 0xa4093822;
  return CONCAT44((uint)(uVar3 >> 0x20) ^ (uint)uVar2,(uint)uVar3 ^ (uint)(uVar2 >> 0x20));
}

