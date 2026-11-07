// FUN_016d33b4 @ 016d33b4 size=52 calls_out=0 calls_in=4
// strings: 

void FUN_016d33b4(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(param_1 + 4);
  *(uint *)(param_1 + 0x70) = param_3;
  *(int *)(param_1 + 0x74) = param_4;
  iVar2 = *(int *)(param_1 + 0x2c) - iVar3;
  *(int *)(param_1 + 0x78) = iVar2;
  *(int *)(param_1 + 0x7c) = iVar2 >> 0x1f;
  iVar2 = *(int *)(param_1 + 8);
  if ((param_3 != 0 || param_4 != 0) &&
     (uVar4 = iVar2 - iVar3, iVar1 = (int)uVar4 >> 0x1f,
     (int)((param_4 - iVar1) - (uint)(param_3 < uVar4)) < 0 !=
     (SBORROW4(param_4,iVar1) != SBORROW4(param_4 - iVar1,(uint)(param_3 < uVar4))))) {
    iVar2 = iVar3 + param_3;
  }
  *(int *)(param_1 + 0x68) = iVar2;
  return;
}

