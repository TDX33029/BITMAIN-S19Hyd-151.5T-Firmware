// FUN_01beaf1a @ 01beaf1a size=78 calls_out=1 calls_in=2
// strings: 

uint FUN_01beaf1a(int param_1,byte param_2)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte local_9;
  
  pbVar3 = *(byte **)(param_1 + 0x10);
  local_9 = param_2;
  if (pbVar3 == (byte *)0x0) {
    iVar1 = FUN_01beb168();
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    pbVar3 = *(byte **)(param_1 + 0x10);
  }
  pbVar2 = *(byte **)(param_1 + 0x14);
  if ((pbVar2 != pbVar3) && ((uint)local_9 != *(uint *)(param_1 + 0x50))) {
    *(byte **)(param_1 + 0x14) = pbVar2 + 1;
    *pbVar2 = local_9;
    return (uint)local_9;
  }
  iVar1 = (**(code **)(param_1 + 0x24))(param_1,&local_9,1);
  if (iVar1 == 1) {
    return (uint)local_9;
  }
  return 0xffffffff;
}

