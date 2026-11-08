// FUN_01b1df88 @ 01b1df88 size=88 calls_out=0 calls_in=3
// strings: 

undefined8 FUN_01b1df88(ushort *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar3 = param_2;
  do {
    bVar1 = pbVar3[1];
    pbVar4 = pbVar3 + 3;
    bVar2 = *pbVar3;
    param_1[1] = (ushort)pbVar3[2] << 4 | (ushort)(bVar1 >> 4);
    *param_1 = (ushort)bVar2 | (bVar1 & 0xf) << 8;
    param_1 = param_1 + 2;
    pbVar3 = pbVar4;
  } while (param_2 + 0x180 != pbVar4);
  return 0;
}

