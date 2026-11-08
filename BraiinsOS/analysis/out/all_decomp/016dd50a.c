// FUN_016dd50a @ 016dd50a size=34 calls_out=0 calls_in=154
// strings: 

int FUN_016dd50a(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)(param_2 + -1);
  pbVar1 = (byte *)(param_1 + -1);
  do {
    if ((byte *)(param_2 + param_3 + -1) == pbVar2) {
      return 0;
    }
    pbVar1 = pbVar1 + 1;
    pbVar2 = pbVar2 + 1;
  } while ((uint)*pbVar1 == (uint)*pbVar2);
  return (uint)*pbVar1 - (uint)*pbVar2;
}

