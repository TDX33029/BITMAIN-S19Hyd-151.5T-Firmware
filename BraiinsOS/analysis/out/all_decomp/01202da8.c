// FUN_01202da8 @ 01202da8 size=3176 calls_out=9 calls_in=4
// strings: 

void FUN_01202da8(int *param_1,char *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined4 *puVar24;
  int *piVar25;
  int *piVar26;
  int *piVar27;
  undefined4 uVar28;
  undefined4 *puVar29;
  int iVar30;
  int iVar31;
  int unaff_r8;
  uint uVar32;
  int *piVar33;
  undefined4 uVar34;
  int iVar35;
  undefined8 uVar36;
  int local_74;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  int local_60;
  uint local_5c;
  undefined4 local_58;
  int local_54;
  int local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40;
  int iStack_3c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  
  if (param_1[0x17] != 0) {
    FUN_01202da8(param_1[0x17],param_2,param_3,param_4,1);
  }
  iVar5 = param_1[0x19];
  if ((iVar5 != 0) && (DataMemoryBarrier(0xb), *(int *)(iVar5 + 0xb0) == 0)) {
    FUN_01202da8(iVar5 + 8,param_2,param_3,param_4,1);
  }
  if (param_1[0x18] != 0) {
    FUN_01202da8(param_1[0x18],param_2,param_3,param_4,1);
  }
  if (*param_2 == '\x05') {
    iVar5 = *(int *)(param_2 + 4);
    iVar30 = *(int *)(param_2 + 8);
    uVar28 = *(undefined4 *)(param_2 + 0xc);
    local_58 = 0;
    local_68 = 0;
    if (iVar5 == 0) {
      uVar28 = 0;
    }
    uVar13 = param_1[4];
    uVar14 = param_1[5];
    uVar15 = param_1[6];
    uVar16 = param_1[7];
    iVar17 = param_1[8];
    iVar18 = param_1[9];
    iVar19 = param_1[10];
    iVar6 = param_1[0xb];
    uVar7 = param_1[1];
    iVar8 = param_1[3];
    iVar20 = *param_1;
    uVar32 = (uint)(iVar5 != 0);
    local_6c = uVar32;
    local_64 = iVar5;
    local_60 = iVar30;
    local_5c = uVar32;
    local_54 = iVar5;
    local_50 = iVar30;
    local_4c = uVar28;
LAB_01202ff0:
    uVar36 = FUN_00f45584(&local_6c);
    iVar35 = (int)((ulonglong)uVar36 >> 0x20);
    iVar12 = (int)uVar36;
    if (iVar12 != 0) {
      unaff_r8 = iVar12;
      if (iVar8 != 0) {
        uVar34 = *(undefined4 *)(iVar12 + 4);
        iVar35 = *(int *)(iVar12 + 8);
        local_48 = iVar17;
        local_44 = iVar18;
        local_40 = iVar19;
        iStack_3c = iVar6;
        local_38 = uVar15;
        uStack_34 = uVar16;
        local_30 = uVar13;
        uStack_2c = uVar14;
        FUN_011df94c(&local_48,uVar34,iVar35);
        uVar21 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                 (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
        lVar2 = (ulonglong)uVar21 * 0xb36a80d2;
        uVar22 = (uint)lVar2;
        uVar10 = local_38 ^ 0xff;
        uVar21 = (uVar10 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
                 local_38 >> 0x18) * -0x4c957f2e +
                 uVar21 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
        uVar23 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 |
                 (uStack_2c >> 0x10 & 0xff) << 8 | uStack_2c >> 0x18;
        uVar11 = (uVar21 * 0x1000000 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
                 uVar21 >> 0x18) ^ (uint)((ulonglong)uVar10 * 0x2df45158);
        lVar2 = (ulonglong)uVar23 * (ulonglong)uVar11;
        uVar21 = (uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
                 uVar22 >> 0x18) ^
                 uStack_34 * 0x2df45158 +
                 uVar10 * 0x2d7f954c + (int)((ulonglong)uVar10 * 0x2df45158 >> 0x20);
        uVar10 = uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
                 uVar21 >> 0x18;
        lVar3 = (ulonglong)~local_30 * (ulonglong)uVar10;
        uVar22 = (uint)lVar3;
        uVar10 = (uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
                 uVar11 >> 0x18) * ~local_30 + uVar10 * ~uStack_2c + (int)((ulonglong)lVar3 >> 0x20)
        ;
        uVar10 = (uVar10 * 0x1000000 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
                 uVar10 >> 0x18) ^ (uint)lVar2;
        uVar22 = (uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
                 uVar22 >> 0x18) ^
                 uVar21 * uVar23 +
                 uVar11 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                           (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
                 (int)((ulonglong)lVar2 >> 0x20);
        uVar21 = uVar22;
        if ((uVar11 & 0x20) != 0) {
          uVar21 = uVar10;
          uVar10 = uVar22;
        }
        uVar21 = uVar10 << (uVar11 & 0x1f) | (uVar21 >> 1) >> (~uVar11 & 0x1f);
        iVar31 = 0;
        uVar10 = uVar21 >> 0x19;
        while( true ) {
          uVar21 = uVar7 & uVar21;
          uVar22 = *(uint *)(iVar20 + uVar21);
          uVar11 = uVar22 ^ uVar10 * 0x1010101;
          uVar11 = ~uVar11 & 0x80808080 & uVar11 + 0xfefefeff;
          while (uVar11 != 0) {
            iVar9 = iVar20 + -0xc +
                    (uVar21 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                             (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) &
                    uVar7) * -0xc;
            uVar11 = uVar11 - 1 & uVar11;
            if ((iVar35 == *(int *)(iVar9 + 8)) &&
               (iVar9 = thunk_FUN_016dd50a(uVar34,*(undefined4 *)(iVar9 + 4),iVar35), iVar9 == 0)) {
              FUN_01225c40(param_3,iVar12);
              goto LAB_01202ff0;
            }
          }
          if ((uVar22 & 0x80808080 & uVar22 << 1) != 0) break;
          iVar31 = iVar31 + 4;
          uVar21 = uVar21 + iVar31;
        }
      }
      goto LAB_01202ff0;
    }
    if (param_1[0x1c] != 0) {
      iVar6 = param_1[0x1b];
      unaff_r8 = param_1[0x1c] * 100;
      local_58 = 0;
      local_68 = 0;
      local_6c = uVar32;
      local_64 = iVar5;
      local_60 = iVar30;
      local_5c = uVar32;
      local_54 = iVar5;
      local_50 = iVar30;
      local_4c = uVar28;
LAB_0120319c:
      uVar36 = FUN_00f45584(&local_6c);
      iVar35 = (int)((ulonglong)uVar36 >> 0x20);
      iVar8 = (int)uVar36;
      if (iVar8 != 0) {
        iVar19 = FUN_012246f4(param_3,*(undefined4 *)(iVar8 + 4),*(undefined4 *)(iVar8 + 8));
        iVar17 = unaff_r8;
        iVar18 = iVar6;
        if (iVar19 == 0) {
          do {
            FUN_00ff71dc(&local_48,iVar18,*(undefined4 *)(iVar8 + 4),*(undefined4 *)(iVar8 + 8));
            if (local_48 == 0x12) {
              if ((char)local_44 != '\0') {
                FUN_01225c40(param_3,iVar8);
                break;
              }
            }
            else {
              FUN_011648d0(&local_48);
            }
            iVar17 = iVar17 + -100;
            iVar18 = iVar18 + 100;
          } while (iVar17 != 0);
        }
        goto LAB_0120319c;
      }
    }
    if (param_1[0xc] != 0) {
      local_58 = 0;
      local_68 = 0;
      local_6c = uVar32;
      local_64 = iVar5;
      local_60 = iVar30;
      local_5c = uVar32;
      local_54 = iVar5;
      local_50 = iVar30;
      local_4c = uVar28;
      while( true ) {
        uVar36 = FUN_00f45584(&local_6c);
        iVar35 = (int)((ulonglong)uVar36 >> 0x20);
        iVar6 = (int)uVar36;
        if (iVar6 == 0) break;
        iVar8 = FUN_012246f4(param_3,*(undefined4 *)(iVar6 + 4),*(undefined4 *)(iVar6 + 8));
        if (iVar8 == 0) {
          FUN_01225c40(param_3,iVar6);
        }
      }
    }
    if (param_5 != 0) {
      unaff_r8 = param_1[0x11];
    }
    if (param_5 != 0 && unaff_r8 != 0) {
      local_58 = 0;
      local_68 = 0;
      local_6c = uVar32;
      local_64 = iVar5;
      local_60 = iVar30;
      local_5c = uVar32;
      local_54 = iVar5;
      local_50 = iVar30;
      local_4c = uVar28;
LAB_01203308:
      do {
        uVar36 = FUN_00f45584(&local_6c);
        iVar35 = (int)((ulonglong)uVar36 >> 0x20);
        iVar6 = (int)uVar36;
        if (iVar6 == 0) break;
        iVar8 = FUN_012246f4(param_3,*(undefined4 *)(iVar6 + 4),*(undefined4 *)(iVar6 + 8));
        if (iVar8 == 0) {
          uVar7 = 1;
          if ((int)*(uint *)(unaff_r8 + 8) < 0) {
            uVar7 = *(uint *)(unaff_r8 + 8) ^ 0x80000000;
          }
          if (uVar7 == 0) {
            if (*(int *)(unaff_r8 + 0xc) != 0) goto LAB_01203308;
          }
          else {
            if (uVar7 != 1) {
              puVar24 = *(undefined4 **)(unaff_r8 + 0x10);
              iVar8 = *(int *)(unaff_r8 + 0x14) << 5;
              do {
                if (iVar8 == 0) goto LAB_012032fc;
                iVar17 = (**(code **)(puVar24[1] + 0x10))(*puVar24,iVar35,param_4);
                iVar8 = iVar8 + -0x20;
                puVar24 = puVar24 + 8;
              } while (iVar17 != 0);
              goto LAB_01203308;
            }
            iVar8 = *(int *)(unaff_r8 + 0x10);
            puVar24 = *(undefined4 **)(unaff_r8 + 0xc);
            if (iVar8 == 1) {
              iVar8 = (**(code **)(puVar24[1] + 0x10))(*puVar24,iVar35,param_4);
              if (iVar8 == 0) goto LAB_01203308;
            }
            else if (iVar8 != 0) {
              puVar29 = puVar24 + iVar8 * 8;
              do {
                iVar8 = (**(code **)(puVar24[1] + 0x10))(*puVar24,iVar35,param_4);
                if (iVar8 == 0) goto LAB_01203308;
                puVar24 = puVar24 + 8;
              } while (puVar24 != puVar29);
            }
          }
LAB_012032fc:
          FUN_01225c40(param_3,iVar6);
        }
      } while( true );
    }
    iVar6 = param_1[0x28];
    if (iVar6 != 0) {
      iVar35 = iVar5;
    }
    if (iVar6 != 0 && iVar35 != 0) {
      iVar17 = param_1[0x27];
      iVar8 = iVar17;
      do {
        uVar28 = *(undefined4 *)(iVar8 + 4);
        iVar19 = iVar8 + 0xb8;
        uVar7 = *(uint *)(iVar8 + 8);
        iVar18 = iVar5;
        local_74 = iVar30;
        while( true ) {
          iVar35 = iVar18 + 0x10c;
          uVar1 = *(ushort *)(iVar18 + 0x192);
          uVar32 = 0xffffffff;
          iVar20 = (uint)uVar1 * 0xc;
          do {
            uVar13 = (uint)uVar1;
            if (iVar20 == 0) goto joined_r0x012034f4;
            uVar14 = *(uint *)(iVar35 + 8);
            uVar13 = uVar14;
            if (uVar7 < uVar14) {
              uVar13 = uVar7;
            }
            iVar12 = FUN_016dd50a(uVar28,*(undefined4 *)(iVar35 + 4),uVar13);
            if (iVar12 == 0) {
              iVar12 = uVar7 - uVar14;
            }
            iVar20 = iVar20 + -0xc;
            uVar32 = uVar32 + 1;
            iVar35 = iVar35 + 0xc;
          } while ((char)((0 < iVar12) - (iVar12 < 0)) == '\x01');
          uVar13 = uVar32;
          if (0 < iVar12 == iVar12 < 0) break;
joined_r0x012034f4:
          if (local_74 == 0) goto LAB_0120352c;
          local_74 = local_74 + -1;
          iVar18 = *(int *)(iVar18 + uVar13 * 4 + 0x198);
        }
        FUN_01202da8(iVar8 + 0x10,param_2,param_3,param_4,1);
LAB_0120352c:
        iVar8 = iVar19;
      } while (iVar19 != iVar6 * 0xb8 + iVar17);
    }
  }
  iVar5 = param_1[0x16];
  if (iVar5 == 0) goto LAB_0120367c;
  iVar30 = *(int *)(iVar5 + 0x1f8);
  uVar7 = 1;
  if ((int)*(uint *)(iVar30 + 8) < 0) {
    uVar7 = *(uint *)(iVar30 + 8) ^ 0x80000000;
  }
  if (uVar7 == 0) {
    if (*(int *)(iVar30 + 0xc) == 0) goto LAB_01203638;
LAB_012035f0:
    if (*(int *)(iVar5 + 0x140) == -0x80000000) goto LAB_0120367c;
    iVar5 = iVar5 + 0xa8;
  }
  else {
    if (uVar7 != 1) {
      puVar24 = *(undefined4 **)(iVar30 + 0x10);
      iVar30 = *(int *)(iVar30 + 0x14) << 5;
      do {
        if (iVar30 == 0) goto LAB_01203638;
        iVar6 = (**(code **)(puVar24[1] + 0x10))(*puVar24,param_2,param_4);
        iVar30 = iVar30 + -0x20;
        puVar24 = puVar24 + 8;
      } while (iVar6 != 0);
      goto LAB_012035f0;
    }
    puVar24 = *(undefined4 **)(iVar30 + 0xc);
    iVar30 = *(int *)(iVar30 + 0x10);
    if (iVar30 == 1) {
      iVar30 = (**(code **)(puVar24[1] + 0x10))(*puVar24,param_2,param_4);
      if (iVar30 == 0) goto LAB_012035f0;
    }
    else if (iVar30 != 0) {
      puVar29 = puVar24 + iVar30 * 8;
      do {
        iVar30 = (**(code **)(puVar24[1] + 0x10))(*puVar24,param_2,param_4);
        if (iVar30 == 0) goto LAB_012035f0;
        puVar24 = puVar24 + 8;
      } while (puVar24 != puVar29);
    }
LAB_01203638:
    FUN_01202da8(iVar5 + 0x150,param_2,param_3,param_4,1);
    if (*(int *)(iVar5 + 0x98) == -0x80000000) goto LAB_0120367c;
  }
  FUN_01202da8(iVar5,param_2,param_3,param_4,1);
LAB_0120367c:
  iVar5 = param_1[0x1f];
  if (iVar5 != 0) {
    piVar25 = (int *)param_1[0x1e];
    piVar26 = piVar25;
    do {
      piVar33 = piVar26 + 0x30;
      iVar30 = *piVar26;
      uVar7 = 1;
      if ((int)*(uint *)(iVar30 + 8) < 0) {
        uVar7 = *(uint *)(iVar30 + 8) ^ 0x80000000;
      }
      if (uVar7 == 0) {
        if (*(int *)(iVar30 + 0xc) == 0) goto LAB_012036a0;
      }
      else if (uVar7 == 1) {
        iVar6 = *(int *)(iVar30 + 0x10);
        puVar24 = *(undefined4 **)(iVar30 + 0xc);
        if (iVar6 == 1) {
          iVar30 = (**(code **)(puVar24[1] + 0x10))(*puVar24,param_2,param_4);
          if (iVar30 == 0) goto LAB_012036b8;
        }
        else if (iVar6 != 0) {
          puVar29 = puVar24 + iVar6 * 8;
          do {
            iVar30 = (**(code **)(puVar24[1] + 0x10))(*puVar24,param_2,param_4);
            if (iVar30 == 0) goto LAB_012036b8;
            puVar24 = puVar24 + 8;
          } while (puVar24 != puVar29);
        }
LAB_012036a0:
        FUN_01202da8(piVar26 + 6,param_2,param_3,param_4,1);
      }
      else {
        puVar24 = *(undefined4 **)(iVar30 + 0x10);
        iVar30 = *(int *)(iVar30 + 0x14) << 5;
        do {
          if (iVar30 == 0) goto LAB_012036a0;
          iVar6 = (**(code **)(puVar24[1] + 0x10))(*puVar24,param_2,param_4);
          iVar30 = iVar30 + -0x20;
          puVar24 = puVar24 + 8;
        } while (iVar6 != 0);
      }
LAB_012036b8:
      piVar26 = piVar33;
    } while (piVar33 != piVar25 + iVar5 * 0x30);
  }
  iVar5 = param_1[0x22];
  if (iVar5 != 0) {
    piVar25 = (int *)param_1[0x21];
    piVar26 = piVar25;
    do {
      piVar33 = piVar26 + 0x30;
      iVar30 = *piVar26;
      uVar7 = 1;
      if ((int)*(uint *)(iVar30 + 8) < 0) {
        uVar7 = *(uint *)(iVar30 + 8) ^ 0x80000000;
      }
      if (uVar7 == 0) {
        if (*(int *)(iVar30 + 0xc) == 0) goto LAB_012037c4;
      }
      else if (uVar7 == 1) {
        iVar6 = *(int *)(iVar30 + 0x10);
        puVar24 = *(undefined4 **)(iVar30 + 0xc);
        if (iVar6 == 1) {
          iVar30 = (**(code **)(puVar24[1] + 0x10))(*puVar24,param_2,param_4);
          if (iVar30 == 0) goto LAB_012037dc;
        }
        else if (iVar6 != 0) {
          puVar29 = puVar24 + iVar6 * 8;
          do {
            iVar30 = (**(code **)(puVar24[1] + 0x10))(*puVar24,param_2,param_4);
            if (iVar30 == 0) goto LAB_012037dc;
            puVar24 = puVar24 + 8;
          } while (puVar24 != puVar29);
        }
LAB_012037c4:
        FUN_01202da8(piVar26 + 6,param_2,param_3,param_4,1);
      }
      else {
        puVar24 = *(undefined4 **)(iVar30 + 0x10);
        iVar30 = *(int *)(iVar30 + 0x14) << 5;
        do {
          if (iVar30 == 0) goto LAB_012037c4;
          iVar6 = (**(code **)(puVar24[1] + 0x10))(*puVar24,param_2,param_4);
          iVar30 = iVar30 + -0x20;
          puVar24 = puVar24 + 8;
        } while (iVar6 != 0);
      }
LAB_012037dc:
      piVar26 = piVar33;
    } while (piVar33 != piVar25 + iVar5 * 0x30);
  }
  iVar5 = param_1[0x25];
  if (iVar5 != 0) {
    piVar25 = (int *)param_1[0x24];
    bVar4 = false;
    piVar33 = (int *)0x0;
    piVar26 = piVar25;
    do {
      piVar27 = piVar26 + 0x30;
      iVar30 = *piVar26;
      uVar7 = 1;
      if ((int)*(uint *)(iVar30 + 8) < 0) {
        uVar7 = *(uint *)(iVar30 + 8) ^ 0x80000000;
      }
      if (uVar7 == 0) {
        if (*(int *)(iVar30 + 0xc) == 0) goto LAB_012039c4;
      }
      else if (uVar7 == 1) {
        iVar6 = *(int *)(iVar30 + 0x10);
        puVar24 = *(undefined4 **)(iVar30 + 0xc);
        if (iVar6 == 1) {
          iVar30 = (**(code **)(puVar24[1] + 0x10))(*puVar24,param_2,param_4);
          if (iVar30 == 0) goto LAB_012038f4;
        }
        else if (iVar6 != 0) {
          puVar29 = puVar24 + iVar6 * 8;
          do {
            iVar30 = (**(code **)(puVar24[1] + 0x10))(*puVar24,param_2,param_4);
            if (iVar30 == 0) goto LAB_012038f4;
            puVar24 = puVar24 + 8;
          } while (puVar24 != puVar29);
        }
LAB_012039c4:
        if (bVar4) {
          return;
        }
        piVar33 = piVar26 + 6;
        bVar4 = true;
      }
      else {
        puVar24 = *(undefined4 **)(iVar30 + 0x10);
        iVar30 = *(int *)(iVar30 + 0x14) << 5;
        do {
          if (iVar30 == 0) goto LAB_012039c4;
          iVar6 = (**(code **)(puVar24[1] + 0x10))(*puVar24,param_2,param_4);
          iVar30 = iVar30 + -0x20;
          puVar24 = puVar24 + 8;
        } while (iVar6 != 0);
      }
LAB_012038f4:
      piVar26 = piVar27;
    } while (piVar27 != piVar25 + iVar5 * 0x30);
    if (bVar4 && piVar33 != (int *)0x0) {
      FUN_01202da8(piVar33,param_2,param_3,param_4,1);
      return;
    }
  }
  return;
}

