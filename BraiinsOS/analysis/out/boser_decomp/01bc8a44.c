// FUN_01bc8a44 @ 01bc8a44 size=336 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_01bc8a44(uint *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  bVar1 = *(byte *)((int)param_2 + 0xe);
  uVar10 = (uint)*(byte *)((int)param_2 + 5) * 0x4000 + (uint)*(byte *)((int)param_2 + 6) * 0x400000
           + (*param_2 >> 0x1a) + (uint)(byte)param_2[1] * 0x40;
  uVar11 = param_2[4];
  bVar2 = *(byte *)((int)param_2 + 0x1f);
  uVar9 = (uint)(byte)param_2[2] * 0x2000 + (uint)*(byte *)((int)param_2 + 9) * 0x200000 +
          (uint)*(byte *)((int)param_2 + 7) * 0x20 + (uVar10 >> 0x19);
  bVar3 = *(byte *)((int)param_2 + 0xf);
  uVar13 = (uint)*(byte *)((int)param_2 + 0xb) * 0x800 + (uint)(byte)param_2[3] * 0x80000 +
           (uint)*(byte *)((int)param_2 + 10) * 8 + (uVar9 >> 0x1a);
  bVar4 = *(byte *)((int)param_2 + 0xd);
  uVar12 = (uint)*(byte *)((int)param_2 + 0x15) * 0x8000 +
           (uint)*(byte *)((int)param_2 + 0x16) * 0x800000 + (uVar11 >> 0x19) +
           (uint)(byte)param_2[5] * 0x80;
  uVar7 = (uint)(byte)param_2[6] * 0x2000 + (uint)*(byte *)((int)param_2 + 0x19) * 0x200000 +
          (uint)*(byte *)((int)param_2 + 0x17) * 0x20 + (uVar12 >> 0x1a);
  bVar5 = *(byte *)((int)param_2 + 0x1e);
  bVar6 = *(byte *)((int)param_2 + 0x1d);
  uVar8 = (uint)*(byte *)((int)param_2 + 0x1b) * 0x1000 + (uint)(byte)param_2[7] * 0x100000 +
          (uint)*(byte *)((int)param_2 + 0x1a) * 0x10 + (uVar7 >> 0x19);
  *param_1 = *param_2 & 0x3ffffff;
  param_1[1] = uVar10 & 0x1ffffff;
  param_1[2] = uVar9 & 0x3ffffff;
  param_1[3] = uVar13 & 0x1ffffff;
  param_1[4] = (uint)bVar1 * 0x400 + (uint)bVar3 * 0x40000 + (uint)bVar4 * 4 + (uVar13 >> 0x19);
  param_1[5] = uVar11 & 0x1ffffff;
  param_1[6] = uVar12 & 0x3ffffff;
  param_1[7] = uVar7 & 0x1ffffff;
  param_1[8] = uVar8 & 0x3ffffff;
  param_1[9] = (uint)bVar5 * 0x400 + (uint)bVar2 * 0x40000 + (uint)bVar6 * 4 + (uVar8 >> 0x1a);
  return 0;
}

