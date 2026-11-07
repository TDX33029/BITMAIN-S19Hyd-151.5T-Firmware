// FUN_01b28624 @ 01b28624 size=212 calls_out=3 calls_in=2
// strings: 

undefined8 FUN_01b28624(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint local_30;
  uint local_2c;
  int local_24;
  
  local_24 = DAT_01d53560;
  uVar5 = FUN_01b28590();
  uVar3 = (uint)((ulonglong)uVar5 >> 0x20);
  uVar1 = (uint)uVar5;
  uVar5 = FUN_01b28590(param_1 + 8);
  uVar4 = (uint)((ulonglong)uVar5 >> 0x20);
  uVar2 = (uint)uVar5;
  local_2c = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
             uVar2 >> 0x18;
  local_30 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
             uVar4 >> 0x18;
  FUN_01b26974(param_1,&local_30,8);
  local_30 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
             uVar3 >> 0x18;
  local_2c = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
             uVar1 >> 0x18;
  FUN_01b26974(param_1 + 8,&local_30,8);
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

