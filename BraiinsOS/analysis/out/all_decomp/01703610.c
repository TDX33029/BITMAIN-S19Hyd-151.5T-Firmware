// FUN_01703610 @ 01703610 size=444 calls_out=0 calls_in=3
// strings: 

undefined8 FUN_01703610(undefined2 *param_1,short *param_2,int param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  short *psVar5;
  short *psVar4;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  short *local_38;
  short *local_34;
  short *local_2c;
  
  psVar3 = (short *)(param_3 + 0x200);
  psVar4 = param_4;
  psVar6 = (short *)(param_3 + 0x600);
  psVar7 = param_2 + 0x300;
  psVar8 = (short *)(param_3 + 0x400);
  local_38 = param_2;
  local_34 = param_2 + 0x100;
  local_2c = param_4 + 0x100;
  do {
    psVar5 = psVar4 + 1;
    iVar1 = (int)psVar7[1] * (int)*psVar6 +
            (int)*psVar7 * (int)psVar6[1] +
            (int)psVar7[-0xff] * (int)*psVar8 +
            (int)psVar7[-0x100] * (int)psVar8[1] +
            (int)local_34[1] * (int)*psVar3 +
            (int)*local_34 * (int)psVar3[1] +
            (int)*local_38 * (int)psVar3[-0xff] + (int)local_38[1] * (int)psVar3[-0x100];
    iVar2 = (int)psVar7[1] * (int)local_2c[0x80] +
            (int)local_34[1] * (int)psVar4[0x80] +
            (int)*psVar7 * (int)*psVar6 +
            (int)psVar7[-0x100] * (int)*psVar8 +
            (int)psVar7[-0xff] * (int)*local_2c +
            (int)*local_34 * (int)*psVar3 +
            (int)local_38[1] * (int)*psVar4 + (int)*local_38 * (int)psVar3[-0x100];
    param_1[1] = (short)((uint)((short)((short)iVar1 * -0xcff) * -0xd01 + iVar1) >> 0x10);
    *param_1 = (short)((uint)((short)((short)iVar2 * -0xcff) * -0xd01 + iVar2) >> 0x10);
    psVar3 = psVar3 + 2;
    param_1 = param_1 + 2;
    psVar4 = psVar5;
    psVar6 = psVar6 + 2;
    psVar7 = psVar7 + 2;
    psVar8 = psVar8 + 2;
    local_38 = local_38 + 2;
    local_34 = local_34 + 2;
    local_2c = local_2c + 1;
  } while (param_4 + 0x80 != psVar5);
  return 0;
}

