// FUN_008dfc14 @ 008dfc14 size=2852 calls_out=9 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_008dfc14(int param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  uint *puVar27;
  uint uVar28;
  int iVar29;
  uint local_1b4;
  undefined4 *local_1a4;
  uint local_180;
  uint local_17c;
  uint local_174;
  uint uStack_170;
  uint uStack_16c;
  uint local_164;
  uint uStack_160;
  uint uStack_15c;
  undefined4 local_14c;
  int local_148;
  int local_144;
  undefined4 local_13c;
  int local_138;
  int local_134;
  undefined1 auStack_128 [72];
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  int iStack_c0;
  uint local_bc;
  undefined4 uStack_b8;
  int iStack_b4;
  int iStack_b0;
  uint local_ac;
  undefined4 uStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint uStack_8c;
  uint local_88;
  uint local_84;
  uint uStack_80;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  int local_30 [2];
  int local_28;
  
  iVar2 = param_2[2];
  if (iVar2 != 0) {
    iVar26 = *(int *)(param_1 + 0x104);
    if (iVar26 != 0) {
      uVar19 = *(uint *)(param_1 + 0xfc);
      *(undefined4 *)(param_1 + 0x104) = 0;
      *(undefined4 *)(param_1 + 0xfc) = 0;
      iVar13 = 0;
      if (uVar19 != 0) {
        local_164 = 0;
        local_174 = 0;
        iVar13 = iVar26;
        uStack_170 = uVar19;
        uStack_16c = *(uint *)(param_1 + 0x100);
        uStack_160 = uVar19;
        uStack_15c = *(uint *)(param_1 + 0x100);
      }
      uVar19 = (uint)(uVar19 != 0);
      iVar20 = *param_2;
      param_2[2] = 0;
      *param_2 = 0;
      iVar26 = 0;
      if (iVar20 != 0) {
        local_13c = 0;
        local_14c = 0;
        iVar26 = iVar2;
        local_148 = iVar20;
        local_144 = param_2[1];
        local_138 = iVar20;
        local_134 = param_2[1];
      }
      uVar15 = (uint)(iVar20 != 0);
      puVar3 = (undefined4 *)thunk_FUN_016d4a50(0x110);
      if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x110);
      }
      *puVar3 = 0;
      *(undefined4 **)(param_1 + 0xfc) = puVar3;
      *(undefined2 *)((int)puVar3 + 0x10e) = 0;
      *(undefined4 *)(param_1 + 0x100) = 0;
      local_dc = local_174;
      local_d8 = uStack_170;
      local_d4 = uStack_16c;
      uStack_cc = local_164;
      uStack_c8 = uStack_160;
      uStack_c4 = uStack_15c;
      uStack_b8 = local_14c;
      iStack_b4 = local_148;
      iStack_b0 = local_144;
      uStack_a8 = local_13c;
      iStack_a4 = local_138;
      iStack_a0 = local_134;
      local_e0 = uVar19;
      local_d0 = uVar19;
      iStack_c0 = iVar13;
      local_bc = uVar15;
      local_ac = uVar15;
      iStack_9c = iVar26;
      FUN_016dd1aa(auStack_128,&local_e0,0x48);
      FUN_016dd1aa(&local_e0,auStack_128,0x48);
      puVar4 = (uint *)((uint)&local_78 | 4);
      puVar5 = (uint *)((uint)&local_60 | 4);
      iVar2 = 0;
      local_1b4 = 0;
      uVar19 = 2;
      local_1a4 = puVar3;
      do {
        local_98 = 2;
        if (uVar19 == 2) {
          FUN_00a5bbe4(&local_48,&local_e0);
          if (local_48 == 0) {
            local_78 = 0x80000000;
          }
          else {
            iVar26 = local_48 + local_40 * 0xc;
            local_78 = *(uint *)(iVar26 + 4);
            local_74 = *(uint *)(iVar26 + 8);
            local_70 = *(uint *)(iVar26 + 0xc);
            local_6c = *(uint *)(iVar26 + 0x88);
            local_68 = *(uint *)(iVar26 + 0x8c);
            local_64 = *(uint *)(iVar26 + 0x90);
          }
          FUN_00a5bbe4(local_30,&local_bc);
joined_r0x008dfed4:
          if (local_30[0] == 0) {
            local_60 = 0x80000000;
          }
          else {
            iVar26 = local_30[0] + local_28 * 0xc;
            local_60 = *(uint *)(iVar26 + 4);
            local_48 = *(uint *)(iVar26 + 8);
            local_44 = *(uint *)(iVar26 + 0xc);
            local_40 = *(uint *)(iVar26 + 0x88);
            local_3c = *(uint *)(iVar26 + 0x8c);
            local_38 = *(uint *)(iVar26 + 0x90);
          }
          *puVar5 = local_48;
          puVar5[1] = local_44;
          puVar5[2] = local_40;
          puVar5[3] = local_3c;
          puVar5[4] = local_38;
        }
        else {
          if ((uVar19 & 1) == 0) {
            local_78 = local_94;
            local_74 = local_90;
            local_70 = uStack_8c;
            local_6c = local_88;
            local_68 = local_84;
            local_64 = uStack_80;
            FUN_00a5bbe4(local_30,&local_bc);
            goto joined_r0x008dfed4;
          }
          local_60 = local_94;
          local_5c = local_90;
          local_58 = uStack_8c;
          local_54 = local_88;
          local_50 = local_84;
          local_4c = uStack_80;
          FUN_00a5bbe4(local_30,&local_e0);
          if (local_30[0] == 0) {
            local_78 = 0x80000000;
          }
          else {
            iVar26 = local_30[0] + local_28 * 0xc;
            local_78 = *(uint *)(iVar26 + 4);
            local_48 = *(uint *)(iVar26 + 8);
            local_44 = *(uint *)(iVar26 + 0xc);
            local_40 = *(uint *)(iVar26 + 0x88);
            local_3c = *(uint *)(iVar26 + 0x8c);
            local_38 = *(uint *)(iVar26 + 0x90);
          }
          *puVar4 = local_48;
          puVar4[1] = local_44;
          puVar4[2] = local_40;
          puVar4[3] = local_3c;
          puVar4[4] = local_38;
        }
        uVar22 = local_58;
        uVar28 = local_5c;
        uVar15 = local_60;
        uVar21 = local_70;
        uVar12 = local_74;
        uVar19 = local_78;
        local_17c = uVar15;
        if (local_78 == 0x80000000 || local_60 == 0x80000000) {
        }
        else {
          uVar14 = local_58;
          if (local_70 < local_58) {
            uVar14 = local_70;
          }
          iVar26 = FUN_016dd50a(local_74,local_5c,uVar14);
          if (iVar26 == 0) {
            iVar26 = uVar21 - uVar22;
          }
          if (0 < iVar26 != iVar26 < 0) {
            if ((char)((0 < iVar26) - (iVar26 < 0)) == '\x01') {
              uVar14 = 0;
              local_78 = 0x80000000;
              puVar27 = puVar4;
              if (local_98 != 2) {
                if (local_94 != 0) {
                  thunk_FUN_016d3fb4(local_90);
                }
                uVar14 = 0;
                uVar11 = 0x80000000;
                uVar15 = uVar19;
                goto joined_r0x008e02f4;
              }
              uVar15 = uVar19;
              uVar19 = 0x80000000;
            }
            else {
              puVar27 = puVar5;
              if (local_98 == 2) {
                uVar14 = 1;
                local_17c = 0x80000000;
              }
              else {
                if (local_94 != 0) {
                  thunk_FUN_016d3fb4(local_90);
                }
                uVar14 = 1;
                local_17c = 0x80000000;
                uVar11 = uVar19;
joined_r0x008e02f4:
                uVar19 = uVar11;
                if (local_88 != 0) {
                  thunk_FUN_016d3fb4(local_84);
                }
              }
            }
            local_90 = *puVar27;
            uStack_8c = puVar27[1];
            local_88 = puVar27[2];
            local_84 = puVar27[3];
            uStack_80 = puVar27[4];
            local_98 = uVar14;
            local_94 = uVar15;
          }
        }
        uVar14 = local_4c;
        uVar15 = local_50;
        local_180 = local_54;
        if (uVar19 == 0x80000000) {
          if (local_17c == 0x80000000) {
            while (FUN_00a5bbe4(&local_60,&local_e0), local_60 != 0) {
              iVar2 = local_60 + local_58 * 0xc;
              if (*(int *)(iVar2 + 4) != 0) {
                thunk_FUN_016d3fb4(*(undefined4 *)(iVar2 + 8));
              }
              if (*(int *)(iVar2 + 0x88) != 0) {
                thunk_FUN_016d3fb4(*(undefined4 *)(iVar2 + 0x8c));
              }
            }
            while (FUN_00a5bbe4(&local_60,&local_bc), local_60 != 0) {
              iVar2 = local_60 + local_58 * 0xc;
              if (*(int *)(iVar2 + 4) != 0) {
                thunk_FUN_016d3fb4(*(undefined4 *)(iVar2 + 8));
              }
              if (*(int *)(iVar2 + 0x88) != 0) {
                thunk_FUN_016d3fb4(*(undefined4 *)(iVar2 + 0x8c));
              }
            }
            if (local_98 != 2) {
              if (local_94 != 0) {
                thunk_FUN_016d3fb4(local_90);
              }
              if (local_88 != 0) {
                thunk_FUN_016d3fb4(local_84);
              }
            }
            iVar2 = *(int *)(param_1 + 0x100);
            if (iVar2 == 0) {
              return;
            }
            iVar26 = *(int *)(param_1 + 0xfc);
            do {
              if (*(ushort *)(iVar26 + 0x10e) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa464(&DAT_004194a6,0x19,&DAT_018af418);
              }
              iVar20 = *(ushort *)(iVar26 + 0x10e) - 1;
              iVar13 = iVar26 + iVar20 * 4;
              iVar24 = *(int *)(iVar13 + 0x114);
              uVar19 = (uint)*(ushort *)(iVar24 + 0x10e);
              if (uVar19 < 5) {
                iVar13 = *(int *)(iVar13 + 0x110);
                uVar12 = (uint)*(ushort *)(iVar13 + 0x10e);
                uVar15 = -uVar19 + 5;
                if (uVar12 < uVar15) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa464(&DAT_004194e7,0x27,&DAT_018af458);
                }
                iVar29 = uVar12 - uVar15;
                *(ushort *)(iVar13 + 0x10e) = (ushort)iVar29;
                *(ushort *)(iVar24 + 0x10e) = 5;
                iVar23 = iVar24 + 4;
                FUN_016dd52c(iVar23 + uVar15 * 0xc,iVar23,uVar19 * 0xc);
                iVar25 = iVar24 + 0x88;
                FUN_016dd52c(iVar25 + uVar15 * 0xc,iVar25,uVar19 * 0xc);
                iVar16 = iVar29 + 1;
                iVar9 = uVar12 - iVar16;
                if (iVar9 != -uVar19 + 4) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa464(&DAT_004194bf,0x28,&DAT_018af448);
                }
                FUN_016dd1aa(iVar23,iVar13 + 4 + iVar16 * 0xc,iVar9 * 0xc);
                FUN_016dd1aa(iVar25,iVar13 + 0x88 + iVar16 * 0xc,iVar9 * 0xc);
                puVar4 = (uint *)(iVar13 + 0x88 + iVar29 * 0xc);
                local_48 = *puVar4;
                local_44 = puVar4[1];
                local_40 = puVar4[2];
                iVar26 = iVar26 + iVar20 * 0xc;
                local_d0 = *(uint *)(iVar26 + 0x8c);
                uStack_cc = *(uint *)(iVar26 + 0x90);
                local_e0 = *(uint *)(iVar26 + 4);
                local_dc = *(uint *)(iVar26 + 8);
                puVar3 = (undefined4 *)(iVar13 + 4 + iVar29 * 0xc);
                local_d8 = *(uint *)(iVar26 + 0xc);
                uVar17 = puVar3[1];
                uVar18 = puVar3[2];
                *(undefined4 *)(iVar26 + 4) = *puVar3;
                *(undefined4 *)(iVar26 + 8) = uVar17;
                *(undefined4 *)(iVar26 + 0xc) = uVar18;
                local_d4 = *(uint *)(iVar26 + 0x88);
                *(uint *)(iVar26 + 0x88) = local_48;
                *(uint *)(iVar26 + 0x8c) = local_44;
                *(uint *)(iVar26 + 0x90) = local_40;
                puVar4 = (uint *)(iVar23 + iVar9 * 0xc);
                *puVar4 = local_e0;
                puVar4[1] = local_dc;
                puVar4[2] = local_d8;
                puVar4 = (uint *)(iVar25 + iVar9 * 0xc);
                *puVar4 = local_d4;
                puVar4[1] = local_d0;
                puVar4[2] = uStack_cc;
                local_78 = local_e0;
                local_74 = local_dc;
                local_70 = local_d8;
                local_60 = local_d4;
                local_5c = local_d0;
                local_58 = uStack_cc;
                if (iVar2 != 1) {
                  iVar26 = iVar24 + 0x110;
                  FUN_016dd52c(iVar26 + uVar15 * 4,iVar26,uVar19 * 4 + 4);
                  FUN_016dd1aa(iVar26,iVar13 + iVar16 * 4 + 0x110,uVar15 * 4);
                  piVar10 = *(int **)(iVar24 + 0x110);
                  *piVar10 = iVar24;
                  *(undefined2 *)(piVar10 + 0x43) = 0;
                  piVar10 = *(int **)(iVar24 + 0x114);
                  *piVar10 = iVar24;
                  *(undefined2 *)(piVar10 + 0x43) = 1;
                  piVar10 = *(int **)(iVar24 + 0x118);
                  *piVar10 = iVar24;
                  *(undefined2 *)(piVar10 + 0x43) = 2;
                  piVar10 = *(int **)(iVar24 + 0x11c);
                  *piVar10 = iVar24;
                  *(undefined2 *)(piVar10 + 0x43) = 3;
                  piVar10 = *(int **)(iVar24 + 0x120);
                  *piVar10 = iVar24;
                  *(undefined2 *)(piVar10 + 0x43) = 4;
                  piVar10 = *(int **)(iVar24 + 0x124);
                  *piVar10 = iVar24;
                  *(undefined2 *)(piVar10 + 0x43) = 5;
                }
              }
              iVar2 = iVar2 + -1;
              iVar26 = iVar24;
              if (iVar2 == 0) {
                return;
              }
            } while( true );
          }
          uVar11 = (uint)*(ushort *)((int)puVar3 + 0x10e);
          uVar21 = uVar22;
          uVar12 = uVar28;
          uVar19 = local_17c;
          if (10 < uVar11) goto LAB_008e0164;
