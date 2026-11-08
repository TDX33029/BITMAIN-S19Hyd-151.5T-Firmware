// FUN_0171e8ec @ 0171e8ec size=284 calls_out=1 calls_in=4
// strings: 

undefined4 FUN_0171e8ec(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  
  uVar2 = param_3 >> 5;
  if (uVar2 < param_4) {
    param_3 = param_3 & 0x1f;
    iVar5 = uVar2 * 4;
    iVar1 = (param_4 - uVar2) * 4;
    if (param_3 == 0) {
      if (iVar1 != 0) {
        FUN_016dd52c(param_1,param_2 + iVar5,iVar1);
      }
    }
    else {
      if (uVar2 < param_4 - 1) {
        puVar7 = (uint *)(param_2 + iVar5);
        puVar6 = (uint *)(param_1 + -4);
        do {
          uVar4 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar6 = puVar6 + 1;
          *puVar6 = uVar4 >> param_3 | *puVar7 << (0x20 - param_3 & 0xff);
        } while ((uint *)(param_2 + -4 + param_4 * 4) != puVar7);
      }
      *(uint *)(param_1 + ((param_4 - 1) - uVar2) * 4) =
           *(uint *)(param_2 + (param_4 + 0x3fffffff) * 4) >> param_3;
    }
    if (uVar2 == 0) {
      return 0;
    }
    param_1 = param_1 + iVar1;
  }
  else {
    iVar5 = param_4 << 2;
    if (iVar5 == 0) {
      return 0;
    }
  }
  uVar3 = FUN_016dd606(param_1,0,iVar5);
  return uVar3;
}

