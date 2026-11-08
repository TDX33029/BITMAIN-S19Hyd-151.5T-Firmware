// FUN_01b1e484 @ 01b1e484 size=296 calls_out=0 calls_in=3
// strings: 

undefined8 FUN_01b1e484(int param_1,int param_2,int param_3,short *param_4)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  
  iVar6 = 0;
  do {
    iVar5 = 0;
    iVar10 = 0;
    iVar9 = 0;
    psVar8 = param_4;
    do {
      sVar2 = *psVar8;
      psVar8 = psVar8 + 0x80;
      sVar3 = *(short *)(param_2 + 2 + iVar6 + iVar5);
      iVar7 = (int)*(short *)(param_3 + iVar6 + iVar5);
      sVar4 = *(short *)(param_2 + iVar6 + iVar5);
      iVar10 = iVar10 + (int)sVar3 * (int)sVar2 + sVar4 * iVar7;
      psVar1 = (short *)(param_3 + 2 + iVar6 + iVar5);
      iVar5 = iVar5 + 0x200;
      iVar9 = iVar9 + (int)sVar4 * (int)*psVar1 + sVar3 * iVar7;
    } while (iVar5 != 0x600);
    param_4 = param_4 + 1;
    *(short *)(param_1 + iVar6) =
         (short)((uint)((short)((short)iVar10 * -0xcff) * -0xd01 + iVar10) >> 0x10);
    *(short *)(param_1 + 2 + iVar6) =
         (short)((uint)((short)((short)iVar9 * -0xcff) * -0xd01 + iVar9) >> 0x10);
    iVar6 = iVar6 + 4;
  } while (iVar6 != 0x200);
  return 0;
}

