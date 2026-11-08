// FUN_0127a174 @ 0127a174 size=1392 calls_out=10 calls_in=2
// strings: Tried to shrink to a larger capacitymax line length exceeded | Tried to shrink to a larger capacitymax line length exceeded

void FUN_0127a174(uint *param_1,uint *param_2,int param_3,int param_4)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined *puVar13;
  uint unaff_r4;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  bool bVar24;
  ulonglong uVar25;
  undefined *local_5c;
  undefined4 local_4c;
  uint local_28;
  
  if (param_4 == 0) {
    uVar7 = 0;
    puVar13 = &DAT_0188b774;
LAB_0127a6fc:
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(0xffffffff,uVar7,puVar13);
  }
  if (param_4 == 1) {
    uVar7 = 1;
    puVar13 = &DAT_0188b784;
    goto LAB_0127a6fc;
  }
  uVar18 = param_2[2];
  uVar7 = 0;
  iVar22 = uVar18 - param_4;
  uVar15 = iVar22 + 1;
  if ((0x3ffffffe < uVar15 && iVar22 != 0x3ffffffe) ||
     (unaff_r4 = uVar15 * 4, 0x7ffffffc < unaff_r4)) {
LAB_0127a210:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar7,unaff_r4);
  }
  uVar23 = *(uint *)(param_3 + (param_4 + -1) * 4);
  uVar3 = *(uint *)(param_3 + (param_4 + -2) * 4);
  if (unaff_r4 == 0) {
    uVar4 = 4;
    uVar20 = 0;
  }
  else {
    uVar4 = FUN_016d38c8(unaff_r4,1);
    if (uVar4 == 0) {
      uVar7 = 4;
      goto LAB_0127a210;
    }
    uVar20 = uVar15;
  }
  uVar19 = uVar18;
  if (uVar15 == 0) {
    uVar5 = *param_2;
    uVar16 = 0;
    if (uVar18 == uVar5) goto LAB_0127a408;
LAB_0127a438:
    uVar3 = param_2[1];
    uVar23 = uVar19 + 1;
    param_2[2] = uVar23;
    *(uint *)(uVar3 + uVar19 * 4) = uVar16;
  }
  else {
    uVar5 = *param_2;
    uVar8 = param_2[1];
    iVar21 = uVar8 + uVar18 * 4 + param_4 * -4;
    uVar16 = 0;
    local_5c = &DAT_0188b7a4;
    local_28 = uVar15;
    do {
      if (uVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_0188b794);
      }
      if (uVar19 == 1) {
        local_4c = 1;
        local_28 = 0xffffffff;
LAB_0127a6bc:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(local_28,local_4c,local_5c);
      }
      uVar14 = *(uint *)(uVar8 + uVar19 * 4 + -4);
      uVar17 = *(uint *)((uVar8 - 8) + uVar19 * 4);
      if (uVar23 <= uVar16) {
        bVar24 = CARRY4(uVar14,uVar16);
        uVar9 = uVar14 + uVar16;
        uVar6 = 0xffffffff;
        goto joined_r0x0127a2fc;
      }
      uVar25 = FUN_01846088(uVar14,uVar16,uVar23,0);
      uVar6 = (uint)uVar25;
      lVar2 = (ulonglong)uVar23 * (uVar25 & 0xffffffff);
      uVar11 = (uint)lVar2;
      uVar9 = uVar14 - uVar11;
      if (uVar16 == (int)(uVar25 >> 0x20) * uVar23 + (int)((ulonglong)lVar2 >> 0x20) +
                    (uint)(uVar14 < uVar11)) {
        do {
          lVar2 = (ulonglong)uVar3 * (ulonglong)uVar6;
          uVar14 = (uint)((ulonglong)lVar2 >> 0x20);
          if (uVar14 < uVar9 || uVar9 - uVar14 < (uint)((uint)lVar2 <= uVar17)) break;
          bVar24 = CARRY4(uVar9,uVar23);
          uVar9 = uVar9 + uVar23;
          uVar6 = uVar6 - 1;
joined_r0x0127a2fc:
        } while (!bVar24);
      }
      local_28 = local_28 - 1;
      if (uVar19 < local_28) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(local_28,uVar19,uVar19,&DAT_0188b7c4);
      }
      iVar10 = 0;
      uVar14 = 0xffffffff;
      do {
        uVar11 = *(uint *)(iVar21 + iVar10 * 4);
        lVar2 = (ulonglong)*(uint *)(param_3 + iVar10 * 4) * (ulonglong)uVar6;
        uVar9 = (uint)lVar2;
        uVar17 = uVar14 + uVar11;
        iVar12 = uVar17 - uVar9;
        *(int *)(iVar21 + iVar10 * 4) = iVar12 + 1;
        uVar14 = ((uint)CARRY4(uVar14,uVar11) -
                 ((int)((ulonglong)lVar2 >> 0x20) + (uint)(uVar17 < uVar9))) - ((iVar12 != -1) + 1);
        iVar10 = iVar10 + 1;
      } while (param_4 != iVar10);
      if (uVar16 < ~uVar14) {
        uVar6 = uVar6 - 1;
        uVar16 = 0;
        iVar10 = 0;
        do {
          uVar14 = *(uint *)(iVar21 + iVar10 * 4);
          uVar9 = *(uint *)(param_3 + iVar10 * 4);
          uVar17 = uVar9 + uVar14;
          *(uint *)(iVar21 + iVar10 * 4) = uVar17 + uVar16;
          uVar16 = (uint)(CARRY4(uVar9,uVar14) || CARRY4(uVar17,uVar16));
          iVar10 = iVar10 + 1;
        } while (param_4 != iVar10);
      }
      if (iVar22 == -1) {
        local_5c = &DAT_0188b7b4;
        local_4c = 0;
        goto LAB_0127a6bc;
      }
      uVar19 = uVar19 - 1;
      iVar21 = iVar21 + -4;
      param_2[2] = uVar19;
      *(uint *)(uVar4 + local_28 * 4) = uVar6;
      uVar16 = *(uint *)(uVar8 + uVar19 * 4);
    } while (local_28 != 0);
    if (uVar19 != uVar5) goto LAB_0127a438;
