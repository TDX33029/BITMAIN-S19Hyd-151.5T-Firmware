// FUN_01274e84 @ 01274e84 size=6476 calls_out=32 calls_in=2
// strings: carry overflow during multiplication! | Tried to shrink to a larger capacitymax line length exceeded | Tried to shrink to a larger capacitymax line length exceeded | Tried to shrink to a larger capacitymax line length exceeded

void FUN_01274e84(uint *param_1,uint param_2,uint *param_3,uint param_4,uint *param_5,uint param_6)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint *puVar7;
  char cVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined *puVar18;
  uint uVar19;
  undefined1 uVar20;
  uint *puVar21;
  undefined4 uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint *puVar26;
  uint *puVar27;
  uint *puVar28;
  uint uVar29;
  uint *puVar30;
  bool bVar31;
  bool bVar32;
  int local_1c4;
  undefined4 local_1c0;
  char *local_1bc;
  undefined *local_1b8;
  uint local_188;
  undefined1 auStack_180 [12];
  char local_174;
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [12];
  char local_154;
  undefined1 auStack_150 [12];
  char local_144;
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [12];
  char local_124;
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [12];
  char local_f4;
  undefined1 auStack_f0 [12];
  char local_e4;
  int local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  char local_d4;
  int local_d0;
  undefined4 local_cc;
  int local_c8;
  char local_c4;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  uint local_90;
  int *local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  int local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  int local_6c;
  uint local_68;
  undefined4 local_64;
  uint local_60;
  int iStack_5c;
  uint uStack_58;
  uint local_54;
  undefined2 local_4c;
  undefined1 local_4a;
  uint local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  int *local_34;
  uint local_30;
  uint local_2c;
  
  if (param_4 == 0) goto LAB_01274fb8;
LAB_01274eb0:
  if (*param_3 == 0) {
    iVar6 = param_4 * 4;
    uVar15 = 0;
    do {
      iVar6 = iVar6 + -4;
      if (iVar6 == 0) {
        return;
      }
      iVar9 = uVar15 + 1;
      uVar15 = uVar15 + 1;
    } while (param_3[iVar9] == 0);
    if (param_2 < uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar15,param_2,param_2,&DAT_0188b614);
    }
    param_1 = param_1 + uVar15;
    param_2 = param_2 - uVar15;
    param_4 = param_4 - uVar15;
    param_3 = param_3 + uVar15;
  }
  if (param_6 == 0) goto LAB_01274fc8;
  do {
    if (*param_5 == 0) {
      iVar6 = param_6 * 4;
      uVar15 = 0;
      do {
        iVar6 = iVar6 + -4;
        if (iVar6 == 0) {
          return;
        }
        iVar9 = uVar15 + 1;
        uVar15 = uVar15 + 1;
      } while (param_5[iVar9] == 0);
      if (param_2 < uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar15,param_2,param_2,&DAT_0188b624);
      }
      param_1 = param_1 + uVar15;
      param_2 = param_2 - uVar15;
      param_6 = param_6 - uVar15;
      param_5 = param_5 + uVar15;
    }
    uVar2 = param_6;
    puVar28 = param_3;
    uVar15 = param_4;
    puVar27 = param_5;
    if (param_4 < param_6) {
      uVar2 = param_4;
      puVar28 = param_5;
      uVar15 = param_6;
      puVar27 = param_3;
    }
    while( true ) {
      param_3 = puVar27;
      param_4 = uVar2;
      if (param_4 < 0x21) {
        if (param_4 == 0) {
          return;
        }
        puVar30 = param_3 + param_4;
        iVar6 = param_2 << 2;
        uVar2 = 0;
        puVar27 = param_3;
        puVar7 = param_1;
        goto LAB_01275094;
      }
      if (uVar15 < param_4 << 1) goto LAB_01275188;
      uVar2 = uVar15 >> 1;
      FUN_01274e84(param_1,param_2,param_3,param_4,puVar28,uVar2);
      if (param_2 < uVar15 >> 1) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar2,param_2,param_2,&DAT_0188b6b4);
      }
      param_1 = param_1 + uVar2;
      param_2 = param_2 - uVar2;
      param_6 = uVar15 - uVar2;
      param_5 = puVar28 + uVar2;
      if (param_4 != 0) goto LAB_01274eb0;
LAB_01274fb8:
      param_4 = 0;
      if (param_6 != 0) break;
LAB_01274fc8:
      uVar2 = 0;
      puVar28 = param_3;
      uVar15 = param_4;
      puVar27 = param_5;
    }
  } while( true );
