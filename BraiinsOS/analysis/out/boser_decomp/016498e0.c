// FUN_016498e0 @ 016498e0 size=228 calls_out=3 calls_in=7
// strings: 

void FUN_016498e0(uint *param_1,char param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *extraout_r2;
  int *piVar6;
  bool bVar7;
  
  if (param_2 == '\x01') {
    param_3[2] = 0;
    uVar2 = FUN_0164a850(param_3,4,4);
    uVar5 = param_3[2];
    bVar7 = uVar5 == 0;
    piVar6 = extraout_r2;
    if (!bVar7) {
      uVar2 = param_3[1];
      piVar6 = (int *)(uVar2 + uVar5 * 4 + -4);
      bVar7 = piVar6 == (int *)0x0;
    }
    if ((!bVar7) && (*piVar6 == 0)) {
      iVar3 = uVar5 << 2;
      uVar1 = uVar5 & 0x3fffffff;
      do {
        uVar4 = uVar1;
        if (iVar3 == 0) {
          uVar4 = 0;
          goto LAB_016499bc;
        }
        piVar6 = (int *)((uVar2 - 4) + iVar3);
        iVar3 = iVar3 + -4;
        uVar1 = uVar4 - 1;
      } while (*piVar6 == 0);
      if (uVar4 <= uVar5) {
LAB_016499bc:
        uVar5 = uVar4;
        param_3[2] = uVar5;
      }
    }
    param_2 = '\x01';
    if ((uVar5 < *param_3 >> 2) && (iVar3 = FUN_0164bb38(param_3), iVar3 != -0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620();
    }
  }
  else if (param_3[2] == 0) {
    param_2 = '\x01';
  }
  uVar2 = param_3[1];
  uVar5 = param_3[2];
  *param_1 = *param_3;
  param_1[1] = uVar2;
  param_1[2] = uVar5;
  *(char *)(param_1 + 3) = param_2;
  return;
}

