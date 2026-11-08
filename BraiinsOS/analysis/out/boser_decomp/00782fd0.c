// FUN_00782fd0 @ 00782fd0 size=164 calls_out=1 calls_in=1
// strings: 

void FUN_00782fd0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  
  uVar6 = ((uint)(param_3 - param_2) >> 2) * -0x55555555;
  iVar3 = param_1[2];
  if ((uint)(*param_1 - iVar3) < uVar6) {
    FUN_01af7b44(param_1,iVar3,uVar6,4,8);
    iVar3 = param_1[2];
  }
  if (param_2 != param_3) {
    iVar1 = param_1[1];
    puVar5 = (undefined4 *)(param_2 + 4);
    uVar4 = 0;
    do {
      uVar7 = puVar5[1];
      puVar2 = (undefined4 *)(iVar1 + iVar3 * 8 + uVar4 * 8);
      *puVar2 = *puVar5;
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 3;
      puVar2[1] = uVar7;
    } while (uVar6 != uVar4);
    iVar3 = iVar3 + uVar4;
  }
  param_1[2] = iVar3;
  return;
}

