// FUN_0164b560 @ 0164b560 size=640 calls_out=9 calls_in=5
// strings: 

void FUN_0164b560(undefined4 *param_1,int *param_2,int *****param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *****pppppiVar4;
  uint unaff_r4;
  int ****ppppiVar5;
  uint uVar6;
  undefined4 uVar7;
  int *****pppppiVar8;
  int *****pppppiVar9;
  int *piVar10;
  bool bVar11;
  int *****local_40;
  int *****local_3c;
  int *****local_38;
  int *****local_30;
  int *****local_2c;
  int *****local_28;
  
  if (param_3 == (int *****)0x0) {
    iVar2 = *param_2;
    if (iVar2 == -0x80000000) {
      FUN_0164a9cc(&local_40,*(undefined4 *)(param_2[1] + 4),*(undefined4 *)(param_2[1] + 8));
      iVar2 = -0x80000000;
    }
    else {
      local_40 = (int *****)*param_2;
      local_3c = (int *****)param_2[1];
      local_38 = (int *****)param_2[2];
    }
LAB_0164b660:
    pppppiVar9 = local_38;
    if ((param_4 & 0xff) != 0) {
      if (local_38 < param_3) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(param_3,local_38,local_38,&DAT_01d0679c);
      }
      if (param_3 != local_38) {
        iVar3 = (int)param_3 << 2;
        ppppiVar5 = (int ****)0x0;
        do {
          uVar6 = *(uint *)((int)local_3c + iVar3);
          *(uint *)((int)local_3c + iVar3) = (uint)ppppiVar5 | uVar6 << (param_4 & 0x1f);
          iVar3 = iVar3 + 4;
          ppppiVar5 = (int ****)(uVar6 >> (-param_4 & 0x1f));
        } while ((int)local_38 * 4 != iVar3);
        if (ppppiVar5 != (int ****)0x0) {
          if (local_38 == local_40) {
            FUN_01a54b48(&local_40);
          }
          local_3c[(int)pppppiVar9] = ppppiVar5;
          local_38 = (int *****)((int)pppppiVar9 + 1);
        }
      }
    }
    local_30 = local_40;
    local_2c = local_3c;
    local_28 = local_38;
    bVar11 = local_38 == (int *****)0x0;
    pppppiVar4 = local_40;
    pppppiVar9 = (int *****)&local_40;
    if (!bVar11) {
      pppppiVar4 = local_3c + (int)((int)local_38 + -1);
      bVar11 = pppppiVar4 == (int *****)0x0;
      pppppiVar9 = local_3c;
    }
    if ((!bVar11) && (*pppppiVar4 == (int ****)0x0)) {
      iVar3 = (int)local_38 << 2;
      pppppiVar4 = (int *****)((uint)local_38 & 0x3fffffff);
      do {
        pppppiVar8 = pppppiVar4;
        if (iVar3 == 0) {
          pppppiVar8 = (int *****)0x0;
          goto LAB_0164b7bc;
        }
        iVar1 = iVar3 + -4;
        iVar3 = iVar3 + -4;
        pppppiVar4 = (int *****)((int)pppppiVar8 + -1);
      } while (*(int *)((int)pppppiVar9 + iVar1) == 0);
      if (pppppiVar8 <= local_38) {
LAB_0164b7bc:
        local_28 = pppppiVar8;
      }
    }
    if ((local_28 < (int *****)((uint)local_40 >> 2)) &&
       (iVar3 = FUN_0164bb38(&local_30), iVar3 != -0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620();
    }
    *param_1 = local_30;
    param_1[1] = local_2c;
    param_1[2] = local_28;
    if (param_3 == (int *****)0x0 || iVar2 == -0x80000000) {
      return;
    }
    FUN_0134aee0(iVar2,param_2[1],4,4);
    return;
  }
  iVar2 = *param_2;
  uVar7 = 0;
  piVar10 = (int *)param_2[1];
  if (iVar2 != -0x80000000) {
    piVar10 = param_2;
  }
  pppppiVar9 = (int *****)((int)param_3 + piVar10[2] + 1U);
  if (CARRY4((uint)param_3,piVar10[2] + 1U)) {
    pppppiVar9 = (int *****)&DAT_ffffffff;
  }
  if ((pppppiVar9 < (int *****)0x40000000) &&
     (unaff_r4 = (int)pppppiVar9 * 4, unaff_r4 < 0x7ffffffd)) {
    uVar7 = 4;
    local_2c = (int *****)FUN_01298504(unaff_r4,4);
    if (local_2c != (int *****)0x0) {
      local_28 = (int *****)0x0;
      local_30 = pppppiVar9;
      FUN_0164a8c4(&local_30,param_3);
      FUN_0164a850(&local_30,piVar10[1],piVar10[1] + piVar10[2] * 4);
      local_40 = local_30;
      local_3c = local_2c;
      local_38 = local_28;
      goto LAB_0164b660;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar7,unaff_r4);
}

