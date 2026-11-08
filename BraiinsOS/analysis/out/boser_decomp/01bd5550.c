// FUN_01bd5550 @ 01bd5550 size=60 calls_out=0 calls_in=3
// strings: 

byte FUN_01bd5550(int param_1,int param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  
  bVar2 = 0;
  for (iVar1 = 0; iVar1 != param_3; iVar1 = iVar1 + 1) {
    bVar2 = bVar2 | *(byte *)(param_1 + iVar1) ^ *(byte *)(param_2 + iVar1);
  }
  return bVar2;
}

