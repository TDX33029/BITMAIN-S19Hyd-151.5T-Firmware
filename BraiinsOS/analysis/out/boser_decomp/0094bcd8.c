// FUN_0094bcd8 @ 0094bcd8 size=2396 calls_out=17 calls_in=8
// strings: assertion failed: edge.height == self.node.height - 1

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0094bcd8(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,uint param_4,
                 undefined4 param_5)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint unaff_r9;
  uint uVar18;
  ushort *puVar19;
  undefined8 uVar20;
  int local_d30;
  int local_d24;
  uint local_d1c;
  int local_d18;
  uint local_d14;
  int *local_d10;
  int local_d0c [3];
  undefined1 auStack_d00 [456];
  int local_b38 [114];
  int local_970;
  int iStack_96c;
  int iStack_968;
  undefined4 uStack_964;
  undefined1 auStack_960 [456];
  int local_798;
  int iStack_794;
  int iStack_790;
  undefined4 uStack_78c;
  int local_788;
  int iStack_784;
  int iStack_780;
  int local_778 [114];
  int local_5b0;
  int local_5ac;
  int local_5a8;
  undefined4 uStack_5a4;
  int local_5a0;
  undefined1 auStack_59c [452];
  int local_3d8;
  int local_3d4;
  int local_3d0;
  int local_3cc;
  int local_3c8;
  int local_3c4;
  int local_3c0;
  undefined1 auStack_3b8 [456];
  int local_1f0;
  int iStack_1ec;
  int iStack_1e8;
  
  iVar3 = FUN_01298504(param_4,1);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,param_4);
  }
  FUN_01bed4e2(iVar3,param_3,param_4);
  piVar10 = param_2 + 8;
  iVar4 = *piVar10;
  if (iVar4 != 0) {
    iVar6 = param_2[9];
    do {
      unaff_r9 = (uint)*(ushort *)(iVar4 + 0x1422);
      iVar12 = iVar4 + 0x139c;
      uVar18 = 0xffffffff;
      iVar13 = unaff_r9 * 0xc;
      do {
        if (iVar13 == 0) goto LAB_0094bde0;
        uVar14 = *(uint *)(iVar12 + 8);
        uVar15 = uVar14;
        if (param_4 < uVar14) {
          uVar15 = param_4;
        }
        iVar5 = FUN_01bed842(iVar3,*(undefined4 *)(iVar12 + 4),uVar15);
        if (iVar5 == 0) {
          iVar5 = param_4 - uVar14;
        }
        iVar13 = iVar13 + -0xc;
        uVar18 = uVar18 + 1;
        iVar12 = iVar12 + 0xc;
      } while ((char)((0 < iVar5) - (iVar5 < 0)) == '\x01');
      unaff_r9 = uVar18;
      if (0 < iVar5 == iVar5 < 0) {
        FUN_019bb7e0(param_4,iVar3);
        iVar4 = uVar18 * 0x1c8 + iVar4;
        FUN_01bed4e2(&local_5b0,iVar4,0x1c8);
        FUN_01bed864(iVar4,param_5,0x1c8);
        if (local_5b0 != 9) {
          FUN_0094cc40(&local_5b0);
        }
        goto LAB_0094c118;
      }
LAB_0094bde0:
      if (iVar6 == 0) goto LAB_0094be58;
      iVar6 = iVar6 + -1;
      iVar4 = *(int *)(iVar4 + unaff_r9 * 4 + 0x1428);
    } while( true );
  }
  iVar4 = 0;
