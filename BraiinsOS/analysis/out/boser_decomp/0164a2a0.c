// FUN_0164a2a0 @ 0164a2a0 size=1000 calls_out=6 calls_in=1
// strings: 

void FUN_0164a2a0(int *param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  char cVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  bool bVar11;
  bool bVar12;
  uint local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  
  bVar11 = param_3 == 0;
  piVar3 = param_1;
  if (!bVar11) {
    piVar3 = (int *)(param_2 + param_3 * 4 + -4);
    bVar11 = piVar3 == (int *)0x0;
  }
  uVar8 = param_3;
  if ((!bVar11) && (*piVar3 == 0)) {
    iVar4 = param_3 * -4;
    uVar9 = param_3;
    do {
      uVar8 = uVar9;
      if (iVar4 == 0) {
        uVar8 = 0;
        goto LAB_0164a2c8;
      }
      piVar3 = (int *)((param_2 + -4) - iVar4);
      iVar4 = iVar4 + 4;
      uVar9 = uVar8 - 1;
    } while (*piVar3 == 0);
    if (param_3 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar8,param_3,&DAT_01d0668c);
    }
  }
LAB_0164a2c8:
  piVar3 = (int *)(param_4 + param_5 * 4 + -4);
  uVar9 = param_5;
  if ((piVar3 != (int *)0x0) && (*piVar3 == 0)) {
    iVar4 = param_5 * -4;
    uVar6 = param_5;
    do {
      uVar9 = uVar6;
      if (iVar4 == 0) {
        uVar9 = 0;
        goto LAB_0164a374;
      }
      piVar3 = (int *)((param_4 + -4) - iVar4);
      iVar4 = iVar4 + 4;
      uVar6 = uVar9 - 1;
    } while (*piVar3 == 0);
    if (param_5 < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar9,param_5,&DAT_01d0669c);
    }
  }
LAB_0164a374:
  bVar12 = uVar8 < uVar9;
  bVar11 = !bVar12 && uVar8 != uVar9;
  if (uVar8 == uVar9) {
    iVar4 = uVar8 << 2;
    do {
      iVar5 = param_4 + iVar4;
      if (iVar4 == 0) {
        cVar1 = '\0';
        if (param_4 != iVar5) {
          cVar1 = -1;
        }
        goto LAB_0164a3d4;
      }
      uVar7 = *(uint *)(param_2 + -4 + iVar4);
      iVar4 = iVar4 + -4;
      uVar6 = *(uint *)(iVar5 + -4);
      bVar12 = uVar7 < uVar6;
    } while (uVar7 == uVar6);
    bVar11 = false;
    if (!bVar12) {
      bVar11 = true;
    }
  }
  cVar1 = bVar11 - bVar12;
LAB_0164a3d4:
  if (cVar1 == '\0') {
    *(undefined1 *)param_1 = 1;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
  }
  else {
    if (cVar1 == '\x01') {
      uVar6 = uVar8 * 4;
      bVar12 = 0x3ffffffe < uVar8;
      bVar11 = uVar8 == 0x3fffffff;
      uVar10 = 0;
      if (uVar8 < 0x40000000) {
        bVar12 = 0x7ffffffb < uVar6;
        bVar11 = uVar6 == 0x7ffffffc;
      }
      if (bVar12 && !bVar11) goto LAB_0164a458;
      if (uVar6 == 0) {
        iVar4 = 4;
        local_34 = 0;
      }
      else {
        uVar10 = 4;
        iVar4 = FUN_01298504(uVar6,4);
        local_34 = uVar8;
        if (iVar4 == 0) goto LAB_0164a458;
      }
      FUN_01bed4e2(iVar4,param_2,uVar6);
      piVar3 = (int *)FUN_0164a6d4(iVar4,uVar8,param_4,uVar9);
      bVar11 = uVar8 == 0;
      if (!bVar11) {
        piVar3 = (int *)(iVar4 + uVar8 * 4 + -4);
        bVar11 = piVar3 == (int *)0x0;
      }
      local_30 = local_34;
      local_28 = uVar8;
      if ((!bVar11) && (*piVar3 == 0)) {
        iVar5 = uVar8 * -4;
        uVar9 = uVar8;
        do {
          uVar6 = uVar9;
          if (iVar5 == 0) {
            uVar6 = 0;
            goto LAB_0164a63c;
          }
          piVar3 = (int *)((iVar4 + -4) - iVar5);
          iVar5 = iVar5 + 4;
          uVar9 = uVar6 - 1;
        } while (*piVar3 == 0);
        if (uVar6 <= uVar8) {
LAB_0164a63c:
          local_28 = uVar6;
        }
      }
      local_2c = iVar4;
      if ((local_28 < local_34 >> 2) &&
         (iVar4 = FUN_0164bb38(&local_30,local_28), iVar4 != -0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620();
      }
      param_1[1] = local_30;
      param_1[2] = local_2c;
      param_1[3] = local_28;
      uVar2 = 2;
    }
    else {
      uVar6 = uVar9 * 4;
      bVar12 = 0x3ffffffe < uVar9;
      bVar11 = uVar9 == 0x3fffffff;
      uVar10 = 0;
      if (uVar9 < 0x40000000) {
        bVar12 = 0x7ffffffb < uVar6;
        bVar11 = uVar6 == 0x7ffffffc;
      }
      if (bVar12 && !bVar11) {
LAB_0164a458:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar10,uVar6);
      }
      if (uVar6 == 0) {
        local_2c = 4;
        local_34 = 0;
      }
      else {
        uVar10 = 4;
        local_2c = FUN_01298504(uVar6,4);
        local_34 = uVar9;
        if (local_2c == 0) goto LAB_0164a458;
      }
      FUN_01bed4e2(local_2c,param_4,uVar6);
      piVar3 = (int *)FUN_0164a6d4(local_2c,uVar9,param_2,uVar8);
      bVar11 = uVar9 == 0;
      if (!bVar11) {
        piVar3 = (int *)(local_2c + uVar9 * 4 + -4);
        bVar11 = piVar3 == (int *)0x0;
      }
      local_30 = local_34;
      local_28 = uVar9;
      if ((!bVar11) && (*piVar3 == 0)) {
        iVar4 = uVar9 * -4;
        uVar8 = uVar9;
        do {
          uVar6 = uVar8;
          if (iVar4 == 0) {
            uVar6 = 0;
            goto LAB_0164a64c;
          }
          piVar3 = (int *)((local_2c + -4) - iVar4);
          iVar4 = iVar4 + 4;
          uVar8 = uVar6 - 1;
        } while (*piVar3 == 0);
        if (uVar6 <= uVar9) {
LAB_0164a64c:
          local_28 = uVar6;
        }
      }
      if ((local_28 < local_34 >> 2) &&
         (iVar4 = FUN_0164bb38(&local_30,local_28), iVar4 != -0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620();
      }
      param_1[1] = local_30;
      param_1[2] = local_2c;
      param_1[3] = local_28;
      uVar2 = 0;
    }
    *(undefined1 *)param_1 = uVar2;
  }
  return;
}

