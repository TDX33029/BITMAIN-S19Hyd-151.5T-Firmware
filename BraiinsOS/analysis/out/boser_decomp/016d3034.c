// FUN_016d3034 @ 016d3034 size=244 calls_out=3 calls_in=1
// strings: 

void FUN_016d3034(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int *local_30;
  int *local_2c;
  int iStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  
  piVar3 = *(int **)(param_1 + 4);
  uVar6 = *(uint *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 8) = 0;
  piVar4 = piVar3 + uVar6 * 3;
  if ((uint)(*(int *)(param_1 + 0xc) - iVar2) < uVar6) {
    FUN_006520b4((int *)(param_1 + 0xc),iVar2,uVar6,4,0xc);
    iVar2 = *(int *)(param_1 + 0x14);
  }
  uStack_20 = 0;
  local_30 = piVar3;
  if (piVar3 != piVar4) {
    piVar5 = (int *)(*(int *)(param_1 + 0x10) + iVar2 * 0xc + 4);
    piVar3 = piVar3 + 3;
    do {
      local_30 = piVar3;
      piVar3 = (int *)local_30[-3];
      bVar9 = piVar3 != (int *)0x80000000;
      piVar1 = local_30 + -3;
      if (bVar9) {
        iVar7 = local_30[-2];
        iVar8 = local_30[-1];
        piVar5[-1] = (int)piVar3;
        *piVar5 = iVar7;
        piVar5[1] = iVar8;
        piVar3 = local_30 + 3;
        piVar5 = piVar5 + 3;
        iVar2 = iVar2 + 1;
        piVar1 = local_30;
      }
    } while (bVar9 && piVar1 != piVar4);
  }
  *(int *)(param_1 + 0x14) = iVar2;
  local_2c = piVar4;
  iStack_28 = param_1;
  uStack_24 = uVar6;
  FUN_016c78f0(&local_30);
  FUN_016d32fc(param_1);
  FUN_016d32fc(param_1);
  return;
}

