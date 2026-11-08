// FUN_018dff98 @ 018dff98 size=268 calls_out=4 calls_in=2
// strings: 

void FUN_018dff98(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar10 = *(uint *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0xc);
  iVar9 = *(int *)(param_1 + 0x14);
  while( true ) {
    if (iVar9 == 0) {
      return;
    }
    uVar4 = uVar10 + 1;
    piVar5 = (int *)(iVar2 + uVar10 * 0xc);
    iVar8 = *piVar5;
    iVar6 = piVar5[1];
    uVar7 = piVar5[2];
    uVar10 = uVar4 - uVar1;
    if (uVar4 < uVar1) {
      uVar10 = uVar4;
    }
    *(uint *)(param_1 + 0x10) = uVar10;
    *(int *)(param_1 + 0x14) = iVar9 + -1;
    if (iVar8 == -0x80000000) break;
    if (param_2 < uVar7) {
      iVar11 = uVar7 - param_2;
      iVar3 = FUN_01298504(iVar11,1);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,iVar11);
      }
      FUN_01bed4e2(iVar3,iVar6 + param_2,iVar11);
      uVar10 = uVar10 - 1;
      uVar4 = uVar10 + uVar1;
      if (!CARRY4(uVar10,uVar1)) {
        uVar4 = uVar10;
      }
      *(uint *)(param_1 + 0x10) = uVar4;
      *(int *)(param_1 + 0x14) = iVar9;
      piVar5 = (int *)(iVar2 + uVar4 * 0xc);
      *piVar5 = iVar11;
      piVar5[1] = iVar3;
      piVar5[2] = iVar11;
      FUN_0134bd64(iVar8,iVar6);
      return;
    }
    FUN_0134bd64(iVar8,iVar6);
    param_2 = param_2 - uVar7;
    iVar9 = iVar9 + -1;
  }
  return;
}

