// FUN_01701964 @ 01701964 size=360 calls_out=0 calls_in=0
// strings: 

uint FUN_01701964(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1 | param_1[2] | param_1[4] | param_1[6] | param_1[8] | param_1[10] | param_1[0xc]
          | param_1[0xe] | param_1[0x10] |
          param_1[1] | param_1[3] | param_1[5] | param_1[7] | param_1[9] | param_1[0xb] |
          param_1[0xd] | param_1[0xf] | param_1[0x11] | param_1[0x12];
  uVar2 = param_1[1] ^ 0x7ffffff | param_1[3] ^ 0x7ffffff | param_1[5] ^ 0x7ffffff |
          param_1[7] ^ 0xfffffff | param_1[9] ^ 0xfffffff | param_1[0xb] ^ 0xfffffff |
          param_1[0xd] ^ 0x7ffffff | param_1[0xf] ^ 0x7ffffff | param_1[0x11] ^ 0x7ffffff |
          *param_1 ^ 0xfffffff | param_1[2] ^ 0xfffffff | param_1[4] ^ 0xfffffff |
          param_1[6] ^ 0x7ffffff | param_1[8] ^ 0x7ffffff | param_1[10] ^ 0x7ffffff |
          param_1[0xc] ^ 0x7ffffff | param_1[0xe] ^ 0xfffffff | param_1[0x10] ^ 0xfffffff |
          param_1[0x12] ^ 0x7ffffff;
  return ~((int)(uVar1 - 1 & ~uVar1 | uVar2 - 1 & ~uVar2) >> 0x1f);
}

