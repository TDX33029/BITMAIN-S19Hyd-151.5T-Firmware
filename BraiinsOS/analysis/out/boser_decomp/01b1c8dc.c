// FUN_01b1c8dc @ 01b1c8dc size=96 calls_out=0 calls_in=6
// strings: 

char FUN_01b1c8dc(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  
  iVar3 = 0;
  bVar4 = 0;
  do {
    pbVar1 = (byte *)(param_1 + iVar3);
    pbVar2 = (byte *)(param_2 + iVar3);
    iVar3 = iVar3 + 1;
    bVar4 = *pbVar1 ^ *pbVar2 | bVar4;
  } while (param_3 != iVar3);
  return -(bVar4 != 0);
}

