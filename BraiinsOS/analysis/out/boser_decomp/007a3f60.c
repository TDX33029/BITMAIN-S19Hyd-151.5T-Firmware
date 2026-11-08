// FUN_007a3f60 @ 007a3f60 size=148 calls_out=1 calls_in=1
// strings: 

int FUN_007a3f60(int *param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = param_1[1];
  if (uVar5 == 0) {
    uVar5 = *(uint *)(param_2 + 0x148);
    if (0x3f < uVar5) {
      FUN_007a4e44(param_2 + 0x108,param_2 + 8);
      uVar5 = 0;
    }
    iVar3 = *(int *)(param_2 + 8 + uVar5 * 4);
    *(uint *)(param_2 + 0x148) = uVar5 + 1;
    return iVar3;
  }
  uVar2 = *(uint *)(param_2 + 0x148);
  uVar6 = param_1[2];
  do {
    if (0x3f < uVar2) {
      FUN_007a4e44(param_2 + 0x108,param_2 + 8);
      uVar2 = 0;
    }
    uVar4 = *(uint *)(param_2 + 8 + uVar2 * 4);
    uVar2 = uVar2 + 1;
    *(uint *)(param_2 + 0x148) = uVar2;
    lVar1 = (ulonglong)uVar5 * (ulonglong)uVar4;
  } while ((uint)lVar1 < uVar6);
  return *param_1 + (int)((ulonglong)lVar1 >> 0x20);
}

