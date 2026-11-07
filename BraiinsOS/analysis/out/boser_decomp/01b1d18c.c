// FUN_01b1d18c @ 01b1d18c size=232 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_01b1d18c(uint *param_1,byte *param_2)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  pbVar3 = param_2;
  do {
    bVar1 = *pbVar3;
    pbVar4 = pbVar3 + 9;
    *param_1 = (uint)bVar1;
    uVar2 = CONCAT11(pbVar3[1],bVar1);
    *param_1 = (uint)uVar2;
    uVar7 = CONCAT12(pbVar3[2],uVar2) & 0x3ffff;
    *param_1 = uVar7;
    bVar1 = pbVar3[2];
    param_1[1] = (uint)(bVar1 >> 2);
    uVar8 = (uint)(bVar1 >> 2) | (uint)pbVar3[3] << 6;
    param_1[1] = uVar8;
    uVar8 = uVar8 | (pbVar3[4] & 0xf) << 0xe;
    param_1[1] = uVar8;
    bVar1 = pbVar3[4];
    param_1[2] = (uint)(bVar1 >> 4);
    uVar6 = (uint)(bVar1 >> 4) | (uint)pbVar3[5] << 4;
    param_1[2] = uVar6;
    uVar6 = uVar6 | (pbVar3[6] & 0x3f) << 0xc;
    param_1[2] = uVar6;
    bVar1 = pbVar3[6];
    param_1[3] = (uint)(bVar1 >> 6);
    uVar5 = (uint)(bVar1 >> 6) | (uint)pbVar3[7] << 2;
    param_1[3] = uVar5;
    bVar1 = pbVar3[8];
    *param_1 = 0x20000 - uVar7;
    param_1[1] = 0x20000 - uVar8;
    param_1[2] = 0x20000 - uVar6;
    param_1[3] = 0x20000 - (uVar5 | (uint)bVar1 << 10);
    param_1 = param_1 + 4;
    pbVar3 = pbVar4;
  } while (pbVar4 != param_2 + 0x240);
  return 0;
}

