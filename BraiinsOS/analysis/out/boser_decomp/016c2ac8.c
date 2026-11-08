// FUN_016c2ac8 @ 016c2ac8 size=148 calls_out=1 calls_in=0
// strings: 

void FUN_016c2ac8(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar5 = (undefined4 *)*param_2;
  puVar6 = (undefined4 *)param_2[1];
  iVar2 = param_1[2];
  if ((uint)(*param_1 - iVar2) < (uint)((int)puVar6 - (int)puVar5) >> 2) {
    FUN_006520b4(param_1,iVar2,(uint)((int)puVar6 - (int)puVar5) >> 2,4,0xc);
    iVar2 = param_1[2];
  }
  if (puVar5 != puVar6) {
    puVar1 = (undefined4 *)param_2[2];
    puVar3 = (undefined4 *)(param_1[1] + iVar2 * 0xc + 8);
    do {
      uVar4 = *puVar1;
      iVar2 = iVar2 + 1;
      puVar6 = puVar6 + -1;
      puVar3[-1] = *puVar6;
      puVar3[-2] = 0;
      *puVar3 = uVar4;
      puVar3 = puVar3 + 3;
    } while (puVar6 != puVar5);
  }
  param_1[2] = iVar2;
  return;
}

