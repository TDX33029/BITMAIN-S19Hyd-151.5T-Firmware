// FUN_0196b484 @ 0196b484 size=1964 calls_out=13 calls_in=77
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0196b484(undefined4 *param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  ushort *puVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  int *unaff_r8;
  int *piVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  ushort *puVar19;
  undefined4 *puVar20;
  int *piVar21;
  undefined8 uVar22;
  int local_124;
  int local_120;
  int local_11c;
  int local_114;
  int local_108;
  int local_104;
  int iStack_100;
  uint uStack_fc;
  int *local_f8;
  int local_f4 [2];
  int *local_ec;
  int local_e8;
  int local_e4;
  int *local_e0;
  int local_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50 [2];
  int local_48 [2];
  int local_40;
  int iStack_3c;
  int iStack_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  iVar5 = *param_2;
  if (iVar5 != 0) {
    iVar17 = param_3[1];
    uVar18 = param_3[2];
    local_108 = param_2[1];
    do {
      iVar13 = iVar5 + 0x10c;
      uVar1 = *(ushort *)(iVar5 + 0x192);
      unaff_r8 = (int *)&DAT_ffffffff;
      iVar16 = (int)(uint)uVar1 * 0xc;
      do {
        if (iVar16 == 0) {
          unaff_r8 = (int *)(uint)uVar1;
          goto LAB_0196b540;
        }
        uVar9 = *(uint *)(iVar13 + 8);
        uVar6 = uVar9;
        if (uVar18 < uVar9) {
          uVar6 = uVar18;
        }
        iVar3 = FUN_01bed842(iVar17,*(undefined4 *)(iVar13 + 4),uVar6);
        if (iVar3 == 0) {
          iVar3 = uVar18 - uVar9;
        }
        iVar16 = iVar16 + -0xc;
        unaff_r8 = (int *)((int)unaff_r8 + 1);
        iVar13 = iVar13 + 0xc;
      } while ((char)((0 < iVar3) - (iVar3 < 0)) == '\x01');
      if (0 < iVar3 == iVar3 < 0) {
        FUN_0134bd64(*param_3,iVar17);
        goto LAB_0196b590;
      }
LAB_0196b540:
      if (local_108 == 0) goto LAB_0196b668;
      local_108 = local_108 + -1;
      iVar5 = *(int *)(iVar5 + (int)unaff_r8 * 4 + 0x198);
    } while( true );
  }
  local_104 = *param_3;
  iVar17 = param_3[1];
  uVar18 = param_3[2];
  iVar5 = 0;
LAB_0196b584:
  if (local_104 == -0x80000000) {
    unaff_r8 = param_2;
    iVar5 = iVar17;
LAB_0196b590:
    puVar20 = (undefined4 *)(iVar5 + (int)unaff_r8 * 0x18);
    uVar7 = puVar20[1];
    uVar8 = puVar20[2];
    uVar10 = puVar20[3];
    uVar12 = puVar20[4];
    uVar14 = puVar20[5];
    *param_1 = *puVar20;
    param_1[1] = uVar7;
    param_1[2] = uVar8;
    param_1[3] = uVar10;
    param_1[4] = uVar12;
    param_1[5] = uVar14;
    uVar7 = param_4[1];
    uVar8 = param_4[2];
    uVar10 = param_4[3];
    uVar12 = param_4[4];
    uVar14 = param_4[5];
    *puVar20 = *param_4;
    puVar20[1] = uVar7;
    puVar20[2] = uVar8;
    puVar20[3] = uVar10;
    puVar20[4] = uVar12;
    puVar20[5] = uVar14;
  }
  else {
    local_f4[1] = 0;
    iStack_100 = iVar17;
    uStack_fc = uVar18;
    local_f8 = param_2;
    local_f4[0] = iVar5;
    local_ec = unaff_r8;
    if (iVar5 == 0) {
      iVar5 = FUN_01a429a4();
      *(undefined2 *)(iVar5 + 0x192) = 0;
      *(undefined4 *)(iVar5 + 0x108) = 0;
      *param_2 = iVar5;
      param_2[1] = 0;
      FUN_01964254(&local_88,iVar5,&local_104,param_4);
    }
    else {
      puVar11 = (ushort *)(iVar5 + 0x192);
      if (*puVar11 < 0xb) {
        FUN_01a3dd44(&local_88,local_f4,&local_104,param_4);
      }
      else {
        uVar18 = 4;
        bVar2 = false;
        piVar15 = unaff_r8;
        if (&SUB_00000004 < unaff_r8) {
          if (unaff_r8 == (int *)&DAT_00000005) {
            uVar18 = 5;
          }
          else {
            if (unaff_r8 == (int *)&DAT_00000006) {
              uVar18 = 5;
              piVar15 = (int *)0x0;
            }
            else {
              piVar15 = (int *)((int)unaff_r8 + -7);
              uVar18 = 6;
            }
            bVar2 = true;
          }
        }
        local_120 = FUN_01a429a4();
        *(undefined2 *)(local_120 + 0x192) = 0;
        *(undefined4 *)(local_120 + 0x108) = 0;
        piVar4 = (int *)(iVar5 + 0x10c + uVar18 * 0xc);
        local_11c = *piVar4;
        piVar21 = (int *)(iVar5 + uVar18 * 0x18);
        local_108 = piVar4[2];
        uVar6 = ~uVar18 + (uint)*puVar11;
        local_114 = piVar4[1];
        *(undefined2 *)(local_120 + 0x192) = (short)uVar6;
        local_c8 = *piVar21;
        local_c4 = piVar21[1];
        local_c0 = piVar21[2];
        local_bc = piVar21[3];
        iStack_b8 = piVar21[4];
        iStack_b4 = piVar21[5];
        if (0xb < uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,uVar6,0xb,&DAT_01d2ff10);
        }
        FUN_01bed4e2(local_120 + 0x10c,iVar5 + 0x10c + (uVar18 + 1) * 0xc,uVar6 * 0xc);
        FUN_01bed4e2(local_120,iVar5 + (uVar18 + 1) * 0x18,uVar6 * 0x18);
        *puVar11 = (ushort)uVar18;
        piVar4 = (int *)((uint)&local_88 | 4);
        *piVar4 = local_c8;
        piVar4[1] = local_c4;
        piVar4[2] = local_c0;
        piVar4[3] = local_bc;
        piVar4[4] = iStack_b8;
        piVar4[5] = iStack_b4;
        local_40 = local_88;
        iStack_3c = local_84;
        iStack_38 = local_80;
        local_34 = local_7c;
        iStack_30 = local_78;
        iStack_2c = iStack_74;
        iStack_28 = local_70;
        local_e4 = 0;
        local_e8 = local_120;
        if (!bVar2) {
          local_e8 = iVar5;
        }
        local_e0 = piVar15;
        FUN_01a3dd44(&local_88,&local_e8,&local_104,param_4);
        if (local_11c != -0x80000000) {
          iVar17 = *(int *)(iVar5 + 0x108);
          if (iVar17 == 0) {
            local_124 = 0;
          }
          else {
            puVar20 = (undefined4 *)((uint)&local_e8 | 4);
            local_124 = 0;
            do {
              uVar18 = (uint)*(ushort *)(iVar5 + 400);
              local_a0 = *puVar20;
              uStack_9c = puVar20[1];
              uStack_98 = puVar20[2];
              uStack_94 = puVar20[3];
              uStack_90 = puVar20[4];
              uStack_8c = puVar20[5];
              puVar11 = (ushort *)(iVar17 + 0x192);
              uVar1 = *puVar11;
              local_e8 = local_40;
              local_e4 = iStack_3c;
              local_e0 = (int *)iStack_38;
              local_dc = local_34;
              iStack_d8 = iStack_30;
              iStack_d4 = iStack_2c;
              iStack_d0 = iStack_28;
              local_ac = local_11c;
              local_a8 = local_114;
              local_a4 = local_108;
              if (uVar1 < 0xb) {
                FUN_019644a8(iVar17,uVar18,&local_ac,&local_a0,local_120);
                goto LAB_0196bba0;
              }
              piVar15 = local_48;
              uVar6 = 4;
              if (4 < uVar18) {
                if (uVar18 == 5) {
                  uVar6 = 5;
                }
                else if (uVar18 == 6) {
                  piVar15 = local_50;
                  uVar18 = 0;
                  uVar6 = 5;
                }
                else {
                  uVar18 = uVar18 - 7;
                  piVar15 = local_50;
                  uVar6 = 6;
                }
              }
              iVar5 = FUN_01a42984();
              puVar19 = (ushort *)(iVar5 + 0x192);
              *puVar19 = 0;
              *(undefined4 *)(iVar5 + 0x108) = 0;
              piVar4 = (int *)(iVar17 + 0x10c + uVar6 * 0xc);
              local_11c = *piVar4;
              piVar21 = (int *)(iVar17 + uVar6 * 0x18);
              local_114 = piVar4[1];
              uVar9 = ~uVar6 + (uint)*puVar11;
              local_108 = piVar4[2];
              *puVar19 = (ushort)uVar9;
              local_40 = *piVar21;
              iStack_3c = piVar21[1];
              iStack_38 = piVar21[2];
              local_34 = piVar21[3];
              iStack_30 = piVar21[4];
              iStack_2c = piVar21[5];
              if (0xb < uVar9) {
                    /* WARNING: Subroutine does not return */
                FUN_012faff4(0,uVar9,0xb,&DAT_01d2ff10);
              }
              FUN_01bed4e2(iVar5 + 0x10c,iVar17 + 0x10c + (uVar6 + 1) * 0xc,uVar9 * 0xc);
              FUN_01bed4e2(iVar5,iVar17 + (uVar6 + 1) * 0x18,uVar9 * 0x18);
              *puVar11 = (ushort)uVar6;
              local_78 = local_40;
              iStack_74 = iStack_3c;
              local_70 = iStack_38;
              iStack_6c = local_34;
              iStack_68 = iStack_30;
              iStack_64 = iStack_2c;
              uVar9 = (uint)*puVar19;
              iVar16 = uVar9 + 1;
              local_88 = local_11c;
              local_84 = local_114;
              local_80 = local_108;
              if (0xb < uVar9) {
                    /* WARNING: Subroutine does not return */
                FUN_012faff4(0,iVar16,0xc,&DAT_01d2ff20);
              }
              if (uVar1 - uVar6 != iVar16) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
              }
              local_124 = local_124 + 1;
              FUN_01bed4e2(iVar5 + 0x198,iVar17 + uVar6 * 4 + 0x19c,iVar16 * 4);
              uVar6 = 0;
              do {
                iVar16 = *(int *)(iVar5 + 0x198 + uVar6 * 4);
                *(short *)(iVar16 + 400) = (short)uVar6;
                *(int *)(iVar16 + 0x108) = iVar5;
                if (uVar9 <= uVar6) break;
                uVar6 = uVar6 + 1;
              } while (uVar6 <= uVar9);
              local_40 = local_7c;
              iStack_3c = local_78;
              iStack_38 = iStack_74;
              local_34 = local_70;
              iStack_30 = iStack_6c;
              iStack_2c = iStack_68;
              iStack_28 = iStack_64;
              local_50[0] = iVar5;
              local_48[0] = iVar17;
              FUN_019644a8(*piVar15,uVar18,&local_ac,&local_a0,local_120);
              local_c8 = local_40;
              local_c4 = iStack_3c;
              local_c0 = iStack_38;
              local_bc = local_34;
              iStack_b8 = iStack_30;
              iStack_b4 = iStack_2c;
              iStack_b0 = iStack_28;
              if (local_11c == -0x80000000) goto LAB_0196bba0;
              local_120 = local_50[0];
              iVar17 = *(int *)(local_48[0] + 0x108);
              iVar5 = local_48[0];
            } while (iVar17 != 0);
          }
          local_7c = local_40;
          local_78 = iStack_3c;
          iStack_74 = iStack_38;
          local_70 = local_34;
          iStack_6c = iStack_30;
          iStack_68 = iStack_2c;
          iStack_64 = iStack_28;
          local_54 = local_124;
          local_58 = local_120;
          local_5c = local_124;
          local_e8 = local_40;
          local_e4 = iStack_3c;
          local_e0 = (int *)iStack_38;
          local_dc = local_34;
          iStack_d8 = iStack_30;
          iStack_d4 = iStack_2c;
          iStack_d0 = iStack_28;
          local_88 = local_11c;
          local_84 = local_114;
          local_80 = local_108;
          local_60 = iVar5;
          if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d2fee0);
          }
          uVar22 = FUN_01964440(*param_2,param_2[1]);
          piVar15 = (int *)((uint)&local_e8 | 4);
          *(undefined8 *)param_2 = uVar22;
          local_40 = *piVar15;
          iStack_3c = piVar15[1];
          iStack_38 = piVar15[2];
          local_34 = piVar15[3];
          iStack_30 = piVar15[4];
          iStack_2c = piVar15[5];
          local_c8 = local_11c;
          local_c4 = local_114;
          local_c0 = local_108;
          FUN_0196436c((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),&local_c8,&local_40,local_120,
                       local_124);
        }
      }
    }
LAB_0196bba0:
    param_2[2] = param_2[2] + 1;
    *(undefined1 *)param_1 = 6;
  }
  return;
LAB_0196b668:
  local_104 = *param_3;
  goto LAB_0196b584;
}

