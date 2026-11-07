// FUN_016564bc @ 016564bc size=108 calls_out=0 calls_in=1
// strings: 

void FUN_016564bc(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  
  uVar2 = 0x20;
  uVar1 = 0;
  pbVar5 = param_1;
  do {
    uVar3 = uVar2;
    if (1 < uVar2) {
      uVar3 = 2;
    }
    uVar4 = (uint)*pbVar5 << 8;
    if (uVar2 != 1) {
      uVar4 = (uint)CONCAT11(*pbVar5,pbVar5[1]);
    }
    uVar2 = uVar2 - uVar3;
    uVar1 = uVar1 + uVar4;
    pbVar5 = pbVar5 + uVar3;
  } while (uVar2 != 0);
  if (0xffff < uVar1) {
    do {
      uVar1 = (uVar1 >> 0x10) + (uVar1 & 0xffff);
    } while (uVar1 >> 0x10 != 0);
  }
  *(ushort *)(param_1 + 2) = (ushort)((~uVar1 & 0xff) << 8) | (ushort)(~uVar1 >> 8) & 0xff;
  return;
}