LAB_0127a408:
    FUN_0127ac28(param_2);
    uVar3 = param_2[1];
    uVar23 = uVar5 + 1;
    param_2[2] = uVar23;
    *(uint *)(uVar3 + uVar5 * 4) = uVar16;
  }
  if (*(int *)(uVar3 + uVar23 * 4 + -4) == 0) {
    iVar22 = uVar23 << 2;
    uVar19 = uVar23 & 0x3fffffff;
    do {
      uVar5 = uVar19;
      if (iVar22 == 0) {
        uVar5 = 0;
        goto LAB_0127a4ac;
      }
      piVar1 = (int *)((uVar3 - 4) + iVar22);
      iVar22 = iVar22 + -4;
      uVar19 = uVar5 - 1;
    } while (*piVar1 == 0);
    if (uVar23 < uVar5) goto LAB_0127a460;
LAB_0127a4ac:
    param_2[2] = uVar5;
    uVar19 = *param_2;
    if (uVar5 < uVar19 >> 2) goto LAB_0127a4c0;
  }
  else {
LAB_0127a460:
    uVar19 = *param_2;
    uVar5 = uVar23;
    if (uVar23 < uVar19 >> 2) {
LAB_0127a4c0:
      if (uVar19 < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478("Tried to shrink to a larger capacitymax line length exceeded",0x49,
                     &DAT_018ad594);
      }
      if (uVar19 != 0) {
        if (uVar5 == 0) {
          thunk_FUN_016d3fb4();
          uVar3 = 4;
        }
        else {
          uVar3 = thunk_FUN_016d4ea4(uVar3,uVar5 << 2);
          if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(4,uVar5 << 2);
          }
        }
        *param_2 = uVar5;
        param_2[1] = uVar3;
      }
    }
  }
  if (uVar15 == 0) {
joined_r0x0127a544:
    uVar15 = 0;
    if (uVar20 >> 2 == 0) goto LAB_0127a5e8;
  }
  else if (*(int *)(uVar4 + uVar15 * 4 + -4) == 0) {
    iVar22 = param_4 * 4 + uVar18 * -4;
    uVar18 = uVar15 & 0x3fffffff;
    do {
      uVar3 = uVar18;
      if (iVar22 == 4) goto joined_r0x0127a544;
      piVar1 = (int *)(uVar4 - iVar22);
      iVar22 = iVar22 + 4;
      uVar18 = uVar3 - 1;
    } while (*piVar1 == 0);
    if (uVar3 < uVar15) {
      uVar15 = uVar3;
    }
    if (uVar20 >> 2 <= uVar15) goto LAB_0127a5e8;
  }
  else if (uVar20 >> 2 <= uVar15) goto LAB_0127a5e8;
  if (uVar20 < uVar15) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("Tried to shrink to a larger capacitymax line length exceeded",0x49,&DAT_018ad594);
  }
  if (uVar20 == 0) {
    uVar20 = 0;
  }
  else {
    uVar20 = uVar15;
    if (uVar15 == 0) {
      thunk_FUN_016d3fb4(uVar4);
      uVar4 = 4;
    }
    else {
      uVar4 = thunk_FUN_016d4ea4(uVar4,uVar15 << 2);
      if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,uVar15 << 2);
      }
    }
  }
LAB_0127a5e8:
  uVar18 = *param_2;
  uVar3 = param_2[1];
  uVar23 = param_2[2];
  param_1[1] = uVar4;
  param_1[2] = uVar15;
  *param_1 = uVar20;
  param_1[3] = uVar18;
  param_1[4] = uVar3;
  param_1[5] = uVar23;
  return;
}

