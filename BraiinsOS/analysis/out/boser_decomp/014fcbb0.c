// FUN_014fcbb0 @ 014fcbb0 size=180 calls_out=2 calls_in=3
// strings: 

void FUN_014fcbb0(int *param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *param_2;
  iVar6 = param_2[3];
  iVar5 = param_2[1];
  iVar7 = param_2[2];
  if (iVar5 == iVar6) {
    iVar3 = iVar8;
  }
  else {
    iVar3 = 0;
    do {
      puVar4 = (undefined4 *)(iVar8 + iVar3);
      uVar2 = *(undefined4 *)(iVar5 + iVar3);
      param_2[1] = (int)((undefined4 *)(iVar5 + iVar3) + 1);
      uVar2 = FUN_01594a60(uVar2);
      iVar3 = iVar3 + 4;
      *puVar4 = uVar2;
    } while (iVar5 + iVar3 != iVar6);
    iVar5 = iVar5 + iVar3;
    iVar3 = iVar8 + iVar3;
  }
  *param_2 = 4;
  uVar1 = (uint)(iVar3 - iVar8) >> 2;
  param_2[1] = 4;
  param_2[2] = 0;
  param_2[3] = 4;
  FUN_01574958(iVar5,(uint)(iVar6 - iVar5) >> 2,0,4,iVar8,uVar1,iVar7);
  *param_1 = iVar7;
  param_1[1] = iVar8;
  param_1[2] = uVar1;
  FUN_01574958(param_2[1],(uint)(param_2[3] - param_2[1]) >> 2);
  FUN_01af7af8(param_2[2],*param_2,4,4);
  return;
}

