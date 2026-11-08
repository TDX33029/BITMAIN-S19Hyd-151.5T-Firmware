// FUN_01664e80 @ 01664e80 size=196 calls_out=4 calls_in=2
// strings: 

void FUN_01664e80(uint *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  FUN_01bed93e(&local_38,0,0x20);
  DataMemoryBarrier(0xb);
  iVar1 = DAT_01d51ac4;
  if (DAT_01d51ac4 == 0) {
    iVar1 = FUN_0134ae28();
  }
  if (iVar1 == -1) {
    iVar1 = FUN_0134ab8c(&local_38,0x20);
  }
  else {
    iVar1 = FUN_01664f48();
  }
  bVar3 = iVar1 == 0;
  if (bVar3) {
    iVar1 = 0;
    param_1[2] = local_38;
    param_1[3] = uStack_34;
    param_1[4] = uStack_30;
    param_1[5] = uStack_2c;
    param_1[6] = uStack_28;
    iVar2 = 0x34;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[7] = local_24;
    param_1[8] = local_20;
    param_1[9] = local_1c;
  }
  else {
    iVar2 = 4;
  }
  *(int *)((int)param_1 + iVar2) = iVar1;
  *param_1 = (uint)!bVar3;
  return;
}

