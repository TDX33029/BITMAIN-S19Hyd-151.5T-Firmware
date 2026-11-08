// FUN_01979884 @ 01979884 size=108 calls_out=1 calls_in=0
// strings: 

void FUN_01979884(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined4 local_28;
  int local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int *local_18;
  code *local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_28 = *(undefined4 *)*param_1;
  bVar2 = (byte)local_28;
  bVar3 = (byte)((uint)local_28 >> 8);
  bVar4 = (byte)((uint)local_28 >> 0x10);
  bVar1 = (byte)((uint)local_28 >> 0x18);
  local_24 = LZCOUNT((uint)(byte)((((((((bVar2 & 1) << 1 | bVar2 >> 1 & 1) << 1 | bVar2 >> 2 & 1) <<
                                      1 | bVar2 >> 3 & 1) << 1 | bVar2 >> 4 & 1) << 1 |
                                   bVar2 >> 5 & 1) << 1 | bVar2 >> 6 & 1) << 1 | bVar2 >> 7) << 0x18
                     | (uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1)
                                        << 1 | bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 |
                                     bVar3 >> 5 & 1) << 1 | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) <<
                       0x10 | (uint)(byte)((((((((bVar4 & 1) << 1 | bVar4 >> 1 & 1) << 1 |
                                               bVar4 >> 2 & 1) << 1 | bVar4 >> 3 & 1) << 1 |
                                             bVar4 >> 4 & 1) << 1 | bVar4 >> 5 & 1) << 1 |
                                           bVar4 >> 6 & 1) << 1 | bVar4 >> 7) << 8 |
                     (uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1) <<
                                      1 | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 |
                                   bVar1 >> 5 & 1) << 1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7));
  local_18 = &local_24;
  local_14 = FUN_01309b00;
  local_1c = &LAB_01309be8;
  FUN_012fa178(*param_2,param_2[1],&DAT_005b2083,&local_20);
  return;
}

