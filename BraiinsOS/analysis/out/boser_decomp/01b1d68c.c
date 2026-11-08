// FUN_01b1d68c @ 01b1d68c size=108 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_01b1d68c(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  pbVar1 = (byte *)(param_2 + -1);
  iVar3 = 0;
  iVar2 = param_1;
  do {
    pbVar1 = pbVar1 + 1;
    *(uint *)(param_1 + iVar3 * 8) = *pbVar1 & 0xf;
    *(uint *)(iVar2 + 4) = (uint)(*pbVar1 >> 4);
    *(int *)(param_1 + iVar3 * 8) = 4 - *(int *)(param_1 + iVar3 * 8);
    iVar3 = iVar3 + 1;
    *(int *)(iVar2 + 4) = 4 - *(int *)(iVar2 + 4);
    iVar2 = iVar2 + 8;
  } while (iVar3 != 0x80);
  return 0;
}

