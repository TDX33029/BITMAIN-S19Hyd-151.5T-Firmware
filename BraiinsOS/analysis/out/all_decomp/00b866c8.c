// FUN_00b866c8 @ 00b866c8 size=280 calls_out=1 calls_in=2
// strings: 

int * FUN_00b866c8(int *param_1,int *param_2,int *param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (7 < param_4) {
    uVar4 = param_4 >> 3;
    iVar3 = uVar4 * 8 - (param_4 >> 3);
    param_1 = (int *)FUN_00b866c8(param_1,param_1 + uVar4 * 4,param_1 + iVar3,uVar4);
    param_2 = (int *)FUN_00b866c8(param_2,param_2 + uVar4 * 4,param_2 + iVar3,uVar4);
    param_3 = (int *)FUN_00b866c8(param_3,param_3 + uVar4 * 4,param_3 + iVar3,uVar4);
  }
  uVar4 = *(uint *)(*(int *)(*param_1 + 4) + 0xc);
  uVar7 = (uint)((int)uVar4 >> 0x1f) >> 1 ^ uVar4;
  uVar5 = *(uint *)(*(int *)(*param_3 + 4) + 0xc);
  uVar8 = ((uint)((byte)((int)uVar4 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar4 >> 0x1f) >> 1) ^
          *(uint *)(*(int *)(*param_1 + 4) + 8);
  uVar6 = (uint)((int)uVar5 >> 0x1f) >> 1 ^ uVar5;
  uVar2 = ((uint)((byte)((int)uVar5 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar5 >> 0x1f) >> 1) ^
          *(uint *)(*(int *)(*param_3 + 4) + 8);
  uVar4 = *(uint *)(*(int *)(*param_2 + 4) + 0xc);
  uVar5 = ((uint)((byte)((int)uVar4 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar4 >> 0x1f) >> 1) ^
          *(uint *)(*(int *)(*param_2 + 4) + 8);
  uVar4 = (uint)((int)uVar4 >> 0x1f) >> 1 ^ uVar4;
  bVar1 = (int)(uVar7 - (uVar4 + (uVar8 < uVar5))) < 0 !=
          (SBORROW4(uVar7,uVar4) != SBORROW4(uVar7 - uVar4,(uint)(uVar8 < uVar5)));
  if (bVar1 != ((int)(uVar4 - (uVar6 + (uVar5 < uVar2))) < 0 !=
               (SBORROW4(uVar4,uVar6) != SBORROW4(uVar4 - uVar6,(uint)(uVar5 < uVar2))))) {
    param_2 = param_3;
  }
  if (bVar1 != ((int)(uVar7 - (uVar6 + (uVar8 < uVar2))) < 0 !=
               (SBORROW4(uVar7,uVar6) != SBORROW4(uVar7 - uVar6,(uint)(uVar8 < uVar2))))) {
    param_2 = param_1;
  }
  return param_2;
}

