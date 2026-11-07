// FUN_01703498 @ 01703498 size=376 calls_out=0 calls_in=3
// strings: 

undefined8 FUN_01703498(undefined2 *param_1,short *param_2,short *param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  short *local_34;
  short *local_30;
  
  psVar3 = param_3 + 0x100;
  psVar4 = param_4 + 0x80;
  psVar5 = param_2 + 0x100;
  psVar7 = param_2;
  psVar8 = param_3 + 0x200;
  local_34 = param_2 + 0x200;
  local_30 = param_4;
  do {
    psVar6 = psVar5 + 2;
    iVar2 = (int)local_34[1] * (int)*psVar8 +
            (int)*local_34 * (int)psVar8[1] +
            (int)psVar5[1] * (int)*psVar3 +
            (int)*psVar5 * (int)psVar3[1] +
            (int)*psVar7 * (int)param_3[1] + (int)psVar7[1] * (int)*param_3;
    iVar1 = (int)local_34[1] * (int)psVar4[0x80] +
            (int)*local_34 * (int)*psVar8 +
            (int)*psVar5 * (int)*psVar3 +
            (int)psVar5[1] * (int)*psVar4 +
            (int)psVar7[1] * (int)*local_30 + (int)*psVar7 * (int)*param_3;
    param_1[1] = (short)((uint)((short)((short)iVar2 * -0xcff) * -0xd01 + iVar2) >> 0x10);
    *param_1 = (short)((uint)((short)((short)iVar1 * -0xcff) * -0xd01 + iVar1) >> 0x10);
    psVar3 = psVar3 + 2;
    psVar4 = psVar4 + 1;
    psVar5 = psVar6;
    param_1 = param_1 + 2;
    param_3 = param_3 + 2;
    psVar7 = psVar7 + 2;
    psVar8 = psVar8 + 2;
    local_34 = local_34 + 2;
    local_30 = local_30 + 1;
  } while (param_2 + 0x200 != psVar6);
  return 0;
}

