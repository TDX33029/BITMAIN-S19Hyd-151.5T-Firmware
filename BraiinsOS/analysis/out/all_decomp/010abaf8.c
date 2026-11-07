// FUN_010abaf8 @ 010abaf8 size=4844 calls_out=27 calls_in=2
// strings: PATCH | CONNECT | DELETE | OPTIONS | original header value plus ascii is valid | chunked

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_010abaf8(undefined4 *param_1,uint *param_2,int *param_3)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  int **ppiVar4;
  int *piVar5;
  int *piVar6;
  code *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  byte *pbVar14;
  uint uVar15;
  int *piVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 unaff_r7;
  int iVar19;
  int *piVar20;
  int iVar21;
  undefined4 uVar22;
  undefined4 unaff_r8;
  char *pcVar23;
  undefined4 unaff_r9;
  uint uVar24;
  int *piVar25;
  undefined4 unaff_r10;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  bool bVar29;
  undefined8 uVar30;
  uint local_e8;
  uint local_e0;
  uint local_d8;
  code *local_d4;
  uint local_d0;
  int local_cc;
  int *local_c8;
  code *local_c4;
  code *local_c0;
  uint local_bc;
  int *local_b8;
  undefined2 local_b4;
  undefined4 local_b0;
  code *local_ac;
  int *local_a8;
  code *local_a4;
  undefined4 local_a0;
  int *piStack_9c;
  undefined4 local_98;
  code *local_94;
  int **local_90;
  code *local_8c;
  uint local_88;
  int *piStack_84;
  undefined2 local_80;
  byte local_7e;
  int *local_78;
  int *local_74;
  int *local_70;
  code *local_6c;
  uint local_68;
  int *piStack_64;
  int *local_60;
  int *local_5c;
  int *local_58;
  code *local_54;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  int *local_48;
  int *piStack_44;
  int *piStack_40;
  code *pcStack_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  code *local_2c;
  
  uVar30 = CONCAT44(unaff_r10,unaff_r7);
  local_a0 = CONCAT13(local_a0._3_1_,CONCAT21(local_a0._1_2_,(char)local_a0));
  puVar13 = (undefined4 *)param_2[4];
  bVar1 = *(byte *)(puVar13 + 0x1b);
  if (8 < bVar1) {
    if (bVar1 == 9) {
      uVar30 = *(undefined8 *)(puVar13 + 0x1c);
      unaff_r8 = puVar13[0x1e];
      unaff_r9 = puVar13[0x1f];
      local_98 = (int *)CONCAT22(CONCAT11(local_98._3_1_,*(undefined1 *)((int)puVar13 + 0x6f)),
                                 *(undefined2 *)((int)puVar13 + 0x6d));
    }
    else {
      uVar30 = FUN_0102a5b4(puVar13[0x1c],puVar13[0x1d]);
    }
  }
  pbVar14 = (byte *)param_2[5];
  local_b0 = (int **)CONCAT22(CONCAT11(local_b0._3_1_,local_98._2_1_),(undefined2)local_98);
  if (((*pbVar14 != 0xb) && (9 < *pbVar14)) && (*(int *)(pbVar14 + 8) != 0)) {
    thunk_FUN_016d3fb4(*(undefined4 *)(pbVar14 + 4));
  }
  *(undefined8 *)(pbVar14 + 4) = uVar30;
  uVar26 = *param_2;
  uVar27 = param_2[1];
  pbVar14[3] = local_b0._2_1_;
  *pbVar14 = bVar1;
  *(undefined2 *)(pbVar14 + 1) = (undefined2)local_b0;
  *(undefined4 *)(pbVar14 + 0xc) = unaff_r8;
  *(undefined4 *)(pbVar14 + 0x10) = unaff_r9;
  if (uVar26 == 2 && uVar27 == 0) {
    local_94 = (code *)&DAT_00000045;
    local_8c = (code *)0x0;
    local_90 = (int **)0x0;
    local_98 = (int *)0x0;
    FUN_010b21c0(&local_b0,puVar13,&local_98);
    if ((char)local_a0 != '\x02') {
      (*(code *)local_b0[4])(&local_a4,local_ac,local_a8);
    }
    local_8c = (code *)0x0;
    local_90 = (int **)0x0;
  }
  else {
    uVar27 = param_2[2];
    uVar24 = param_2[3];
    cVar2 = *(char *)(puVar13 + 0x21);
    FUN_010c0c60(&local_d0,puVar13);
    if (cVar2 == '\x02') {
      local_a4 = (code *)0x0;
      local_a8 = (int *)0x0;
      local_b0 = (int **)0x0;
      local_ac = (code *)&DAT_00000045;
      FUN_010b0e04(&local_98,puVar13);
      ppiVar4 = local_90;
      piVar25 = local_98;
      uVar28 = (uint)local_7e;
      if (uVar28 == 3) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_0040929f,0x17,&local_50,&DAT_018a62e4,&DAT_018a6164);
      }
      local_c0 = local_8c;
      local_bc = local_88;
      local_b8 = piStack_84;
      local_b4 = local_80;
      if (uVar28 == 2) {
        if ((int *)local_98[10] <= local_90) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(local_90,(int *)local_98[10],&DAT_01884ca0);
        }
        puVar11 = (uint *)(local_98[9] + (int)local_90 * 0x34);
        if ((*puVar11 & 1) == 0) {
          iVar8 = (int)local_90 * 0x34 + local_98[9];
          iVar8 = FUN_010c0690(*(undefined4 *)(iVar8 + 0x10),*(undefined4 *)(iVar8 + 0x14));
        }
        else {
          uVar26 = puVar11[2];
          if ((uint)local_98[0xd] <= uVar26) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar26,local_98[0xd],&DAT_01884c60);
          }
          iVar8 = local_98[0xc] + uVar26 * 0x24;
          iVar8 = FUN_010c0690(*(undefined4 *)(iVar8 + 0x14),*(undefined4 *)(iVar8 + 0x18));
        }
        if (iVar8 == 0) {
          if ((int *)piVar25[10] <= ppiVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(ppiVar4,(int *)piVar25[10],&DAT_01884c80);
          }
          puVar11 = (uint *)(piVar25[9] + (int)ppiVar4 * 0x34);
          if ((*puVar11 & 1) == 0) {
            piVar25 = (int *)((int)ppiVar4 * 0x34 + piVar25[9] + 0xc);
          }
          else {
            uVar26 = puVar11[2];
            if ((uint)piVar25[0xd] <= uVar26) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar26,piVar25[0xd],&DAT_01884c70);
            }
            piVar25 = (int *)(piVar25[0xc] + uVar26 * 0x24 + 0x10);
          }
          piVar16 = (int *)piVar25[2];
          piVar20 = (int *)((int)piVar16 + 9);
          if ((int)piVar20 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(0,piVar20);
          }
          local_60 = (int *)&DAT_00000001;
          local_58 = (int *)0x0;
          if (piVar20 != (int *)0x0) {
            local_60 = (int *)thunk_FUN_016d4a50(piVar20);
            if (local_60 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,piVar20);
            }
            local_58 = piVar20;
          }
          iVar8 = piVar25[1];
          uVar26 = 0x20 - LZCOUNT((uint)local_58 >> 10);
          local_5c = (int *)0x0;
          if (6 < uVar26) {
            uVar26 = 7;
          }
          local_54 = (code *)(uVar26 << 2 | 1);
          if (local_58 < piVar16) {
            FUN_00f5f538(&local_60,piVar16);
          }
          piVar6 = local_58;
          piVar5 = local_5c;
          piVar20 = local_60;
          FUN_016dd1aa((int)local_60 + (int)local_5c,iVar8,piVar16);
          if ((int *)((int)piVar6 - (int)piVar5) < piVar16) {
            local_98 = piVar16;
            goto LAB_010acd0c;
          }
          local_5c = (int *)((int)piVar5 + (int)piVar16);
          if ((uint)((int)piVar6 - (int)local_5c) < 2) {
            FUN_00f5f538(&local_60,2);
            piVar20 = local_60;
          }
          *(undefined2 *)((int)piVar20 + (int)local_5c) = 0x202c;
          if ((uint)((int)local_58 - (int)local_5c) < 2) {
            local_98 = (int *)&SUB_00000002;
LAB_010acd08:
LAB_010acd0c:
                    /* WARNING: Subroutine does not return */
            FUN_00f600c0();
          }
          local_5c = (int *)((int)local_5c + 2);
          if ((uint)((int)local_58 - (int)local_5c) < 7) {
            FUN_00f5f538(&local_60,7);
            *(undefined4 *)((int)local_60 + (int)local_5c) = 0x6e756863;
            *(undefined4 *)((int)local_60 + (int)local_5c + 3) = 0x64656b6e;
            if ((uint)((int)local_58 - (int)local_5c) < 7) {
              local_98 = (int *)&DAT_00000007;
              goto LAB_010acd08;
            }
          }
          else {
            *(undefined4 *)((int)local_60 + (int)local_5c) = 0x6e756863;
            *(undefined4 *)((int)local_60 + (int)local_5c + 3) = 0x64656b6e;
          }
          pcVar7 = local_54;
          local_5c = (int *)((int)local_5c + 7);
          if (((uint)local_54 & 1) == 0) {
            local_a4 = local_54;
            local_48 = &DAT_018ad580;
            local_ac = (code *)local_60;
            local_a8 = local_5c;
          }
          else {
            local_34 = (int *)((int)local_60 - ((uint)local_54 >> 5));
            local_38 = (int *)((int)local_58 + ((uint)local_54 >> 5));
            local_30 = (int *)((int)local_5c + ((uint)local_54 >> 5));
            FUN_00f5ef18(&local_b0,&local_38);
            local_48 = (int *)local_b0;
            local_50 = (uint)pcVar7 >> 5;
            if (local_a8 < (int *)((uint)pcVar7 >> 5)) {
              local_90 = &local_48;
              local_48 = local_a8;
              local_8c = FUN_007883b8;
              local_94 = FUN_007883b8;
              local_98 = &local_50;
                    /* WARNING: Subroutine does not return */
              FUN_00faa478(&DAT_00584155,&local_98,&DAT_018a6700);
            }
            local_a8 = (int *)((int)local_a8 - local_50);
            local_ac = (code *)((int)local_ac + local_50);
            bVar29 = local_b0 == (int **)0x0;
            local_b0 = (int **)0x0;
            if (bVar29) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa444(&DAT_018a55f8);
            }
          }
          local_b0 = (int **)0x0;
          local_98 = local_48;
          local_94 = local_ac;
          local_90 = (int **)local_a8;
          local_8c = local_a4;
          if (local_a8 != (int *)0x0) {
            piVar16 = (int *)0x0;
            do {
              bVar1 = *(byte *)((int)local_ac + (int)piVar16);
              if (bVar1 < 0x20) {
                if (bVar1 != 9) goto LAB_010ac6f8;
              }
              else if (bVar1 == 0x7f) {
LAB_010ac6f8:
                (*(code *)local_48[4])(&local_8c);
                if (local_b0 != (int **)0x0) {
                  (**(code **)((int)local_b0 + 0x10))(&local_a4,local_ac,local_a8);
                }
                    /* WARNING: Subroutine does not return */
                FUN_00fb74f8("original header value plus ascii is valid",0x29,&local_50,
                             &DAT_018a62f4,&DAT_01884c90);
              }
              piVar16 = (int *)((int)piVar16 + 1);
            } while (local_a8 != piVar16);
          }
          piStack_44 = (int *)local_ac;
          piStack_40 = local_a8;
          pcStack_3c = local_a4;
          local_34 = (int *)local_ac;
          local_30 = local_a8;
          local_2c = local_a4;
          (**(code **)(*piVar25 + 0x10))(piVar25 + 3,piVar25[1],piVar25[2]);
          *piVar25 = (int)local_48;
          piVar25[1] = (int)piStack_44;
          piVar25[2] = (int)piStack_40;
          piVar25[3] = (int)pcStack_3c;
          *(undefined1 *)(piVar25 + 4) = 0;
        }
