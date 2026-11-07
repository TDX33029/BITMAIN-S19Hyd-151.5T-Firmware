// FUN_01bcf0e8 @ 01bcf0e8 size=240 calls_out=2 calls_in=2
// strings: 

undefined8 FUN_01bcf0e8(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint extraout_r2;
  undefined8 uVar5;
  
  FUN_01bced98(param_1,param_2,0x10);
  uVar1 = FUN_01bcf0a0(*param_1);
  uVar2 = FUN_01bcf0a0(param_1[1]);
  uVar5 = FUN_01bcf0a0(param_1[2],uVar2);
  uVar5 = FUN_01bcf0a0(param_1[3],(int)((ulonglong)uVar5 >> 0x20),(int)uVar5);
  uVar4 = (uint)((ulonglong)uVar5 >> 0x20);
  uVar3 = (uint)uVar5;
  *param_1 = uVar1 & 0xff | uVar3 << 0x18 | (uVar4 & 0xff) << 8 | (extraout_r2 & 0xff) << 0x10;
  param_1[1] = (uVar1 & 0xffff) >> 8 | (uVar3 >> 8) << 0x18 | uVar4 & 0xff00 |
               (extraout_r2 & 0xff00) << 8;
  param_1[2] = (uVar1 & 0xffffff) >> 0x10 | (uVar3 >> 0x10) << 0x18 | extraout_r2 & 0xff0000 |
               uVar4 >> 8 & 0xff00;
  param_1[3] = uVar3 & 0xff000000 | uVar1 >> 0x18 | (uVar4 >> 0x18) << 8 |
               (extraout_r2 >> 0x18) << 0x10;
  return 0;
}

