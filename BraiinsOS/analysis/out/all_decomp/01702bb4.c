// FUN_01702bb4 @ 01702bb4 size=232 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_01702bb4(uint *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  pbVar3 = param_2;
  do {
    bVar1 = *pbVar3;
    pbVar4 = pbVar3 + 3;
    *param_1 = bVar1 & 7;
    uVar10 = (*pbVar3 & 0x3f) >> 3;
    param_1[1] = uVar10;
    uVar5 = (pbVar3[1] & 1) << 2 | (uint)(*pbVar3 >> 6);
    param_1[2] = uVar5;
    uVar8 = (pbVar3[1] & 0xf) >> 1;
    param_1[3] = uVar8;
    uVar7 = (pbVar3[1] & 0x7f) >> 4;
    param_1[4] = uVar7;
    uVar6 = (pbVar3[2] & 3) << 1 | (uint)(pbVar3[1] >> 7);
    param_1[5] = uVar6;
    uVar9 = (pbVar3[2] & 0x1f) >> 2;
    param_1[6] = uVar9;
    bVar2 = pbVar3[2];
    param_1[2] = 2 - uVar5;
    param_1[5] = 2 - uVar6;
    *param_1 = 2 - (bVar1 & 7);
    param_1[1] = 2 - uVar10;
    param_1[3] = 2 - uVar8;
    param_1[4] = 2 - uVar7;
    param_1[6] = 2 - uVar9;
    param_1[7] = 2 - (bVar2 >> 5);
    param_1 = param_1 + 8;
    pbVar3 = pbVar4;
  } while (pbVar4 != param_2 + 0x60);
  return 0;
}

