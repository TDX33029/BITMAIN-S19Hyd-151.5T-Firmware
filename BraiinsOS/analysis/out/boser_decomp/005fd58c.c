// FUN_005fd58c @ 005fd58c size=264 calls_out=1 calls_in=2
// strings: 

int FUN_005fd58c(int param_1,int param_2,int param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  param_4 = param_4 >> 3;
  if (param_4 != 0) {
    param_1 = FUN_005fd58c(param_1,param_1 + param_4 * 0x140,param_4 * 0x230 + param_1,param_4);
    param_2 = FUN_005fd58c(param_2,param_2 + param_4 * 0x140,param_4 * 0x230 + param_2,param_4);
    param_3 = FUN_005fd58c(param_3,param_3 + param_4 * 0x140,param_4 * 0x230 + param_3,param_4);
  }
  uVar2 = *(uint *)(param_1 + 0x2c);
  uVar6 = *(uint *)(param_2 + 0x2c);
  uVar7 = (uint)((int)uVar2 >> 0x1f) >> 1 ^ uVar2;
  uVar3 = *(uint *)(param_3 + 0x2c);
  uVar2 = ((uint)((byte)((int)uVar2 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar2 >> 0x1f) >> 1) ^
          *(uint *)(param_1 + 0x28);
  uVar4 = (uint)((int)uVar3 >> 0x1f) >> 1 ^ uVar3;
  uVar3 = ((uint)((byte)((int)uVar3 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar3 >> 0x1f) >> 1) ^
          *(uint *)(param_3 + 0x28);
  uVar5 = ((uint)((byte)((int)uVar6 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar6 >> 0x1f) >> 1) ^
          *(uint *)(param_2 + 0x28);
  uVar6 = (uint)((int)uVar6 >> 0x1f) >> 1 ^ uVar6;
  bVar1 = (int)(uVar7 - (uVar6 + (uVar2 < uVar5))) < 0 !=
          (SBORROW4(uVar7,uVar6) != SBORROW4(uVar7 - uVar6,(uint)(uVar2 < uVar5)));
  if (bVar1 != ((int)(uVar6 - (uVar4 + (uVar5 < uVar3))) < 0 !=
               (SBORROW4(uVar6,uVar4) != SBORROW4(uVar6 - uVar4,(uint)(uVar5 < uVar3))))) {
    param_2 = param_3;
  }
  if (bVar1 != ((int)(uVar7 - (uVar4 + (uVar2 < uVar3))) < 0 !=
               (SBORROW4(uVar7,uVar4) != SBORROW4(uVar7 - uVar4,(uint)(uVar2 < uVar3))))) {
    param_2 = param_1;
  }
  return param_2;
}

