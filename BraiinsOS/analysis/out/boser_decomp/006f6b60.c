// FUN_006f6b60 @ 006f6b60 size=132 calls_out=1 calls_in=1
// strings: 

void FUN_006f6b60(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  
  puVar4 = *(undefined2 **)(param_2 + 4);
  puVar6 = *(undefined2 **)(param_2 + 0xc);
  iVar3 = param_1[2];
  if ((uint)(*param_1 - iVar3) < (uint)((int)puVar6 - (int)puVar4) >> 1) {
    FUN_006520b4(param_1,iVar3,(uint)((int)puVar6 - (int)puVar4) >> 1,1,2);
    iVar3 = param_1[2];
  }
  if (puVar4 != puVar6) {
    iVar2 = param_1[1];
    do {
      iVar1 = iVar3 * 2;
      puVar5 = puVar4 + 1;
      iVar3 = iVar3 + 1;
      *(undefined2 *)(iVar2 + iVar1) = *puVar4;
      puVar4 = puVar5;
    } while (puVar5 != puVar6);
    *(undefined2 **)(param_2 + 4) = puVar5;
  }
  param_1[2] = iVar3;
  return;
}

