// FUN_01702d84 @ 01702d84 size=128 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_01702d84(byte *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte *pbVar3;
  byte *pbVar2;
  undefined4 uVar4;
  
  pbVar3 = param_1;
  do {
    pbVar2 = pbVar3 + 3;
    uVar4 = *param_2;
    *pbVar3 = (byte)uVar4;
    *pbVar3 = (byte)uVar4 | (byte)(param_2[1] << 6);
    bVar1 = (byte)((int)param_2[1] >> 2);
    pbVar3[1] = bVar1;
    pbVar3[1] = bVar1 | (byte)(param_2[2] << 4);
    bVar1 = (byte)((int)param_2[2] >> 4);
    pbVar3[2] = bVar1;
    pbVar3[2] = bVar1 | (byte)(param_2[3] << 2);
    pbVar3 = pbVar2;
    param_2 = param_2 + 4;
  } while (pbVar2 != param_1 + 0xc0);
  return 0;
}

