// FUN_01707a74 @ 01707a74 size=348 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_01707a74(int param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  short *psVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar6 = *param_2 & 0x3f | 1;
  uVar1 = (param_3 + 4) / 5;
  if (uVar1 != 1) {
    psVar5 = (short *)(param_1 + -2);
    uVar3 = 8;
    uVar4 = 9;
    uVar9 = 10;
    uVar8 = 6;
    do {
      sVar2 = ((ushort)uVar6 & 0x3f) - 0x20;
      psVar5 = psVar5 + 1;
      *psVar5 = sVar2;
      uVar6 = (int)(uVar6 - (int)sVar2) >> 5;
      if (uVar8 < param_3) {
        uVar6 = uVar6 | (param_2[uVar8 >> 5] >> (uVar8 & 0x1f) & 1) << 1;
      }
      uVar7 = uVar8 + 1;
      if (uVar7 < param_3) {
        uVar6 = uVar6 | (param_2[uVar7 >> 5] >> (uVar7 & 0x1f) & 1) << 2;
      }
      if (uVar3 < param_3) {
        uVar6 = uVar6 | (param_2[uVar3 >> 5] >> (uVar3 & 0x1f) & 1) << 3;
      }
      if (uVar4 < param_3) {
        uVar6 = uVar6 | (param_2[uVar4 >> 5] >> (uVar4 & 0x1f) & 1) << 4;
      }
      if (uVar9 < param_3) {
        uVar6 = uVar6 | (param_2[uVar9 >> 5] >> (uVar9 & 0x1f) & 1) << 5;
      }
      uVar8 = uVar8 + 5;
      uVar9 = uVar9 + 5;
      uVar4 = uVar4 + 5;
      uVar3 = uVar3 + 5;
    } while ((short *)(param_1 + -4 + uVar1 * 2) != psVar5);
  }
  *(short *)(param_1 + uVar1 * 2 + -2) = (short)uVar6;
  return 0;
}