LAB_008dfda8:
          *(short *)((int)puVar3 + 0x10e) = (short)uVar11 + 1;
          puVar3[uVar11 * 3 + 1] = uVar19;
          puVar3[uVar11 * 3 + 2] = uVar12;
          puVar3[uVar11 * 3 + 3] = uVar21;
          puVar3[uVar11 * 3 + 0x22] = local_180;
          puVar3[uVar11 * 3 + 0x23] = uVar15;
          puVar3[uVar11 * 3 + 0x24] = uVar14;
        }
        else {
          if (local_17c == 0x80000000) {
            local_180 = local_6c;
            uVar14 = local_64;
            uVar15 = local_68;
          }
          else {
            if (local_6c != 0) {
              thunk_FUN_016d3fb4();
            }
            if (local_17c != 0) {
              thunk_FUN_016d3fb4(uVar28);
            }
          }
          uVar11 = (uint)*(ushort *)((int)puVar3 + 0x10e);
          uVar22 = uVar21;
          uVar28 = uVar12;
          local_17c = uVar19;
          if (uVar11 < 0xb) goto LAB_008dfda8;
LAB_008e0164:
          uVar19 = 0;
          do {
            puVar3 = (undefined4 *)*puVar3;
            if (puVar3 == (undefined4 *)0x0) {
              puVar6 = (undefined4 *)thunk_FUN_016d4a50(0x140);
              if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600874(4,0x140);
              }
              uVar19 = local_1b4 + 1;
              *(undefined2 *)((int)puVar6 + 0x10e) = 0;
              puVar6[0x44] = local_1a4;
              *puVar6 = 0;
              if (0xfffffffe < local_1b4) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa444(&DAT_018af438);
              }
              *local_1a4 = puVar6;
              *(undefined4 **)(param_1 + 0xfc) = puVar6;
              *(uint *)(param_1 + 0x100) = uVar19;
              *(undefined2 *)(local_1a4 + 0x43) = 0;
              puVar3 = puVar6;
              local_1b4 = uVar19;
              goto LAB_008e01ec;
            }
            uVar19 = uVar19 + 1;
          } while (10 < *(ushort *)((int)puVar3 + 0x10e));
          puVar6 = local_1a4;
