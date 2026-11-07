// FUN_00b81f6c @ 00b81f6c size=256 calls_out=1 calls_in=2
// strings: 

uint * FUN_00b81f6c(uint *param_1,uint *param_2,uint *param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (7 < param_4) {
    uVar2 = param_4 >> 3;
    iVar4 = uVar2 * 8 - (param_4 >> 3);
    param_1 = (uint *)FUN_00b81f6c(param_1,param_1 + uVar2 * 0x10,param_1 + iVar4 * 4,uVar2);
    param_2 = (uint *)FUN_00b81f6c(param_2,param_2 + uVar2 * 0x10,param_2 + iVar4 * 4,uVar2);
    param_3 = (uint *)FUN_00b81f6c(param_3,param_3 + uVar2 * 0x10,param_3 + iVar4 * 4,uVar2);
  }
  uVar2 = param_1[1];
  uVar7 = (uint)((int)uVar2 >> 0x1f) >> 1 ^ uVar2;
  uVar5 = param_3[1];
  uVar8 = ((uint)((byte)((int)uVar2 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar2 >> 0x1f) >> 1) ^
          *param_1;
  uVar6 = (uint)((int)uVar5 >> 0x1f) >> 1 ^ uVar5;
  uVar3 = param_2[1];
  uVar2 = ((uint)((byte)((int)uVar5 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar5 >> 0x1f) >> 1) ^
          *param_3;
  uVar5 = ((uint)((byte)((int)uVar3 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar3 >> 0x1f) >> 1) ^
          *param_2;
  uVar3 = (uint)((int)uVar3 >> 0x1f) >> 1 ^ uVar3;
  bVar1 = (int)(uVar7 - (uVar3 + (uVar8 < uVar5))) < 0 !=
          (SBORROW4(uVar7,uVar3) != SBORROW4(uVar7 - uVar3,(uint)(uVar8 < uVar5)));
  if (bVar1 != ((int)(uVar3 - (uVar6 + (uVar5 < uVar2))) < 0 !=
               (SBORROW4(uVar3,uVar6) != SBORROW4(uVar3 - uVar6,(uint)(uVar5 < uVar2))))) {
    param_2 = param_3;
  }
  if (bVar1 != ((int)(uVar7 - (uVar6 + (uVar8 < uVar2))) < 0 !=
               (SBORROW4(uVar7,uVar6) != SBORROW4(uVar7 - uVar6,(uint)(uVar8 < uVar2))))) {
    param_2 = param_1;
  }
  return param_2;
}