LAB_01275094:
  if (param_2 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar2,param_2,param_2,&DAT_0188b6c4);
  }
  param_3 = (uint *)*puVar27;
  if (param_3 != (uint *)0x0) {
    uVar23 = param_2 - uVar2;
    if (uVar23 < uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00418e0f,0x13,&DAT_0188b6f4);
    }
    if (uVar15 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      puVar21 = puVar7;
      puVar26 = puVar28;
      uVar29 = uVar15;
      do {
        uVar29 = uVar29 - 1;
        lVar1 = ZEXT48(param_3) * (ulonglong)*puVar26 +
                (ulonglong)CONCAT14(CARRY4(uVar12,*puVar21),uVar12 + *puVar21);
        uVar12 = (uint)((ulonglong)lVar1 >> 0x20);
        *puVar21 = (uint)lVar1;
        puVar21 = puVar21 + 1;
        puVar26 = puVar26 + 1;
      } while (uVar29 != 0);
      uVar23 = uVar23 - uVar15;
    }
    if (uVar23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00418e0f,0x13,&DAT_0188b834);
    }
    param_4 = param_1[uVar2 + uVar15];
    param_1[uVar2 + uVar15] = uVar12 + param_4;
    if (CARRY4(uVar12,param_4)) {
      iVar9 = uVar15 * 4 + 4;
      if (uVar23 == 1) {
LAB_01275154:
        local_38 = 1;
        FUN_015fef84(0,&local_38,&DAT_00568f30,"carry overflow during multiplication!",0x4b,
                     &DAT_0188b704);
        puVar28 = puVar27;
        param_1 = puVar7;
LAB_01275188:
        if (0x100 < param_4) {
          uVar23 = uVar15 / 3 + 1;
          uVar2 = param_4;
          if (uVar23 < param_4) {
            uVar2 = uVar23;
          }
          FUN_01276dd4(auStack_180,param_3,uVar2);
          uVar12 = param_4 - uVar2;
          if (uVar23 < param_4 - uVar2) {
            uVar12 = uVar23;
          }
          uVar12 = uVar12 + uVar2;
          uVar29 = uVar15 - uVar23;
          if (uVar23 < uVar15 - uVar23) {
            uVar29 = uVar23;
          }
          if (param_4 < uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(uVar2,uVar12,param_4,&DAT_0188b674);
          }
          FUN_01276dd4(auStack_170,param_3 + uVar2);
          FUN_01276dd4(auStack_160,param_3 + uVar12,param_4 - uVar12);
          if (uVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,1,0,&DAT_0188b664);
          }
          FUN_01276dd4(auStack_150,puVar28,uVar23);
          uVar2 = uVar29 + uVar23;
          if (uVar15 < uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(uVar23,uVar2,uVar15,&DAT_0188b654);
          }
          FUN_01276dd4(auStack_140,puVar28 + uVar23,uVar29);
          FUN_01276dd4(auStack_130,puVar28 + uVar2,uVar15 - uVar2);
          FUN_01276f68(auStack_120,auStack_180,auStack_160);
          FUN_01276f68(auStack_110,auStack_150,auStack_130);
          FUN_0127735c(auStack_100,auStack_120,auStack_170);
          FUN_0127735c(auStack_f0,auStack_110,auStack_140);
          uVar20 = 1;
          if (local_174 != '\x01') {
            if (local_144 == '\0') {
              if (local_174 == '\0') {
                uVar20 = 2;
              }
              else {
                uVar20 = 0;
              }
            }
            else {
              uVar20 = 1;
              if ((local_144 != '\x01') && (uVar20 = 2, local_174 == '\0')) {
                uVar20 = 0;
              }
            }
          }
          FUN_0127775c(&local_38,auStack_180,auStack_150);
          FUN_01277908(&local_e0,uVar20,&local_38);
          uVar20 = 1;
          if (local_154 != '\x01') {
            if (local_124 == '\x02') {
              uVar20 = 2;
              if (local_154 == '\0') {
                uVar20 = 0;
              }
            }
            else {
              uVar20 = 1;
              if (local_124 != '\x01') {
                if (local_154 == '\0') {
                  uVar20 = 2;
                }
                else {
                  uVar20 = 0;
                }
              }
            }
          }
          FUN_0127775c(&local_38,auStack_160,auStack_130);
          FUN_01277908(&local_d0,uVar20,&local_38);
          FUN_01277980(&local_48,auStack_120,auStack_170);
          FUN_01277980(&local_38,auStack_110,auStack_140);
          uVar2 = local_3c & 0xff;
          uVar22 = 1;
          if (uVar2 != 1) {
            if ((local_2c & 0xff) == 2) {
              uVar22 = 2;
              if (uVar2 == 0) {
                uVar22 = 0;
              }
            }
            else {
              uVar22 = 1;
              if ((local_2c & 0xff) != 1) {
                if (uVar2 == 0) {
                  uVar22 = 2;
                }
                else {
                  uVar22 = 0;
                }
              }
            }
          }
          FUN_012408ac(&local_60,&local_48,&local_38);
          FUN_01277908(auStack_c0,uVar22,&local_60);
          uVar20 = 1;
          if (local_f4 != '\x01') {
            if (local_e4 == '\x02') {
              uVar20 = 2;
              if (local_f4 == '\0') {
                uVar20 = 0;
              }
            }
            else {
              uVar20 = 1;
              if (local_e4 != '\x01') {
                if (local_f4 == '\0') {
                  uVar20 = 2;
                }
                else {
                  uVar20 = 0;
                }
              }
            }
          }
          FUN_0127775c(&local_38,auStack_100,auStack_f0);
          FUN_01277908(auStack_b0,uVar20,&local_38);
          FUN_01277980(&local_38,auStack_100,auStack_160);
          uVar2 = local_2c & 0xff;
          local_60 = local_38;
          iStack_5c = (int)local_34;
          uStack_58 = local_30;
          FUN_01274bd8(&local_60,2);
          local_70 = local_60;
          local_6c = iStack_5c;
          local_68 = uStack_58;
          FUN_01277908(&local_48,uVar2,&local_70);
          FUN_01277ca4(&local_60,&local_48,auStack_180);
          FUN_01277980(&local_38,auStack_f0,auStack_130);
          uVar2 = local_2c & 0xff;
          local_70 = local_38;
          local_6c = (int)local_34;
          local_68 = local_30;
          FUN_01274bd8(&local_70,2);
          local_80 = local_70;
          local_7c = local_6c;
          local_78 = local_68;
          FUN_01277908(&local_48,uVar2,&local_80);
          FUN_01277ca4(&local_38,&local_48,auStack_150);
          uVar2 = local_54 & 0xff;
          uVar22 = 1;
          if (uVar2 != 1) {
            if ((local_2c & 0xff) == 2) {
              uVar22 = 2;
              if (uVar2 == 0) {
                uVar22 = 0;
              }
            }
            else {
              uVar22 = 1;
              if ((local_2c & 0xff) != 1) {
                if (uVar2 == 0) {
                  uVar22 = 2;
                }
                else {
                  uVar22 = 0;
                }
              }
            }
          }
          FUN_012408ac(&local_48,&local_60,&local_38);
          FUN_01277908(auStack_a0,uVar22,&local_48);
          FUN_01277fd0(&local_38,auStack_a0,auStack_c0);
          uVar2 = local_2c & 0xff;
          if (local_30 == 0) {
LAB_01275a38:
            uVar12 = 0;
          }
          else {
            iVar16 = 0;
            iVar9 = local_30 * -4;
            iVar13 = (int)local_34 + -4;
            iVar6 = local_30 << 2;
            do {
              uVar29 = *(uint *)(iVar13 - iVar9);
              uVar12 = (iVar16 << 0x10 | uVar29 >> 0x10) / 3;
              uVar29 = (uVar29 & 0xffff) + ((uVar29 >> 0x10) + uVar12 * -3) * 0x10000;
              uVar17 = (uint)((ulonglong)uVar29 * 0x55555556 >> 0x20);
              *(uint *)(iVar13 - iVar9) = uVar17 | uVar12 << 0x10;
              iVar16 = uVar29 + uVar17 * -3;
              iVar9 = iVar9 + 4;
            } while (iVar9 != 0);
            uVar12 = local_30;
            if (*(int *)((int)local_34 + local_30 * 4 + -4) == 0) {
              uVar29 = local_30 & 0x3fffffff;
              do {
                uVar17 = uVar29;
                if (iVar6 == 0) goto LAB_01275a38;
                piVar5 = (int *)(iVar13 + iVar6);
                iVar6 = iVar6 + -4;
                uVar29 = uVar17 - 1;
              } while (*piVar5 == 0);
              if (uVar17 < local_30) {
                uVar12 = uVar17;
              }
            }
          }
          if (uVar12 < local_38 >> 2) {
            if (local_38 < uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa478("Tried to shrink to a larger capacitymax line length exceeded",0x49,
                           &DAT_018ad594);
            }
            if (local_38 == 0) {
              local_48 = 0;
            }
            else {
              local_48 = uVar12;
              if (uVar12 == 0) {
                thunk_FUN_016d3fb4(local_34,uVar2);
                local_34 = (int *)0x4;
              }
              else {
                local_34 = (int *)thunk_FUN_016d4ea4(local_34,uVar12 << 2);
                if (local_34 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00600af4(4,uVar12 << 2);
                }
              }
            }
          }
          else {
            local_48 = local_38;
          }
          local_44 = (int)local_34;
          local_40 = uVar12;
          FUN_01277908(&local_90,uVar2,&local_48);
          FUN_01277fd0(&local_38,auStack_c0,auStack_b0);
          FUN_01278274(&local_80,&local_38);
          FUN_01277fd0(&local_70,auStack_b0,&local_e0);
          uVar2 = local_68;
          iVar6 = local_6c;
          uVar12 = local_84 & 0xff;
          uVar20 = (undefined1)local_64;
          uVar29 = local_64 & 0xff;
          if (uVar12 == 1) {
            uVar22 = 0;
            bVar31 = 0x3ffffffe < local_68;
            bVar32 = local_68 == 0x3fffffff;
            uVar12 = local_68 * 4;
            if (local_68 < 0x40000000) {
              bVar31 = 0x7ffffffb < uVar12;
              bVar32 = uVar12 == 0x7ffffffc;
            }
            if (bVar31 && !bVar32) {
LAB_01275b34:
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(uVar22,uVar12);
            }
            if (uVar12 == 0) {
              piVar5 = (int *)&DAT_00000004;
              uVar17 = 0;
            }
            else {
              piVar5 = (int *)thunk_FUN_016d4a50(uVar12);
              uVar17 = uVar2;
              if (piVar5 == (int *)0x0) {
                uVar22 = 4;
                goto LAB_01275b34;
              }
            }
            FUN_016dd1aa(piVar5,iVar6,uVar12);
            local_2c = CONCAT31(local_2c._1_3_,uVar20);
            local_30 = uVar2;
            local_38 = uVar17;
            local_34 = piVar5;
LAB_01276014:
            if (local_90 != 0) {
              thunk_FUN_016d3fb4(local_8c);
            }
          }
          else if (uVar29 == 0) {
            if (uVar12 == 0) goto LAB_01275bbc;
LAB_01275b78:
            local_38 = local_90;
            local_34 = local_8c;
            local_30 = local_88;
            FUN_012742e0(&local_48,&local_38,local_6c,local_68);
            FUN_01277908(&local_38,uVar29,&local_48);
          }
          else if (uVar29 == 1) {
            local_38 = local_90;
            local_34 = local_8c;
            local_30 = local_88;
            local_2c._1_3_ = (undefined3)(local_84 >> 8);
            local_2c = CONCAT31(local_2c._1_3_,'\x02' - (char)local_84);
          }
          else {
            if (uVar12 == 0) goto LAB_01275b78;
LAB_01275bbc:
            if (local_68 != local_88) {
              cVar8 = (local_68 >= local_88 && local_68 != local_88) - (local_68 < local_88);
            }
            else {
              iVar6 = local_88 << 2;
              do {
                piVar5 = (int *)((int)local_8c + iVar6);
                if (iVar6 == 0) {
                  cVar8 = '\0';
                  if (local_8c != piVar5) {
                    cVar8 = -1;
                  }
                  goto LAB_01275fac;
                }
                uVar12 = *(uint *)(local_6c + -4 + iVar6);
                iVar6 = iVar6 + -4;
                uVar2 = piVar5[-1];
              } while (uVar12 == uVar2);
              cVar8 = (uVar12 >= uVar2) - (uVar12 < uVar2);
            }
LAB_01275fac:
            if (cVar8 == '\0') {
              local_2c = 1;
              local_30 = 0;
              local_34 = (int *)&DAT_00000004;
              local_38 = 0;
              goto LAB_01276014;
            }
            if (cVar8 == -1) {
              local_30 = local_88;
              local_34 = local_8c;
              local_38 = local_90;
              FUN_01273c64(&local_48,&local_38,local_6c,local_68);
              FUN_01277908(&local_38,2 - uVar29,&local_48);
            }
            else {
              local_30 = local_88;
              local_34 = local_8c;
              local_38 = local_90;
              FUN_01273ebc(&local_48,local_6c,local_68,&local_38);
              FUN_01277908(&local_38,uVar29,&local_48);
            }
          }
          FUN_01278274(&local_48,&local_38);
          cVar8 = local_c4;
          if (local_c8 == 0) {
            FUN_0127b6d4(&local_60,local_cc,0);
          }
          else {
            local_34 = &local_d0;
            local_38 = 0x80000000;
            FUN_0127ae58(&local_60,&local_38,0,1);
          }
          FUN_01277908(&local_38,cVar8,&local_60);
          FUN_01277980(&local_60,&local_48,&local_38);
          local_90 = local_60;
          local_8c = (int *)iStack_5c;
          local_88 = uStack_58;
          local_84 = local_54;
          FUN_0127735c(&local_48,&local_80,&local_d0);
          uVar12 = local_68;
          iVar6 = local_6c;
          uVar2 = local_70;
          uVar17 = local_3c & 0xff;
          local_4a = local_64._3_1_;
          local_4c = local_64._1_2_;
          local_70 = 0;
          local_68 = 0;
          local_6c = 4;
          local_64 = 1;
          if (uVar17 == 1) {
            local_30 = uVar12;
            local_34 = (int *)iVar6;
            local_38 = uVar2;
            local_2c = CONCAT13(local_4a,CONCAT21(local_4c,uVar20));
          }
          else if (uVar29 == 0) {
            if (uVar17 == 0) goto LAB_01276224;
LAB_012761bc:
            if (uVar12 != local_40) {
              cVar8 = (uVar12 >= local_40 && uVar12 != local_40) - (uVar12 < local_40);
            }
            else {
              iVar9 = uVar12 << 2;
              do {
                iVar13 = local_44 + iVar9;
                if (iVar9 == 0) {
                  cVar8 = '\0';
                  if (local_44 != iVar13) {
                    cVar8 = -1;
                  }
                  goto LAB_01276288;
                }
                uVar24 = *(uint *)(iVar6 + -4 + iVar9);
                iVar9 = iVar9 + -4;
                uVar19 = *(uint *)(iVar13 + -4);
              } while (uVar24 == uVar19);
              cVar8 = (uVar24 >= uVar19) - (uVar24 < uVar19);
            }
LAB_01276288:
            if (cVar8 == '\0') {
              local_2c = 1;
              local_30 = 0;
              local_34 = (int *)0x4;
              local_38 = 0;
              goto LAB_012762f0;
            }
            if (cVar8 == -1) {
              local_30 = uVar12;
              local_34 = (int *)iVar6;
              local_38 = uVar2;
              FUN_01273ebc(&local_60,local_44,local_40,&local_38);
              FUN_01277908(&local_38,uVar17,&local_60);
            }
            else {
              local_30 = uVar12;
              local_34 = (int *)iVar6;
              local_38 = uVar2;
              FUN_01273c64(&local_60,&local_38,local_44,local_40);
              FUN_01277908(&local_38,uVar29,&local_60);
            }
          }
          else if (uVar29 == 1) {
            FUN_0127b6d4(&local_60,local_44,local_40);
            local_2c = CONCAT31(local_2c._1_3_,(undefined1)local_3c);
            local_38 = local_60;
            local_34 = (int *)iStack_5c;
            local_30 = uStack_58;
LAB_012762f0:
            if (uVar2 != 0) {
              thunk_FUN_016d3fb4(iVar6);
            }
          }
          else {
            if (uVar17 == 0) goto LAB_012761bc;
LAB_01276224:
            local_30 = uVar12;
            local_34 = (int *)iVar6;
            local_38 = uVar2;
            FUN_012742e0(&local_60,&local_38,local_44,local_40);
            FUN_01277908(&local_38,uVar29,&local_60);
          }
          local_70 = local_38;
          local_6c = (int)local_34;
          local_68 = local_30;
          local_64 = local_2c;
          if (local_48 != 0) {
            thunk_FUN_016d3fb4(local_44);
          }
          local_3c = local_74;
          local_40 = local_78;
          local_44 = local_7c;
          local_48 = local_80;
          local_7c = 4;
          local_80 = 0;
          local_78 = 0;
          local_74 = 1;
          FUN_01277fd0(&local_38,&local_48,&local_90);
          local_80 = local_38;
          local_7c = (int)local_34;
          local_78 = local_30;
          local_74 = local_2c;
          if (local_c4 == '\0') {
            uVar2 = uVar23 * 4;
            if (uVar23 * 4 <= param_2) {
              FUN_012799f4(param_1 + uVar23 * 4,param_2 + uVar23 * -4,local_cc,local_c8);
              goto LAB_01276424;
            }
LAB_0127670c:
            puVar18 = &DAT_0188b634;
LAB_012767f0:
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(uVar2,param_2,param_2,puVar18);
          }
          if (local_c4 != '\x01') {
            uVar2 = uVar23 * 4;
            if (param_2 < uVar23 * 4) {
              puVar18 = &DAT_0188b644;
              goto LAB_012767f0;
            }
            FUN_0127b750(param_1 + uVar23 * 4,param_2 + uVar23 * -4,local_cc,local_c8);
          }
LAB_01276424:
          if ((local_84 & 0xff) == 0) {
            uVar2 = uVar23 * 3;
            if (param_2 < uVar2) goto LAB_0127670c;
            FUN_012799f4(param_1 + uVar23 * 3,param_2 + uVar23 * -3,local_8c,local_88);
          }
          else if ((local_84 & 0xff) != 1) {
            uVar2 = uVar23 * 3;
            if (param_2 < uVar2) {
              puVar18 = &DAT_0188b644;
              goto LAB_012767f0;
            }
            FUN_0127b750(param_1 + uVar23 * 3,param_2 + uVar23 * -3,local_8c,local_88);
          }
          if ((local_64 & 0xff) == 0) {
            uVar2 = uVar23 * 2;
            if (param_2 < uVar23 * 2) goto LAB_0127670c;
            FUN_012799f4(param_1 + uVar23 * 2,param_2 + uVar23 * -2,local_6c,local_68);
          }
          else if ((local_64 & 0xff) != 1) {
            uVar2 = uVar23 * 2;
            if (param_2 < uVar23 * 2) {
              puVar18 = &DAT_0188b644;
              goto LAB_012767f0;
            }
            FUN_0127b750(param_1 + uVar23 * 2,param_2 + uVar23 * -2,local_6c,local_68);
          }
          uVar2 = uVar23;
          if ((local_74 & 0xff) == 0) {
            if (param_2 <= uVar15 / 3) {
              puVar18 = &DAT_0188b634;
              goto LAB_012767f0;
            }
            FUN_012799f4(param_1 + uVar23,param_2 - uVar23,local_7c,local_78);
          }
          else if ((local_74 & 0xff) != 1) {
            if (param_2 <= uVar15 / 3) {
              puVar18 = &DAT_0188b644;
              goto LAB_012767f0;
            }
            FUN_0127b750(param_1 + uVar23,param_2 - uVar23,local_7c,local_78);
          }
          if (local_d4 == '\0') {
            FUN_012799f4(param_1,param_2,local_dc,local_d8);
          }
          else if (local_d4 != '\x01') {
            FUN_0127b750(param_1,param_2,local_dc,local_d8);
          }
          if (local_70 != 0) {
            thunk_FUN_016d3fb4(local_6c);
          }
          if (local_80 != 0) {
            thunk_FUN_016d3fb4(local_7c);
          }
          if (local_90 != 0) {
            thunk_FUN_016d3fb4(local_8c);
          }
          if (local_d0 != 0) {
            thunk_FUN_016d3fb4(local_cc);
          }
          if (local_e0 == 0) {
            return;
          }
          thunk_FUN_016d3fb4(local_dc);
          return;
        }
        if (uVar15 < param_4 >> 1) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00418e0f,0x13,&DAT_0188b684);
        }
        local_188 = param_4 >> 1;
        iVar13 = param_4 - (param_4 >> 1);
        iVar9 = uVar15 - local_188;
        iVar16 = iVar9 + iVar13;
        uVar2 = iVar16 + 1;
        iVar6 = uVar2 * 4;
        if (0x1ffffffe < uVar2 && iVar16 != 0x1ffffffe) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(0,iVar6);
        }
        iVar3 = FUN_016d38c8(iVar6,1);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(4,iVar6);
        }
        local_48 = uVar2;
        local_44 = iVar3;
        local_40 = uVar2;
        FUN_01274e84(iVar3,uVar2,param_3 + local_188,iVar13,puVar28 + local_188,iVar9);
        if (*(int *)(iVar3 + uVar2 * 4 + -4) == 0) {
          iVar4 = local_188 * 8 + (param_4 + uVar15) * -4 + -4;
          iVar6 = param_4 + uVar15 + local_188 * -2;
          do {
            iVar14 = iVar6;
            if (iVar4 == 0) {
              uVar23 = 0;
              goto LAB_0127562c;
            }
            iVar4 = iVar4 + 4;
            iVar6 = iVar14 + -1;
          } while (*(int *)(iVar3 + iVar14 * 4) == 0);
          uVar23 = iVar14 + 1;
          if (uVar2 < uVar23) {
            uVar23 = uVar2;
            goto LAB_012753ac;
          }
LAB_0127562c:
          local_40 = uVar23;
          if (uVar2 >> 2 <= uVar23) goto LAB_012753ac;
          if (uVar23 <= uVar2) {
            if (uVar23 == 0) {
              thunk_FUN_016d3fb4(iVar3);
              iVar3 = 4;
            }
            else {
              iVar3 = thunk_FUN_016d4ea4(iVar3);
              if (iVar3 == 0) goto LAB_01275d18;
            }
            local_48 = uVar23;
            local_44 = iVar3;
            goto LAB_012753ac;
          }
LAB_0127677c:
          local_1b8 = &DAT_018ad594;
          local_1bc = "Tried to shrink to a larger capacitymax line length exceeded";
          local_1c0 = 0x49;
LAB_0127679c:
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(local_1bc,local_1c0,local_1b8);
        }
        uVar23 = uVar2;
