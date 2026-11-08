// FUN_016d27c0 @ 016d27c0 size=94 calls_out=1 calls_in=2
// strings: 

int FUN_016d27c0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = DAT_018ddb18 + -4 + DAT_018ddb20 * -4;
  piVar5 = (int *)(param_1 + iVar4);
  iVar3 = (DAT_018ddb1c - 1U & -param_1 - 0x70U) + param_1;
  piVar2 = piVar5;
  for (puVar1 = DAT_018ddb14; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    piVar2 = piVar2 + 1;
    *piVar2 = puVar1[5] + iVar3 + 0x70;
    FUN_016dd1aa(puVar1[5] + iVar3 + 0x70,puVar1[1],puVar1[2]);
  }
  *(int *)(param_1 + iVar4) = DAT_018ddb20;
  *(int **)(iVar3 + 0x6c) = piVar5;
  return iVar3;
}

