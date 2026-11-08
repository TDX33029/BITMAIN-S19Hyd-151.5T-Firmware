// FUN_014194e8 @ 014194e8 size=124 calls_out=0 calls_in=2
// strings: 

undefined4 FUN_014194e8(int param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_5 < param_3) {
    param_3 = param_5;
  }
  if (param_3 != 0) {
    iVar1 = 0;
    do {
      uVar2 = *(uint *)(param_2 + iVar1 + 4);
      if (0xffff < uVar2) {
        return 10;
      }
      piVar3 = (int *)(param_2 + iVar1);
      iVar4 = *piVar3;
      iVar5 = piVar3[2];
      iVar6 = piVar3[3];
      piVar3 = (int *)(param_4 + iVar1);
      *piVar3 = iVar4 - param_1;
      iVar1 = iVar1 + 0x10;
      piVar3[1] = (iVar4 - param_1) + uVar2;
      piVar3[2] = iVar5 - param_1;
      piVar3[3] = (iVar5 - param_1) + iVar6;
    } while (param_3 * 0x10 != iVar1);
  }
  return 0xd;
}

