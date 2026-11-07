// FUN_015a5fc0 @ 015a5fc0 size=124 calls_out=1 calls_in=1
// strings: 

void FUN_015a5fc0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  puVar3 = *(undefined1 **)(param_2 + 4);
  puVar5 = *(undefined1 **)(param_2 + 0xc);
  iVar2 = param_1[2];
  if ((uint)(*param_1 - iVar2) < (uint)((int)puVar5 - (int)puVar3)) {
    FUN_006520b4(param_1,iVar2,(int)puVar5 - (int)puVar3,1,1);
    iVar2 = param_1[2];
  }
  if (puVar3 != puVar5) {
    iVar1 = param_1[1];
    do {
      puVar4 = puVar3 + 1;
      *(undefined1 *)(iVar1 + iVar2) = *puVar3;
      iVar2 = iVar2 + 1;
      puVar3 = puVar4;
    } while (puVar4 != puVar5);
    *(undefined1 **)(param_2 + 4) = puVar4;
  }
  param_1[2] = iVar2;
  return;
}

