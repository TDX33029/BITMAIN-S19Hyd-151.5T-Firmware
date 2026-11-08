// FUN_01ae259c @ 01ae259c size=284 calls_out=0 calls_in=1
// strings: 

bool FUN_01ae259c(int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  bool bVar11;
  int local_44 [8];
  
  DAT_01d50fd4 = &LAB_01ae26c4;
  bVar7 = true;
  cVar1 = *(char *)(param_1 + 8);
  bVar11 = cVar1 == '-';
  if (bVar11) {
    cVar1 = *(char *)(param_1 + 0xd);
  }
  if (bVar11 && cVar1 == '-') {
    cVar1 = *(char *)(param_1 + 0x12);
    bVar11 = cVar1 == '-';
    if (bVar11) {
      cVar1 = *(char *)(param_1 + 0x17);
    }
    if (bVar11 && cVar1 == '-') {
      bVar10 = 0;
      local_44[7] = 0x20;
      local_44[6] = 0x1c;
      local_44[5] = 0x18;
      local_44[4] = 0x13;
      local_44[3] = 0xe;
      local_44[2] = 9;
      local_44[1] = 4;
      pbVar6 = (byte *)(param_2 + 1);
      local_44[0] = 0;
      iVar8 = 0;
      do {
        iVar9 = *(int *)((int)local_44 + iVar8);
        iVar8 = iVar8 + 4;
        bVar2 = (&DAT_0053309f)[*(byte *)(param_1 + 2 + iVar9)];
        bVar3 = (&DAT_0053309f)[*(byte *)(param_1 + 3 + iVar9)];
        bVar4 = (&DAT_0053309f)[*(byte *)(param_1 + iVar9)];
        bVar5 = (&DAT_0053309f)[*(byte *)(param_1 + 1 + iVar9)];
        *pbVar6 = bVar3 | bVar2 << 4;
        pbVar6[-1] = bVar5 | bVar4 << 4;
        pbVar6 = pbVar6 + 2;
        bVar10 = bVar4 | bVar10 | bVar5 | bVar2 | bVar3;
      } while (iVar8 != 0x20);
      bVar7 = bVar10 == 0xff;
    }
  }
  return bVar7;
}

