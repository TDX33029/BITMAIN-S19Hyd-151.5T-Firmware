// FUN_0129ba74 @ 0129ba74 size=152 calls_out=1 calls_in=1
// strings: 

void FUN_0129ba74(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar4 = param_1[2];
  uVar1 = (uint)(param_3 - param_2) >> 3;
  if ((uint)(*param_1 - iVar4) < (uint)(param_3 - param_2) >> 3) {
    FUN_006520b4(param_1,iVar4,uVar1,4,8);
    iVar4 = param_1[2];
  }
  if (param_2 != param_3) {
    iVar2 = param_1[1];
    uVar3 = 0;
    do {
      puVar6 = (undefined4 *)(param_2 + uVar3 * 8);
      puVar5 = (undefined4 *)(iVar2 + iVar4 * 8 + uVar3 * 8);
      *puVar5 = *puVar6;
      uVar3 = uVar3 + 1;
      puVar5[1] = puVar6[1];
    } while (uVar1 != uVar3);
    iVar4 = iVar4 + uVar3;
  }
  param_1[2] = iVar4;
  return;
}

