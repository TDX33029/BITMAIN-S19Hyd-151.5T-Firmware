// FUN_0170298c @ 0170298c size=372 calls_out=0 calls_in=3
// strings: 

undefined8 FUN_0170298c(uint *param_1,byte *param_2)

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
  uint uVar11;
  
  pbVar3 = param_2;
  do {
    bVar1 = *pbVar3;
    *param_1 = (uint)bVar1;
    pbVar4 = pbVar3 + 0xd;
    uVar9 = CONCAT11(pbVar3[1],bVar1) & 0x1fff;
    *param_1 = uVar9;
    bVar1 = pbVar3[1];
    param_1[1] = (uint)(bVar1 >> 5);
    uVar11 = (uint)(bVar1 >> 5) | (uint)pbVar3[2] << 3;
    param_1[1] = uVar11;
    uVar11 = uVar11 | (pbVar3[3] & 3) << 0xb;
    param_1[1] = uVar11;
    bVar1 = pbVar3[3];
    param_1[2] = (uint)(bVar1 >> 2);
    uVar8 = (uint)(bVar1 >> 2) | (pbVar3[4] & 0x7f) << 6;
    param_1[2] = uVar8;
    bVar1 = pbVar3[4];
    param_1[3] = (uint)(bVar1 >> 7);
    uVar10 = (uint)(bVar1 >> 7) | (uint)pbVar3[5] << 1;
    param_1[3] = uVar10;
    uVar10 = uVar10 | (pbVar3[6] & 0xf) << 9;
    param_1[3] = uVar10;
    bVar1 = pbVar3[6];
    param_1[4] = (uint)(bVar1 >> 4);
    uVar5 = (uint)(bVar1 >> 4) | (uint)pbVar3[7] << 4;
    param_1[4] = uVar5;
    uVar5 = uVar5 | (pbVar3[8] & 1) << 0xc;
    param_1[4] = uVar5;
    bVar1 = pbVar3[8];
    param_1[5] = (uint)(bVar1 >> 1);
    uVar7 = (uint)(bVar1 >> 1) | (pbVar3[9] & 0x3f) << 7;
    param_1[5] = uVar7;
    bVar1 = pbVar3[9];
    param_1[6] = (uint)(bVar1 >> 6);
    uVar6 = (uint)(bVar1 >> 6) | (uint)pbVar3[10] << 2;
    param_1[6] = uVar6;
    uVar6 = uVar6 | (pbVar3[0xb] & 7) << 10;
    param_1[6] = uVar6;
    bVar1 = pbVar3[0xb];
    param_1[7] = (uint)(bVar1 >> 3);
    bVar2 = pbVar3[0xc];
    *param_1 = 0x1000 - uVar9;
    param_1[1] = 0x1000 - uVar11;
    param_1[2] = 0x1000 - uVar8;
    param_1[3] = 0x1000 - uVar10;
    param_1[4] = 0x1000 - uVar5;
    param_1[5] = 0x1000 - uVar7;
    param_1[7] = 0x1000 - ((uint)(bVar1 >> 3) | (uint)bVar2 << 5);
    param_1[6] = 0x1000 - uVar6;
    param_1 = param_1 + 8;
    pbVar3 = pbVar4;
  } while (pbVar4 != param_2 + 0x1a0);
  return 0;
}

