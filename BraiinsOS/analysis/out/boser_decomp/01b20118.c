// FUN_01b20118 @ 01b20118 size=68 calls_out=0 calls_in=6
// strings: 

longlong FUN_01b20118(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  pbVar3 = (byte *)(param_2 + -1);
  pbVar1 = (byte *)(param_1 + -1);
  pbVar2 = (byte *)(param_2 + param_3 + -1);
  do {
    if (pbVar2 == pbVar3) {
      return ZEXT48(pbVar2) << 0x20;
    }
    pbVar1 = pbVar1 + 1;
    pbVar3 = pbVar3 + 1;
  } while ((uint)*pbVar1 == (uint)*pbVar3);
  return CONCAT44(pbVar2,(uint)*pbVar1 - (uint)*pbVar3);
}

