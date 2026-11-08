// FUN_01a42080 @ 01a42080 size=1912 calls_out=8 calls_in=0
// strings: assertion failed: edge.height == self.node.height - 1 | assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01a42080(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  int iVar16;
  ushort *puVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  int iVar23;
  int *piVar24;
  uint uVar25;
  ushort *puVar26;
  int iVar27;
  int *piVar28;
  int *piVar29;
  uint uVar30;
  int local_f4;
  int local_ec;
  int local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  int local_ac;
  int local_a8;
  uint local_a4;
  int local_a0;
  uint local_9c;
  uint local_98;
  int local_88;
  int local_84;
  uint local_80;
  int iStack_7c;
  int local_78;
  int local_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int local_60;
  uint local_5c;
  int local_58;
  uint local_54;
  int local_50 [2];
  int local_48 [2];
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  if (param_2[4] == 0) {
    piVar24 = (int *)param_2[3];
    local_88 = FUN_01a429a4();
    local_84 = 0;
    *(undefined4 *)(local_88 + 0x108) = 0;
    puVar26 = (ushort *)(local_88 + 0x192);
    *puVar26 = 0;
    *piVar24 = local_88;
    piVar24[1] = 0;
    local_80 = (uint)*puVar26;
    if (10 < local_80) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements",0x20,
                   &DAT_01d305b8);
    }
    *puVar26 = *puVar26 + 1;
    uVar12 = param_2[1];
    uVar21 = param_2[2];
    iVar27 = local_88 + local_80 * 0xc;
    puVar14 = (undefined4 *)(local_88 + local_80 * 0x18);
    *(undefined4 *)(iVar27 + 0x10c) = *param_2;
    *(undefined4 *)(iVar27 + 0x110) = uVar12;
    *(undefined4 *)(iVar27 + 0x114) = uVar21;
    uVar12 = param_3[1];
    uVar21 = param_3[2];
    uVar15 = param_3[3];
    uVar19 = param_3[4];
    uVar22 = param_3[5];
    *puVar14 = *param_3;
    puVar14[1] = uVar12;
    puVar14[2] = uVar21;
    puVar14[3] = uVar15;
    puVar14[4] = uVar19;
    puVar14[5] = uVar22;
  }
  else {
    iVar27 = param_2[4];
    piVar24 = (int *)param_2[3];
    puVar26 = (ushort *)(iVar27 + 0x192);
    if (*puVar26 < 0xb) {
      FUN_01a3dd44(&local_88,param_2 + 4,param_2,param_3);
    }
    else {
      local_e0 = param_2[5];
      local_dc = param_2[6];
      uVar25 = 4;
      bVar2 = false;
      if (4 < local_dc) {
        if (local_dc == 5) {
          uVar25 = 5;
        }
        else {
          if (local_dc == 6) {
            uVar25 = 5;
            local_dc = 0;
          }
          else {
            uVar25 = 6;
            local_dc = local_dc - 7;
          }
          bVar2 = true;
        }
      }
      iVar8 = FUN_01a429a4();
      *(undefined2 *)(iVar8 + 0x192) = 0;
      *(undefined4 *)(iVar8 + 0x108) = 0;
      piVar9 = (int *)(iVar27 + 0x10c + uVar25 * 0xc);
      local_e8 = *piVar9;
      piVar29 = (int *)(iVar27 + uVar25 * 0x18);
      local_e4 = piVar9[2];
      local_ec = piVar9[1];
      uVar10 = ~uVar25 + (uint)*puVar26;
      *(undefined2 *)(iVar8 + 0x192) = (short)uVar10;
      local_88 = *piVar29;
      local_84 = piVar29[1];
      local_80 = piVar29[2];
      iStack_7c = piVar29[3];
      local_78 = piVar29[4];
      local_74 = piVar29[5];
      if (0xb < uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar10,0xb,&DAT_01d2ff10);
      }
      FUN_01bed4e2(iVar8 + 0x10c,iVar27 + 0x10c + (uVar25 + 1) * 0xc,uVar10 * 0xc);
      FUN_01bed4e2(iVar8,iVar27 + (uVar25 + 1) * 0x18,uVar10 * 0x18);
      local_f4 = local_88;
      *puVar26 = (ushort)uVar25;
      piVar9 = (int *)((uint)&local_88 | 4);
      local_40 = *piVar9;
      iStack_3c = piVar9[1];
      iStack_38 = piVar9[2];
      iStack_34 = piVar9[3];
      iStack_30 = piVar9[4];
      local_98 = local_dc;
      if (bVar2) {
        local_9c = 0;
        local_a0 = iVar8;
      }
      else {
        local_a0 = iVar27;
        local_9c = local_e0;
      }
      FUN_01a3dd44(&local_88,&local_a0,param_2,param_3);
      uVar25 = local_80;
      iVar4 = local_84;
      iVar3 = local_88;
      if (local_f4 == 9) {
        local_88 = iVar3;
        local_84 = iVar4;
        local_80 = uVar25;
      }
      else {
        iVar16 = *(int *)(iVar27 + 0x108);
        if (iVar16 == 0) {
          uVar10 = 0;
        }
        else {
          piVar9 = (int *)((uint)&local_a0 | 4);
          uVar10 = 0;
          do {
            local_a0 = local_f4;
            uVar30 = (uint)*(ushort *)(iVar27 + 400);
            *piVar9 = local_40;
            piVar9[1] = iStack_3c;
            piVar9[2] = iStack_38;
            piVar9[3] = iStack_34;
            piVar9[4] = iStack_30;
            local_ac = local_e8;
            local_a8 = local_ec;
            local_a4 = local_e4;
            if (uVar10 != local_e0) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec("assertion failed: edge.height == self.node.height - 1",0x35,
                           &DAT_01d2ff30);
            }
            puVar26 = (ushort *)(iVar16 + 0x192);
            uVar1 = *puVar26;
            if (uVar1 < 0xb) {
              FUN_019644a8(iVar16,uVar30,&local_ac,&local_a0,iVar8);
              goto LAB_01a42714;
            }
            piVar29 = local_48;
            uVar20 = 4;
            if (4 < uVar30) {
              if (uVar30 == 5) {
                uVar20 = 5;
              }
              else {
                piVar29 = local_50;
                if (uVar30 == 6) {
                  uVar30 = 0;
                  uVar20 = 5;
                }
                else {
                  uVar30 = uVar30 - 7;
                  uVar20 = 6;
                }
              }
            }
            iVar27 = FUN_01a42984();
            puVar17 = (ushort *)(iVar27 + 0x192);
            *puVar17 = 0;
            *(undefined4 *)(iVar27 + 0x108) = 0;
            piVar13 = (int *)(iVar16 + 0x10c + uVar20 * 0xc);
            local_e8 = *piVar13;
            piVar28 = (int *)(iVar16 + uVar20 * 0x18);
            local_e4 = piVar13[2];
            uVar10 = ~uVar20 + (uint)*puVar26;
            local_ec = piVar13[1];
            *puVar17 = (ushort)uVar10;
            local_40 = *piVar28;
            iStack_3c = piVar28[1];
            iStack_38 = piVar28[2];
            iStack_34 = piVar28[3];
            iStack_30 = piVar28[4];
            iStack_2c = piVar28[5];
            if (0xb < uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(0,uVar10,0xb,&DAT_01d2ff10);
            }
            FUN_01bed4e2(iVar27 + 0x10c,iVar16 + 0x10c + (uVar20 + 1) * 0xc,uVar10 * 0xc);
            FUN_01bed4e2(iVar27,iVar16 + (uVar20 + 1) * 0x18,uVar10 * 0x18);
            *puVar26 = (ushort)uVar20;
            local_78 = local_40;
            local_74 = iStack_3c;
            iStack_70 = iStack_38;
            iStack_6c = iStack_34;
            iStack_68 = iStack_30;
            iStack_64 = iStack_2c;
            uVar18 = (uint)*puVar17;
            iVar11 = uVar18 + 1;
            local_88 = local_e8;
            local_84 = local_ec;
            local_80 = local_e4;
            if (0xb < uVar18) {
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(0,iVar11,0xc,&DAT_01d2ff20);
            }
            if (uVar1 - uVar20 != iVar11) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
            }
            uVar10 = local_e0 + 1;
            FUN_01bed4e2(iVar27 + 0x198,iVar16 + uVar20 * 4 + 0x19c,iVar11 * 4);
            local_f4 = local_78;
            uVar20 = 0;
            do {
              iVar11 = *(int *)(iVar27 + 0x198 + uVar20 * 4);
              *(short *)(iVar11 + 400) = (short)uVar20;
              *(int *)(iVar11 + 0x108) = iVar27;
              if (uVar18 <= uVar20) break;
              uVar20 = uVar20 + 1;
            } while (uVar20 <= uVar18);
            local_40 = local_74;
            iStack_3c = iStack_70;
            iStack_38 = iStack_6c;
            iStack_34 = iStack_68;
            iStack_30 = iStack_64;
            local_50[0] = iVar27;
            local_48[0] = iVar16;
            FUN_019644a8(*piVar29,uVar30,&local_ac,&local_a0,iVar8);
            if (local_f4 == 9) goto LAB_01a42714;
            iVar16 = *(int *)(local_48[0] + 0x108);
            iVar27 = local_48[0];
            iVar8 = local_50[0];
            local_e0 = uVar10;
          } while (iVar16 != 0);
        }
        iVar7 = iStack_30;
        iVar6 = iStack_34;
        iVar5 = iStack_38;
        iVar11 = iStack_3c;
        iVar16 = local_40;
        local_78 = local_f4;
        local_74 = local_40;
        iStack_70 = iStack_3c;
        iStack_6c = iStack_38;
        iStack_68 = iStack_34;
        iStack_64 = iStack_30;
        iVar23 = *piVar24;
        local_88 = local_e8;
        local_84 = local_ec;
        local_80 = local_e4;
        local_60 = iVar27;
        local_5c = local_e0;
        local_58 = iVar8;
        local_54 = uVar10;
        if (iVar23 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d2fee0);
        }
        uVar30 = piVar24[1];
        piVar9 = (int *)FUN_01a42984();
        *(undefined2 *)((int)piVar9 + 0x192) = 0;
        piVar9[0x66] = iVar23;
        piVar9[0x42] = 0;
        if (0xfffffffe < uVar30) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d305e8);
        }
        *(undefined2 *)(iVar23 + 400) = 0;
        *(int **)(iVar23 + 0x108) = piVar9;
        *piVar24 = (int)piVar9;
        piVar24[1] = uVar30 + 1;
        piVar29 = (int *)((uint)&local_40 | 4);
        local_40 = local_f4;
        *piVar29 = iVar16;
        piVar29[1] = iVar11;
        piVar29[2] = iVar5;
        piVar29[3] = iVar6;
        piVar29[4] = iVar7;
        if (uVar10 != uVar30) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec(&DAT_00533a41,0x30,&DAT_01d305c8);
        }
        piVar9[0x43] = local_e8;
        piVar9[0x44] = local_ec;
        piVar9[0x45] = local_e4;
        *(undefined2 *)((int)piVar9 + 0x192) = 1;
        *piVar9 = local_f4;
        piVar9[1] = iStack_3c;
        piVar9[2] = iStack_38;
        piVar9[3] = iStack_34;
        piVar9[4] = iStack_30;
        piVar9[5] = iStack_2c;
        piVar9[0x67] = iVar8;
        *(undefined2 *)(iVar8 + 400) = 1;
        *(int **)(iVar8 + 0x108) = piVar9;
LAB_01a42714:
        local_88 = iVar3;
        local_84 = iVar4;
        local_80 = uVar25;
      }
    }
  }
  iVar27 = piVar24[2];
  *param_1 = local_88;
  param_1[1] = local_84;
  param_1[2] = local_80;
  param_1[3] = (int)piVar24;
  piVar24[2] = iVar27 + 1;
  return;
}