LAB_010ac7d8:
        local_74 = (int *)&DAT_80000000;
        local_68 = local_68 & 0xffffff00;
        local_78 = (int *)0x0;
        local_a4 = (code *)0x0;
        local_a8 = (int *)0x0;
        local_ac = (code *)&DAT_00000044;
        local_b0 = (int **)0x0;
        FUN_010b246c(&local_c0,puVar13,&local_b0);
        piVar25 = local_b8;
        if (local_c0 != (code *)0x1) {
          goto LAB_010ac894;
        }
        if ((uint)local_b8[10] <= local_bc) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(local_bc,local_b8[10],&DAT_01884ca0);
        }
        puVar11 = (uint *)(local_b8[9] + local_bc * 0x34);
        if ((*puVar11 & 1) == 0) {
          uVar26 = local_b8[10];
          if (uVar26 <= local_bc) goto LAB_010ace04;
          piVar16 = (int *)(local_bc * 0x34 + local_b8[9]);
          local_e0 = 2;
          local_d8 = uVar28;
        }
        else {
          uVar26 = local_b8[10];
          if (uVar26 <= local_bc) {
LAB_010ace04:
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(local_bc,uVar26,&DAT_018847b8);
          }
          piVar16 = (int *)(local_b8[9] + local_bc * 0x34);
          if (*piVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa464(&DAT_00419463,0x28,&DAT_018847c8);
          }
          local_e8 = puVar11[2];
          local_e0 = 1;
          local_d8 = piVar16[1];
        }
        (**(code **)piVar16[3])(&local_b0,piVar16 + 6,piVar16[4],piVar16[5]);
        local_4a = local_a0._3_1_;
        local_4c = local_a0._1_2_;
        local_48 = (int *)local_b0;
        piStack_44 = (int *)local_ac;
        piStack_40 = local_a8;
        pcStack_3c = local_a4;
        iVar8 = piVar16[7];
        local_a0 = CONCAT13(local_a0._3_1_,CONCAT21(local_a0._1_2_,(char)iVar8));
        piVar16 = (int *)thunk_FUN_016d4a50(0x50);
        if (piVar16 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(4,0x50);
        }
        *piVar16 = (int)local_48;
        piVar16[1] = (int)piStack_44;
        piVar16[2] = (int)piStack_40;
        piVar16[3] = (int)pcStack_3c;
        local_60 = (int *)&DAT_00000004;
        *(char *)(piVar16 + 4) = (char)iVar8;
        *(undefined2 *)((int)piVar16 + 0x11) = local_4c;
        *(undefined1 *)((int)piVar16 + 0x13) = local_4a;
        local_58 = (int *)&DAT_00000001;
        iVar8 = 0;
        uVar26 = local_e0;
        local_5c = piVar16;
        while (piVar20 = local_58, uVar26 != 2) {
          uVar26 = piVar25[0xd];
          if (uVar26 <= local_d8) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(local_d8,uVar26,&DAT_018847d8);
          }
          uVar26 = 2;
          iVar21 = piVar25[0xc] + local_d8 * 0x24;
          uVar27 = local_e0;
          if (local_e0 == 1) {
            uVar27 = local_e8;
          }
          if (local_e0 == 1 && local_d8 == uVar27) {
            local_e0 = 2;
            local_d8 = local_e8;
          }
          else if (*(int *)(iVar21 + 8) == 1) {
            local_d8 = *(uint *)(iVar21 + 0xc);
            uVar26 = 1;
          }
          (*(code *)**(undefined4 **)(iVar21 + 0x10))
                    (&local_b0,iVar21 + 0x1c,*(undefined4 *)(iVar21 + 0x14),
                     *(undefined4 *)(iVar21 + 0x18));
          uVar3 = *(undefined1 *)(iVar21 + 0x20);
          local_38 = (int *)local_b0;
          local_34 = (int *)local_ac;
          local_30 = local_a8;
          local_2c = local_a4;
          local_50._0_3_ = (undefined3)(local_a0 >> 8);
          uVar27 = local_a0 >> 0x18;
          local_a0._0_3_ = CONCAT21(local_a0._1_2_,uVar3);
          local_a0 = CONCAT13((char)uVar27,(undefined3)local_a0);
          if (piVar20 == local_60) {
            uVar12 = 2;
            if (uVar26 == 2) {
              uVar12 = 1;
            }
            FUN_010bf6b0(&local_60,piVar20,uVar12,4,0x14);
            piVar16 = local_5c;
          }
          local_58 = (int *)((int)piVar20 + 1);
          *(undefined1 *)((int)piVar16 + iVar8 + 0x24) = uVar3;
          *(undefined2 *)((int)piVar16 + iVar8 + 0x25) = (undefined2)local_50;
          *(undefined1 *)((int)piVar16 + iVar8 + 0x27) = local_50._2_1_;
          *(int **)((int)piVar16 + iVar8 + 0x14) = local_38;
          *(int **)((int)piVar16 + iVar8 + 0x18) = local_34;
          *(int **)((int)piVar16 + iVar8 + 0x1c) = local_30;
          *(code **)((int)piVar16 + iVar8 + 0x20) = local_2c;
          iVar8 = iVar8 + 0x14;
        }
        local_b0 = (int **)local_60;
        local_ac = (code *)local_5c;
        local_a8 = local_58;
        FUN_010bcad8(&local_98,&local_78,&local_b0);
      }
      else {
        if ((local_d0 & 1) == 0) {
          if ((uVar26 & 1) == 0) {
            piVar16 = (int *)0x3;
            bVar29 = true;
            piVar25 = piStack_84;
          }
          else {
            if ((7 < *(byte *)(puVar13 + 0x1b)) ||
               ((1 << (uint)*(byte *)(puVar13 + 0x1b) & 0xa2U) == 0)) {
              local_a0 = local_a0 & 0xffffff00;
              local_a4 = (code *)0x0;
              local_b0 = (int **)&PTR_LAB_0188467c;
              local_ac = (code *)0x386db0;
              local_a8 = (int *)0x7;
              iVar8 = FUN_010b082c(&local_98,&local_b0);
              if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00fb74f8(&DAT_0040929f,0x17,&local_50,&DAT_018a62e4,&DAT_018a4698);
              }
              goto LAB_010ac7d8;
            }
            bVar29 = false;
            piVar16 = (int *)0x1;
            piVar25 = (int *)0x0;
            local_d4 = (code *)0x0;
          }
        }
        else {
          piVar16 = (int *)0x1;
          bVar29 = false;
          local_d4 = local_c4;
          piVar25 = local_c8;
        }
        if (local_94 != (code *)0x0) {
          (**(code **)((int)local_94 + 0x10))(&local_88,local_90,local_8c);
        }
        if (bVar29) {
          if ((uVar26 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa478("internal error: entered unreachable code: BodyLength::Unknown would set chunked"
                         ,0x9f,&DAT_018846b0);
          }
LAB_010ac44c:
          FUN_010ad080(&local_98,puVar13,uVar27,uVar24);
          goto LAB_010abda4;
        }
        local_68 = local_68 & 0xffffff00;
        local_74 = (int *)&DAT_80000000;
        local_6c = local_d4;
        local_78 = piVar16;
        local_70 = piVar25;
LAB_010ac894:
        local_98 = local_78;
        local_94 = (code *)local_74;
        local_90 = (int **)local_70;
        local_8c = local_6c;
        local_88 = local_68;
        piStack_84 = piStack_64;
      }
      puVar9 = (undefined4 *)((uint)&local_98 | 4);
      uVar12 = puVar9[1];
      uVar17 = puVar9[2];
      uVar18 = puVar9[3];
      uVar22 = puVar9[4];
      puVar10 = (undefined4 *)((uint)&local_b0 | 4);
      *puVar10 = *puVar9;
      puVar10[1] = uVar12;
      puVar10[2] = uVar17;
      puVar10[3] = uVar18;
      puVar10[4] = uVar22;
      local_b0 = (int **)local_98;
      if ((uVar28 == 2) && (local_d0 != 0 || local_cc != 0)) {
        local_2c = (code *)0x0;
        local_30 = (int *)0x0;
        local_34 = (int *)&DAT_00000018;
        local_38 = (int *)0x0;
        FUN_010b21c0(&local_98,puVar13,&local_38);
        if ((char)local_88 != '\x02') {
          (*(code *)local_98[4])(&local_8c,local_94,local_90);
        }
      }
      local_98 = (int *)local_b0;
      local_94 = local_ac;
      local_90 = (int **)local_a8;
      local_8c = local_a4;
      local_88 = local_a0;
      piStack_84 = piStack_9c;
      goto LAB_010abda4;
    }
    local_ac = (code *)&DAT_00000045;
    local_a4 = (code *)0x0;
    local_a8 = (int *)0x0;
    local_b0 = (int **)0x0;
    FUN_010b21c0(&local_98,puVar13,&local_b0);
    if ((char)local_88 != '\x02') {
      (*(code *)local_98[4])(&local_8c,local_94,local_90);
    }
    if ((local_d0 & 1) == 0) {
      if ((uVar26 & 1) == 0) goto LAB_010ac44c;
      local_8c = (code *)0x0;
      local_90 = (int **)0x0;
    }
    else {
      local_90 = (int **)local_c8;
      local_8c = local_c4;
    }
  }
  local_88 = local_88 & 0xffffff00;
  local_98 = (int *)0x1;
