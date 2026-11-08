// FUN_00024f98 @ 00024f98  size=116
// callers: [FUN_00026ce8, FUN_00025b38, FUN_00027a64]

void FUN_00024f98(uint *param_1,uint *param_2,uint *param_3,int *param_4)

{
  int iVar1;
  uint *puVar3;
  uint *puVar2;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  iVar1 = FUN_0002a514();
  if (iVar1 < 1) {
    iVar5 = 0;
    uVar4 = 0xffffff;
    uVar7 = 0;
  }
  else {
    iVar5 = 0;
    uVar7 = 0;
    uVar4 = 0xffffff;
    puVar2 = param_1;
    do {
      puVar3 = puVar2 + 1;
      uVar6 = *puVar2;
      iVar5 = iVar5 + uVar6;
      if (uVar7 < uVar6) {
        uVar7 = uVar6;
      }
      if (uVar6 <= uVar4) {
        uVar4 = uVar6;
      }
      puVar2 = puVar3;
    } while (puVar3 != param_1 + iVar1);
  }
  *param_2 = uVar4;
  *param_3 = uVar7;
  *param_4 = iVar5;
  return;
}


