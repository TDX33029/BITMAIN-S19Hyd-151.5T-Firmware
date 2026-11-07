// FUN_016f64a0 @ 016f64a0 size=224 calls_out=3 calls_in=3
// strings: 

void FUN_016f64a0(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  
  uVar5 = *(uint *)(param_2 + 8);
  if (uVar5 != 0) {
    uVar8 = param_1[2];
    iVar9 = param_1[1];
    iVar7 = *(int *)(param_2 + 4);
    if (uVar8 == uVar5) {
      piVar2 = (int *)(iVar9 + 4);
      piVar3 = (int *)(iVar7 + 4);
      uVar4 = uVar5;
      do {
        iVar6 = piVar3[-1];
        iVar1 = piVar2[-1];
        bVar10 = iVar1 != iVar6;
        if (!bVar10) {
          iVar1 = *piVar3;
          iVar6 = *piVar2;
        }
        if (bVar10 || iVar6 != iVar1) goto LAB_016f650c;
        piVar2 = piVar2 + 2;
        piVar3 = piVar3 + 2;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    else {
LAB_016f650c:
      if (*param_1 - uVar8 < uVar5) {
        FUN_006520b4(param_1,uVar8,uVar5,4,8);
        iVar9 = param_1[1];
        uVar8 = param_1[2];
      }
      FUN_01bed4e2(iVar9 + uVar8 * 8,iVar7,uVar5 << 3);
      param_1[2] = uVar8 + uVar5;
      FUN_016f5e30(param_1);
      *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & *(byte *)(param_2 + 0xc);
    }
  }
  return;
}

