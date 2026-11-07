// FUN_0100ead8 @ 0100ead8 size=160 calls_out=1 calls_in=0
// strings: 

void FUN_0100ead8(undefined4 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_20 [8];
  
  uVar3 = (uint)(ZEXT48(auStack_20) * 0xbe5466cf) ^ (uint)(ZEXT48(auStack_20) * 0x34e90c6c >> 0x20);
  uVar5 = (uint)(ZEXT48(auStack_20) * 0xbe5466cf >> 0x20) ^ (uint)(ZEXT48(auStack_20) * 0x34e90c6c)
          ^ 0x100ead8;
  uVar1 = (ulonglong)uVar3 * 0x34e90c6c ^ (ulonglong)uVar5 * 0xbe5466cf;
  uVar2 = (ulonglong)uVar5 * 0x34e90c6c ^ (ulonglong)uVar3 * 0xbe5466cf;
  uVar4 = (uint)(uVar2 >> 0x20) ^ (uint)uVar1;
  uVar5 = (uint)uVar2 ^ (uint)(uVar1 >> 0x20) ^ 0x18dd8f0;
  uVar1 = (ulonglong)uVar4 * 0x34e90c6c ^ (ulonglong)uVar5 * 0xbe5466cf;
  uVar3 = (uint)uVar1;
  uVar2 = (ulonglong)uVar4 * 0xbe5466cf ^ (ulonglong)uVar5 * 0x34e90c6c;
  FUN_0100e624(param_1,uVar3,(uint)uVar2 ^ (uint)(uVar1 >> 0x20),(uint)(uVar2 >> 0x20) ^ uVar3);
  return;
}

