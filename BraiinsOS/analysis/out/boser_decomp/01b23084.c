// FUN_01b23084 @ 01b23084 size=80 calls_out=0 calls_in=3
// strings: 

undefined8 FUN_01b23084(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)(param_1 + -1);
  pbVar1 = (byte *)(param_2 + -1);
  do {
    pbVar1 = pbVar1 + 1;
    pbVar2 = pbVar2 + 1;
    *pbVar2 = *pbVar1 ^ (*pbVar2 ^ *pbVar1) & (byte)((uint)-param_3 >> 0x18);
  } while (pbVar2 != (byte *)(param_1 + 0x1f));
  return 0;
}