LAB_010abda4:
  uVar26 = (puVar13[0xd] + puVar13[10]) * 0x1e + 0x1e;
  if ((uint)(*param_3 - param_3[2]) < uVar26) {
    FUN_010bf6b0(param_3,param_3[2],uVar26,1,1);
  }
  pcVar23 = "OPTIONS";
  uVar26 = 7;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(puVar13 + 0x1b)) {
  case 1:
    uVar26 = 3;
    pcVar23 = "GET";
    break;
  case 2:
    uVar26 = 4;
    pcVar23 = &DAT_005686ac;
    break;
  case 3:
    uVar26 = 3;
    pcVar23 = "PUT";
    break;
  case 4:
    uVar26 = 6;
    pcVar23 = "DELETE";
    break;
  case 5:
    uVar26 = 4;
    pcVar23 = &DAT_00568f00;
    break;
  case 6:
    uVar26 = 5;
    pcVar23 = &DAT_0041545c;
    break;
  case 7:
    pcVar23 = "CONNECT";
    break;
  case 8:
    uVar26 = 5;
    pcVar23 = "PATCH";
    break;
  case 9:
    uVar26 = (uint)*(byte *)(puVar13 + 0x1f);
    if (0xf < uVar26) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar26,0xf,&DAT_0188450c);
    }
    pcVar23 = (char *)((int)puVar13 + 0x6d);
    break;
  case 10:
    pcVar23 = (char *)puVar13[0x1c];
    uVar26 = puVar13[0x1d];
  }
  iVar8 = param_3[2];
  if ((uint)(*param_3 - iVar8) < uVar26) {
    FUN_010bf6b0(param_3,iVar8,uVar26,1,1);
    iVar8 = param_3[2];
  }
  FUN_016dd1aa(param_3[1] + iVar8,pcVar23,uVar26);
  iVar8 = param_3[2] + uVar26;
  param_3[2] = iVar8;
  if (*param_3 == iVar8) {
    FUN_010bf6b0(param_3,iVar8,1,1,1);
    iVar8 = param_3[2];
  }
  *(undefined1 *)(param_3[1] + iVar8) = 0x20;
  param_3[2] = param_3[2] + 1;
  local_ac = FUN_010a3c98;
  local_b0 = (int **)(puVar13 + 0x10);
  local_38 = param_3;
  FUN_00fa948c(&local_38,&DAT_01884700,&DAT_0058d7ec,&local_b0);
  bVar1 = *(byte *)(puVar13 + 0x21);
  if (bVar1 - 2 < 2) {
    if ((uint)(*param_3 - param_3[2]) < 8) {
      FUN_010bf6b0(param_3,param_3[2],8,1,1);
      uVar12 = 0x312e312f;
    }
    else {
      uVar12 = 0x312e312f;
    }
  }
  else {
    if (bVar1 != 1) {
      local_38 = (int *)CONCAT31(local_38._1_3_,bVar1);
      local_ac = (code *)&LAB_010a60dc;
      local_b0 = &local_38;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_0057735a,&local_b0,&DAT_01884758);
    }
    uVar12 = 0x302e312f;
    if ((uint)(*param_3 - param_3[2]) < 8) {
      FUN_010bf6b0(param_3,param_3[2],8,1,1);
    }
  }
  iVar8 = param_3[1];
  iVar21 = param_3[2];
  *(undefined4 *)(iVar8 + iVar21) = 0x50545448;
  ((undefined4 *)(iVar8 + iVar21))[1] = uVar12;
  iVar8 = param_3[2] + 8;
  param_3[2] = iVar8;
  if ((uint)(*param_3 - iVar8) < 2) {
    FUN_010bf6b0(param_3,iVar8,2,1,1);
    iVar8 = param_3[2];
  }
  iVar21 = 0xa0d;
  *(undefined2 *)(param_3[1] + iVar8) = 0xa0d;
  param_3[2] = param_3[2] + 2;
  piVar25 = (int *)puVar13[0x20];
  if (piVar25 != (int *)0x0) {
    iVar21 = piVar25[3];
  }
  if (piVar25 != (int *)0x0 && iVar21 != 0) {
    iVar8 = *piVar25;
    uVar26 = piVar25[1];
    local_e0 = 0;
    uVar27 = uVar26 & 0xb5b9404;
    while( true ) {
      uVar24 = *(uint *)(iVar8 + uVar27);
      uVar28 = (uVar24 & 0x80808080 ^ 0x80808080) & (uVar24 ^ 0x5050505) + 0xfefefeff;
      while (uVar28 != 0) {
        uVar15 = uVar27 + ((uint)LZCOUNT(uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 |
                                         (uVar28 >> 0x10 & 0xff) << 8 | uVar28 >> 0x18) >> 3) &
                 uVar26;
        piVar25 = (int *)(iVar8 + -0x18 + uVar15 * -0x18);
        uVar28 = uVar28 - 1 & uVar28;
        if ((*piVar25 == -0xe82c6b && piVar25[2] == 0xb5b9404) &&
            (piVar25[1] == -0x283c9909 && piVar25[3] == 0x4048f489)) {
          iVar8 = iVar8 + uVar15 * -0x18;
          uVar30 = (**(code **)(*(int *)(iVar8 + -4) + 0x14))(*(undefined4 *)(iVar8 + -8));
          iVar8 = (int)uVar30;
          (**(code **)((int)((ulonglong)uVar30 >> 0x20) + 0xc))(&local_b0,iVar8);
          if ((local_b0 != (int **)0xff17d395 || local_a8 != (int *)0xb5b9404) ||
              (local_ac != (code *)0xd7c366f7 || local_a4 != (code *)0x4048f489)) goto LAB_010ac06c;
          if (iVar8 == 0) {
            if (*(char *)((int)param_2 + 0x19) == '\0') goto LAB_010ac23c;
            goto LAB_010ac07c;
          }
          FUN_010ad674(puVar13,iVar8,param_3);
          goto LAB_010ac248;
        }
      }
      if ((uVar24 & 0x80808080 & uVar24 << 1) != 0) break;
      local_e0 = local_e0 + 4;
      uVar27 = uVar27 + local_e0 & uVar26;
    }
  }
