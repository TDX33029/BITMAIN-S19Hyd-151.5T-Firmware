// FUN_00ad8508 @ 00ad8508 size=4280 calls_out=34 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00ad8508(char *param_1,int *param_2)

{
  undefined3 uVar1;
  undefined4 *****pppppuVar2;
  undefined4 *****pppppuVar3;
  undefined4 *****pppppuVar4;
  undefined4 *****pppppuVar5;
  undefined1 uVar6;
  uint uVar7;
  undefined4 *****pppppuVar8;
  undefined4 uVar9;
  undefined4 *****pppppuVar10;
  undefined4 *****pppppuVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  char cVar14;
  undefined4 ****ppppuVar15;
  undefined4 *****pppppuVar16;
  undefined4 *****pppppuVar17;
  undefined4 *****pppppuVar18;
  undefined4 *****pppppuVar19;
  int iVar20;
  bool bVar21;
  undefined4 *****local_150;
  undefined4 *****local_14c;
  undefined4 *****local_148;
  undefined4 *****local_144;
  undefined4 ****local_140;
  int iStack_13c;
  int local_138;
  int local_134;
  int iStack_130;
  char local_128;
  undefined2 local_127;
  char local_125;
  undefined4 *****local_124;
  undefined4 *****local_120;
  undefined4 *****local_11c;
  undefined4 *****pppppuStack_118;
  undefined4 *****pppppuStack_114;
  undefined2 local_10c;
  char local_10a;
  undefined4 local_108;
  undefined4 *****local_104;
  undefined4 *****local_100;
  undefined4 *****local_fc;
  undefined4 *****local_f8;
  undefined4 *****local_f4;
  undefined4 *****local_f0 [2];
  undefined4 *****local_e8;
  undefined4 *****pppppuStack_e4;
  undefined4 *****pppppuStack_e0;
  undefined4 *****pppppuStack_dc;
  undefined4 local_d8;
  undefined4 *****local_d4;
  undefined4 *****local_d0;
  undefined4 *****local_cc;
  undefined4 *****pppppuStack_c8;
  undefined4 *****pppppuStack_c4;
  undefined4 *****local_c0;
  undefined4 *****local_bc;
  undefined4 *****local_b8;
  undefined4 *****local_b4;
  undefined4 *****local_b0;
  undefined4 *****local_ac;
  undefined4 *****local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 *****local_90;
  undefined4 *****local_8c;
  undefined4 *****local_88;
  undefined4 *****local_84;
  undefined4 *****pppppuStack_80;
  undefined4 *****local_7c;
  undefined4 *****pppppuStack_78;
  undefined4 local_74;
  undefined4 *****local_70;
  undefined4 *****local_6c;
  undefined4 *****local_68;
  undefined4 *****local_64;
  undefined4 *****pppppuStack_60;
  undefined4 *****pppppuStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 *****local_4c;
  undefined4 *****local_48;
  undefined4 *****local_44;
  undefined4 *****local_40;
  undefined4 uStack_3c;
  undefined4 *****local_34;
  undefined4 *****local_30;
  undefined4 *****local_2c;
  
  local_140 = (undefined4 ****)*param_2;
  iStack_13c = param_2[1];
  local_138 = param_2[2];
  local_134 = param_2[3];
  iStack_130 = param_2[4];
  pppppuVar19 = (undefined4 *****)param_2[5];
  pppppuVar17 = (undefined4 *****)param_2[6];
  ppppuVar15 = pppppuVar19[5];
  if (ppppuVar15 < pppppuVar19[4]) {
    do {
      uVar7 = (uint)*(byte *)((int)pppppuVar19[3] + (int)ppppuVar15);
      if ((0x17 < uVar7 - 9) || ((1 << (uVar7 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar7 < 0x66) {
          if (uVar7 == 0x22) {
            pppppuVar19[2] = (undefined4 ****)0x0;
            pppppuVar19[5] = (undefined4 ****)((int)ppppuVar15 + 1);
            FUN_01968828(&local_108,pppppuVar19 + 3,pppppuVar19);
            pppppuVar8 = local_104;
            if (local_108 == (undefined4 *****)0x2) goto LAB_00ad858c;
            FUN_00ad9848(&local_128,local_104,local_100);
            pppppuVar8 = local_124;
            goto LAB_00ad8e9c;
          }
          if (uVar7 != 0x2d) {
            if (uVar7 != 0x5b) goto LAB_00ad88ec;
            cVar14 = *(char *)(pppppuVar19 + 7);
            *(char *)(pppppuVar19 + 7) = cVar14 + -1;
            if ((char)(cVar14 + -1) == '\0') {
              local_108 = (undefined4 *****)0x18;
              pppppuVar8 = (undefined4 *****)FUN_012c6b30(pppppuVar19,&local_108);
              goto LAB_00ad8588;
            }
            pppppuVar19[5] = (undefined4 ****)((int)ppppuVar15 + 1);
            local_40 = (undefined4 *****)CONCAT31(local_40._1_3_,1);
            local_144 = (undefined4 *****)&DAT_00000008;
            iVar20 = 0;
            local_50 = (undefined4 *****)0x0;
            local_2c = (undefined4 *****)0x0;
            local_30 = (undefined4 *****)&DAT_00000008;
            local_34 = (undefined4 *****)0x0;
            pppppuVar8 = (undefined4 *****)&DAT_00000001;
            local_4c = &local_140;
            local_48 = pppppuVar17;
            local_44 = pppppuVar19;
            goto LAB_00ad86dc;
          }
          pppppuVar19[5] = (undefined4 ****)((int)ppppuVar15 + 1);
          FUN_012c751c(&local_108,pppppuVar19,0);
          if (local_108 != (undefined4 *****)&DAT_00000003 || local_104 != (undefined4 *****)0x0) {
            FUN_00abbd08(&local_128,&local_108);
            pppppuVar8 = local_124;
            goto LAB_00ad8e9c;
          }
LAB_00ad89c0:
          pppppuVar8 = local_100;
          goto LAB_00ad858c;
        }
        if (uVar7 < 0x74) {
          if (uVar7 != 0x66) {
            if (uVar7 == 0x6e) {
              pppppuVar19[5] = (undefined4 ****)((int)ppppuVar15 + 1);
              pppppuVar8 = (undefined4 *****)FUN_012c6b8c(pppppuVar19,"ull",3);
              if (pppppuVar8 != (undefined4 *****)0x0) goto LAB_00ad858c;
              cVar14 = '\0';
              pppppuVar8 = (undefined4 *****)0x0;
              goto LAB_00ad8eac;
            }
LAB_00ad88ec:
            if (9 < uVar7 - 0x30) {
              local_108 = (undefined4 *****)&DAT_0000000a;
              pppppuVar8 = (undefined4 *****)FUN_012c6b30(pppppuVar19,&local_108);
              goto LAB_00ad9214;
            }
            FUN_012c751c(&local_108,pppppuVar19,1);
            if (local_108 == (undefined4 *****)&DAT_00000003 && local_104 == (undefined4 *****)0x0)
            goto LAB_00ad89c0;
            FUN_00abbd08(&local_128,&local_108);
            pppppuVar8 = local_124;
            goto LAB_00ad8e9c;
          }
          pppppuVar19[5] = (undefined4 ****)((int)ppppuVar15 + 1);
          pppppuVar8 = (undefined4 *****)FUN_012c6b8c(pppppuVar19,&DAT_0056efac,4);
          if (pppppuVar8 != (undefined4 *****)0x0) goto LAB_00ad858c;
          pppppuVar8 = (undefined4 *****)0x0;
        }
        else {
          if (uVar7 != 0x74) {
            if (uVar7 != 0x7b) goto LAB_00ad88ec;
            cVar14 = *(char *)(pppppuVar19 + 7);
            *(char *)(pppppuVar19 + 7) = cVar14 + -1;
            if ((char)(cVar14 + -1) == '\0') {
              local_108 = (undefined4 *****)0x18;
              pppppuVar8 = (undefined4 *****)FUN_012c6b30(pppppuVar19,&local_108);
              goto LAB_00ad8588;
            }
            pppppuVar19[5] = (undefined4 ****)((int)ppppuVar15 + 1);
            local_b0 = (undefined4 *****)CONCAT31(local_b0._1_3_,1);
            local_c0 = (undefined4 *****)&DAT_80000000;
            local_b4 = pppppuVar19;
            local_ac = &local_140;
            local_a8 = pppppuVar17;
            FUN_01278730(&local_108);
            if ((char)local_108 == '\x01') goto LAB_00ad8878;
            if (local_108._1_1_ != '\x01') {
LAB_00ad8d34:
              local_cc = (undefined4 *****)0x0;
              local_d4 = (undefined4 *****)0x0;
              uVar6 = 5;
              goto LAB_00ad8d44;
            }
            local_b4[2] = (undefined4 ****)0x0;
            local_b4[5] = (undefined4 ****)((int)local_b4[5] + 1);
            FUN_01968828(&local_108,local_b4 + 3);
            pppppuVar2 = local_100;
            pppppuVar8 = local_104;
            if (local_108 == (undefined4 *****)0x2) {
LAB_00ad8878:
              bVar21 = local_c0 == (undefined4 *****)&DAT_80000000;
              pppppuVar11 = local_c0;
              pppppuVar18 = local_104;
              if (local_c0 == (undefined4 *****)&DAT_80000000) {
                local_108 = (undefined4 *****)&DAT_00000008;
              }
              else {
LAB_00ad8c88:
                local_108 = (undefined4 *****)0x2;
                local_100 = pppppuVar11;
                local_fc = local_bc;
                local_f8 = local_b8;
              }
              pppppuVar8 = local_bc;
              local_c0 = (undefined4 *****)&DAT_80000000;
              local_104 = &local_140;
              local_90 = pppppuVar18;
              FUN_0196bf0c(pppppuVar17,&local_108);
              if (!bVar21) {
                FUN_019bb7e0(pppppuVar11,pppppuVar8);
              }
            }
            else {
              pppppuVar11 = pppppuVar2;
              if (((uint)local_108 & 1) == 0) {
                uVar9 = 0;
                if ((int)local_100 < 0) goto LAB_00ad8b7c;
                if (local_100 == (undefined4 *****)0x0) {
                  pppppuVar10 = (undefined4 *****)&DAT_00000001;
                  pppppuVar11 = (undefined4 *****)0x0;
                }
                else {
                  pppppuVar10 = (undefined4 *****)FUN_01298504(local_100,1);
                  uVar9 = 1;
                  if (pppppuVar10 == (undefined4 *****)0x0) goto LAB_00ad8b7c;
                }
                FUN_01bed4e2(pppppuVar10,pppppuVar8,pppppuVar2);
                if (local_c0 != (undefined4 *****)&DAT_80000000) {
                  FUN_019bb7e0(local_c0,local_bc);
                }
                local_b8 = pppppuVar2;
                local_c0 = pppppuVar11;
                local_bc = pppppuVar10;
                FUN_01969b9c(&local_90,pppppuVar8,pppppuVar2);
              }
              else {
                uVar9 = 0;
                if ((int)local_100 < 0) {
LAB_00ad8b7c:
                    /* WARNING: Subroutine does not return */
                  FUN_00664620(uVar9,pppppuVar2);
                }
                if (local_100 == (undefined4 *****)0x0) {
                  pppppuVar10 = (undefined4 *****)&DAT_00000001;
                  pppppuVar11 = (undefined4 *****)0x0;
                }
                else {
                  pppppuVar10 = (undefined4 *****)FUN_01298504(local_100,1);
                  uVar9 = 1;
                  if (pppppuVar10 == (undefined4 *****)0x0) goto LAB_00ad8b7c;
                }
                FUN_01bed4e2(pppppuVar10,pppppuVar8,pppppuVar2);
                if (local_c0 != (undefined4 *****)&DAT_80000000) {
                  FUN_019bb7e0(local_c0,local_bc);
                }
                local_b8 = pppppuVar2;
                local_c0 = pppppuVar11;
                local_bc = pppppuVar10;
                FUN_01969b9c(&local_90,pppppuVar8,pppppuVar2);
              }
              pppppuVar18 = local_8c;
              pppppuVar5 = local_90;
              pppppuVar4 = local_a8;
              pppppuVar16 = local_ac;
              pppppuVar3 = local_b4;
              pppppuVar10 = local_b8;
              pppppuVar2 = local_bc;
              pppppuVar8 = local_c0;
              if (local_90 == (undefined4 *****)&DAT_80000001) {
                local_104 = local_8c;
                goto LAB_00ad8878;
              }
              if (local_90 == (undefined4 *****)0x80000002) {
                bVar21 = pppppuVar11 == (undefined4 *****)&DAT_80000000;
                goto LAB_00ad8c88;
              }
              if (local_90 == (undefined4 *****)&DAT_80000000) {
                bVar21 = local_c0 == (undefined4 *****)&DAT_80000000;
                local_c0 = (undefined4 *****)&DAT_80000000;
                local_108 = (undefined4 *****)0x2;
                if (bVar21) {
                  local_108 = (undefined4 *****)&DAT_00000008;
                }
                local_f8 = local_b8;
                local_fc = local_bc;
                local_f4 = local_a8;
                local_100 = pppppuVar8;
                local_104 = local_ac;
                pppppuVar11 = (undefined4 *****)FUN_0167459c(local_b4);
                if (pppppuVar11 != (undefined4 *****)0x0) {
                  if (pppppuVar8 == (undefined4 *****)&DAT_80000000) goto LAB_00ad9358;
                  pppppuVar10 = (undefined4 *****)0x0;
                  goto LAB_00ad930c;
                }
                if (pppppuVar8 == (undefined4 *****)&DAT_80000000) {
                  local_50 = local_108;
                  local_4c = local_104;
                  local_48 = local_100;
                  local_44 = local_fc;
                  local_40 = local_f8;
                }
                else {
                  FUN_006666fc(&local_48,pppppuVar2,pppppuVar10);
                  local_50 = (undefined4 *****)0x2;
                  local_4c = pppppuVar16;
                }
                local_34 = &local_90;
                local_90 = local_50;
                local_8c = local_4c;
                local_88 = local_48;
                local_84 = local_44;
                pppppuStack_80 = local_40;
                ppppuVar15 = pppppuVar3[5];
                local_30 = pppppuVar4;
                if (pppppuVar3[4] <= ppppuVar15) goto LAB_00ad92a0;
                goto LAB_00ad9278;
              }
              if (local_90 == (undefined4 *****)&DAT_80000001) goto LAB_00ad8d34;
              if (local_90 != (undefined4 *****)0x80000002) {
                local_98 = 0;
                local_a0 = 0;
                FUN_00aeeba0(&local_d8,&local_c0);
                if ((char)local_d8 == '\x06') {
                  FUN_019bb7e0(pppppuVar5,pppppuVar18);
                  FUN_0196afa8(&local_a0);
                  goto LAB_00ad8d48;
                }
                FUN_0196b484(&local_108,&local_a0,&local_90,&local_d8);
                if ((char)local_108 != '\x06') {
                  FUN_00e0febc(&local_108);
                }
                puVar12 = (undefined4 *)((uint)&local_90 | 4);
                puVar13 = (undefined4 *)((uint)&local_108 | 4);
                pppppuVar8 = &local_140;
                goto LAB_00ad8fa4;
              }
            }
            uVar6 = 6;
            local_d4 = pppppuVar18;
            goto LAB_00ad8d44;
          }
          pppppuVar19[5] = (undefined4 ****)((int)ppppuVar15 + 1);
          pppppuVar8 = (undefined4 *****)FUN_012c6b8c(pppppuVar19,"rue",3);
          if (pppppuVar8 != (undefined4 *****)0x0) goto LAB_00ad858c;
          pppppuVar8 = (undefined4 *****)&DAT_00000001;
        }
        cVar14 = '\x01';
        local_127 = CONCAT11(local_127._1_1_,(char)pppppuVar8);
        goto LAB_00ad8eac;
      }
      ppppuVar15 = (undefined4 ****)((int)ppppuVar15 + 1);
      pppppuVar19[5] = ppppuVar15;
    } while (pppppuVar19[4] != ppppuVar15);
  }
  local_108 = (undefined4 *****)0x5;
  pppppuVar8 = (undefined4 *****)FUN_012c6b30(pppppuVar19,&local_108);
  goto LAB_00ad8588;
LAB_00ad86dc:
  pppppuVar10 = local_2c;
  pppppuVar11 = local_48;
  pppppuVar2 = local_4c;
  local_90 = (undefined4 *****)0x1;
  local_8c = local_50;
  local_88 = local_4c;
  local_7c = local_48;
  local_50 = (undefined4 *****)((int)local_50 + 1);
  FUN_014db6fc(&local_108,&local_44);
  if ((char)local_108 == '\x01') goto LAB_00ad89c8;
  if (local_108._1_1_ == '\0') {
    local_128 = '\x04';
    bVar21 = false;
    local_a0 = CONCAT22(CONCAT11(local_a0._3_1_,local_74._2_1_),(undefined2)local_74);
    local_e8 = local_68;
    pppppuStack_e4 = local_64;
    pppppuStack_e0 = pppppuStack_60;
    pppppuStack_dc = pppppuStack_5c;
    local_104 = local_34;
    local_100 = local_30;
    local_fc = local_2c;
    goto LAB_00ad8ad4;
  }
  FUN_00ad98e0(&local_108,&local_90,local_44);
  if ((char)local_108 == '\x06') goto LAB_00ad89c8;
  uVar1 = *(undefined3 *)((uint)&local_108 | 1);
  local_74 = (undefined4 *****)CONCAT13(local_74._3_1_,uVar1);
  pppppuVar8 = local_74;
  local_e8 = local_100;
  pppppuStack_e4 = local_fc;
  pppppuStack_e0 = local_f8;
  pppppuStack_dc = local_f4;
  local_74._0_2_ = (undefined2)uVar1;
  local_74._2_1_ = (undefined1)((uint3)uVar1 >> 0x10);
  local_a0 = CONCAT13(local_a0._3_1_,uVar1);
  local_c0 = (undefined4 *****)CONCAT31(local_c0._1_3_,(char)local_108);
  *(undefined1 *)((undefined2 *)((uint)&local_c0 | 1) + 1) = local_74._2_1_;
  *(undefined2 *)((uint)&local_c0 | 1) = (undefined2)local_74;
  local_bc = local_104;
  local_b8 = local_100;
  local_b4 = local_fc;
  local_b0 = local_f8;
  local_ac = local_f4;
  local_74 = pppppuVar8;
  local_68 = local_e8;
  local_64 = pppppuStack_e4;
  pppppuStack_60 = pppppuStack_e0;
  pppppuStack_5c = pppppuStack_dc;
  if (pppppuVar10 == local_34) {
    FUN_01969b6c(&local_34);
    local_144 = local_30;
  }
  local_2c = (undefined4 *****)((int)pppppuVar10 + 1);
  puVar12 = (undefined4 *)((int)local_144 + iVar20);
  iVar20 = iVar20 + 0x18;
  *puVar12 = local_c0;
  puVar12[1] = local_bc;
  puVar12[2] = local_b8;
  puVar12[3] = local_b4;
  puVar12[4] = local_b0;
  puVar12[5] = local_ac;
  pppppuVar8 = local_b0;
  goto LAB_00ad86dc;
LAB_00ad89c8:
  local_108 = local_104;
  FUN_0196bf0c(pppppuVar11,pppppuVar2);
  FUN_00949b70(&local_34);
  local_108 = local_104;
  FUN_0196bf0c(pppppuVar17,&local_140);
  local_128 = '\x06';
  bVar21 = true;
  local_100 = pppppuVar8;
  local_fc = pppppuVar2;
LAB_00ad8ad4:
  local_90 = (undefined4 *****)CONCAT31(local_90._1_3_,local_128);
  *(char *)(pppppuVar19 + 7) = *(char *)(pppppuVar19 + 7) + '\x01';
  local_8c = local_104;
  local_88 = local_100;
  local_84 = local_fc;
  local_124 = (undefined4 *****)FUN_014d9568(pppppuVar19);
  local_108 = (undefined4 *****)CONCAT31(local_108._1_3_,local_128);
  local_f0[0] = local_124;
  pppppuVar8 = local_104;
  if (bVar21) {
    local_128 = '\x06';
    if (local_124 != (undefined4 *****)0x0) {
      local_124 = local_104;
      FUN_00abbbdc(local_f0);
      pppppuVar8 = local_124;
    }
  }
  else if (local_124 == (undefined4 *****)0x0) {
    local_120 = local_100;
    local_11c = local_fc;
  }
  else {
    local_128 = '\x06';
    FUN_00db4764(&local_108);
    pppppuVar8 = local_124;
  }
  goto LAB_00ad8e9c;
  while( true ) {
    ppppuVar15 = (undefined4 ****)((int)ppppuVar15 + 1);
    pppppuVar3[5] = ppppuVar15;
    if (pppppuVar3[4] == ppppuVar15) break;
LAB_00ad9278:
    uVar7 = *(byte *)((int)pppppuVar3[3] + (int)ppppuVar15) - 9;
    if ((0x17 < uVar7) || ((1 << (uVar7 & 0xff) & 0x800013U) == 0)) {
      if (*(byte *)((int)pppppuVar3[3] + (int)ppppuVar15) == 0x22) {
        pppppuVar3[2] = (undefined4 ****)0x0;
        pppppuVar3[5] = (undefined4 ****)((int)ppppuVar15 + 1);
        FUN_01968828(&local_50,pppppuVar3 + 3,pppppuVar3);
        pppppuVar11 = local_4c;
        if (local_50 == (undefined4 *****)0x2) goto LAB_00ad92b8;
        if (((uint)local_50 & 1) == 0) {
          FUN_0196ad08(&local_68,local_4c,local_48);
          pppppuVar11 = local_64;
          if (local_68 == (undefined4 *****)0x0) {
            local_74 = local_64;
            FUN_0196bf0c(pppppuVar4,&local_90);
            goto LAB_00ad9580;
          }
LAB_00ad9490:
          pppppuVar11 = local_64;
          pppppuVar10 = local_68;
        }
        else {
          FUN_0196ad08(&local_68,local_4c,local_48);
          pppppuVar11 = local_64;
          if (local_68 != (undefined4 *****)0x0) goto LAB_00ad9490;
          local_74 = local_64;
          FUN_0196bf0c(pppppuVar4,&local_90);
LAB_00ad9580:
          pppppuVar10 = (undefined4 *****)0x0;
        }
        if (pppppuVar10 != (undefined4 *****)0x0) goto LAB_00ad92cc;
      }
      else {
        pppppuVar11 = (undefined4 *****)FUN_012c7788(pppppuVar3,&local_34,&DAT_01c10688);
      }
      pppppuVar11 = (undefined4 *****)FUN_0127dee8(pppppuVar11,pppppuVar3);
      goto LAB_00ad92b4;
    }
  }
LAB_00ad92a0:
  local_50 = (undefined4 *****)0x5;
  pppppuVar11 = (undefined4 *****)FUN_012c6b30(pppppuVar3,&local_50);
LAB_00ad92b4:
LAB_00ad92b8:
  local_50 = pppppuVar11;
  FUN_0196bf0c(pppppuVar4,&local_90);
  pppppuVar10 = (undefined4 *****)0x0;
LAB_00ad92cc:
  if (local_90 == (undefined4 *****)&SUB_00000004 || local_90 == (undefined4 *****)0x2) {
    FUN_019bb7e0(local_88,local_84);
  }
  if (pppppuVar10 == (undefined4 *****)0x0) {
    local_90 = pppppuVar11;
    FUN_0196bf0c(pppppuVar4,&local_108);
    pppppuVar10 = (undefined4 *****)0x0;
  }
  if (pppppuVar8 != (undefined4 *****)&DAT_80000000) {
LAB_00ad930c:
    FUN_019bb7e0(pppppuVar8,pppppuVar2);
  }
  if (pppppuVar10 == (undefined4 *****)0x0) {
LAB_00ad9358:
    local_108 = pppppuVar11;
    FUN_0196bf0c(pppppuVar4,pppppuVar16);
    uVar6 = 6;
    local_d4 = pppppuVar11;
LAB_00ad8d44:
    local_d8 = (undefined4 *****)CONCAT31(local_d8._1_3_,uVar6);
  }
  else {
    FUN_019664a4(&local_108,pppppuVar10,pppppuVar11);
    if ((char)local_108 == '\x06') {
      local_d4 = (undefined4 *****)FUN_019677a8(local_104);
      local_d8 = (undefined4 *****)CONCAT31(local_d8._1_3_,6);
    }
    else {
      local_d8 = local_108;
      local_d4 = local_104;
      local_d0 = local_100;
      local_cc = local_fc;
      pppppuStack_c8 = local_f8;
      pppppuStack_c4 = local_f4;
    }
    if (pppppuVar11 != (undefined4 *****)0x0) {
      thunk_FUN_01be4678(pppppuVar10);
    }
  }
  goto LAB_00ad8d48;
LAB_00ad8fa4:
  pppppuVar11 = local_a8;
  pppppuVar2 = local_ac;
  FUN_01278730(&local_50,&local_b4);
  if ((char)local_50 != '\x01') {
    if (local_50._1_1_ != '\x01') goto LAB_00ad943c;
    local_b4[2] = (undefined4 ****)0x0;
    local_b4[5] = (undefined4 ****)((int)local_b4[5] + 1);
    FUN_01968828(&local_50,local_b4 + 3);
    pppppuVar3 = local_48;
    pppppuVar10 = local_4c;
    local_148 = local_4c;
    if (local_50 == (undefined4 *****)0x2) goto LAB_00ad94a0;
    uVar9 = 0;
    pppppuVar16 = pppppuVar3;
    if (((uint)local_50 & 1) == 0) {
      pppppuVar8 = local_150;
      if ((int)local_48 < 0) goto LAB_00ad95bc;
      if (local_48 == (undefined4 *****)0x0) {
        pppppuVar16 = (undefined4 *****)0x0;
        local_150 = (undefined4 *****)&DAT_00000001;
      }
      else {
        local_150 = (undefined4 *****)FUN_01298504(local_48,1);
        if (local_150 == (undefined4 *****)0x0) goto LAB_00ad95b8;
      }
      FUN_01bed4e2(local_150,pppppuVar10,pppppuVar3);
      if (local_c0 != (undefined4 *****)&DAT_80000000) {
        FUN_019bb7e0(local_c0,local_bc);
      }
      local_b8 = pppppuVar3;
      local_bc = local_150;
      local_c0 = pppppuVar16;
      FUN_012c1060(&local_34,pppppuVar10,pppppuVar3);
    }
    else {
      pppppuVar8 = local_14c;
      if ((int)local_48 < 0) goto LAB_00ad95bc;
      if (local_48 == (undefined4 *****)0x0) {
        pppppuVar16 = (undefined4 *****)0x0;
        local_14c = (undefined4 *****)&DAT_00000001;
      }
      else {
        local_14c = (undefined4 *****)FUN_01298504(local_48,1);
        if (local_14c == (undefined4 *****)0x0) {
LAB_00ad95b8:
          uVar9 = 1;
          pppppuVar8 = pppppuVar3;
LAB_00ad95bc:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar9,pppppuVar8);
        }
      }
      FUN_01bed4e2(local_14c,pppppuVar10,pppppuVar3);
      if (local_c0 != (undefined4 *****)&DAT_80000000) {
        FUN_019bb7e0(local_c0,local_bc);
      }
      local_b8 = pppppuVar3;
      local_bc = local_14c;
      local_c0 = pppppuVar16;
      FUN_012c1060(&local_34,pppppuVar10,pppppuVar3);
    }
    pppppuVar5 = local_2c;
    pppppuVar4 = local_30;
    pppppuVar10 = local_34;
    pppppuVar8 = pppppuVar3;
    if (local_34 == (undefined4 *****)&DAT_80000000) {
      local_148 = local_30;
      goto LAB_00ad94a0;
    }
    local_148 = local_30;
    if (local_34 == (undefined4 *****)&DAT_80000001) {
      bVar21 = pppppuVar16 == (undefined4 *****)&DAT_80000000;
      local_c0 = pppppuVar16;
      goto LAB_00ad94f8;
    }
    if (local_34 == (undefined4 *****)&DAT_80000000) {
LAB_00ad943c:
      FUN_01bed4e2((uint)&local_108 | 3,&local_a0,0xc);
      local_d8 = (undefined4 *****)CONCAT31(local_d8._1_3_,5);
      FUN_01bed4e2((uint)&local_d8 | 1,&local_108,0xf);
      goto LAB_00ad8d48;
    }
    FUN_00aeeba0(&local_50,&local_c0);
    pppppuVar2 = local_4c;
    if ((char)local_50 == '\x06') {
      FUN_019bb7e0(pppppuVar10,pppppuVar4);
      local_148 = pppppuVar2;
      goto LAB_00ad9550;
    }
    *puVar13 = local_50;
    puVar13[1] = local_4c;
    puVar13[2] = local_48;
    puVar13[3] = local_44;
    puVar13[4] = local_40;
    puVar13[5] = uStack_3c;
    local_90 = local_108;
    local_8c = local_104;
    local_88 = local_100;
    local_84 = local_fc;
    pppppuStack_80 = local_f8;
    local_7c = local_f4;
    pppppuStack_78 = local_f0[0];
    if (pppppuVar10 == (undefined4 *****)&DAT_80000000) goto LAB_00ad943c;
    if (pppppuVar10 == (undefined4 *****)&DAT_80000001) goto LAB_00ad9550;
    local_6c = pppppuVar5;
    local_70 = pppppuVar4;
    local_74 = pppppuVar10;
    local_68 = (undefined4 *****)*puVar12;
    local_64 = (undefined4 *****)puVar12[1];
    pppppuStack_60 = (undefined4 *****)puVar12[2];
    pppppuStack_5c = (undefined4 *****)puVar12[3];
    uStack_58 = puVar12[4];
    uStack_54 = puVar12[5];
    FUN_0196b484(&local_108,&local_a0,&local_74);
    if ((char)local_108 != '\x06') {
      FUN_00e0febc(&local_108);
    }
    goto LAB_00ad8fa4;
  }
  local_148 = local_4c;
LAB_00ad94a0:
  bVar21 = local_c0 == (undefined4 *****)&DAT_80000000;
  if (local_c0 == (undefined4 *****)&DAT_80000000) {
    local_50 = (undefined4 *****)&DAT_00000008;
    pppppuVar10 = local_c0;
  }
  else {
LAB_00ad94f8:
    local_50 = (undefined4 *****)0x2;
    pppppuVar10 = local_c0;
    pppppuVar8 = local_bc;
    local_48 = local_c0;
    local_44 = local_bc;
    local_40 = local_b8;
  }
  local_c0 = (undefined4 *****)&DAT_80000000;
  local_4c = pppppuVar2;
  local_34 = local_148;
  FUN_0196bf0c(pppppuVar11,&local_50);
  if (!bVar21) {
    FUN_019bb7e0(pppppuVar10,pppppuVar8);
  }
LAB_00ad9550:
  local_d8 = (undefined4 *****)CONCAT31(local_d8._1_3_,6);
  local_d4 = local_148;
  FUN_0196afa8(&local_a0);
LAB_00ad8d48:
  if (local_c0 != (undefined4 *****)&DAT_80000000) {
    FUN_019bb7e0(local_c0,local_bc);
  }
  pppppuVar8 = local_d4;
  uVar7 = (uint)local_d8 & 0xff;
  if (uVar7 == 6) {
    local_108 = local_d4;
    FUN_0196bf0c(pppppuVar17,&local_140);
    uVar7 = 6;
  }
  else {
    local_10a = local_d8._3_1_;
    local_10c = local_d8._1_2_;
    local_e8 = local_d0;
    pppppuStack_e4 = local_cc;
    pppppuStack_e0 = pppppuStack_c8;
    pppppuStack_dc = pppppuStack_c4;
  }
  *(char *)(pppppuVar19 + 7) = *(char *)(pppppuVar19 + 7) + '\x01';
  cVar14 = (char)uVar7;
  local_90 = (undefined4 *****)CONCAT31(CONCAT12(local_10a,local_10c),cVar14);
  local_8c = pppppuVar8;
  local_88 = local_e8;
  local_84 = pppppuStack_e4;
  pppppuStack_80 = pppppuStack_e0;
  local_7c = pppppuStack_dc;
  local_f0[0] = (undefined4 *****)FUN_012c7b64(pppppuVar19);
  local_108 = (undefined4 *****)CONCAT31(CONCAT12(local_10a,local_10c),cVar14);
  local_104 = pppppuVar8;
  local_100 = local_e8;
  local_fc = pppppuStack_e4;
  local_f8 = pppppuStack_e0;
  local_f4 = pppppuStack_dc;
  if (uVar7 == 6) {
    local_128 = '\x06';
    local_124 = pppppuVar8;
    pppppuVar8 = local_124;
    if (local_f0[0] != (undefined4 *****)0x0) {
      FUN_00abbbdc(local_f0);
      pppppuVar8 = local_124;
    }
  }
  else if (local_f0[0] == (undefined4 *****)0x0) {
    local_125 = local_10a;
    local_127 = local_10c;
    local_124 = pppppuVar8;
    local_120 = local_e8;
    local_11c = pppppuStack_e4;
    pppppuStack_118 = pppppuStack_e0;
    pppppuStack_114 = pppppuStack_dc;
    local_128 = cVar14;
    pppppuVar8 = local_124;
  }
  else {
    local_128 = '\x06';
    local_124 = local_f0[0];
    FUN_00db4764(&local_108);
    pppppuVar8 = local_124;
  }
LAB_00ad8e9c:
  local_124 = pppppuVar8;
  pppppuVar8 = local_124;
  cVar14 = local_128;
  if (local_128 == '\x06') {
LAB_00ad9214:
    pppppuVar8 = (undefined4 *****)FUN_0127dee8(pppppuVar8,pppppuVar19);
LAB_00ad8588:
LAB_00ad858c:
    local_108 = pppppuVar8;
    FUN_0196bf0c(pppppuVar17,&local_140);
    *(undefined4 ******)(param_1 + 4) = pppppuVar8;
    *param_1 = '\x06';
  }
  else {
LAB_00ad8eac:
    *(undefined2 *)(param_1 + 1) = local_127;
    param_1[3] = local_125;
    *(undefined4 ******)(param_1 + 8) = local_120;
    *(undefined4 ******)(param_1 + 0xc) = local_11c;
    *(undefined4 ******)(param_1 + 0x10) = pppppuStack_118;
    *(undefined4 ******)(param_1 + 0x14) = pppppuStack_114;
    *(undefined4 ******)(param_1 + 4) = pppppuVar8;
    *param_1 = cVar14;
  }
  if (local_140 == (undefined4 ****)0x4 || local_140 == (undefined4 ****)0x2) {
    FUN_019bb7e0(local_138,local_134);
  }
  return;
}

