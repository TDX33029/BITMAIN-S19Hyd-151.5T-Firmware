// FUN_01b1ddb8 @ 01b1ddb8 size=104 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_01b1ddb8(undefined2 *param_1,int param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(param_2 + -1);
  do {
    pbVar1 = pbVar1 + 1;
    *param_1 = (short)((*pbVar1 & 0xf) * 0xd01 + 8 >> 4);
    param_1[1] = (short)((uint)(*pbVar1 >> 4) * 0xd01 + 8 >> 4);
    param_1 = param_1 + 2;
  } while (pbVar1 != (byte *)(param_2 + 0x7f));
  return 0;
}

