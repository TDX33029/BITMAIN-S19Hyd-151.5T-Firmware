// FUN_01a30844 @ 01a30844 size=72 calls_out=1 calls_in=1
// strings: 

void FUN_01a30844(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((*param_2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d2b0e8);
  }
  uVar3 = param_2[4];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar1 = param_2[5];
  param_1[3] = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
               uVar3 >> 0x18;
  param_1[2] = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
               uVar1 >> 0x18;
  param_1[1] = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
               uVar2 >> 0x18;
  *param_1 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
             uVar4 >> 0x18;
  return;
}

