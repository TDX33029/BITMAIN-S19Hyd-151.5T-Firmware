// FUN_01b1e1c8 @ 01b1e1c8 size=264 calls_out=0 calls_in=3
// strings: 

undefined8 FUN_01b1e1c8(undefined2 *param_1,int param_2,int param_3,short *param_4)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  short *local_2c;
  
  iVar4 = 0;
  psVar5 = (short *)(param_3 + 0x200);
  psVar6 = (short *)(param_2 + 0x200);
  local_2c = param_4;
  do {
    iVar7 = (int)*(short *)(param_2 + 2 + iVar4);
    psVar1 = (short *)(param_3 + iVar4);
    psVar2 = (short *)(param_2 + iVar4);
    iVar8 = (int)psVar6[1] * (int)local_2c[0x80] +
            (int)*psVar1 * (int)*psVar2 + (int)*psVar6 * (int)*psVar5 + *local_2c * iVar7;
    psVar3 = (short *)(param_3 + 2 + iVar4);
    iVar4 = iVar4 + 4;
    iVar7 = (int)psVar6[1] * (int)*psVar5 +
            (int)*psVar6 * (int)psVar5[1] + *psVar1 * iVar7 + (int)*psVar3 * (int)*psVar2;
    *param_1 = (short)((uint)((short)((short)iVar8 * -0xcff) * -0xd01 + iVar8) >> 0x10);
    param_1[1] = (short)((uint)((short)((short)iVar7 * -0xcff) * -0xd01 + iVar7) >> 0x10);
    param_1 = param_1 + 2;
    psVar5 = psVar5 + 2;
    psVar6 = psVar6 + 2;
    local_2c = local_2c + 1;
  } while (iVar4 != 0x200);
  return 0;
}