LAB_010ac06c:
  if (*(char *)((int)param_2 + 0x19) == '\0') {
LAB_010ac23c:
    FUN_010a8238(puVar13,param_3);
  }
  else {
LAB_010ac07c:
    FUN_010a85d4(puVar13,param_3);
  }
LAB_010ac248:
  iVar8 = param_3[2];
  if ((uint)(*param_3 - iVar8) < 2) {
    FUN_010bf6b0(param_3,iVar8,2,1,1);
    iVar8 = param_3[2];
  }
  iVar21 = 0;
  *(undefined2 *)(param_3[1] + iVar8) = 0xa0d;
  param_3[2] = param_3[2] + 2;
  iVar19 = puVar13[10];
  puVar13[10] = 0;
  iVar8 = puVar13[9];
  while (iVar19 != iVar21) {
    iVar21 = iVar21 + 1;
    if (*(int *)(iVar8 + 0x20) != 0) {
      (**(code **)(*(int *)(iVar8 + 0x20) + 0x10))
                (iVar8 + 0x2c,*(undefined4 *)(iVar8 + 0x24),*(undefined4 *)(iVar8 + 0x28));
    }
    (**(code **)(*(int *)(iVar8 + 0xc) + 0x10))
              (iVar8 + 0x18,*(undefined4 *)(iVar8 + 0x10),*(undefined4 *)(iVar8 + 0x14));
    iVar8 = iVar8 + 0x34;
  }
  iVar8 = puVar13[0xd] + 1;
  puVar13[0xd] = 0;
  piVar25 = (int *)(puVar13[0xc] + 0x10);
  while (iVar8 = iVar8 + -1, iVar8 != 0) {
    (**(code **)(*piVar25 + 0x10))(piVar25 + 3,piVar25[1],piVar25[2]);
    piVar25 = piVar25 + 9;
  }
  puVar9 = (undefined4 *)puVar13[6];
  iVar8 = puVar13[7];
  *puVar13 = 0;
  puVar13[1] = 0;
  if (iVar8 != 0) {
    puVar13 = puVar9;
    do {
      puVar10 = puVar13 + 1;
      *puVar13 = 0xffff;
      puVar13 = puVar10;
    } while (puVar10 != puVar9 + iVar8);
  }
  *param_1 = local_98;
  param_1[1] = local_94;
  param_1[2] = local_90;
  param_1[3] = local_8c;
  param_1[4] = local_88;
  param_1[5] = piStack_84;
  return;
}

