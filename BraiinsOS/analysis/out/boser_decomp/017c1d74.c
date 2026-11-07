// FUN_017c1d74 @ 017c1d74 size=132 calls_out=2 calls_in=3
// strings: 

undefined8 FUN_017c1d74(undefined4 param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar5 = thunk_FUN_01bee35a(param_1,0x200);
  puVar1 = (uint *)((int)uVar5 + (int)((ulonglong)uVar5 >> 0x20));
  if ((char)puVar1[2] == '\0') {
    puVar1 = (uint *)FUN_017cc064(puVar1,0);
  }
  uVar4 = puVar1[1];
  uVar2 = (*puVar1 >> 0xc | uVar4 << 0x14) ^ *puVar1;
  uVar4 = uVar4 ^ uVar4 >> 0xc;
  uVar3 = uVar2 ^ uVar2 << 0x19;
  uVar4 = (uVar4 << 0x19 | uVar2 >> 7) ^ uVar4;
  uVar2 = uVar4 ^ uVar4 >> 0x1b;
  uVar3 = (uVar3 >> 0x1b | uVar4 << 5) ^ uVar3;
  *puVar1 = uVar3;
  puVar1[1] = uVar2;
  return CONCAT44(uVar2 * 0x4f6cdd1d +
                  uVar3 * 0x2545f491 + (int)((ulonglong)uVar3 * 0x4f6cdd1d >> 0x20),
                  (int)((ulonglong)uVar3 * 0x4f6cdd1d));
}