LAB_012753ac:
        if (param_2 < local_188) {
          puVar18 = &DAT_0188b6a4;
LAB_01276730:
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(local_188,param_2,param_2,puVar18);
        }
        local_1b8 = &DAT_0188b834;
        local_1c0 = 0x13;
        local_1bc = &DAT_00418e0f;
        uVar12 = param_2 - local_188;
        if (uVar12 < uVar23) goto LAB_0127679c;
        puVar27 = param_1 + local_188;
        if (uVar23 != 0) {
          uVar17 = 0;
          uVar29 = 0;
          do {
            uVar24 = puVar27[uVar29];
            uVar19 = *(uint *)(iVar3 + uVar29 * 4);
            uVar25 = uVar19 + uVar24;
            puVar27[uVar29] = uVar25 + uVar17;
            uVar17 = (uint)(CARRY4(uVar19,uVar24) || CARRY4(uVar25,uVar17));
            uVar29 = uVar29 + 1;
          } while (uVar23 != uVar29);
          uVar29 = 0;
          if (uVar17 != 0) {
            uVar29 = uVar12;
          }
          if (uVar17 != 0 && uVar23 != uVar29) {
            iVar6 = param_2 * 4 + uVar23 * -4 + local_188 * -4;
            puVar7 = puVar27 + uVar23;
            do {
              iVar6 = iVar6 + -4;
              uVar23 = *puVar7;
              *puVar7 = uVar23 + 1;
              if (uVar23 != 0xffffffff) break;
              puVar7 = puVar7 + 1;
            } while (iVar6 != 0);
          }
        }
        uVar23 = param_4 & 0x1fe;
        if (param_2 < uVar23) {
          puVar18 = &DAT_0188b694;
          local_188 = uVar23;
          goto LAB_01276730;
        }
        if (param_2 - uVar23 < local_40) goto LAB_0127679c;
        if (local_40 != 0) {
          uVar29 = 0;
          uVar17 = 0;
          do {
            uVar19 = param_1[uVar23 + uVar17];
            uVar25 = *(uint *)(local_44 + uVar17 * 4);
            uVar24 = uVar25 + uVar19;
            param_1[uVar23 + uVar17] = uVar24 + uVar29;
            uVar29 = (uint)(CARRY4(uVar25,uVar19) || CARRY4(uVar24,uVar29));
            uVar17 = uVar17 + 1;
          } while (local_40 != uVar17);
          if (uVar29 != 0 && local_40 != param_2 - uVar23) {
            iVar6 = param_2 * 4 + local_40 * -4 + (local_188 & 0xff) * -8;
            puVar7 = param_1 + uVar23 + local_40;
            do {
              iVar6 = iVar6 + -4;
              uVar23 = *puVar7;
              *puVar7 = uVar23 + 1;
              if (uVar23 != 0xffffffff) break;
              puVar7 = puVar7 + 1;
            } while (iVar6 != 0);
          }
        }
        local_40 = 0;
        uVar29 = 0;
        if (local_48 < uVar2) {
          FUN_0127ade8(&local_48,0,uVar2);
          uVar29 = local_40;
        }
        iVar6 = local_44;
        puVar10 = (undefined4 *)(local_44 + uVar29 * 4);
        if (1 < uVar2) {
          iVar3 = param_4 + uVar15 + local_188 * -2;
          puVar11 = puVar10;
          do {
            puVar10 = puVar11 + 1;
            *puVar11 = 0;
            iVar3 = iVar3 + -1;
            puVar11 = puVar10;
          } while (iVar3 != 0);
          uVar29 = iVar16 + uVar29;
        }
        uVar29 = uVar29 + 1;
        *puVar10 = 0;
        local_40 = uVar29;
        FUN_01274e84(local_44,uVar29,param_3,local_188,puVar28,local_188);
        uVar23 = 0;
        if (uVar29 != 0) {
          uVar23 = uVar29;
          if (*(int *)(iVar6 + uVar29 * 4 + -4) == 0) {
            uVar15 = (uVar29 & 0x3fffffff) + 1;
            iVar16 = uVar29 * 4;
            do {
              if (iVar16 == 0) {
                uVar15 = 0;
                goto LAB_01275cc8;
              }
              piVar5 = (int *)(iVar6 + -4 + iVar16);
              uVar15 = uVar15 - 1;
              iVar16 = iVar16 + -4;
            } while (*piVar5 == 0);
            if (uVar29 < uVar15) goto LAB_01275cd0;
LAB_01275cc8:
            uVar23 = uVar15;
            local_40 = uVar15;
          }
          else {
          }
        }
