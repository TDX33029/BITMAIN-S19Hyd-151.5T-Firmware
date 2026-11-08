// FUN_00fca66c @ 00fca66c size=628 calls_out=0 calls_in=2
// strings: 

void FUN_00fca66c(undefined1 *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  uVar4 = param_2[4] >> 0x1a;
  uVar2 = param_2[5] + uVar4;
  uVar4 = uVar2 >> 0x19 | (uint)CARRY4(param_2[5],uVar4) << 7;
  uVar10 = uVar4 + param_2[6];
  uVar4 = uVar10 >> 0x1a | (uint)CARRY4(uVar4,param_2[6]) << 6;
  uVar9 = uVar4 + param_2[7];
  uVar4 = uVar9 >> 0x19 | (uint)CARRY4(uVar4,param_2[7]) << 7;
  uVar11 = uVar4 + param_2[8];
  uVar4 = uVar11 >> 0x1a | (uint)CARRY4(uVar4,param_2[8]) << 6;
  uVar7 = uVar4 + param_2[9];
  uVar8 = uVar7 & 0x1ffffff;
  uVar7 = (short)((ushort)(uVar7 >> 0x19) | (ushort)CARRY4(uVar4,param_2[9]) << 7) * 0x13 +
          (*param_2 & 0x3ffffff);
  uVar4 = *param_2 >> 0x1a;
  uVar3 = param_2[1] + uVar4;
  uVar5 = uVar7 & 0x3ffffff;
  iVar12 = (uVar3 & 0x1ffffff) + (uVar7 >> 0x1a);
  uVar4 = uVar3 >> 0x19 | (uint)CARRY4(param_2[1],uVar4) << 7;
  uVar7 = uVar4 + param_2[2];
  uVar3 = uVar7 & 0x3ffffff;
  uVar4 = uVar7 >> 0x1a | (uint)CARRY4(uVar4,param_2[2]) << 6;
  uVar7 = uVar4 + param_2[3];
  uVar6 = uVar7 & 0x1ffffff;
  uVar4 = (uVar7 >> 0x19 | (uint)CARRY4(uVar4,param_2[3]) << 7) + (param_2[4] & 0x3ffffff);
  uVar7 = uVar4 & 0x3ffffff;
  iVar1 = (uVar2 & 0x1ffffff) + (uVar4 >> 0x1a);
  uVar10 = uVar10 & 0x3ffffff;
  uVar9 = uVar9 & 0x1ffffff;
  uVar11 = uVar11 & 0x3ffffff;
  uVar5 = (short)(ushort)(uVar8 + (uVar11 + (uVar9 + (uVar10 + (iVar1 + (uVar7 + (uVar6 + (uVar3 + (
                                                  iVar12 + (uVar5 + 0x13 >> 0x1a) >> 0x19) >> 0x1a)
                                                  >> 0x19) >> 0x1a) >> 0x19) >> 0x1a) >> 0x19) >>
                                  0x1a) >> 0x19) * 0x13 + uVar5;
  *param_1 = (char)uVar5;
  param_1[2] = (char)(uVar5 >> 0x10);
  param_1[1] = (char)(uVar5 >> 8);
  uVar4 = iVar12 + (uVar5 >> 0x1a);
  param_1[3] = (byte)(uVar5 >> 0x18) & 3 | (char)uVar4 * '\x04';
  uVar3 = uVar3 + (uVar4 >> 0x19);
  param_1[5] = (char)(uVar4 >> 0xe);
  param_1[4] = (char)(uVar4 >> 6);
  param_1[6] = (char)uVar3 * '\b' | (byte)((uVar4 & 0x1c00000) >> 0x16);
  param_1[8] = (char)(uVar3 >> 0xd);
  param_1[7] = (char)(uVar3 >> 5);
  uVar6 = uVar6 + (uVar3 >> 0x1a);
  param_1[9] = (byte)((uVar3 & 0x3ffffff) >> 0x15) | (char)uVar6 * ' ';
  param_1[0xb] = (char)(uVar6 >> 0xb);
  param_1[10] = (char)(uVar6 >> 3);
  uVar7 = uVar7 + (uVar6 >> 0x19);
  uVar4 = iVar1 + (uVar7 >> 0x1a);
  param_1[0xc] = (byte)((uVar6 & 0x1ffffff) >> 0x13) | (char)uVar7 * '@';
  param_1[0xf] = (char)(uVar7 >> 0x12);
  param_1[0x10] = (char)uVar4;
  param_1[0xd] = (char)(uVar7 >> 2);
  param_1[0x12] = (char)(uVar4 >> 0x10);
  param_1[0x11] = (char)(uVar4 >> 8);
  uVar10 = uVar10 + (uVar4 >> 0x19);
  param_1[0xe] = (char)(uVar7 >> 10);
  param_1[0x13] = (byte)(uVar4 >> 0x18) & 1 | (char)uVar10 * '\x02';
  param_1[0x15] = (char)(uVar10 >> 0xf);
  param_1[0x14] = (char)(uVar10 >> 7);
  uVar9 = uVar9 + (uVar10 >> 0x1a);
  param_1[0x16] = (byte)((uVar10 & 0x3ffffff) >> 0x17) | (char)uVar9 * '\b';
  param_1[0x18] = (char)(uVar9 >> 0xd);
  param_1[0x17] = (char)(uVar9 >> 5);
  uVar11 = uVar11 + (uVar9 >> 0x19);
  param_1[0x19] = (byte)((uVar9 & 0x1ffffff) >> 0x15) | (char)uVar11 * '\x10';
  param_1[0x1b] = (char)(uVar11 >> 0xc);
  param_1[0x1a] = (char)(uVar11 >> 4);
  uVar8 = uVar8 + (uVar11 >> 0x1a);
  param_1[0x1f] = (char)((uVar8 & 0x1ffffff) >> 0x12);
  param_1[0x1c] = (byte)((uVar11 & 0x3ffffff) >> 0x14) | (char)uVar8 * '@';
  param_1[0x1e] = (char)(uVar8 >> 10);
  param_1[0x1d] = (char)(uVar8 >> 2);
  return;
}

