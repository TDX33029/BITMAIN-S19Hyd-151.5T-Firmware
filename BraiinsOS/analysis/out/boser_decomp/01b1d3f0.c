// FUN_01b1d3f0 @ 01b1d3f0 size=140 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_01b1d3f0(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  pbVar4 = param_2 + 0x1000;
  do {
    pbVar5 = param_1 + 0xc0;
    pbVar2 = param_1;
    pbVar3 = param_2;
    do {
      bVar1 = *pbVar3;
      param_1 = pbVar2 + 3;
      *pbVar2 = bVar1;
      *pbVar2 = bVar1 | pbVar3[4] << 6;
      bVar1 = (byte)(*(int *)(pbVar3 + 4) >> 2);
      pbVar2[1] = bVar1;
      pbVar2[1] = bVar1 | pbVar3[8] << 4;
      bVar1 = (byte)(*(int *)(pbVar3 + 8) >> 4);
      pbVar2[2] = bVar1;
      pbVar2[2] = bVar1 | pbVar3[0xc] << 2;
      pbVar2 = param_1;
      pbVar3 = pbVar3 + 0x10;
    } while (param_1 != pbVar5);
    param_2 = param_2 + 0x400;
  } while (param_2 != pbVar4);
  return 0;
}