LAB_01275cd0:
        if (uVar23 < local_48 >> 2) {
          if (local_48 < uVar23) goto LAB_0127677c;
          if (local_48 != 0) {
            if (uVar23 == 0) {
              thunk_FUN_016d3fb4(iVar6);
              iVar6 = 4;
            }
            else {
              iVar6 = thunk_FUN_016d4ea4(iVar6);
              if (iVar6 == 0) {
LAB_01275d18:
                local_1c4 = uVar23 << 2;
                    /* WARNING: Subroutine does not return */
                FUN_00600af4(4,local_1c4);
              }
            }
            local_48 = uVar23;
            local_44 = iVar6;
          }
        }
        if (param_2 < uVar23) goto LAB_0127679c;
        if (uVar23 != 0) {
          uVar29 = 0;
          uVar15 = 0;
          do {
            uVar19 = param_1[uVar15];
            uVar17 = *(uint *)(iVar6 + uVar15 * 4);
            uVar24 = uVar17 + uVar19;
            param_1[uVar15] = uVar24 + uVar29;
            uVar29 = (uint)(CARRY4(uVar17,uVar19) || CARRY4(uVar24,uVar29));
            uVar15 = uVar15 + 1;
          } while (uVar23 != uVar15);
          if (uVar29 != 0 && uVar23 != param_2) {
            iVar6 = param_2 * 4 + uVar23 * -4;
            puVar7 = param_1 + uVar23;
            do {
              iVar6 = iVar6 + -4;
              uVar15 = *puVar7;
              *puVar7 = uVar15 + 1;
              if (uVar15 != 0xffffffff) break;
              puVar7 = puVar7 + 1;
            } while (iVar6 != 0);
          }
        }
        if (uVar12 < local_40) goto LAB_0127679c;
        if (local_40 != 0) {
          uVar15 = 0;
          uVar23 = 0;
          do {
            uVar19 = puVar27[uVar23];
            uVar29 = *(uint *)(local_44 + uVar23 * 4);
            uVar17 = uVar29 + uVar19;
            bVar32 = CARRY4(uVar17,uVar15);
            puVar27[uVar23] = uVar17 + uVar15;
            uVar15 = (uint)(CARRY4(uVar29,uVar19) || bVar32);
            uVar23 = uVar23 + 1;
          } while (local_40 != uVar23);
          uVar23 = (uint)bVar32;
          if (uVar15 != 0) {
            uVar23 = uVar12;
          }
          if (uVar15 != 0 && local_40 != uVar23) {
            iVar6 = param_2 * 4 + local_40 * -4 + local_188 * -4;
            puVar7 = puVar27 + local_40;
            do {
              iVar6 = iVar6 + -4;
              uVar15 = *puVar7;
              *puVar7 = uVar15 + 1;
              if (uVar15 != 0xffffffff) break;
              puVar7 = puVar7 + 1;
            } while (iVar6 != 0);
          }
        }
        FUN_01278480(&local_38,param_3 + local_188,iVar13,param_3,local_188);
        uVar23 = local_2c;
        uVar15 = local_30;
        piVar5 = local_34;
        uVar29 = local_38 & 0xff;
        FUN_01278480(&local_38,puVar28 + local_188,iVar9,puVar28,local_188);
        if (uVar29 == 1) goto LAB_01275efc;
        if ((local_38 & 0xff) == 2) {
          if (uVar29 != 0) {
LAB_01275eb4:
            local_40 = 0;
            FUN_0127b634(&local_48,uVar2);
            FUN_01274e84(local_44,local_40,uVar15,uVar23,local_30,local_2c);
            FUN_01278b34(&local_48);
            FUN_012799f4(puVar27,uVar12,local_44,local_40);
            goto LAB_01275efc;
          }
        }
        else {
          if ((local_38 & 0xff) == 1) goto LAB_01275efc;
          if (uVar29 == 0) goto LAB_01275eb4;
        }
        FUN_01274e84(puVar27,uVar12,uVar15,uVar23,local_30,local_2c);
LAB_01275efc:
        if (local_34 != (int *)0x0) {
          thunk_FUN_016d3fb4(local_30);
        }
        if (piVar5 != (int *)0x0) {
          thunk_FUN_016d3fb4(uVar15);
        }
        if (local_48 == 0) {
          return;
        }
        thunk_FUN_016d3fb4(local_44);
        return;
      }
      while (iVar13 = *(int *)((int)puVar7 + iVar9), *(int *)((int)puVar7 + iVar9) = iVar13 + 1,
            iVar13 == -1) {
        iVar9 = iVar9 + 4;
        if (iVar6 == iVar9) goto LAB_01275154;
      }
    }
  }
  puVar27 = puVar27 + 1;
  uVar2 = uVar2 + 1;
  iVar6 = iVar6 + -4;
  puVar7 = puVar7 + 1;
  if (puVar27 == puVar30) {
    return;
  }
  goto LAB_01275094;
}