LAB_0094be58:
  local_d0c[1] = 0;
  local_d1c = param_4;
  local_d18 = iVar3;
  local_d14 = param_4;
  local_d10 = piVar10;
  local_d0c[0] = iVar4;
  local_d0c[2] = unaff_r9;
  FUN_01bed4e2(auStack_d00,param_5,0x1c8);
  if (iVar4 == 0) {
    iVar3 = FUN_00ab2860();
    param_2[8] = iVar3;
    param_2[9] = 0;
    *(undefined4 *)(&DAT_00001398 + iVar3) = 0;
    *(undefined2 *)(iVar3 + 0x1422) = 0;
    FUN_01bed4e2(&local_5b0,param_5,0x1c8);
    FUN_00975d10(&local_3c8,iVar3,&local_d1c,&local_5b0);
  }
  else {
    FUN_01bed4e2(local_778,param_5,0x1c8);
    if (*(ushort *)(iVar4 + 0x1422) < 0xb) {
      FUN_00976648(&local_5b0,local_d0c,&local_d1c,param_5);
    }
    else {
      uVar18 = 4;
      bVar2 = false;
      if (4 < unaff_r9) {
        if (unaff_r9 == 5) {
          uVar18 = 5;
        }
        else {
          if (unaff_r9 == 6) {
            uVar18 = 5;
            unaff_r9 = 0;
          }
          else {
            unaff_r9 = unaff_r9 - 7;
            uVar18 = 6;
          }
          bVar2 = true;
        }
      }
      local_d24 = FUN_00ab2860();
      *(undefined4 *)(&DAT_00001398 + local_d24) = 0;
      *(undefined2 *)(local_d24 + 0x1422) = 0;
      piVar10 = (int *)(iVar4 + 0x139c + uVar18 * 0xc);
      iVar3 = *piVar10;
      uVar15 = ~uVar18 + (uint)*(ushort *)(iVar4 + 0x1422);
      iVar6 = piVar10[1];
      iVar13 = piVar10[2];
      *(short *)(local_d24 + 0x1422) = (short)uVar15;
      FUN_01bed4e2(&local_1f0,uVar18 * 0x1c8 + iVar4,0x1c8);
      if (0xb < uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar15,0xb,&DAT_01d2ff10);
      }
      FUN_01bed4e2(local_d24 + 0x139c,iVar4 + 0x139c + (uVar18 + 1) * 0xc,uVar15 * 0xc);
      FUN_01bed4e2(local_d24,(uVar18 + 1) * 0x1c8 + iVar4,uVar15 * 0x1c8);
      *(short *)(iVar4 + 0x1422) = (short)uVar18;
      FUN_01bed4e2((uint)&local_3c8 | 4,&local_1f0,0x1c8);
      local_5b0 = iVar3;
      local_5ac = iVar6;
      local_5a8 = iVar13;
      FUN_01bed4e2(&uStack_5a4,&local_3c8,0x1cc);
      local_3cc = 0;
      local_3d4 = 0;
      local_b38[1] = 0;
      local_b38[0] = local_d24;
      if (!bVar2) {
        local_b38[0] = iVar4;
      }
      local_b38[2] = unaff_r9;
      local_3d8 = iVar4;
      local_3d0 = local_d24;
      FUN_00976648(&local_3c8,local_b38,&local_d1c,param_5);
      local_d30 = local_5a0;
      local_798 = local_5b0;
      iStack_794 = local_5ac;
      iStack_790 = local_5a8;
      uStack_78c = uStack_5a4;
      FUN_01bed4e2(auStack_960,auStack_59c,0x1c4);
      if (local_d30 != 9) {
        local_970 = local_798;
        iStack_96c = iStack_794;
        iStack_968 = iStack_790;
        uStack_964 = uStack_78c;
        FUN_01bed4e2(local_b38,auStack_960,0x1c4);
        iVar3 = *(int *)(&DAT_00001398 + iVar4);
        if (iVar3 == 0) {
          iVar13 = 0;
          iVar6 = 0;
        }
        else {
          iVar6 = 0;
          iVar13 = 0;
          do {
            uVar18 = (uint)*(ushort *)(&DAT_00001420 + iVar4);
            local_788 = local_970;
            iStack_784 = iStack_96c;
            iStack_780 = iStack_968;
            local_778[0] = local_d30;
            FUN_01bed4e2((uint)local_778 | 4,local_b38,0x1c4);
            if (iVar13 != iVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec("assertion failed: edge.height == self.node.height - 1",0x35,
                           &DAT_01d2ff30);
            }
            puVar19 = (ushort *)(iVar3 + 0x1422);
            uVar1 = *puVar19;
            if (uVar1 < 0xb) {
              FUN_01bed4e2(&local_5b0,local_778,0x1c8);
              FUN_00976a68(iVar3,uVar18,&local_788,&local_5b0,local_d24);
              goto LAB_0094c108;
            }
            uVar15 = 4;
            piVar10 = &local_3d8;
            if (4 < uVar18) {
              if (uVar18 == 5) {
                uVar15 = 5;
              }
              else {
                if (uVar18 == 6) {
                  uVar18 = 0;
                  uVar15 = 5;
                }
                else {
                  uVar18 = uVar18 - 7;
                  uVar15 = 6;
                }
                piVar10 = &local_3d0;
              }
            }
            iVar4 = FUN_00ab28c0();
            *(undefined4 *)(&DAT_00001398 + iVar4) = 0;
            *(undefined2 *)(iVar4 + 0x1422) = 0;
            piVar9 = (int *)(iVar3 + 0x139c + uVar15 * 0xc);
            iVar13 = *piVar9;
            uVar14 = ~uVar15 + (uint)*puVar19;
            iVar12 = piVar9[1];
            iVar5 = piVar9[2];
            *(short *)(iVar4 + 0x1422) = (short)uVar14;
            FUN_01bed4e2(&local_1f0,uVar15 * 0x1c8 + iVar3,0x1c8);
            if (0xb < uVar14) {
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(0,uVar14,0xb,&DAT_01d2ff10);
            }
            FUN_01bed4e2(iVar4 + 0x139c,iVar3 + 0x139c + (uVar15 + 1) * 0xc,uVar14 * 0xc);
            FUN_01bed4e2(iVar4,(uVar15 + 1) * 0x1c8 + iVar3,uVar14 * 0x1c8);
            *puVar19 = (ushort)uVar15;
            local_3c8 = iVar13;
            local_3c4 = iVar12;
            local_3c0 = iVar5;
            FUN_01bed4e2(auStack_3b8,&local_1f0,0x1c8);
            uVar14 = (uint)*(ushort *)(iVar4 + 0x1422);
            iVar13 = uVar14 + 1;
            if (0xb < uVar14) {
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(0,iVar13,0xc,&DAT_01d2ff20);
            }
            if (uVar1 - uVar15 != iVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
            }
            FUN_01bed4e2(iVar4 + 0x1428,iVar3 + uVar15 * 4 + 0x142c,iVar13 * 4);
            uVar15 = 0;
            do {
              iVar13 = *(int *)(iVar4 + 0x1428 + uVar15 * 4);
              *(int *)(&DAT_00001398 + iVar13) = iVar4;
              *(short *)(&DAT_00001420 + iVar13) = (short)uVar15;
              if (uVar14 <= uVar15) break;
              uVar15 = uVar15 + 1;
            } while (uVar15 <= uVar14);
            FUN_01bed4e2(&local_5b0,&local_3c8,0x1d8);
            iVar13 = *piVar10;
            local_3d8 = iVar3;
            local_3d4 = iVar6 + 1;
            local_3d0 = iVar4;
            local_3cc = iVar6 + 1;
            FUN_01bed4e2(&local_3c8,local_778,0x1c8);
            FUN_00976a68(iVar13,uVar18,&local_788,&local_3c8,local_d24);
            local_d30 = local_5a0;
            local_798 = local_5b0;
            iStack_794 = local_5ac;
            iStack_790 = local_5a8;
            uStack_78c = uStack_5a4;
            FUN_01bed4e2(auStack_960,auStack_59c,0x1c4);
            iVar13 = local_3cc;
            iVar6 = local_3d4;
            iVar4 = local_3d8;
            if (local_d30 == 9) goto LAB_0094c108;
            local_d24 = local_3d0;
            local_970 = local_798;
            iStack_96c = iStack_794;
            iStack_968 = iStack_790;
            uStack_964 = uStack_78c;
            FUN_01bed4e2(local_b38,auStack_960,0x1c4);
            iVar3 = *(int *)(&DAT_00001398 + iVar4);
          } while (iVar3 != 0);
        }
        local_5b0 = local_970;
        local_5ac = iStack_96c;
        local_5a8 = iStack_968;
        uStack_5a4 = uStack_964;
        local_5a0 = local_d30;
        FUN_01bed4e2(auStack_59c,local_b38,0x1c4);
        local_3d0 = local_d24;
        local_3d8 = iVar4;
        local_3d4 = iVar6;
        local_3cc = iVar13;
        if (param_2[8] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d2fee0);
        }
        uVar20 = FUN_00976228(param_2[8],param_2[9]);
        *(undefined8 *)(param_2 + 8) = uVar20;
        local_1f0 = local_970;
        iStack_1ec = iStack_96c;
        iStack_1e8 = iStack_968;
        local_3c8 = local_d30;
        FUN_01bed4e2((uint)&local_3c8 | 4,local_b38,0x1c4);
        FUN_00976138((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),&local_1f0,&local_3c8,local_d24,
                     iVar13);
      }
    }
LAB_0094c108:
    piVar10 = local_d10;
  }
  piVar10[2] = piVar10[2] + 1;
LAB_0094c118:
  uVar7 = param_2[1];
  uVar8 = param_2[2];
  uVar11 = param_2[3];
  uVar16 = param_2[4];
  *param_1 = *param_2;
  param_1[1] = uVar7;
  param_1[2] = uVar8;
  param_1[3] = uVar11;
  param_1[4] = uVar16;
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  uVar11 = param_2[8];
  uVar16 = param_2[9];
  param_1[5] = param_2[5];
  param_1[6] = uVar7;
  param_1[7] = uVar8;
  param_1[8] = uVar11;
  param_1[9] = uVar16;
  uVar7 = param_2[0xb];
  uVar8 = param_2[0xc];
  uVar11 = param_2[0xd];
  uVar16 = param_2[0xe];
  uVar17 = param_2[0xf];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar7;
  param_1[0xc] = uVar8;
  param_1[0xd] = uVar11;
  param_1[0xe] = uVar16;
  param_1[0xf] = uVar17;
  return;
}

