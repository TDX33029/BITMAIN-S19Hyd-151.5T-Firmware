// FUN_017032a0 @ 017032a0 size=288 calls_out=0 calls_in=3
// strings: 

undefined8 FUN_017032a0(int param_1,int param_2,int param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  
  iVar1 = 0;
  psVar4 = (short *)(param_3 + 0x200);
  psVar5 = (short *)(param_2 + 0x200);
  do {
    iVar3 = (int)*(short *)(param_2 + 2 + iVar1);
    iVar2 = (int)psVar5[1] * (int)*psVar4 +
            (int)*psVar5 * (int)psVar4[1] +
            (int)*(short *)(param_2 + iVar1) * (int)*(short *)(param_3 + 2 + iVar1) +
            iVar3 * *(short *)(param_3 + iVar1);
    iVar3 = (int)psVar5[1] * (int)param_4[0x80] +
            (int)*(short *)(param_2 + iVar1) * (int)*(short *)(param_3 + iVar1) +
            iVar3 * *param_4 + (int)*psVar5 * (int)*psVar4;
    *(short *)(param_1 + iVar1) =
         (short)((uint)((short)((short)iVar3 * -0xcff) * -0xd01 + iVar3) >> 0x10);
    *(short *)(param_1 + 2 + iVar1) =
         (short)((uint)((short)((short)iVar2 * -0xcff) * -0xd01 + iVar2) >> 0x10);
    iVar1 = iVar1 + 4;
    psVar4 = psVar4 + 2;
    psVar5 = psVar5 + 2;
    param_4 = param_4 + 1;
  } while (iVar1 != 0x200);
  return 0;
}

