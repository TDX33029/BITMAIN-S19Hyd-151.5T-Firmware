// FUN_01445c48 @ 01445c48 size=120 calls_out=1 calls_in=2
// strings: 

void FUN_01445c48(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  puVar3 = (undefined1 *)*param_2;
  puVar5 = (undefined1 *)param_2[1];
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
    *param_2 = puVar4;
  }
  param_1[2] = iVar2;
  return;
}

