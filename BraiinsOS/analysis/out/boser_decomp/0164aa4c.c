// FUN_0164aa4c @ 0164aa4c size=1124 calls_out=8 calls_in=1
// strings: 

void FUN_0164aa4c(uint *param_1,uint *param_2,int param_3,int param_4)

{
  longlong lVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  bool bVar21;
  ulonglong uVar22;
  undefined *local_68;
  uint local_64;
  uint local_44;
  uint *local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  if (param_4 == 0) {
    uVar9 = 0;
    puVar13 = &DAT_01d0670c;
  }
  else {
    if (param_4 != 1) {
      puVar2 = *(uint **)(param_3 + (param_4 + -1) * 4);
      uVar17 = *(uint *)(param_3 + (param_4 + -2) * 4);
      uVar19 = param_2[2];
      uVar3 = uVar19 - param_4;
      uVar16 = uVar3 + 1;
      FUN_0164a964(&local_30,uVar16);
      local_44 = local_28;
      if (uVar16 == 0) {
        local_34 = (uint *)0x0;
        uVar4 = *param_2;
      }
      else {
        local_64 = 0xffffffff;
        if (uVar19 == 0) {
          local_64 = 0xfffffffe;
        }
        uVar4 = *param_2;
        uVar14 = param_2[1];
        iVar20 = uVar14 + uVar19 * 4 + param_4 * -4;
        local_68 = &DAT_01d0673c;
        local_34 = (uint *)0x0;
        do {
          bVar21 = uVar19 == 0;
          puVar5 = local_34;
          if (!bVar21) {
            puVar5 = (uint *)(uVar14 + uVar19 * 4 + -4);
            bVar21 = puVar5 == (uint *)0x0;
          }
          if (bVar21) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d0672c);
          }
          if (uVar19 < 2) {
            local_44 = 1;
LAB_0164aeb0:
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(local_64,local_44,local_68);
          }
          uVar15 = *puVar5;
          uVar18 = *(uint *)((uVar14 - 8) + uVar19 * 4);
          if (local_34 < puVar2) {
            uVar22 = FUN_01bf0ff0(uVar15,local_34,puVar2,0);
            uVar6 = (uint)uVar22;
            lVar1 = ZEXT48(puVar2) * (uVar22 & 0xffffffff);
            uVar10 = (uint)lVar1;
            uVar11 = (int)local_34 -
                     ((int)(uVar22 >> 0x20) * (int)puVar2 + (int)((ulonglong)lVar1 >> 0x20) +
                     (uint)(uVar15 < uVar10));
            puVar5 = (uint *)-uVar10;
          }
          else {
            uVar6 = 0xffffffff;
            uVar11 = (uint)CARRY4(uVar15,(uint)local_34);
            puVar5 = local_34;
          }
          for (uVar15 = uVar15 + (int)puVar5;
              (uVar11 == 0 &&
              (lVar1 = (ulonglong)uVar17 * (ulonglong)uVar6,
              uVar11 = (uint)((ulonglong)lVar1 >> 0x20),
              uVar15 <= uVar11 && (uint)((uint)lVar1 <= uVar18) <= uVar15 - uVar11));
              uVar15 = uVar15 + (int)puVar2) {
            uVar6 = uVar6 - 1;
            uVar11 = (uint)CARRY4(uVar15,(uint)puVar2);
          }
          uVar16 = uVar16 - 1;
          if (uVar19 < uVar16) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(uVar16,uVar19,uVar19,&DAT_01d0674c);
          }
          iVar8 = 0;
          uVar15 = 0xffffffff;
          do {
            uVar10 = *(uint *)(iVar20 + iVar8 * 4);
            lVar1 = (ulonglong)*(uint *)(param_3 + iVar8 * 4) * (ulonglong)uVar6;
            uVar11 = (uint)lVar1;
            uVar18 = uVar15 + uVar10;
            iVar12 = uVar18 - uVar11;
            *(int *)(iVar20 + iVar8 * 4) = iVar12 + 1;
            uVar15 = ((uint)CARRY4(uVar15,uVar10) -
                     ((int)((ulonglong)lVar1 >> 0x20) + (uint)(uVar18 < uVar11))) -
                     ((iVar12 != -1) + 1);
            iVar8 = iVar8 + 1;
          } while (param_4 != iVar8);
          if (local_34 < (uint *)~uVar15) {
            uVar6 = uVar6 - 1;
            uVar15 = 0;
            iVar8 = 0;
            do {
              uVar18 = *(uint *)(iVar20 + iVar8 * 4);
              uVar10 = *(uint *)(param_3 + iVar8 * 4);
              uVar11 = uVar10 + uVar18;
              *(uint *)(iVar20 + iVar8 * 4) = uVar11 + uVar15;
              uVar15 = (uint)(CARRY4(uVar10,uVar18) || CARRY4(uVar11,uVar15));
              iVar8 = iVar8 + 1;
            } while (param_4 != iVar8);
          }
          if (local_28 <= uVar3) {
            local_68 = &DAT_01d0675c;
            local_64 = uVar16;
            goto LAB_0164aeb0;
          }
          *(uint *)(local_2c + uVar16 * 4) = uVar6;
          uVar19 = uVar19 - 1;
          iVar20 = iVar20 + -4;
          param_2[2] = uVar19;
          local_34 = *(uint **)(uVar14 + uVar19 * 4);
        } while (uVar16 != 0);
      }
      if (uVar19 == uVar4) {
        FUN_01a54b48(param_2);
      }
      uVar3 = param_2[1];
      *(uint **)(uVar3 + uVar19 * 4) = local_34;
      uVar16 = uVar19 + 1;
      param_2[2] = uVar16;
      if ((!(uVar16 == 0 || uVar3 + uVar16 * 4 == 4)) && (local_34 == (uint *)0x0)) {
        iVar20 = uVar19 * -4;
        uVar17 = uVar16 & 0x3fffffff;
        do {
          uVar19 = uVar17;
          if (iVar20 == 4) {
            uVar19 = 0;
            goto LAB_0164ad5c;
          }
          piVar7 = (int *)(uVar3 - iVar20);
          iVar20 = iVar20 + 4;
          uVar17 = uVar19 - 1;
        } while (*piVar7 == 0);
        if (uVar19 <= uVar16) {
LAB_0164ad5c:
          uVar16 = uVar19;
          param_2[2] = uVar16;
        }
      }
      piVar7 = (int *)*param_2;
      if ((uVar16 < (uint)piVar7 >> 2) &&
         (piVar7 = (int *)FUN_0164bb38(param_2), piVar7 != (int *)&DAT_80000001)) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620();
      }
      bVar21 = local_28 == 0;
      if (!bVar21) {
        piVar7 = (int *)(local_2c + local_28 * 4 + -4);
        bVar21 = piVar7 == (int *)0x0;
      }
      if ((!bVar21) && (*piVar7 == 0)) {
        iVar20 = local_28 << 2;
        uVar3 = local_28 & 0x3fffffff;
        do {
          uVar16 = uVar3;
          if (iVar20 == 0) {
            uVar16 = 0;
            goto LAB_0164ae30;
          }
          piVar7 = (int *)((local_2c - 4) + iVar20);
          iVar20 = iVar20 + -4;
          uVar3 = uVar16 - 1;
        } while (*piVar7 == 0);
        if (uVar16 <= local_28) {
LAB_0164ae30:
          local_28 = uVar16;
        }
      }
      if ((local_28 < local_30 >> 2) &&
         (iVar20 = FUN_0164bb38(&local_30,local_28), iVar20 != -0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620();
      }
      *param_1 = local_30;
      param_1[1] = local_2c;
      param_1[2] = local_28;
      uVar3 = param_2[1];
      uVar16 = param_2[2];
      param_1[3] = *param_2;
      param_1[4] = uVar3;
      param_1[5] = uVar16;
      return;
    }
    uVar9 = 1;
    puVar13 = &DAT_01d0671c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb12c(0xffffffff,uVar9,puVar13);
}

