// FUN_0156b060 @ 0156b060 size=14600 calls_out=97 calls_in=3
// strings: $ref~! | $ref~! | $ref~! | const | additionalItems | additionalProperties

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0156b060(int *param_1,int param_2,char *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined1 uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  char *pcVar22;
  undefined4 *puVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  undefined8 *puVar27;
  undefined *puVar28;
  bool bVar29;
  bool bVar30;
  int iVar31;
  undefined4 uVar32;
  int iVar33;
  bool bVar34;
  int *piVar35;
  uint *puVar36;
  code *pcVar37;
  bool bVar38;
  uint uVar39;
  undefined4 uVar40;
  int *piVar41;
  uint *puVar42;
  int *piVar43;
  int iVar44;
  bool bVar45;
  int iVar46;
  uint uVar47;
  int *piVar48;
  uint uVar49;
  uint uVar50;
  uint *puVar51;
  int *piVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  uint local_1f0;
  uint *local_1e8;
  int local_1e4;
  uint local_1c8;
  int local_1bc;
  uint local_1b4;
  uint local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  uint local_19c;
  int local_198;
  uint *local_188;
  uint *local_184;
  uint *local_180;
  uint *local_17c;
  uint *local_178;
  uint *puStack_174;
  uint *puStack_170;
  uint *local_16c;
  uint *local_168;
  uint *puStack_164;
  uint *puStack_160;
  uint *puStack_15c;
  uint *local_158;
  uint *local_150;
  uint *puStack_14c;
  uint *puStack_148;
  uint *puStack_144;
  uint *local_140;
  undefined1 auStack_138 [12];
  int local_12c;
  undefined4 local_108;
  undefined4 *local_104;
  undefined4 local_100;
  uint *local_fc;
  int local_f8;
  uint *local_f4;
  uint *local_f0;
  uint *local_ec;
  uint *local_e8;
  uint *local_e4;
  uint *local_e0;
  uint *local_dc;
  uint *local_d8;
  uint *puStack_d4;
  uint *puStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  uint *local_c0;
  uint *local_bc;
  uint *local_b8;
  uint *local_b4;
  uint *local_b0;
  undefined8 uStack_ac;
  char local_a0 [28];
  undefined1 auStack_84 [12];
  undefined8 local_78;
  uint *local_70;
  uint *local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint *local_60;
  uint *local_5c;
  uint *local_58;
  uint *local_54;
  uint *local_50;
  uint *local_4c;
  uint *local_48;
  uint *local_44;
  uint *local_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  if (param_4 == (uint *)0x0) {
LAB_0156b108:
    FUN_0156f670(&local_188,param_2);
    uVar14 = *(uint *)(param_2 + 0x60);
    if (0x7ffffffe < *(uint *)(uVar14 + 8)) {
      puVar28 = &DAT_01cfbd30;
LAB_0156ecec:
                    /* WARNING: Subroutine does not return */
      FUN_0130701c(puVar28);
    }
    *(uint *)(uVar14 + 8) = *(uint *)(uVar14 + 8) + 1;
    if (*(int *)(uVar14 + 0x1c) == 0) {
      iVar46 = 0;
    }
    else {
      uVar16 = FUN_0155ce44(uVar14 + 0x20,&local_188);
      uVar19 = uVar16 >> 0x19;
      iVar46 = *(int *)(uVar14 + 0x10);
      uVar47 = *(uint *)(uVar14 + 0x14);
      local_19c = 0;
      uVar39 = uVar14;
      while( true ) {
        uVar16 = uVar47 & uVar16;
        uVar50 = *(uint *)(iVar46 + uVar16);
        uVar17 = uVar50 ^ uVar19 * 0x1010101;
        uVar17 = ~uVar17 & 0x80808080 & uVar17 + 0xfefefeff;
        while (uVar24 = uVar17, uVar24 != 0) {
          uVar39 = uVar16 + ((uint)LZCOUNT(uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 |
                                           (uVar24 >> 0x10 & 0xff) << 8 | uVar24 >> 0x18) >> 3) &
                   uVar47;
          iVar18 = FUN_0156f85c(&local_188,iVar46 + -0x24 + uVar39 * -0x24);
          uVar17 = uVar24 - 1 & uVar24;
          if (iVar18 != 0) goto LAB_0156b224;
        }
        if ((uVar50 & 0x80808080 & uVar50 << 1) != 0) break;
        local_19c = local_19c + 4;
        uVar16 = uVar16 + local_19c;
      }
LAB_0156b224:
      iVar46 = iVar46 + uVar39 * -0x24 + -0x14;
      if (uVar24 == 0) {
        iVar46 = 0;
      }
    }
    FUN_0156636c(&local_60,iVar46);
    *(int *)(uVar14 + 8) = *(int *)(uVar14 + 8) + -1;
    if (local_60 == (uint *)0x0) {
      iVar46 = *(int *)(param_2 + 0x68);
      uVar19 = *(uint *)(iVar46 + 8);
      if (0x7ffffffe < uVar19) {
        puVar28 = &DAT_01cfbe00;
        goto LAB_0156ecec;
      }
      *(uint *)(iVar46 + 8) = uVar19 + 1;
      if (*(int *)(iVar46 + 0x1c) != 0) {
        uVar39 = FUN_0155ce44(iVar46 + 0x20,&local_188);
        uVar19 = uVar39 >> 0x19;
        iVar18 = *(int *)(iVar46 + 0x10);
        uVar16 = *(uint *)(iVar46 + 0x14);
        local_1a8 = 0;
        while( true ) {
          uVar39 = uVar16 & uVar39;
          uVar47 = *(uint *)(iVar18 + uVar39);
          uVar17 = uVar47 ^ uVar19 * 0x1010101;
          uVar17 = ~uVar17 & 0x80808080 & uVar17 + 0xfefefeff;
          while (uVar17 != 0) {
            uVar50 = uVar39 + ((uint)LZCOUNT(uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                                             (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) >> 3) &
                     uVar16;
            iVar20 = FUN_0156f85c(&local_188,iVar18 + -0x14 + uVar50 * -0x14);
            uVar17 = uVar17 - 1 & uVar17;
            if (iVar20 != 0) {
              piVar35 = *(int **)(iVar18 + uVar50 * -0x14 + -4);
              do {
                iVar18 = *piVar35;
                bVar5 = (bool)hasExclusiveAccess(piVar35);
              } while (!bVar5);
              *piVar35 = iVar18 + 1;
              uVar53 = CONCAT44(local_78._4_4_,(uint *)local_78);
              uStack_ac = CONCAT44(uStack_ac._4_4_,(undefined4)uStack_ac);
              if (iVar18 < 0) goto LAB_0156ef0c;
              *(int *)(iVar46 + 8) = *(int *)(iVar46 + 8) + -1;
              DataMemoryBarrier(0xb);
              if (piVar35[2] != 0) {
                DataMemoryBarrier(0xb);
                do {
                  iVar18 = *piVar35;
                  bVar5 = (bool)hasExclusiveAccess(piVar35);
                } while (!bVar5);
                *piVar35 = iVar18 + -1;
                if (iVar18 == 1) {
                  DataMemoryBarrier(0xb);
                  FUN_0155d2bc(piVar35);
                }
                goto LAB_0156b52c;
              }
              DataMemoryBarrier(0xb);
              if (piVar35[8] != 0) {
                FUN_01551bbc(piVar35 + 8,piVar35 + 3);
              }
              piVar48 = (int *)piVar35[9];
              do {
                iVar46 = *piVar48;
                bVar5 = (bool)hasExclusiveAccess(piVar48);
              } while (!bVar5);
              *piVar48 = iVar46 + 1;
              uVar53 = CONCAT44(local_78._4_4_,(uint *)local_78);
              uStack_ac = CONCAT44(uStack_ac._4_4_,(undefined4)uStack_ac);
              if (iVar46 < 0) goto LAB_0156ef0c;
              piVar41 = (int *)piVar35[10];
              do {
                iVar46 = *piVar41;
                bVar5 = (bool)hasExclusiveAccess(piVar41);
              } while (!bVar5);
              *piVar41 = iVar46 + 1;
              uVar53 = CONCAT44(local_78._4_4_,(uint *)local_78);
              uStack_ac = CONCAT44(uStack_ac._4_4_,(undefined4)uStack_ac);
              if (iVar46 < 0) goto LAB_0156ef0c;
              piVar52 = (int *)piVar35[0xd];
              iVar46 = piVar35[0xb];
              if (piVar52 != (int *)0x0) {
                do {
                  iVar18 = *piVar52;
                  bVar5 = (bool)hasExclusiveAccess(piVar52);
                } while (!bVar5);
                *piVar52 = iVar18 + 1;
                uVar53 = CONCAT44(local_78._4_4_,(uint *)local_78);
                uStack_ac = CONCAT44(uStack_ac._4_4_,(undefined4)uStack_ac);
                if (iVar18 < 0) goto LAB_0156ef0c;
              }
              piVar43 = (int *)piVar35[0xc];
              do {
                iVar18 = *piVar43;
                bVar5 = (bool)hasExclusiveAccess(piVar43);
              } while (!bVar5);
              *piVar43 = iVar18 + 1;
              uVar53 = CONCAT44(local_78._4_4_,(uint *)local_78);
              uStack_ac = CONCAT44(uStack_ac._4_4_,(undefined4)uStack_ac);
              if (iVar18 < 0) goto LAB_0156ef0c;
              *param_1 = (int)piVar48;
              param_1[1] = (int)piVar41;
              param_1[2] = iVar46;
              param_1[3] = (int)piVar43;
              param_1[4] = (int)piVar52;
              DataMemoryBarrier(0xb);
              do {
                iVar46 = *piVar35;
                bVar5 = (bool)hasExclusiveAccess(piVar35);
              } while (!bVar5);
              *piVar35 = iVar46 + -1;
              if (iVar46 == 1) {
                DataMemoryBarrier(0xb);
                FUN_0155d2bc(piVar35);
              }
              goto LAB_0156b280;
            }
          }
          if ((uVar47 & 0x80808080 & uVar47 << 1) != 0) break;
          local_1a8 = local_1a8 + 4;
          uVar39 = uVar39 + local_1a8;
        }
        uVar19 = *(int *)(iVar46 + 8) - 1;
      }
      *(uint *)(iVar46 + 8) = uVar19;
LAB_0156b52c:
      local_58 = (uint *)&DAT_00000003;
      local_5c = (uint *)&DAT_00000001;
      local_60 = (uint *)&DAT_00000001;
      piVar35 = (int *)thunk_FUN_01be5118(0x38);
      if (piVar35 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x38);
      }
      *piVar35 = (int)local_60;
      piVar35[1] = (int)local_5c;
      piVar35[2] = (int)local_58;
      piVar35[3] = (int)local_54;
      piVar35[4] = (int)local_50;
      piVar35[5] = (int)local_4c;
      piVar35[6] = (int)local_48;
      piVar35[7] = (int)local_44;
      piVar35[8] = (int)local_40;
      piVar35[9] = local_3c;
      piVar35[10] = iStack_38;
      piVar35[0xb] = iStack_34;
      piVar35[0xc] = iStack_30;
      piVar35[0xd] = iStack_2c;
      do {
        uVar19 = *local_188;
        bVar5 = (bool)hasExclusiveAccess(local_188);
      } while (!bVar5);
      *local_188 = uVar19 + 1;
      uVar53 = CONCAT44(local_78._4_4_,(uint *)local_78);
      uStack_ac = CONCAT44(uStack_ac._4_4_,(undefined4)uStack_ac);
      if (-1 < (int)uVar19) {
        do {
          uVar19 = *local_184;
          bVar5 = (bool)hasExclusiveAccess(local_184);
        } while (!bVar5);
        *local_184 = uVar19 + 1;
        uVar53 = CONCAT44(local_78._4_4_,(uint *)local_78);
        uStack_ac = CONCAT44(uStack_ac._4_4_,(undefined4)uStack_ac);
        if (-1 < (int)uVar19) {
          if (local_17c != (uint *)0x0) {
            do {
              uVar19 = *local_17c;
              bVar5 = (bool)hasExclusiveAccess(local_17c);
            } while (!bVar5);
            *local_17c = uVar19 + 1;
            uVar53 = CONCAT44(local_78._4_4_,(uint *)local_78);
            uStack_ac = CONCAT44(uStack_ac._4_4_,(undefined4)uStack_ac);
            if ((int)uVar19 < 0) goto LAB_0156ef0c;
          }
          local_16c = local_17c;
          local_178 = local_188;
          puStack_174 = local_184;
          puStack_170 = local_180;
          do {
            iVar18 = *piVar35;
            bVar5 = (bool)hasExclusiveAccess(piVar35);
          } while (!bVar5);
          *piVar35 = iVar18 + 1;
          uVar53 = CONCAT44(local_78._4_4_,(uint *)local_78);
          uStack_ac = CONCAT44(uStack_ac._4_4_,(undefined4)uStack_ac);
          if (-1 < iVar18) {
            if (*(int *)(iVar46 + 8) == 0) {
              *(undefined4 *)(iVar46 + 8) = 0xffffffff;
              local_60 = local_188;
              local_5c = local_184;
              local_58 = local_180;
              local_54 = local_17c;
              iVar18 = iVar46 + 0x20;
              uVar19 = FUN_0155ce44(iVar18,&local_60);
              if (*(int *)(iVar46 + 0x18) == 0) {
                FUN_0152b370(iVar46 + 0x10,iVar18);
              }
              puVar15 = *(uint **)(iVar46 + 0x10);
              uVar16 = *(uint *)(iVar46 + 0x14);
              bVar5 = false;
              local_1bc = 0;
              uVar39 = uVar19;
              do {
                uVar39 = uVar16 & uVar39;
                uVar17 = *(uint *)((int)puVar15 + uVar39);
                uVar47 = uVar17 ^ (uVar19 >> 0x19) * 0x1010101;
                uVar47 = ~uVar47 & 0x80808080 & uVar47 + 0xfefefeff;
                while (uVar47 != 0) {
                  uVar50 = uVar39 + ((uint)LZCOUNT(uVar47 << 0x18 | (uVar47 >> 8 & 0xff) << 0x10 |
                                                   (uVar47 >> 0x10 & 0xff) << 8 | uVar47 >> 0x18) >>
                                    3) & uVar16;
                  iVar20 = FUN_0156f85c(&local_60,puVar15 + uVar50 * -5 + -5);
                  uVar47 = uVar47 - 1 & uVar47;
                  if (iVar20 != 0) {
                    puVar36 = (uint *)puVar15[uVar50 * -5 + -1];
                    puVar15[uVar50 * -5 + -1] = (uint)piVar35;
                    FUN_0152a2e4(&local_60);
                    DataMemoryBarrier(0xb);
                    do {
                      uVar19 = *puVar36;
                      bVar5 = (bool)hasExclusiveAccess(puVar36);
                    } while (!bVar5);
                    *puVar36 = uVar19 - 1;
                    if (uVar19 == 1) {
                      DataMemoryBarrier(0xb);
                      FUN_0155d2bc(puVar36);
                    }
                    goto LAB_0156b7c4;
                  }
                }
                uVar50 = uVar17 & 0x80808080;
                uVar47 = local_1c8;
                if (bVar5) {
LAB_0156b740:
                  if ((uVar50 & uVar17 << 1) != 0) goto LAB_0156e8e0;
                  bVar5 = true;
                  local_1c8 = uVar47;
                }
                else {
                  if (uVar50 != 0) {
                    uVar47 = uVar39 + ((uint)LZCOUNT((uVar17 & 0x80) << 0x18 |
                                                     (uVar50 >> 8 & 0xff) << 0x10 |
                                                     (uVar50 >> 0x10 & 0xff) << 8 | uVar50 >> 0x18)
                                      >> 3) & uVar16;
                    goto LAB_0156b740;
                  }
                  bVar5 = false;
                }
                local_1bc = local_1bc + 4;
                uVar39 = local_1bc + uVar39;
              } while( true );
            }
            FUN_01306fc8(&DAT_01cfbdf0);
            uVar53 = CONCAT44(local_78._4_4_,(uint *)local_78);
            uStack_ac = CONCAT44(uStack_ac._4_4_,(undefined4)uStack_ac);
          }
        }
      }
      goto LAB_0156ef0c;
    }
    *param_1 = (int)local_60;
    param_1[1] = (int)local_5c;
    param_1[2] = (int)local_58;
    param_1[3] = (int)local_54;
    param_1[4] = (int)local_50;
LAB_0156b280:
    FUN_0152a2e4(&local_188);
    if (param_4 == (uint *)0x0) {
      return;
    }
  }
  else {
    do {
      uVar14 = *param_4;
      bVar5 = (bool)hasExclusiveAccess(param_4);
    } while (!bVar5);
    *param_4 = uVar14 + 1;
    uVar53 = CONCAT44(local_78._4_4_,(uint *)local_78);
    uStack_ac = CONCAT44(uStack_ac._4_4_,(undefined4)uStack_ac);
    if ((int)uVar14 < 0) goto LAB_0156ef0c;
    puVar15 = *(uint **)(param_2 + 0x58);
    if (puVar15 != (uint *)0x0) {
      do {
        uVar14 = *puVar15;
        bVar5 = (bool)hasExclusiveAccess(puVar15);
      } while (!bVar5);
      *puVar15 = uVar14 + 1;
      uVar53 = CONCAT44(local_78._4_4_,(uint *)local_78);
      uStack_ac = CONCAT44(uStack_ac._4_4_,(undefined4)uStack_ac);
      if ((int)uVar14 < 0) goto LAB_0156ef0c;
    }
    local_f0 = param_4;
    local_ec = puVar15;
    FUN_0156f6f0(&local_60,*(undefined4 *)(param_2 + 100),&local_f0);
    if (local_60 == (uint *)0x0) {
      FUN_01541e04(&local_f0);
      goto LAB_0156b108;
    }
    *param_1 = (int)local_60;
    param_1[1] = (int)local_5c;
    param_1[2] = (int)local_58;
    param_1[3] = (int)local_54;
    param_1[4] = (int)local_50;
    FUN_01541e04(&local_f0);
  }
  DataMemoryBarrier(0xb);
  do {
    uVar14 = *param_4;
    bVar5 = (bool)hasExclusiveAccess(param_4);
  } while (!bVar5);
  *param_4 = uVar14 - 1;
  goto LAB_0156b2a8;
LAB_0156e8e0:
  uVar39 = (uint)*(char *)((int)puVar15 + uVar47);
  if (-1 < (int)uVar39) {
    uVar39 = *puVar15 & 0x80808080;
    uVar47 = LZCOUNT((*puVar15 & 0x80) << 0x18 | (uVar39 >> 8 & 0xff) << 0x10 |
                     (uVar39 >> 0x10 & 0xff) << 8 | uVar39 >> 0x18);
    uVar39 = (uint)*(byte *)((int)puVar15 + (uVar47 >> 3));
    uVar47 = uVar47 >> 3;
  }
  iVar20 = *(int *)(iVar46 + 0x1c);
  iVar21 = *(int *)(iVar46 + 0x18);
  bVar4 = (byte)(uVar19 >> 0x19);
  *(byte *)((int)puVar15 + uVar47) = bVar4;
  *(uint *)(iVar46 + 0x18) = iVar21 - (uVar39 & 1);
  *(int *)(iVar46 + 0x1c) = iVar20 + 1;
  *(byte *)((int)puVar15 + (uVar16 & uVar47 - 4) + 4) = bVar4;
  puVar15[uVar47 * -5 + -5] = (uint)local_178;
  puVar15[uVar47 * -5 + -4] = (uint)puStack_174;
  puVar15[uVar47 * -5 + -3] = (uint)puStack_170;
  puVar15[uVar47 * -5 + -2] = (uint)local_16c;
  puVar15[uVar47 * -5 + -1] = (uint)piVar35;
  puVar36 = puStack_170;
LAB_0156b7c4:
  *(int *)(iVar46 + 8) = *(int *)(iVar46 + 8) + 1;
  if (param_4 != (uint *)0x0) {
    do {
      uVar19 = *param_4;
      bVar5 = (bool)hasExclusiveAccess(param_4);
    } while (!bVar5);
    *param_4 = uVar19 + 1;
    uVar53 = CONCAT44(local_78._4_4_,(uint *)local_78);
    uStack_ac = CONCAT44(uStack_ac._4_4_,(undefined4)uStack_ac);
    if (-1 < (int)uVar19) {
      do {
        iVar20 = *piVar35;
        bVar5 = (bool)hasExclusiveAccess(piVar35);
      } while (!bVar5);
      *piVar35 = iVar20 + 1;
      uVar53 = CONCAT44(local_78._4_4_,(uint *)local_78);
      uStack_ac = CONCAT44(uStack_ac._4_4_,(undefined4)uStack_ac);
      if (-1 < iVar20) {
        iVar20 = *(int *)(param_2 + 0x6c);
        if (*(int *)(iVar20 + 8) == 0) {
          *(undefined4 *)(iVar20 + 8) = 0xffffffff;
          uVar19 = FUN_01676068(iVar20 + 0x20,param_4[3],param_4[4]);
          if (*(int *)(iVar20 + 0x18) == 0) {
            FUN_0152d6bc(iVar20 + 0x10,iVar20 + 0x20);
          }
          uVar16 = *(uint *)(iVar20 + 0x14);
          puVar15 = *(uint **)(iVar20 + 0x10);
          bVar5 = false;
          local_1bc = 0;
          uVar39 = uVar19;
          do {
            uVar39 = uVar16 & uVar39;
            uVar47 = *(uint *)((int)puVar15 + uVar39);
            uVar17 = uVar47 ^ (uVar19 >> 0x19) * 0x1010101;
            uVar17 = ~uVar17 & 0x80808080 & uVar17 + 0xfefefeff;
            while (uVar17 != 0) {
              uVar50 = uVar39 + ((uint)LZCOUNT(uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                                               (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) >> 3)
                       & uVar16;
              iVar21 = FUN_01670d54(param_4,puVar15[uVar50 * -2 + -2]);
              uVar17 = uVar17 - 1 & uVar17;
              if (iVar21 != 0) {
                puVar36 = (uint *)puVar15[uVar50 * -2 + -1];
                puVar15[uVar50 * -2 + -1] = (uint)piVar35;
                DataMemoryBarrier(0xb);
                do {
                  uVar19 = *param_4;
                  bVar5 = (bool)hasExclusiveAccess(param_4);
                } while (!bVar5);
                *param_4 = uVar19 - 1;
                if (uVar19 == 1) {
                  DataMemoryBarrier(0xb);
                  FUN_01670d04(param_4);
                }
                DataMemoryBarrier(0xb);
                do {
                  uVar19 = *puVar36;
                  bVar5 = (bool)hasExclusiveAccess(puVar36);
                } while (!bVar5);
                *puVar36 = uVar19 - 1;
                if (uVar19 == 1) {
                  DataMemoryBarrier(0xb);
                  FUN_0155d2bc(puVar36);
                }
                goto LAB_0156b9d0;
              }
            }
            uVar17 = uVar47 & 0x80808080;
            if (bVar5) {
LAB_0156b92c:
              if ((uVar17 & uVar47 << 1) != 0) goto LAB_0156e9f4;
              bVar5 = true;
            }
            else {
              if (uVar17 != 0) {
                local_1c8 = uVar39 + ((uint)LZCOUNT((uVar47 & 0x80) << 0x18 |
                                                    (uVar17 >> 8 & 0xff) << 0x10 |
                                                    (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18)
                                     >> 3) & uVar16;
                goto LAB_0156b92c;
              }
              bVar5 = false;
            }
            local_1bc = local_1bc + 4;
            uVar39 = local_1bc + uVar39;
          } while( true );
        }
        FUN_01306fc8(&DAT_01cfbd80);
        uVar53 = CONCAT44(local_78._4_4_,(uint *)local_78);
        uStack_ac = CONCAT44(uStack_ac._4_4_,(undefined4)uStack_ac);
      }
    }
    goto LAB_0156ef0c;
  }
  goto LAB_0156b9e4;
code_r0x0156df1c:
  local_78._0_4_ = (uint *)0x0;
  local_78._4_4_ = (uint *)local_1f0;
  local_70 = puVar15;
  local_6c = puVar42;
  if (local_f4 == local_fc) {
    FUN_013e62c4(&local_fc);
  }
  puVar23 = (undefined4 *)(local_f8 + (int)puVar51 * 0x10);
  *puVar23 = (uint *)local_78;
  puVar23[1] = local_78._4_4_;
  puVar23[2] = local_70;
  puVar23[3] = local_6c;
LAB_0156df60:
  local_f4 = (uint *)((int)puVar51 + 1);
  goto LAB_0156c8b8;
LAB_0156bc4c:
  do {
    uVar19 = *local_bc;
    bVar5 = (bool)hasExclusiveAccess(local_bc);
  } while (!bVar5);
  *local_bc = uVar19 + 1;
  uVar53 = local_78;
  if ((int)uVar19 < 0) goto LAB_0156ef0c;
  if (local_b0 != (uint *)0x0) {
    do {
      uVar19 = *local_b0;
      bVar5 = (bool)hasExclusiveAccess(local_b0);
    } while (!bVar5);
    *local_b0 = uVar19 + 1;
    if ((int)uVar19 < 0) goto LAB_0156ef0c;
  }
  do {
    uVar19 = *local_b4;
    bVar5 = (bool)hasExclusiveAccess(local_b4);
  } while (!bVar5);
  *local_b4 = uVar19 + 1;
  if ((int)uVar19 < 0) goto LAB_0156ef0c;
  local_dc = (uint *)&DAT_00000003;
  DataMemoryBarrier(0xb);
  local_f0 = local_c0;
  local_ec = local_bc;
  local_e8 = local_b8;
  local_e4 = local_b4;
  local_e0 = local_b0;
  if (piVar35[2] != 0) {
    FUN_015515b4(piVar35 + 2,&local_f0);
  }
  if (local_f0 != (uint *)0x0) {
    local_5c = local_ec;
    local_58 = local_e8;
    local_54 = local_e4;
    local_50 = local_e0;
    local_4c = local_dc;
    local_48 = local_d8;
    local_44 = puStack_d4;
    local_40 = puStack_d0;
    local_3c = iStack_cc;
    iStack_38 = iStack_c8;
    local_60 = local_f0;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_004a67b7,0x1e,&local_60,&DAT_01cfbf58,&DAT_01cfbf00);
  }
  if (*(int *)(iVar46 + 8) == 0) {
    *(undefined4 *)(iVar46 + 8) = 0xffffffff;
    uVar19 = FUN_0155ce44(iVar18,&local_188);
    iVar18 = *(int *)(iVar46 + 0x10);
    local_1b4 = (uVar19 >> 0x19) * 0x1010101;
    uVar39 = *(uint *)(iVar46 + 0x14);
    local_1b0 = 0;
    while( true ) {
      uVar19 = uVar39 & uVar19;
      uVar16 = *(uint *)(iVar18 + uVar19);
      uVar47 = ~(uVar16 ^ local_1b4) & 0x80808080 & (uVar16 ^ local_1b4) + 0xfefefeff;
      while (uVar47 != 0) {
        uVar17 = uVar19 + ((uint)LZCOUNT(uVar47 << 0x18 | (uVar47 >> 8 & 0xff) << 0x10 |
                                         (uVar47 >> 0x10 & 0xff) << 8 | uVar47 >> 0x18) >> 3) &
                 uVar39;
        iVar20 = FUN_0156f85c(&local_188,iVar18 + -0x14 + uVar17 * -0x14);
        uVar47 = uVar47 - 1 & uVar47;
        if (iVar20 != 0) {
          iVar20 = ((int)(uVar17 * 0x14) >> 2) * -0x33333333;
          puVar15 = (uint *)(iVar18 + (iVar20 - 4U & uVar39));
          uVar39 = *puVar15;
          uVar19 = *(uint *)(iVar18 + iVar20) & 0x80808080 & *(uint *)(iVar18 + iVar20) << 1;
          uVar19 = ((uint)LZCOUNT(uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 |
                                  (uVar19 >> 0x10 & 0xff) << 8 | uVar19 >> 0x18) >> 3) +
                   ((uint)LZCOUNT(uVar39 & 0x80808080 & uVar39 << 1) >> 3);
          iVar21 = 0x80;
          if (uVar19 < 4) {
            iVar21 = *(int *)(iVar46 + 0x18);
          }
          iVar31 = iVar18 + uVar17 * -0x14;
          if (uVar19 < 4) {
            *(int *)(iVar46 + 0x18) = iVar21 + 1;
            iVar21 = 0xff;
          }
          *(char *)(iVar18 + iVar20) = (char)iVar21;
          iVar18 = *(int *)(iVar46 + 0x1c);
          *(char *)(puVar15 + 1) = (char)iVar21;
          *(int *)(iVar46 + 0x1c) = iVar18 + -1;
          local_60 = *(uint **)(iVar31 + -0x14);
          local_5c = *(uint **)(iVar31 + -0x10);
          local_58 = *(uint **)(iVar31 + -0xc);
          local_54 = *(uint **)(iVar31 + -8);
          puVar15 = *(uint **)(iVar31 + -4);
          local_50 = puVar15;
          if (local_60 != (uint *)0x0) {
            FUN_0152a2e4(&local_60);
            DataMemoryBarrier(0xb);
            do {
              uVar19 = *puVar15;
              bVar5 = (bool)hasExclusiveAccess(puVar15);
            } while (!bVar5);
            *puVar15 = uVar19 - 1;
            if (uVar19 == 1) {
              DataMemoryBarrier(0xb);
              FUN_0155d2bc(puVar15);
            }
          }
          goto LAB_0156bedc;
        }
      }
      if ((uVar16 & 0x80808080 & uVar16 << 1) != 0) break;
      local_1b0 = local_1b0 + 4;
      uVar19 = uVar19 + local_1b0;
    }
LAB_0156bedc:
    *(int *)(iVar46 + 8) = *(int *)(iVar46 + 8) + 1;
    do {
      uVar19 = *local_188;
      bVar5 = (bool)hasExclusiveAccess(local_188);
    } while (!bVar5);
    *local_188 = uVar19 + 1;
    uVar53 = local_78;
    if (-1 < (int)uVar19) {
      do {
        uVar19 = *local_184;
        bVar5 = (bool)hasExclusiveAccess(local_184);
      } while (!bVar5);
      *local_184 = uVar19 + 1;
      if (-1 < (int)uVar19) {
        if (local_17c != (uint *)0x0) {
          do {
            uVar19 = *local_17c;
            bVar5 = (bool)hasExclusiveAccess(local_17c);
          } while (!bVar5);
          *local_17c = uVar19 + 1;
          if ((int)uVar19 < 0) goto LAB_0156ef0c;
        }
        local_78._0_4_ = local_188;
        local_78._4_4_ = local_184;
        local_70 = local_180;
        local_6c = local_17c;
        do {
          uVar19 = *local_c0;
          bVar5 = (bool)hasExclusiveAccess(local_c0);
        } while (!bVar5);
        *local_c0 = uVar19 + 1;
        uVar53 = CONCAT44(local_184,local_188);
        if (-1 < (int)uVar19) {
          do {
            uVar19 = *local_bc;
            bVar5 = (bool)hasExclusiveAccess(local_bc);
          } while (!bVar5);
          *local_bc = uVar19 + 1;
          uVar53 = CONCAT44(local_184,local_188);
          if (-1 < (int)uVar19) {
            if (local_b0 != (uint *)0x0) {
              do {
                uVar19 = *local_b0;
                bVar5 = (bool)hasExclusiveAccess(local_b0);
              } while (!bVar5);
              *local_b0 = uVar19 + 1;
              uVar53 = CONCAT44(local_184,local_188);
              if ((int)uVar19 < 0) goto LAB_0156ef0c;
            }
            do {
              uVar19 = *local_b4;
              bVar5 = (bool)hasExclusiveAccess(local_b4);
            } while (!bVar5);
            *local_b4 = uVar19 + 1;
            uVar53 = CONCAT44(local_184,local_188);
            if (-1 < (int)uVar19) {
              local_158 = local_b0;
              local_168 = local_c0;
              puStack_164 = local_bc;
              puStack_160 = local_b8;
              puStack_15c = local_b4;
              if (*(int *)(uVar14 + 8) == 0) {
                *(undefined4 *)(uVar14 + 8) = 0xffffffff;
                local_f0 = local_188;
                local_ec = local_184;
                local_e8 = local_180;
                local_e4 = local_17c;
                uVar19 = FUN_0155ce44(uVar14 + 0x20);
                if (*(int *)(uVar14 + 0x18) == 0) {
                  FUN_0152e680(uVar14 + 0x10,uVar14 + 0x20);
                }
                uVar16 = *(uint *)(uVar14 + 0x14);
                local_1b0 = (uVar19 >> 0x19) * 0x1010101;
                puVar15 = *(uint **)(uVar14 + 0x10);
                bVar5 = false;
                local_1ac = 0;
                uVar39 = uVar19;
                do {
                  uVar39 = uVar16 & uVar39;
                  uVar17 = *(uint *)((int)puVar15 + uVar39);
                  uVar47 = ~(uVar17 ^ local_1b0) & 0x80808080 & (uVar17 ^ local_1b0) + 0xfefefeff;
                  while (uVar47 != 0) {
                    uVar50 = uVar39 + ((uint)LZCOUNT(uVar47 << 0x18 | (uVar47 >> 8 & 0xff) << 0x10 |
                                                     (uVar47 >> 0x10 & 0xff) << 8 | uVar47 >> 0x18)
                                      >> 3) & uVar16;
                    iVar46 = FUN_0156f85c(&local_f0,puVar15 + uVar50 * -9 + -9);
                    uVar47 = uVar47 - 1 & uVar47;
                    if (iVar46 != 0) {
                      local_60 = (uint *)puVar15[uVar50 * -9 + -5];
                      local_5c = (uint *)puVar15[uVar50 * -9 + -4];
                      local_58 = (uint *)puVar15[uVar50 * -9 + -3];
                      local_54 = (uint *)puVar15[uVar50 * -9 + -2];
                      local_50 = (uint *)puVar15[uVar50 * -9 + -1];
                      puVar15[uVar50 * -9 + -5] = (uint)local_168;
                      puVar15[uVar50 * -9 + -4] = (uint)puStack_164;
                      puVar15[uVar50 * -9 + -3] = (uint)puStack_160;
                      puVar15[uVar50 * -9 + -2] = (uint)puStack_15c;
                      puVar15[uVar50 * -9 + -1] = (uint)local_158;
                      FUN_0152a2e4(&local_f0);
                      if (local_60 != (uint *)0x0) {
                        FUN_01542eb4(&local_60);
                      }
                      goto LAB_0156c19c;
                    }
                  }
                  uVar47 = uVar17 & 0x80808080;
                  if (bVar5) {
LAB_0156c118:
                    if ((uVar47 & uVar17 << 1) != 0) goto LAB_0156eaa0;
                    bVar5 = true;
                  }
                  else {
                    if (uVar47 != 0) {
                      local_1b4 = uVar39 + ((uint)LZCOUNT((uVar17 & 0x80) << 0x18 |
                                                          (uVar47 >> 8 & 0xff) << 0x10 |
                                                          (uVar47 >> 0x10 & 0xff) << 8 |
                                                          uVar47 >> 0x18) >> 3) & uVar16;
                      goto LAB_0156c118;
                    }
                    bVar5 = false;
                  }
                  local_1ac = local_1ac + 4;
                  uVar39 = local_1ac + uVar39;
                } while( true );
              }
              FUN_01306fc8(&DAT_01cfbd20);
              uVar53 = CONCAT44(local_78._4_4_,(uint *)local_78);
            }
          }
        }
      }
    }
    goto LAB_0156ef0c;
  }
  puVar28 = &DAT_01cfbe20;
  goto LAB_0156eda0;
LAB_0156eb4c:
  uVar19 = (uint)*(char *)((int)puVar36 + local_1b0);
  if (-1 < (int)uVar19) {
    uVar19 = *puVar36 & 0x80808080;
    local_1b0 = LZCOUNT((*puVar36 & 0x80) << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 |
                        (uVar19 >> 0x10 & 0xff) << 8 | uVar19 >> 0x18);
    uVar19 = (uint)*(byte *)((int)puVar36 + (local_1b0 >> 3));
    local_1b0 = local_1b0 >> 3;
  }
  iVar18 = *(int *)(iVar46 + 0x1c);
  iVar20 = *(int *)(iVar46 + 0x18);
  bVar4 = (byte)(uVar14 >> 0x19);
  *(byte *)((int)puVar36 + local_1b0) = bVar4;
  *(uint *)(iVar46 + 0x18) = iVar20 - (uVar19 & 1);
  *(int *)(iVar46 + 0x1c) = iVar18 + 1;
  *(byte *)((int)puVar36 + (uVar39 & local_1b0 - 4) + 4) = bVar4;
  puVar36[local_1b0 * -7 + -7] = (uint)param_4;
  puVar36[local_1b0 * -7 + -6] = (uint)puVar15;
  puVar36[local_1b0 * -7 + -5] = (uint)local_150;
  puVar36[local_1b0 * -7 + -4] = (uint)puStack_14c;
  puVar36[local_1b0 * -7 + -3] = (uint)puStack_148;
  puVar36[local_1b0 * -7 + -2] = (uint)puStack_144;
  puVar36[local_1b0 * -7 + -1] = (uint)local_140;
LAB_0156c654:
  *(int *)(iVar46 + 8) = *(int *)(iVar46 + 8) + 1;
LAB_0156c668:
  *param_1 = (int)local_c0;
  param_1[1] = (int)local_bc;
  param_1[2] = (int)local_b8;
  param_1[3] = (int)local_b4;
  param_1[4] = (int)local_b0;
  goto LAB_0156c678;
LAB_0156e9f4:
  uVar39 = (uint)*(char *)((int)puVar15 + local_1c8);
  if (-1 < (int)uVar39) {
    uVar39 = *puVar15 & 0x80808080;
    uVar47 = LZCOUNT((*puVar15 & 0x80) << 0x18 | (uVar39 >> 8 & 0xff) << 0x10 |
                     (uVar39 >> 0x10 & 0xff) << 8 | uVar39 >> 0x18);
    uVar39 = (uint)*(byte *)((int)puVar15 + (uVar47 >> 3));
    local_1c8 = uVar47 >> 3;
  }
  iVar21 = *(int *)(iVar20 + 0x1c);
  puVar36 = *(uint **)(iVar20 + 0x18);
  bVar4 = (byte)(uVar19 >> 0x19);
  *(byte *)((int)puVar15 + local_1c8) = bVar4;
  *(uint *)(iVar20 + 0x18) = (int)puVar36 - (uVar39 & 1);
  *(int *)(iVar20 + 0x1c) = iVar21 + 1;
  *(byte *)((int)puVar15 + (uVar16 & local_1c8 - 4) + 4) = bVar4;
  puVar15[local_1c8 * -2 + -2] = (uint)param_4;
  puVar15[local_1c8 * -2 + -1] = (uint)piVar35;
LAB_0156b9d0:
  *(int *)(iVar20 + 8) = *(int *)(iVar20 + 8) + 1;
LAB_0156b9e4:
  if (*param_3 == '\x01') {
    puVar23 = (undefined4 *)0x0;
    if (param_3[1] == '\0') {
      piVar48 = *(int **)(param_2 + 0x38);
      do {
        iVar20 = *piVar48;
        bVar5 = (bool)hasExclusiveAccess(piVar48);
      } while (!bVar5);
      *piVar48 = iVar20 + 1;
      uVar53 = CONCAT44(local_78._4_4_,(uint *)local_78);
      uStack_ac = CONCAT44(uStack_ac._4_4_,(undefined4)uStack_ac);
      if (iVar20 < 0) goto LAB_0156ef0c;
      uVar40 = *(undefined4 *)(param_2 + 0x3c);
      puVar23 = (undefined4 *)thunk_FUN_01be5118(8);
      if (puVar23 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,8);
      }
      *puVar23 = piVar48;
      puVar23[1] = uVar40;
    }
    FUN_0157536c(param_1,param_2,puVar23);
LAB_0156bb44:
    if (*param_1 != 0) {
      local_c0 = (uint *)*param_1;
      local_bc = (uint *)param_1[1];
      local_b8 = (uint *)param_1[2];
      local_b4 = (uint *)param_1[3];
      local_b0 = (uint *)param_1[4];
      puVar15 = local_c0 + 1;
      do {
        uVar19 = *puVar15;
        while (uVar19 != 0xffffffff) {
          if ((int)uVar19 < 0) {
            local_5c = (uint *)&DAT_0132b6a0;
            local_60 = (uint *)&DAT_01d2e878;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_00590e5f,&local_60,&DAT_01d2e880);
          }
          uVar39 = *puVar15;
          if (uVar39 == uVar19) {
            bVar6 = (bool)hasExclusiveAccess(puVar15);
            if (bVar6) {
              *puVar15 = uVar19 + 1;
            }
            bVar5 = false;
            if (bVar6) {
              DataMemoryBarrier(0xb);
              bVar5 = true;
            }
          }
          else {
            bVar5 = false;
            ClearExclusiveLocal();
          }
          uVar19 = uVar39;
          if (bVar5) goto LAB_0156bc4c;
        }
        HintYield();
      } while( true );
    }
  }
  else {
    if (*param_3 == '\x05') {
      uVar19 = (uint)*(byte *)(param_2 + 0x88);
      if (uVar19 < 3) {
        puVar15 = *(uint **)(param_3 + 8);
        puVar51 = *(uint **)(param_3 + 4);
        pcVar22 = (char *)FUN_0196b3a8(puVar51,puVar15,"$ref~!",4);
        if (pcVar22 != (char *)0x0) {
          piVar48 = (int *)0x0;
          local_40 = *(uint **)(param_3 + 0xc);
          if (puVar51 == (uint *)0x0) {
            local_40 = (uint *)0x0;
          }
          local_60 = (uint *)(uint)(puVar51 != (uint *)0x0);
          local_4c = (uint *)0x0;
          local_5c = (uint *)0x0;
          local_58 = puVar51;
          local_54 = puVar15;
          local_50 = local_60;
          local_48 = puVar51;
          local_44 = puVar15;
          FUN_0153a398(auStack_138,&local_60);
          if (local_12c != 0) {
            piVar48 = (int *)FUN_0156f8e0(auStack_138);
          }
          if (*pcVar22 == '\x03') {
            FUN_0154694c(&local_f0,param_2,*(undefined4 *)(pcVar22 + 8),
                         *(undefined4 *)(pcVar22 + 0xc),"$ref~!",4);
            if (local_f0 == (uint *)&DAT_00000001) goto LAB_0156c710;
            FUN_0157536c(&local_60,param_2,0);
            *param_1 = (int)local_60;
            param_1[1] = (int)local_5c;
            param_1[2] = (int)local_58;
            param_1[3] = (int)local_54;
            param_1[4] = (int)local_50;
LAB_0156e9a0:
            if (piVar48 != (int *)0x0) {
              DataMemoryBarrier(0xb);
              do {
                iVar20 = *piVar48;
                bVar5 = (bool)hasExclusiveAccess(piVar48);
              } while (!bVar5);
              *piVar48 = iVar20 + -1;
              if (iVar20 == 1) {
                DataMemoryBarrier(0xb);
                FUN_01670fb0(piVar48);
              }
            }
          }
          else {
            local_e8 = (uint *)FUN_01546624(*(undefined4 *)(param_2 + 0x38),
                                            *(undefined4 *)(param_2 + 0x3c),"$ref~!",4,pcVar22);
            local_ec = (uint *)0x0;
            local_f0 = (uint *)&DAT_00000001;
LAB_0156c710:
            puVar36 = local_e8;
            puVar15 = local_ec;
            local_78._0_4_ = local_ec;
            local_78._4_4_ = local_e8;
            puVar23 = (undefined4 *)thunk_FUN_01be5118(0x10);
            if (puVar23 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(4,0x10);
            }
            if (puVar15 == (uint *)0x0) {
              *param_1 = 0;
              param_1[1] = (int)puVar36;
              thunk_FUN_01be4678();
              goto LAB_0156e9a0;
            }
            *puVar23 = 0;
            puVar23[1] = 0;
            puVar23[2] = puVar15;
            puVar23[3] = puVar36;
            local_100 = 1;
            local_108 = 1;
            local_104 = puVar23;
            FUN_01575584(&local_60,param_2,&local_108,piVar48);
            *param_1 = (int)local_60;
            param_1[1] = (int)local_5c;
            param_1[2] = (int)local_58;
            param_1[3] = (int)local_54;
            param_1[4] = (int)local_50;
          }
          if (local_12c == 0) {
            FUN_0152a358(auStack_138);
          }
          goto LAB_0156bb44;
        }
      }
      uVar40 = 0;
      puVar15 = *(uint **)(param_3 + 0xc);
      if (((uint *)0xfffffff < puVar15) ||
         (puVar36 = (uint *)((int)puVar15 * 0x10), (uint *)0x7ffffffc < puVar36)) {
LAB_0156c6d0:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar40,puVar36);
      }
      if (puVar36 == (uint *)0x0) {
        local_f8 = 4;
        local_fc = (uint *)0x0;
      }
      else {
        uVar40 = 4;
        local_f8 = FUN_01298504(puVar36,4);
        if (local_f8 == 0) goto LAB_0156c6d0;
        local_fc = puVar15;
      }
      local_f4 = (uint *)0x0;
      puVar23 = (undefined4 *)FUN_01671160();
      uVar40 = *puVar23;
      iVar20 = puVar23[1];
      puVar23 = (undefined4 *)FUN_01671044();
      uVar40 = (**(code **)(iVar20 + 0xc))(uVar40);
      FUN_00653054(&local_50,puVar23[2],*puVar23,puVar23[1],puVar23[2],puVar23[3],puVar23 + 8,uVar40
                  );
      local_f0 = &DAT_0056d238;
      local_ec = (uint *)0x0;
      local_e8 = (uint *)0x0;
      local_e4 = (uint *)0x0;
      local_e0 = local_50;
      local_dc = local_4c;
      local_d8 = local_48;
      puStack_d4 = local_44;
      puStack_d0 = local_40;
      iStack_cc = local_3c;
      iStack_c8 = iStack_38;
      iStack_c4 = iStack_34;
      local_58 = *(uint **)(param_3 + 4);
      local_54 = *(uint **)(param_3 + 8);
      if (local_58 == (uint *)0x0) {
        puVar15 = (uint *)0x0;
      }
      local_60 = (uint *)(uint)(local_58 != (uint *)0x0);
      uVar39 = uVar19 & 6;
      uVar16 = (uint)&local_78 | 4;
      bVar5 = uVar19 == 3;
      iVar20 = *(int *)(param_2 + 0x38);
      puVar36 = *(uint **)(param_2 + 0x3c);
      iVar21 = *(int *)(param_2 + 0x48);
      local_4c = (uint *)0x0;
      local_5c = (uint *)0x0;
      local_50 = local_60;
      local_48 = local_58;
      local_44 = local_54;
      local_40 = puVar15;
LAB_0156c8b8:
      uVar53 = FUN_01a41998(&local_60);
      puVar15 = local_e4;
      puVar23 = (undefined4 *)((ulonglong)uVar53 >> 0x20);
      iVar31 = (int)uVar53;
      if (iVar31 != 0) {
        piVar48 = *(int **)(iVar31 + 4);
        iVar44 = *(int *)(iVar31 + 8);
        if (*(int *)(iVar21 + 0xf4) != 0) {
          uVar17 = FUN_0155d010(iVar21 + 0xf8,piVar48,iVar44);
          uVar47 = uVar17 >> 0x19;
          iVar33 = *(int *)(iVar21 + 0xe8);
          uVar50 = *(uint *)(iVar21 + 0xec);
          local_1e4 = 0;
          do {
            uVar17 = uVar50 & uVar17;
            uVar49 = *(uint *)(iVar33 + uVar17);
            uVar24 = uVar49 ^ uVar47 * 0x1010101;
            uVar24 = ~uVar24 & 0x80808080 & uVar24 + 0xfefefeff;
            while (uVar24 != 0) {
              uVar25 = uVar24 >> 8;
              uVar1 = uVar24 >> 0x10;
              uVar2 = uVar24 >> 0x18;
              uVar3 = uVar24 << 0x18;
              uVar24 = uVar24 - 1 & uVar24;
              uVar25 = uVar17 + ((uint)LZCOUNT(uVar3 | (uVar25 & 0xff) << 0x10 | (uVar1 & 0xff) << 8
                                               | uVar2) >> 3) & uVar50;
              iVar26 = iVar33 + -0x14 + uVar25 * -0x14;
              if (iVar44 == *(int *)(iVar26 + 8)) {
                iVar26 = thunk_FUN_01bed842(piVar48,*(undefined4 *)(iVar26 + 4),iVar44);
                if (iVar26 == 0) {
                  uVar40 = 0;
                  puVar15 = (uint *)((int)puVar36 + iVar44 + 1);
                  if ((int)puVar15 < 0) {
LAB_0156ef00:
                    /* WARNING: Subroutine does not return */
                    FUN_00664620(uVar40,local_1e8);
                  }
                  if (puVar15 == (uint *)0x0) {
                    local_1e8 = (uint *)&DAT_00000001;
                    puVar15 = (uint *)0x0;
                  }
                  else {
                    uVar40 = 1;
                    local_1e8 = (uint *)FUN_01298504(puVar15,1);
                    if (local_1e8 == (uint *)0x0) {
                      local_1e8 = puVar15;
                      goto LAB_0156ef00;
                    }
                  }
                  local_70 = (uint *)0x0;
                  local_78._0_4_ = puVar15;
                  local_78._4_4_ = local_1e8;
                  if (puVar15 < puVar36) {
                    FUN_01af7b44(&local_78,0,puVar36,1,1);
                  }
                  puVar42 = local_70;
                  puVar51 = local_78._4_4_;
                  puVar15 = (uint *)local_78;
                  FUN_01bed4e2((undefined1 *)((int)local_78._4_4_ + (int)local_70),iVar20 + 8,
                               puVar36);
                  puVar42 = (uint *)((int)puVar42 + (int)puVar36);
                  local_70 = puVar42;
                  if (puVar15 == puVar42) {
                    FUN_01af7b44(&local_78,puVar15,1,1,1);
                    puVar51 = local_78._4_4_;
                  }
                  *(undefined1 *)((int)puVar51 + (int)local_70) = 0x2f;
                  local_70 = (uint *)((int)puVar42 + 1);
                  FUN_015321f0(&local_78,piVar48,iVar44);
                  puVar51 = local_78._4_4_;
                  puVar15 = (uint *)local_78;
                  uVar54 = FUN_016bc0ec(local_78._4_4_,local_70);
                  piVar48 = (int *)uVar54;
                  iVar33 = iVar33 + uVar25 * -0x14;
                  FUN_019bb7e0(puVar15,puVar51);
                  iVar44 = *(int *)(iVar33 + -8);
                  iVar33 = *(int *)(iVar33 + -4);
                  do {
                    iVar26 = *piVar48;
                    bVar6 = (bool)hasExclusiveAccess(piVar48);
                  } while (!bVar6);
                  *piVar48 = iVar26 + 1;
                  uVar53 = CONCAT44(local_78._4_4_,(uint *)local_78);
                  if (iVar26 < 0) goto LAB_0156ef0c;
                  (**(code **)(iVar33 + 0xc))
                            (&local_78,iVar44 + (*(int *)(iVar33 + 8) - 1U & 0xfffffff8) + 8,
                             param_3 + 4,puVar23,uVar54,*(undefined4 *)(iVar31 + 4),
                             *(undefined4 *)(iVar31 + 8));
                  puVar51 = local_78._4_4_;
                  puVar15 = (uint *)local_78;
                  if ((uint *)local_78 != (uint *)0x0) {
                    FUN_006666fc(&local_78,*(undefined4 *)(iVar31 + 4),*(undefined4 *)(iVar31 + 8));
                    local_b4 = puVar15;
                    local_b0 = puVar51;
                    local_c0 = (uint *)local_78;
                    local_bc = local_78._4_4_;
                    local_b8 = local_70;
                    uStack_ac = uVar54;
                    puVar15 = (uint *)thunk_FUN_01be5118(0x1c);
                    if (puVar15 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_0066439c(4,0x1c);
                    }
                    *puVar15 = (uint)local_c0;
                    puVar15[1] = (uint)local_bc;
                    puVar15[2] = (uint)local_b8;
                    puVar15[3] = (uint)local_b4;
                    puVar15[4] = (uint)local_b0;
                    *(undefined8 *)(puVar15 + 5) = uStack_ac;
                    FUN_006666fc(local_a0,*(undefined4 *)(iVar31 + 4),*(undefined4 *)(iVar31 + 8));
                    local_78 = FUN_00703dd4(local_a0);
                    puVar51 = local_f4;
                    local_6c = (uint *)&DAT_01cfbcb0;
                    local_70 = puVar15;
                    if (local_f4 == local_fc) {
                      FUN_013e62c4(&local_fc);
                    }
                    puVar27 = (undefined8 *)(local_f8 + (int)puVar51 * 0x10);
                    *puVar27 = local_78;
                    *(uint **)(puVar27 + 1) = local_70;
                    *(uint **)((int)puVar27 + 0xc) = local_6c;
                    goto LAB_0156df60;
                  }
                  *param_1 = 0;
                  param_1[1] = (int)local_78._4_4_;
                  DataMemoryBarrier(0xb);
                  do {
                    iVar20 = *piVar48;
                    bVar5 = (bool)hasExclusiveAccess(piVar48);
                  } while (!bVar5);
                  *piVar48 = iVar20 + -1;
                  if (iVar20 == 1) {
                    DataMemoryBarrier(0xb);
                    FUN_0070451c(piVar48,(int)((ulonglong)uVar54 >> 0x20));
                  }
                  goto LAB_0156ecb8;
                }
              }
            }
            if ((uVar49 & 0x80808080 & uVar49 << 1) != 0) break;
            local_1e4 = local_1e4 + 4;
            uVar17 = uVar17 + local_1e4;
          } while( true );
        }
        bVar6 = bVar5;
        if (iVar44 == 4) {
          if (*piVar48 == 0x66657224) {
            uVar47 = 0;
            pcVar37 = FUN_015261d0;
          }
          else {
            bVar34 = false;
            bVar11 = false;
            bVar38 = false;
            bVar7 = false;
            bVar45 = false;
            bVar29 = false;
            bVar9 = false;
            if (*piVar48 == 0x6d756e65) {
              iVar44 = FUN_01570444(param_2,&DAT_004a5b54);
              uVar47 = 6;
              pcVar37 = FUN_015225b0;
              goto joined_r0x0156ce08;
            }
LAB_0156ca80:
            if (uVar19 != 0) {
LAB_0156ca98:
              if (bVar38) {
                iVar33 = thunk_FUN_01bed842(piVar48,"const",iVar44);
                if (iVar33 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0156d220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)(&DAT_0156d224 + *(int *)(&DAT_0156d224 + uVar19 * 4)))();
                  return;
                }
              }
              if (bVar9) {
                iVar33 = thunk_FUN_01bed842(piVar48,&DAT_005710a8,iVar44);
                bVar38 = false;
                if (iVar33 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0156cafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)(&DAT_0156cb00 + *(int *)(&DAT_0156cb00 + uVar19 * 4)))();
                  return;
                }
              }
              else if (iVar44 == 0x10) {
                iVar33 = thunk_FUN_01bed842(piVar48,&DAT_0056a218,0x10);
                if (iVar33 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0156d6bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)(&DAT_0156d6c0 + *(int *)(&DAT_0156d6c0 + uVar19 * 4)))();
                  return;
                }
                iVar33 = thunk_FUN_01bed842(piVar48,&DAT_00569628,0x10);
                bVar38 = true;
                if (iVar33 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0156cec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)(&DAT_0156cec4 + *(int *)(&DAT_0156cec4 + uVar19 * 4)))();
                  return;
                }
              }
              else {
                bVar38 = false;
                if (bVar34) {
                  iVar33 = thunk_FUN_01bed842(piVar48,
                                              "maximumconditional_messageevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tarpc-0.33.0/src/client.rs:566"
                                              ,iVar44);
                  if (iVar33 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0156d9f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)(&DAT_0156d9f8 + *(int *)(&DAT_0156d9f8 + uVar19 * 4)))();
                    return;
                  }
                  iVar33 = thunk_FUN_01bed842(piVar48,"minimum",iVar44);
                  if (iVar33 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0156d1a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)(&DAT_0156d1a8 + *(int *)(&DAT_0156d1a8 + uVar19 * 4)))();
                    return;
                  }
                }
              }
              if (bVar11) {
                iVar33 = thunk_FUN_01bed842(piVar48,"propertyNames",iVar44);
                if (iVar33 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0156d65c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)(&DAT_0156d660 + *(int *)(&DAT_0156d660 + uVar19 * 4)))();
                  return;
                }
              }
              if ((iVar44 == 4) && (*piVar48 == 0x65707974)) {
                    /* WARNING: Could not recover jumptable at 0x0156d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)(&DAT_0156d714 + *(int *)(&DAT_0156d714 + uVar19 * 4)))();
                return;
              }
              if (bVar38) {
                iVar33 = thunk_FUN_01bed842(piVar48,&DAT_00567978,iVar44);
                if (iVar33 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0156d794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)(&DAT_0156d798 + *(int *)(&DAT_0156d798 + uVar19 * 4)))();
                  return;
                }
              }
              if (bVar7) {
                iVar33 = thunk_FUN_01bed842(piVar48,"contentEncoding",iVar44);
                if (iVar33 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0156d918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)(&DAT_0156d91c + *(int *)(&DAT_0156d91c + uVar19 * 4)))();
                  return;
                }
              }
              if (bVar11) {
                iVar33 = thunk_FUN_01bed842(piVar48,"contentSchema",iVar44);
                if (iVar33 == 0) {
                  if ((uVar19 != 3 && uVar19 != 4) && (uVar19 != 5)) goto switchD_0156db24_default;
                  iVar44 = FUN_01570444(param_2,&DAT_004a5b7c);
                  uVar47 = 0x21;
                  pcVar37 = FUN_01535098;
                  goto joined_r0x0156ce08;
                }
              }
              if ((iVar44 == 2) && ((short)*piVar48 == 0x6669)) {
                switch(uVar19) {
                case 2:
                case 3:
                case 4:
                case 5:
                  iVar44 = FUN_01570444(param_2,&DAT_004a5b04);
                  uVar47 = 0x22;
                  pcVar37 = FUN_0151b200;
                  break;
                default:
                  goto switchD_0156db24_default;
                }
                goto joined_r0x0156ce08;
              }
              if ((bool)(bVar11 & bVar6)) {
                iVar33 = thunk_FUN_01bed842(piVar48,"$recursiveRef",iVar44);
                if (iVar33 == 0) {
                  uVar47 = 0x23;
                  pcVar37 = FUN_01519c88;
                  goto LAB_0156ded4;
                }
              }
              if (bVar45) {
                iVar33 = thunk_FUN_01bed842(piVar48,"dependentRequired",iVar44);
                if (iVar33 == 0) {
                  if ((uVar19 != 3) && (uVar19 != 4 && uVar19 != 5)) goto switchD_0156db24_default;
                  iVar44 = FUN_01570444(param_2,&DAT_004a5b54);
                  uVar47 = 0x24;
                  pcVar37 = FUN_0151aa84;
                  goto joined_r0x0156ce08;
                }
              }
              if (bVar38) {
                iVar33 = thunk_FUN_01bed842(piVar48,&DAT_00567d98,iVar44);
                if (iVar33 == 0) {
                  if ((uVar19 != 3 && uVar19 != 4) && (uVar19 != 5)) goto switchD_0156db24_default;
                  iVar44 = FUN_01570444(param_2,&DAT_004a5b04);
                  uVar47 = 0x25;
                  pcVar37 = FUN_0151a6bc;
                  goto joined_r0x0156ce08;
                }
                iVar33 = thunk_FUN_01bed842(piVar48,"unevaluatedItems",iVar44);
                if (bVar6) {
                  if (iVar33 != 0) goto LAB_0156d964;
                  iVar44 = FUN_01570444(param_2,&DAT_004a5b04);
                  uVar47 = 0x27;
                  pcVar37 = FUN_01543030;
                  if (iVar44 != 0) goto LAB_0156ded4;
                }
                else if (iVar33 != 0) goto LAB_0156dcec;
                if (uVar19 != 4 && uVar19 != 5) goto switchD_0156db24_default;
                iVar44 = FUN_01570444(param_2,&DAT_004a5b2c);
                uVar47 = 0x27;
                pcVar37 = FUN_01543030;
                goto joined_r0x0156ce08;
              }
              if (bVar6) {
LAB_0156d964:
                if (iVar44 == 0x15) {
                  iVar33 = thunk_FUN_01bed842(piVar48,"unevaluatedProperties",0x15);
                  if (iVar33 == 0) {
                    iVar33 = FUN_01570444(param_2,&DAT_004a5b04);
                    uVar47 = 0x28;
                    pcVar37 = FUN_0154aa94;
                    if (iVar33 != 0) goto LAB_0156ded4;
                  }
                  goto LAB_0156dcf4;
                }
              }
              else {
LAB_0156dcec:
                if (iVar44 == 0x15) {
LAB_0156dcf4:
                  iVar33 = thunk_FUN_01bed842(piVar48,"unevaluatedProperties",iVar44);
                  if (iVar33 == 0) {
                    if (uVar19 != 4 && uVar19 != 5) goto switchD_0156db24_default;
                    iVar44 = FUN_01570444(param_2,&DAT_004a5b2c);
                    uVar47 = 0x28;
                    pcVar37 = FUN_0154aa94;
                    goto joined_r0x0156ce08;
                  }
                }
              }
              if (bVar29) {
                iVar33 = thunk_FUN_01bed842(piVar48,"prefixItems",iVar44);
                if (iVar33 == 0) {
                  if (uVar19 == 5 || uVar19 == 4) {
                    iVar44 = FUN_01570444(param_2,&DAT_004a5b04);
                    uVar47 = 0x26;
                    pcVar37 = FUN_0151a380;
                    goto joined_r0x0156ce08;
                  }
                }
                else {
                  iVar44 = thunk_FUN_01bed842(piVar48,"$dynamicRef",iVar44);
                  if (uVar39 == 4) {
                    uVar47 = 0x29;
                    pcVar37 = FUN_0151a308;
                    if (iVar44 == 0) goto LAB_0156ded4;
                  }
                }
              }
              goto switchD_0156db24_default;
            }
            if (bVar34) {
              iVar33 = thunk_FUN_01bed842(piVar48,
                                          "maximumconditional_messageevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tarpc-0.33.0/src/client.rs:566"
                                          ,iVar44);
              if (iVar33 == 0) {
                uVar47 = 0x17;
                pcVar37 = FUN_015191a8;
              }
              else {
                iVar33 = thunk_FUN_01bed842(piVar48,"minimum",iVar44);
                bVar34 = true;
                if (iVar33 != 0) goto LAB_0156ca98;
                uVar47 = 0x18;
                pcVar37 = FUN_01519214;
              }
            }
            else {
              bVar34 = false;
              if ((iVar44 != 4) || (*piVar48 != 0x65707974)) goto LAB_0156ca98;
              uVar47 = 0x19;
              pcVar37 = FUN_01519280;
            }
          }
LAB_0156ded4:
          (*pcVar37)(&local_78,param_2,param_3 + 4,puVar23);
          puVar51 = local_f4;
          local_1f0 = local_1f0 & 0xffffff00 | uVar47;
          if ((uint *)local_78 == (uint *)0x0) goto switchD_0156db24_default;
          puVar15 = local_78._4_4_;
          puVar42 = local_70;
          if (local_78._4_4_ != (uint *)0x0) goto code_r0x0156df1c;
          iVar20 = FUN_01594a60(local_70);
          *param_1 = 0;
          param_1[1] = iVar20;
LAB_0156ecb8:
          FUN_0152a358(&local_f0);
          FUN_0154a0f0(&local_fc);
          goto LAB_0156bb44;
        }
        if (iVar44 == 0xf) {
          iVar33 = thunk_FUN_01bed842(piVar48,"additionalItems",0xf);
          bVar38 = false;
          if (iVar33 != 0) goto LAB_0156cf40;
          iVar44 = FUN_01570444(param_2,&DAT_004a5b04);
          uVar47 = 1;
          pcVar37 = FUN_01525e3c;
        }
        else if (iVar44 == 5) {
          iVar33 = thunk_FUN_01bed842(piVar48,"allOf",5);
          if (iVar33 == 0) {
            iVar44 = FUN_01570444(param_2,&DAT_004a5b04);
            uVar47 = 3;
            pcVar37 = FUN_015237e8;
          }
          else {
            iVar33 = thunk_FUN_01bed842(piVar48,"anyOf",5);
            bVar38 = true;
            if (iVar33 != 0) goto LAB_0156cf40;
            iVar44 = FUN_01570444(param_2,&DAT_004a5b04);
            uVar47 = 4;
            pcVar37 = FUN_01523334;
          }
        }
        else {
          if (iVar44 == 0xc) {
            iVar33 = thunk_FUN_01bed842(piVar48,"dependencies",0xc);
            if (iVar33 == 0) {
              iVar44 = FUN_01570444(param_2,&DAT_004a5b04);
              uVar47 = 5;
              pcVar37 = FUN_01522e5c;
              goto joined_r0x0156ce08;
            }
            bVar34 = false;
            bVar38 = false;
            bVar7 = false;
            bVar6 = false;
            bVar9 = false;
            bVar45 = false;
            bVar29 = false;
            bVar11 = false;
            if (uVar19 != 3) goto LAB_0156ca80;
            goto switchD_0156db24_default;
          }
          bVar38 = false;
          if (iVar44 == 0x14) {
            iVar33 = thunk_FUN_01bed842(piVar48,"additionalProperties",0x14);
            if (iVar33 == 0) {
              iVar44 = FUN_01570444(param_2,&DAT_004a5b04);
              uVar47 = 2;
              pcVar37 = FUN_01523c24;
              goto joined_r0x0156ce08;
            }
          }
LAB_0156cf40:
          bVar7 = iVar44 == 0xf;
          if (uVar19 == 3) {
            if (iVar44 == 6) {
              iVar33 = thunk_FUN_01bed842(piVar48,&DAT_004e94a9,6);
              if (iVar33 == 0) {
                iVar33 = FUN_01570444(param_2,&DAT_004a5adc);
                uVar47 = 7;
                pcVar37 = FUN_0152194c;
                if (iVar33 != 0) goto LAB_0156ded4;
              }
              goto LAB_0156cfb8;
            }
LAB_0156d02c:
            bVar29 = false;
            if (bVar38) goto LAB_0156d034;
          }
          else {
            if (iVar44 != 6) goto LAB_0156d02c;
LAB_0156cfb8:
            iVar33 = thunk_FUN_01bed842(piVar48,&DAT_004e94a9,iVar44);
            if (iVar33 == 0) {
              uVar47 = 7;
              if (uVar39 == 4) {
                FUN_01570444(param_2,&DAT_004a5ba4);
              }
              pcVar37 = FUN_0152194c;
              goto LAB_0156ded4;
            }
            bVar34 = false;
            if (!bVar38) {
              bVar38 = false;
              bVar11 = false;
              bVar45 = false;
              bVar29 = false;
              bVar9 = false;
              goto LAB_0156ca80;
            }
LAB_0156d034:
            iVar33 = thunk_FUN_01bed842(piVar48,"itemsInlineTable",iVar44);
            bVar29 = true;
            if (iVar33 == 0) {
              iVar44 = FUN_01570444(param_2,&DAT_004a5b04);
              uVar47 = 8;
              pcVar37 = FUN_015211f4;
              goto joined_r0x0156ce08;
            }
          }
          switch(iVar44) {
          case 3:
            iVar33 = thunk_FUN_01bed842(piVar48,"not",3);
            if (iVar33 != 0) goto switchD_0156d068_caseD_4;
            iVar44 = FUN_01570444(param_2,&DAT_004a5b04);
            uVar47 = 0x10;
            pcVar37 = FUN_01520264;
            break;
          default:
switchD_0156d068_caseD_4:
            bVar38 = false;
            bVar11 = false;
            bVar8 = false;
            bVar9 = bVar38;
            bVar34 = false;
            bVar12 = bVar11;
            if (bVar29) {
LAB_0156d5cc:
              bVar11 = bVar12;
              iVar33 = thunk_FUN_01bed842(piVar48,"oneOf",iVar44);
              bVar9 = bVar38;
              bVar34 = true;
              if (iVar33 == 0) {
                iVar44 = FUN_01570444(param_2,&DAT_004a5b04);
                uVar47 = 0x11;
                pcVar37 = FUN_015200d0;
                break;
              }
            }
            bVar38 = bVar34;
            if (iVar44 == 0x11) {
              iVar33 = thunk_FUN_01bed842(piVar48,"patternProperties",0x11);
              bVar34 = false;
              if (iVar33 != 0) {
LAB_0156d828:
                bVar45 = (bool)(bVar34 ^ 1);
                bVar10 = bVar9;
                goto LAB_0156d830;
              }
              iVar44 = FUN_01570444(param_2,&DAT_004a5b04);
              uVar47 = 0x13;
              pcVar37 = FUN_0151ec54;
            }
            else if (iVar44 == 7) {
              iVar33 = thunk_FUN_01bed842(piVar48,"pattern",7);
              bVar34 = true;
              if (iVar33 != 0) goto LAB_0156d828;
              iVar44 = FUN_01570444(param_2,&DAT_004a5b54);
              uVar47 = 0x12;
              pcVar37 = FUN_0151fa7c;
            }
            else {
              if (bVar8) goto LAB_0156d898;
              bVar34 = false;
              bVar10 = false;
              bVar45 = false;
              bVar30 = bVar38;
              if (bVar9) goto LAB_0156db88;
LAB_0156d830:
              if (iVar44 != 0xb) goto LAB_0156dbcc;
              iVar33 = thunk_FUN_01bed842(piVar48,"uniqueItems",0xb);
              if (iVar33 != 0) {
                bVar29 = true;
                bVar7 = false;
                bVar9 = bVar10;
                goto LAB_0156ca80;
              }
              iVar44 = FUN_01570444(param_2,&DAT_004a5b54);
              uVar47 = 0x16;
              pcVar37 = FUN_0151e02c;
            }
            break;
          case 8:
            iVar33 = thunk_FUN_01bed842(piVar48,&DAT_00570b78,8);
            if (iVar33 == 0) {
              iVar44 = FUN_01570444(param_2,&DAT_004a5b54);
              uVar47 = 9;
              pcVar37 = FUN_01521010;
            }
            else {
              iVar33 = thunk_FUN_01bed842(piVar48,&DAT_005708a0,8);
              if (iVar33 == 0) {
                iVar44 = FUN_01570444(param_2,&DAT_004a5b54);
                uVar47 = 0xc;
                pcVar37 = FUN_01520a58;
                break;
              }
              bVar11 = false;
              bVar38 = true;
              bVar8 = false;
              bVar30 = false;
              bVar12 = bVar11;
              if (bVar29) goto LAB_0156d5cc;
LAB_0156db88:
              iVar33 = thunk_FUN_01bed842(piVar48,&DAT_0056fdb8,iVar44);
              if (iVar33 != 0) {
                bVar10 = true;
                bVar34 = false;
                bVar45 = false;
                bVar38 = bVar30;
LAB_0156dbcc:
                bVar29 = false;
                bVar9 = bVar10;
                goto LAB_0156ca80;
              }
              iVar44 = FUN_01570444(param_2,&DAT_004a5b54);
              uVar47 = 0x15;
              pcVar37 = FUN_0151e0ec;
            }
            break;
          case 9:
            iVar33 = thunk_FUN_01bed842(piVar48,"maxLength",9);
            if (iVar33 != 0) {
              iVar33 = thunk_FUN_01bed842(piVar48,"minLength",9);
              bVar11 = false;
              if (iVar33 == 0) {
                iVar44 = FUN_01570444(param_2,&DAT_004a5b54);
                uVar47 = 0xd;
                pcVar37 = FUN_01520870;
                break;
              }
LAB_0156d5ac:
              bVar38 = false;
              bVar8 = false;
              bVar34 = false;
              bVar10 = false;
              bVar45 = false;
              bVar12 = bVar11;
              if (bVar29) goto LAB_0156d5cc;
              goto LAB_0156d830;
            }
            iVar44 = FUN_01570444(param_2,&DAT_004a5b54);
            uVar47 = 10;
            pcVar37 = FUN_01520e28;
            break;
          case 10:
            iVar33 = thunk_FUN_01bed842(piVar48,"multipleOf",10);
            if (iVar33 == 0) {
              iVar44 = FUN_01570444(param_2,&DAT_004a5b54);
              uVar47 = 0xf;
              pcVar37 = FUN_01520454;
            }
            else {
              bVar8 = true;
              bVar38 = false;
              bVar11 = false;
              bVar9 = false;
              bVar12 = false;
              if (bVar29) goto LAB_0156d5cc;
LAB_0156d898:
              iVar33 = thunk_FUN_01bed842(piVar48,"properties",iVar44);
              bVar34 = false;
              bVar45 = false;
              bVar29 = false;
              if (iVar33 != 0) goto LAB_0156ca80;
              iVar44 = FUN_01570444(param_2,&DAT_004a5b04);
              uVar47 = 0x14;
              pcVar37 = FUN_0151e208;
            }
            break;
          case 0xd:
            iVar33 = thunk_FUN_01bed842(piVar48,"maxProperties",0xd);
            if (iVar33 == 0) {
              iVar44 = FUN_01570444(param_2,&DAT_004a5b54);
              uVar47 = 0xb;
              pcVar37 = FUN_01520c40;
            }
            else {
              iVar33 = thunk_FUN_01bed842(piVar48,"minProperties",0xd);
              bVar11 = true;
              if (iVar33 != 0) goto LAB_0156d5ac;
              iVar44 = FUN_01570444(param_2,&DAT_004a5b54);
              uVar47 = 0xe;
              pcVar37 = FUN_01520688;
            }
          }
        }
joined_r0x0156ce08:
        if (iVar44 != 0) goto LAB_0156ded4;
switchD_0156db24_default:
        puVar15 = *(uint **)(iVar31 + 4);
        uVar40 = *(undefined4 *)(iVar31 + 8);
        switch(uVar40) {
        case 4:
          if (((*puVar15 == 0x66657224) || (*puVar15 == 0x6d756e65)) || (*puVar15 == 0x65707974))
          goto LAB_0156c8b8;
          if (*puVar15 != 0x65736c65) {
            uVar47 = *puVar15;
            uVar17 = 0x6e656874;
LAB_0156e0e0:
            if (uVar47 != uVar17) break;
          }
          if (1 < uVar19) goto LAB_0156c8b8;
          break;
        case 5:
          iVar31 = thunk_FUN_01bed842(puVar15,"allOf",5);
          if (iVar31 != 0) {
            iVar31 = thunk_FUN_01bed842(puVar15,"anyOf",5);
            if (iVar31 != 0) {
              iVar31 = thunk_FUN_01bed842(puVar15,"itemsInlineTable",5);
              if (iVar31 != 0) {
                iVar31 = thunk_FUN_01bed842(puVar15,"oneOf",5);
                if (iVar31 != 0) {
                  iVar31 = thunk_FUN_01bed842(puVar15,"const",5);
                  if (iVar31 != 0) {
                    uVar32 = 5;
                    pcVar22 = "$defsInvalidPctEncodedOctetUnexpectedCharInvalidIpv6Addr";
                    goto LAB_0156e7ec;
                  }
                  goto LAB_0156e594;
                }
              }
            }
          }
          goto LAB_0156c8b8;
        case 6:
          uVar32 = 6;
          pcVar22 = &DAT_004e94a9;
          goto LAB_0156e398;
        case 7:
          iVar31 = thunk_FUN_01bed842(puVar15,"$schema",7);
          if (iVar31 != 0) {
            iVar31 = thunk_FUN_01bed842(puVar15,
                                        "maximumconditional_messageevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tarpc-0.33.0/src/client.rs:566"
                                        ,7);
            if (iVar31 != 0) {
              iVar31 = thunk_FUN_01bed842(puVar15,"minimum",7);
              if (iVar31 != 0) {
                iVar31 = thunk_FUN_01bed842(puVar15,"pattern",7);
                if (iVar31 != 0) {
                  uVar32 = 7;
                  pcVar22 = "$anchor";
                  goto LAB_0156e7ec;
                }
              }
            }
          }
          goto LAB_0156c8b8;
        default:
          switch(uVar40) {
          case 2:
            if ((ushort)*puVar15 != 0x6469) {
              uVar47 = (uint)(ushort)*puVar15;
              uVar17 = 0x6669;
              goto LAB_0156e0e0;
            }
            uVar47 = uVar19;
            goto LAB_0156e3a4;
          case 3:
            iVar31 = thunk_FUN_01bed842(puVar15,"not",3);
            if (iVar31 != 0) {
              uVar32 = 3;
              pcVar22 = "$id";
              goto LAB_0156e588;
            }
            goto LAB_0156c8b8;
          case 8:
            iVar31 = thunk_FUN_01bed842(puVar15,&DAT_00570b78,8);
            if (iVar31 == 0) goto LAB_0156c8b8;
            iVar31 = thunk_FUN_01bed842(puVar15,&DAT_005708a0,8);
            if (iVar31 == 0) goto LAB_0156c8b8;
            iVar31 = thunk_FUN_01bed842(puVar15,&DAT_0056fdb8,8);
            if (iVar31 == 0) goto LAB_0156c8b8;
            uVar32 = 8;
            pcVar22 = &DAT_005710a8;
LAB_0156e588:
            iVar31 = thunk_FUN_01bed842(puVar15,pcVar22,uVar32);
            if (iVar31 == 0) {
LAB_0156e594:
              if (uVar19 != 0) goto LAB_0156c8b8;
            }
            break;
          case 9:
            iVar31 = thunk_FUN_01bed842(puVar15,"maxLength",9);
            if (iVar31 != 0) {
              uVar32 = 9;
              pcVar22 = "minLength";
              goto LAB_0156e604;
            }
            goto LAB_0156c8b8;
          case 10:
            iVar31 = thunk_FUN_01bed842(puVar15,"multipleOf",10);
            if (iVar31 != 0) {
              uVar32 = 10;
              pcVar22 = "properties";
LAB_0156e604:
              uVar47 = thunk_FUN_01bed842(puVar15,pcVar22,uVar32);
              goto LAB_0156e3a4;
            }
            goto LAB_0156c8b8;
          case 0xb:
            iVar31 = thunk_FUN_01bed842(puVar15,"uniqueItems",0xb);
            if (iVar31 != 0) {
              iVar31 = thunk_FUN_01bed842(puVar15,"maxContains",0xb);
              if (iVar31 != 0) {
                iVar31 = thunk_FUN_01bed842(puVar15,"minContains",0xb);
                if (iVar31 != 0) {
                  iVar31 = thunk_FUN_01bed842(puVar15,"prefixItems",0xb);
                  if (iVar31 != 0) {
                    iVar31 = thunk_FUN_01bed842(puVar15,"$dynamicRef",0xb);
                    goto LAB_0156e784;
                  }
                }
              }
              goto LAB_0156e7f8;
            }
            goto LAB_0156c8b8;
          case 0xd:
            iVar31 = thunk_FUN_01bed842(puVar15,"maxProperties",0xd);
            if (iVar31 != 0) {
              iVar31 = thunk_FUN_01bed842(puVar15,"minProperties",0xd);
              if (iVar31 != 0) {
                iVar31 = thunk_FUN_01bed842(puVar15,"propertyNames",0xd);
                if (iVar31 == 0) goto LAB_0156e594;
                iVar31 = thunk_FUN_01bed842(puVar15,"contentSchema",0xd);
                if (iVar31 != 0) {
                  iVar31 = thunk_FUN_01bed842(puVar15,"$recursiveRef",0xd);
                  goto LAB_0156e7f0;
                }
                if (2 < uVar19 - 3) break;
              }
            }
            goto LAB_0156c8b8;
          case 0xe:
            iVar31 = thunk_FUN_01bed842(puVar15,"$dynamicAnchor",0xe);
LAB_0156e784:
            if ((iVar31 == 0) && (uVar39 == 4)) goto LAB_0156c8b8;
            break;
          case 0x11:
            iVar31 = thunk_FUN_01bed842(puVar15,"patternProperties",0x11);
            if (iVar31 != 0) {
              uVar32 = 0x11;
              pcVar22 = "dependentRequired";
              goto LAB_0156e7ec;
            }
            goto LAB_0156c8b8;
          case 0x15:
            uVar32 = 0x15;
            pcVar22 = "unevaluatedProperties";
LAB_0156e7ec:
            iVar31 = thunk_FUN_01bed842(puVar15,pcVar22,uVar32);
LAB_0156e7f0:
            if (iVar31 == 0) {
LAB_0156e7f8:
              if (2 < uVar19) goto LAB_0156c8b8;
            }
          }
          break;
        case 0xc:
          uVar32 = 0xc;
          pcVar22 = "dependencies";
          goto LAB_0156e398;
        case 0xf:
          iVar31 = thunk_FUN_01bed842(puVar15,"additionalItems",0xf);
          if (iVar31 == 0) goto LAB_0156c8b8;
          iVar31 = thunk_FUN_01bed842(puVar15,"contentEncoding",0xf);
          if (iVar31 == 0) {
LAB_0156e3f4:
            if (uVar19 - 1 < 5) goto LAB_0156c8b8;
          }
          break;
        case 0x10:
          iVar31 = thunk_FUN_01bed842(puVar15,&DAT_0056a218,0x10);
          if (iVar31 != 0) {
            iVar31 = thunk_FUN_01bed842(puVar15,&DAT_00569628,0x10);
            if (iVar31 != 0) {
              iVar31 = thunk_FUN_01bed842(puVar15,&DAT_00567978,0x10);
              if (iVar31 == 0) goto LAB_0156e3f4;
              iVar31 = thunk_FUN_01bed842(puVar15,&DAT_00568fe8,0x10);
              if (iVar31 != 0) {
                iVar31 = thunk_FUN_01bed842(puVar15,&DAT_00567d98,0x10);
                if (iVar31 != 0) {
                  uVar32 = 0x10;
                  pcVar22 = "unevaluatedItems";
                  goto LAB_0156e7ec;
                }
              }
              goto LAB_0156e7f8;
            }
          }
          goto LAB_0156c8b8;
        case 0x14:
          uVar32 = 0x14;
          pcVar22 = "additionalProperties";
LAB_0156e398:
          uVar47 = thunk_FUN_01bed842(puVar15,pcVar22,uVar32);
LAB_0156e3a4:
          if (uVar47 == 0) goto LAB_0156c8b8;
        }
        FUN_006666fc(auStack_84,puVar15,uVar40);
        uVar53 = local_78;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)puVar23) {
        case 0:
          uVar13 = 0;
          break;
        case 1:
          local_78._0_4_ = (uint *)*puVar23;
          local_78._4_4_ = (uint *)puVar23[1];
          local_70 = (uint *)puVar23[2];
          local_6c = (uint *)puVar23[3];
          uStack_68 = puVar23[4];
          uStack_64 = puVar23[5];
          goto LAB_0156e4b8;
        case 2:
          local_70 = (uint *)puVar23[2];
          local_6c = (uint *)puVar23[3];
          uStack_68 = puVar23[4];
          uStack_64 = puVar23[5];
          uVar13 = 2;
          break;
        case 3:
          FUN_006666fc(uVar16,puVar23[2],puVar23[3]);
          uVar13 = 3;
          uVar53 = local_78;
          break;
        case 4:
          FUN_014fcef8(uVar16,puVar23 + 1);
          uVar13 = 4;
          uVar53 = local_78;
          break;
        case 5:
          FUN_0156aa80(uVar16,puVar23 + 1);
          uVar13 = 5;
          uVar53 = local_78;
        }
        local_78._4_4_ = (uint *)((ulonglong)uVar53 >> 0x20);
        local_78._0_4_ = (uint *)CONCAT31((int3)((ulonglong)uVar53 >> 8),uVar13);
LAB_0156e4b8:
        FUN_0153a5fc(local_a0,&local_f0,auStack_84,&local_78);
        if (local_a0[0] != '\x06') {
          FUN_00e0febc(local_a0);
        }
        goto LAB_0156c8b8;
      }
      if (local_e4 == (uint *)0x0) {
        uVar40 = 0;
      }
      else {
        local_60 = local_f0;
        local_5c = local_ec;
        local_58 = local_e8;
        local_54 = local_e4;
        local_50 = local_e0;
        local_4c = local_dc;
        local_48 = local_d8;
        local_44 = puStack_d4;
        local_40 = puStack_d0;
        local_3c = iStack_cc;
        iStack_38 = iStack_c8;
        iStack_34 = iStack_c4;
        uVar40 = FUN_0156f8e0();
      }
      FUN_01575584(&local_60,param_2,&local_fc,uVar40);
      *param_1 = (int)local_60;
      param_1[1] = (int)local_5c;
      param_1[2] = (int)local_58;
      param_1[3] = (int)local_54;
      param_1[4] = (int)local_50;
      if (puVar15 == (uint *)0x0) {
        FUN_0152a358(&local_f0);
      }
      goto LAB_0156bb44;
    }
    piVar48 = *(int **)(param_2 + 0x38);
    do {
      iVar46 = *piVar48;
      bVar5 = (bool)hasExclusiveAccess(piVar48);
    } while (!bVar5);
    *piVar48 = iVar46 + 1;
    uVar53 = CONCAT44(local_78._4_4_,(uint *)local_78);
    uStack_ac = CONCAT44(uStack_ac._4_4_,(undefined4)uStack_ac);
    if (iVar46 < 0) goto LAB_0156ef0c;
    uVar40 = *(undefined4 *)(param_2 + 0x3c);
    do {
      iVar46 = *piVar48;
      bVar5 = (bool)hasExclusiveAccess(piVar48);
    } while (!bVar5);
    *piVar48 = iVar46 + 1;
    uVar53 = CONCAT44(local_78._4_4_,(uint *)local_78);
    uStack_ac = CONCAT44(uStack_ac._4_4_,(undefined4)uStack_ac);
    if (iVar46 < 0) goto LAB_0156ef0c;
    uVar53 = FUN_015321a0();
    iVar46 = FUN_01595a70(piVar48,uVar40,piVar48,uVar40,uVar53,param_3,0x22);
    *param_1 = 0;
    param_1[1] = iVar46;
  }
LAB_0156c678:
  DataMemoryBarrier(0xb);
  do {
    iVar46 = *piVar35;
    bVar5 = (bool)hasExclusiveAccess(piVar35);
  } while (!bVar5);
  *piVar35 = iVar46 + -1;
  if (iVar46 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0155d2bc(piVar35);
  }
  FUN_0152a2e4(&local_188);
  if (param_4 != (uint *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      uVar14 = *param_4;
      bVar5 = (bool)hasExclusiveAccess(param_4);
    } while (!bVar5);
    *param_4 = uVar14 - 1;
LAB_0156b2a8:
    if (uVar14 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01670d04(param_4);
    }
  }
  return;
LAB_0156eaa0:
  local_19c = (uint)*(char *)((int)puVar15 + local_1b4);
  if (-1 < (int)local_19c) {
    uVar39 = *puVar15 & 0x80808080;
    local_1b4 = LZCOUNT((*puVar15 & 0x80) << 0x18 | (uVar39 >> 8 & 0xff) << 0x10 |
                        (uVar39 >> 0x10 & 0xff) << 8 | uVar39 >> 0x18);
    local_19c = (uint)*(byte *)((int)puVar15 + (local_1b4 >> 3));
    local_1b4 = local_1b4 >> 3;
  }
  local_60 = (uint *)local_78;
  local_5c = local_78._4_4_;
  local_58 = local_70;
  local_54 = local_6c;
  local_50 = local_168;
  local_4c = puStack_164;
  local_48 = puStack_160;
  local_44 = puStack_15c;
  local_40 = local_158;
  bVar4 = (byte)(uVar19 >> 0x19);
  *(byte *)((int)puVar15 + local_1b4) = bVar4;
  iVar46 = *(int *)(uVar14 + 0x1c);
  *(uint *)(uVar14 + 0x18) = *(int *)(uVar14 + 0x18) - (local_19c & 1);
  *(byte *)((int)puVar15 + (uVar16 & local_1b4 - 4) + 4) = bVar4;
  *(int *)(uVar14 + 0x1c) = iVar46 + 1;
  puVar15[local_1b4 * -9 + -9] = (uint)(uint *)local_78;
  puVar15[local_1b4 * -9 + -8] = (uint)local_78._4_4_;
  puVar15[local_1b4 * -9 + -7] = (uint)local_70;
  puVar15[local_1b4 * -9 + -6] = (uint)local_6c;
  puVar15[local_1b4 * -9 + -5] = (uint)local_168;
  puVar15[local_1b4 * -9 + -4] = (uint)puStack_164;
  puVar15[local_1b4 * -9 + -3] = (uint)puStack_160;
  puVar15[local_1b4 * -9 + -2] = (uint)puStack_15c;
  puVar15[local_1b4 * -9 + -1] = (uint)local_158;
LAB_0156c19c:
  *(int *)(uVar14 + 8) = *(int *)(uVar14 + 8) + 1;
  if (param_4 == (uint *)0x0) goto LAB_0156c668;
  iVar46 = *(int *)(param_2 + 0x6c);
  if (*(int *)(iVar46 + 8) == 0) {
    *(undefined4 *)(iVar46 + 8) = 0xffffffff;
    uVar19 = FUN_01676068(iVar46 + 0x20,param_4[3],param_4[4]);
    uVar14 = uVar19 >> 0x19;
    iVar18 = *(int *)(iVar46 + 0x10);
    uVar39 = *(uint *)(iVar46 + 0x14);
    local_198 = 0;
    while( true ) {
      uVar19 = uVar39 & uVar19;
      uVar47 = *(uint *)(iVar18 + uVar19);
      uVar16 = uVar47 ^ uVar14 * 0x1010101;
      uVar16 = ~uVar16 & 0x80808080 & uVar16 + 0xfefefeff;
      while (uVar16 != 0) {
        uVar17 = uVar19 + ((uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                                         (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3) &
                 uVar39;
        iVar20 = FUN_01670d54(param_4,*(undefined4 *)(iVar18 + -8 + uVar17 * -8));
        uVar16 = uVar16 - 1 & uVar16;
        if (iVar20 != 0) {
          puVar15 = (uint *)(iVar18 + (uVar17 - 4 & uVar39));
          uVar19 = *puVar15;
          uVar14 = *(uint *)(iVar18 + uVar17) & 0x80808080 & *(uint *)(iVar18 + uVar17) << 1;
          iVar20 = iVar18 + uVar17 * -8;
          uVar13 = 0x80;
          if (((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                             (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3) +
              ((uint)LZCOUNT(uVar19 & 0x80808080 & uVar19 << 1) >> 3) < 4) {
            *(int *)(iVar46 + 0x18) = *(int *)(iVar46 + 0x18) + 1;
            uVar13 = 0xff;
          }
          *(undefined1 *)(iVar18 + uVar17) = uVar13;
          iVar18 = *(int *)(iVar46 + 0x1c);
          *(undefined1 *)(puVar15 + 1) = uVar13;
          piVar48 = *(int **)(iVar20 + -8);
          piVar41 = *(int **)(iVar20 + -4);
          *(int *)(iVar46 + 0x1c) = iVar18 + -1;
          DataMemoryBarrier(0xb);
          do {
            iVar18 = *piVar48;
            bVar5 = (bool)hasExclusiveAccess(piVar48);
          } while (!bVar5);
          *piVar48 = iVar18 + -1;
          if (iVar18 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01670d04();
          }
          DataMemoryBarrier(0xb);
          do {
            iVar18 = *piVar41;
            bVar5 = (bool)hasExclusiveAccess(piVar41);
          } while (!bVar5);
          *piVar41 = iVar18 + -1;
          if (iVar18 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0155d2bc(piVar41);
          }
          goto LAB_0156c3c8;
        }
      }
      if ((uVar47 & 0x80808080 & uVar47 << 1) != 0) break;
      local_198 = local_198 + 4;
      uVar19 = uVar19 + local_198;
    }
LAB_0156c3c8:
    *(int *)(iVar46 + 8) = *(int *)(iVar46 + 8) + 1;
    do {
      uVar14 = *param_4;
      bVar5 = (bool)hasExclusiveAccess(param_4);
    } while (!bVar5);
    *param_4 = uVar14 + 1;
    uVar53 = CONCAT44(local_78._4_4_,(uint *)local_78);
    if (-1 < (int)uVar14) {
      puVar15 = *(uint **)(param_2 + 0x58);
      if (puVar15 != (uint *)0x0) {
        do {
          uVar14 = *puVar15;
          bVar5 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar5);
        *puVar15 = uVar14 + 1;
        uVar53 = CONCAT44(local_78._4_4_,(uint *)local_78);
        if ((int)uVar14 < 0) goto LAB_0156ef0c;
      }
      do {
        uVar14 = *local_c0;
        bVar5 = (bool)hasExclusiveAccess(local_c0);
      } while (!bVar5);
      *local_c0 = uVar14 + 1;
      uVar53 = CONCAT44(local_78._4_4_,(uint *)local_78);
      if (-1 < (int)uVar14) {
        do {
          uVar14 = *local_bc;
          bVar5 = (bool)hasExclusiveAccess(local_bc);
        } while (!bVar5);
        *local_bc = uVar14 + 1;
        uVar53 = CONCAT44(local_78._4_4_,(uint *)local_78);
        if (-1 < (int)uVar14) {
          if (local_b0 != (uint *)0x0) {
            do {
              uVar14 = *local_b0;
              bVar5 = (bool)hasExclusiveAccess(local_b0);
            } while (!bVar5);
            *local_b0 = uVar14 + 1;
            uVar53 = CONCAT44(local_78._4_4_,(uint *)local_78);
            if ((int)uVar14 < 0) goto LAB_0156ef0c;
          }
          do {
            uVar14 = *local_b4;
            bVar5 = (bool)hasExclusiveAccess(local_b4);
          } while (!bVar5);
          *local_b4 = uVar14 + 1;
          uVar53 = CONCAT44(local_78._4_4_,(uint *)local_78);
          if (-1 < (int)uVar14) {
            iVar46 = *(int *)(param_2 + 100);
            local_140 = local_b0;
            local_150 = local_c0;
            puStack_14c = local_bc;
            puStack_148 = local_b8;
            puStack_144 = local_b4;
            local_78._0_4_ = param_4;
            local_78._4_4_ = puVar15;
            if (*(int *)(iVar46 + 8) == 0) {
              *(undefined4 *)(iVar46 + 8) = 0xffffffff;
              local_f0 = param_4;
              local_ec = puVar15;
              uVar14 = FUN_0155d0d0(iVar46 + 0x20,&local_f0);
              if (*(int *)(iVar46 + 0x18) == 0) {
                FUN_0152f0dc(iVar46 + 0x10,iVar46 + 0x20);
              }
              uVar39 = *(uint *)(iVar46 + 0x14);
              puVar36 = *(uint **)(iVar46 + 0x10);
              bVar5 = false;
              local_1a4 = 0;
              uVar19 = uVar14;
              do {
                uVar19 = uVar39 & uVar19;
                uVar16 = *(uint *)((int)puVar36 + uVar19);
                uVar47 = uVar16 ^ (uVar14 >> 0x19) * 0x1010101;
                uVar47 = ~uVar47 & 0x80808080 & uVar47 + 0xfefefeff;
                while (uVar47 != 0) {
                  uVar17 = uVar19 + ((uint)LZCOUNT(uVar47 << 0x18 | (uVar47 >> 8 & 0xff) << 0x10 |
                                                   (uVar47 >> 0x10 & 0xff) << 8 | uVar47 >> 0x18) >>
                                    3) & uVar39;
                  iVar18 = FUN_0156ff14(&local_f0,puVar36 + uVar17 * -7 + -7);
                  uVar47 = uVar47 - 1 & uVar47;
                  if (iVar18 != 0) {
                    local_60 = (uint *)puVar36[uVar17 * -7 + -5];
                    local_5c = (uint *)puVar36[uVar17 * -7 + -4];
                    local_58 = (uint *)puVar36[uVar17 * -7 + -3];
                    local_54 = (uint *)puVar36[uVar17 * -7 + -2];
                    local_50 = (uint *)puVar36[uVar17 * -7 + -1];
                    puVar36[uVar17 * -7 + -5] = (uint)local_150;
                    puVar36[uVar17 * -7 + -4] = (uint)puStack_14c;
                    puVar36[uVar17 * -7 + -3] = (uint)puStack_148;
                    puVar36[uVar17 * -7 + -2] = (uint)puStack_144;
                    puVar36[uVar17 * -7 + -1] = (uint)local_140;
                    FUN_01541e04(&local_f0);
                    if (local_60 != (uint *)0x0) {
                      FUN_01542eb4(&local_60);
                    }
                    goto LAB_0156c654;
                  }
                }
                uVar47 = uVar16 & 0x80808080;
                if (bVar5) {
LAB_0156c5dc:
                  if ((uVar47 & uVar16 << 1) != 0) goto LAB_0156eb4c;
                  bVar5 = true;
                }
                else {
                  if (uVar47 != 0) {
                    local_1b0 = uVar19 + ((uint)LZCOUNT((uVar16 & 0x80) << 0x18 |
                                                        (uVar47 >> 8 & 0xff) << 0x10 |
                                                        (uVar47 >> 0x10 & 0xff) << 8 |
                                                        uVar47 >> 0x18) >> 3) & uVar39;
                    goto LAB_0156c5dc;
                  }
                  bVar5 = false;
                }
                local_1a4 = local_1a4 + 4;
                uVar19 = local_1a4 + uVar19;
              } while( true );
            }
            FUN_01306fc8(&DAT_01cfbcd0);
            uVar53 = CONCAT44(local_78._4_4_,(uint *)local_78);
          }
        }
      }
    }
    goto LAB_0156ef0c;
  }
  puVar28 = &DAT_01cfbde0;
LAB_0156eda0:
  FUN_01306fc8(puVar28);
  uVar53 = local_78;
LAB_0156ef0c:
                    /* WARNING: Does not return */
  pcVar37 = (code *)software_udf(0xfdee,0x156ef0c);
  local_78 = uVar53;
  (*pcVar37)();
}