LAB_008e01ec:
          puVar7 = (undefined4 *)thunk_FUN_016d4a50(0x110);
          if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0x110);
          }
          *puVar7 = 0;
          *(undefined2 *)((int)puVar7 + 0x10e) = 0;
          uVar12 = uVar19;
          while (uVar12 = uVar12 - 1, uVar12 != 0) {
            puVar8 = (undefined4 *)thunk_FUN_016d4a50(0x140);
            if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,0x140);
            }
            *(undefined2 *)((int)puVar8 + 0x10e) = 0;
            puVar8[0x44] = puVar7;
            *puVar8 = 0;
            *puVar7 = puVar8;
            *(undefined2 *)(puVar7 + 0x43) = 0;
            puVar7 = puVar8;
          }
          uVar1 = *(ushort *)((int)puVar3 + 0x10e);
          uVar12 = (uint)uVar1;
          if (10 < uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa464(&DAT_00565dd0,0x20,&DAT_018af428);
          }
          uVar1 = uVar1 + 1;
          *(ushort *)((int)puVar3 + 0x10e) = uVar1;
          puVar3[uVar12 * 3 + 1] = local_17c;
          puVar3[uVar12 * 3 + 2] = uVar28;
          puVar3[uVar12 * 3 + 3] = uVar22;
          puVar3[uVar12 * 3 + 0x22] = local_180;
          puVar3[uVar12 * 3 + 0x23] = uVar15;
          puVar3[uVar12 * 3 + 0x24] = uVar14;
          puVar3[uVar12 + 0x45] = puVar7;
          *puVar7 = puVar3;
          *(ushort *)(puVar7 + 0x43) = uVar1;
          for (; uVar19 != 0; uVar19 = uVar19 - 1) {
            puVar3 = (undefined4 *)puVar3[*(ushort *)((int)puVar3 + 0x10e) + 0x44];
          }
          local_1a4 = puVar6;
        }
        iVar2 = iVar2 + 1;
        *(int *)(param_1 + 0x104) = iVar2;
        uVar19 = local_98;
      } while( true );
    }
    iVar24 = param_2[1];
    iVar2 = *(int *)(param_1 + 0xfc);
    iVar26 = *(int *)(param_1 + 0x100);
    iVar13 = *(int *)(param_1 + 0x104);
    iVar20 = param_2[2];
    *(int *)(param_1 + 0xfc) = *param_2;
    *(int *)(param_1 + 0x100) = iVar24;
    *(int *)(param_1 + 0x104) = iVar20;
    *param_2 = iVar2;
    param_2[1] = iVar26;
    param_2[2] = iVar13;
  }
  return;
}

