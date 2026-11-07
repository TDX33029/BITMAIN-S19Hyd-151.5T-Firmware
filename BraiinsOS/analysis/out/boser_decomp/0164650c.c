// FUN_0164650c @ 0164650c size=176 calls_out=3 calls_in=2
// strings: 

void FUN_0164650c(uint *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar6 = param_1[1];
  uVar5 = param_1[2];
  piVar2 = (int *)FUN_0164a6d4(uVar6,uVar5,param_2,param_3);
  bVar7 = uVar5 == 0;
  if (!bVar7) {
    piVar2 = (int *)(uVar6 + uVar5 * 4 + -4);
    bVar7 = piVar2 == (int *)0x0;
  }
  if ((!bVar7) && (*piVar2 == 0)) {
    iVar3 = uVar5 << 2;
    uVar1 = uVar5 & 0x3fffffff;
    do {
      uVar4 = uVar1;
      if (iVar3 == 0) {
        uVar4 = 0;
        goto LAB_016465b0;
      }
      piVar2 = (int *)((uVar6 - 4) + iVar3);
      iVar3 = iVar3 + -4;
      uVar1 = uVar4 - 1;
    } while (*piVar2 == 0);
    if (uVar4 <= uVar5) {
LAB_016465b0:
      param_1[2] = uVar4;
      uVar5 = uVar4;
    }
  }
  if (*param_1 >> 2 <= uVar5) {
    return;
  }
  iVar3 = FUN_0164bb38(param_1,uVar5);
  if (iVar3 != -0x7fffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620();
  }
  return;
}

