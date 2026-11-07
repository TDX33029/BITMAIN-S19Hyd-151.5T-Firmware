// FUN_01b1d768 @ 01b1d768 size=136 calls_out=0 calls_in=4
// strings: 

undefined8 FUN_01b1d768(uint *param_1,byte *param_2)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  
  pbVar3 = param_2;
  do {
    bVar1 = *pbVar3;
    pbVar4 = pbVar3 + 5;
    *param_1 = (uint)bVar1;
    uVar2 = CONCAT11(pbVar3[1],bVar1);
    *param_1 = (uint)uVar2;
    uVar6 = CONCAT12(pbVar3[2],uVar2) & 0xfffff;
    *param_1 = uVar6;
    bVar1 = pbVar3[2];
    param_1[1] = (uint)(bVar1 >> 4);
    uVar5 = (uint)(bVar1 >> 4) | (uint)pbVar3[3] << 4;
    param_1[1] = uVar5;
    bVar1 = pbVar3[4];
    *param_1 = 0x80000 - uVar6;
    param_1[1] = 0x80000 - (uVar5 | (uint)bVar1 << 0xc);
    param_1 = param_1 + 2;
    pbVar3 = pbVar4;
  } while (pbVar4 != param_2 + 0x280);
  return 0;
}

