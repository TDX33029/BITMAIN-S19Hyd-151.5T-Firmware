// FUN_014b0f54 @ 014b0f54 size=5400 calls_out=25 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_014b0f54(undefined4 *param_1,byte *param_2,int *param_3)

{
  code *pcVar1;
  char cVar2;
  undefined2 uVar3;
  byte bVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int **ppiVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  int *piVar17;
  uint *puVar18;
  undefined2 *puVar19;
  bool bVar20;
  int *piVar21;
  int *piVar22;
  int **ppiVar23;
  byte *pbVar24;
  int *piVar25;
  uint uVar26;
  undefined1 uVar27;
  undefined4 *puVar28;
  int *piVar29;
  int iVar30;
  byte *pbVar31;
  uint uVar32;
  int iVar33;
  undefined4 *puVar34;
  int *piVar35;
  uint uVar36;
  int iVar37;
  byte *pbVar38;
  byte *pbVar39;
  bool bVar40;
  undefined8 uVar41;
  int local_228;
  uint local_208;
  int local_1f4;
  int local_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 local_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  int *local_198;
  int *piStack_194;
  int *local_190;
  int local_18c;
  undefined4 *local_188;
  int *local_184;
  undefined1 local_180;
  char local_17f;
  undefined2 local_17e;
  int *local_178;
  int *piStack_174;
  int *piStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  int *local_158;
  int **local_154;
  int *local_150;
  undefined4 local_148;
  int *piStack_144;
  int *piStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined2 local_124;
  undefined1 local_122;
  int *local_120;
  int *local_11c;
  int *local_118;
  int *piStack_114;
  int local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  int local_104;
  undefined4 *local_100;
  int *local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  int *local_f0;
  int **local_ec;
  int *local_e8;
  int *local_e4;
  int *local_e0;
  int **ppiStack_dc;
  int *local_d8;
  int *local_d4;
  int *piStack_d0;
  int *piStack_cc;
  int iStack_c8;
  int iStack_c4;
  int *local_c0;
  int **ppiStack_bc;
  int *piStack_b8;
  int *local_b4;
  int *piStack_b0;
  int *piStack_ac;
  int iStack_a8;
  int *local_a0;
  int *local_9c;
  int *local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int *local_80;
  int **local_7c;
  int *local_78;
  int *local_74;
  int *local_70;
  int *local_6c;
  undefined4 local_68;
  int *local_64;
  undefined4 uStack_60;
  int *local_5c;
  int *local_58;
  int *piStack_54;
  int *local_50;
  undefined4 local_4c;
  char local_48;
  undefined2 local_47;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_40;
  undefined2 local_3c;
  undefined1 local_3a;
  int *local_38;
  int **local_34;
  int *local_30;
  
  pbVar24 = param_2 + 0x1c;
  piVar21 = *(int **)pbVar24;
  pbVar24[0] = 0;
  pbVar24[1] = 0;
  pbVar24[2] = 0;
  pbVar24[3] = 0;
  if (piVar21 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    local_120 = piVar21;
    if ((char)piVar21[0x10] == '\0') {
      uVar41 = (*(code *)**(undefined4 **)*param_3)(((undefined4 *)*param_3)[1]);
      piVar5 = piVar21 + 0xc;
      DataMemoryBarrier(0xb);
      do {
        iVar12 = *piVar5;
        bVar40 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar40);
      *(char *)piVar5 = '\x01';
      DataMemoryBarrier(0xb);
      if ((char)iVar12 == '\0') {
        if (piVar21[10] != 0) {
          (**(code **)(piVar21[10] + 0xc))(piVar21[0xb]);
        }
        *(undefined8 *)(piVar21 + 10) = uVar41;
        DataMemoryBarrier(0xb);
        *(undefined1 *)(piVar21 + 0xc) = 0;
        DataMemoryBarrier(0xb);
        DataMemoryBarrier(0xb);
        if ((char)piVar21[0x10] == '\0') goto LAB_014b10d0;
      }
      else {
        (**(code **)((int)uVar41 + 0xc))((int)((ulonglong)uVar41 >> 0x20));
      }
    }
    piVar5 = piVar21 + 9;
    DataMemoryBarrier(0xb);
    do {
      iVar12 = *piVar5;
      bVar40 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar40);
    *(char *)piVar5 = '\x01';
    uVar27 = 1;
    DataMemoryBarrier(0xb);
    if ((char)iVar12 == '\0') {
      cVar2 = *(char *)((int)piVar21 + 0x21);
      uVar3 = *(undefined2 *)((int)piVar21 + 0x22);
      *(undefined1 *)((int)piVar21 + 0x21) = 2;
      if (cVar2 == '\x02') {
        DataMemoryBarrier(0xb);
        *(char *)piVar5 = '\0';
        uVar27 = 1;
        DataMemoryBarrier(0xb);
      }
      else {
        local_198 = (int *)piVar21[2];
        piStack_194 = (int *)piVar21[3];
        local_190 = (int *)piVar21[4];
        iVar12 = piVar21[5];
        puVar28 = (undefined4 *)piVar21[6];
        local_184 = (int *)piVar21[7];
        local_180 = (undefined1)piVar21[8];
        local_d8 = (int *)CONCAT31(local_d8._1_3_,local_180);
        DataMemoryBarrier(0xb);
        *(char *)piVar5 = '\0';
        DataMemoryBarrier(0xb);
        local_f0 = local_198;
        local_ec = (int **)piStack_194;
        local_e8 = local_190;
        local_e4 = (int *)iVar12;
        local_e0 = puVar28;
        ppiStack_dc = (int **)local_184;
        if (cVar2 == '\x03') {
LAB_014b10d0:
          if (*(int *)pbVar24 != 0) {
            FUN_014b27f8(pbVar24);
          }
          *(int **)pbVar24 = piVar21;
          *(undefined1 *)(param_1 + 0xe) = 3;
          return;
        }
        local_18c = iVar12;
        local_188 = puVar28;
        local_17f = cVar2;
        local_17e = uVar3;
        if ((char)local_184[2] == '\0') {
          DataMemoryBarrier(0xb);
          bVar40 = local_198[2] != 3;
          if ((char)local_190 != '\x02') {
            bVar40 = local_198[2] == 1;
          }
          if (bVar40) {
            FUN_014b2928(&local_80,param_2 + 0x18,param_2,&local_198);
            uVar27 = (byte)local_80;
            FUN_016dd1aa(&local_1d8,(uint)&local_80 | 1,0x37);
            piVar5 = piVar21 + 0xc;
            local_148 = (int *)CONCAT22(CONCAT11(local_148._3_1_,local_45),local_47);
            DataMemoryBarrier(0xb);
            *(undefined1 *)(piVar21 + 0x10) = 1;
            DataMemoryBarrier(0xb);
            do {
              iVar12 = *piVar5;
              bVar40 = (bool)hasExclusiveAccess(piVar5);
            } while (!bVar40);
            *(char *)piVar5 = '\x01';
            DataMemoryBarrier(0xb);
            if ((char)iVar12 == '\0') {
              iVar12 = piVar21[10];
              piVar21[10] = 0;
              DataMemoryBarrier(0xb);
              *(undefined1 *)(piVar21 + 0xc) = 0;
              DataMemoryBarrier(0xb);
              if (iVar12 != 0) {
                (**(code **)(iVar12 + 0xc))(piVar21[0xb]);
              }
            }
            piVar5 = piVar21 + 0xf;
            DataMemoryBarrier(0xb);
            do {
              iVar12 = *piVar5;
              bVar40 = (bool)hasExclusiveAccess(piVar5);
            } while (!bVar40);
            *(char *)piVar5 = '\x01';
            DataMemoryBarrier(0xb);
            if ((char)iVar12 == '\0') {
              iVar12 = piVar21[0xd];
              piVar21[0xd] = 0;
              DataMemoryBarrier(0xb);
              *(undefined1 *)(piVar21 + 0xf) = 0;
              DataMemoryBarrier(0xb);
              if (iVar12 != 0) {
                (**(code **)(iVar12 + 4))(piVar21[0xe]);
              }
            }
            DataMemoryBarrier(0xb);
            do {
              iVar12 = *piVar21;
              bVar40 = (bool)hasExclusiveAccess(piVar21);
            } while (!bVar40);
            *piVar21 = iVar12 + -1;
            if (iVar12 == 1) {
              DataMemoryBarrier(0xb);
              FUN_014a5c48(piVar21);
            }
            if (local_48 == '\x02') goto LAB_014b1b20;
            if (local_48 != '\x03') {
              if (local_48 != '\x04') {
                FUN_016dd1aa((undefined1 *)((int)param_1 + 1),&local_1d8,0x37);
                *(undefined1 *)((int)param_1 + 0x3b) = local_148._2_1_;
                *(undefined2 *)((int)param_1 + 0x39) = (undefined2)local_148;
                *(char *)(param_1 + 0xe) = local_48;
                *(undefined1 *)param_1 = uVar27;
                return;
              }
              goto LAB_014b22d8;
            }
            goto LAB_014b12d8;
          }
        }
        if (iVar12 != 0) {
          if ((code *)*puVar28 != (code *)0x0) {
            (*(code *)*puVar28)(iVar12);
          }
          if (puVar28[1] != 0) {
            thunk_FUN_016d3fb4(iVar12);
          }
        }
        DataMemoryBarrier(0xb);
        do {
          iVar12 = *local_184;
          bVar40 = (bool)hasExclusiveAccess(local_184);
        } while (!bVar40);
        *local_184 = iVar12 + -1;
        if (iVar12 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00784894(local_184);
        }
        uVar27 = 2;
        FUN_014952b4(&local_198);
      }
    }
    DataMemoryBarrier(0xb);
    *(undefined1 *)(piVar21 + 0x10) = 1;
    piVar5 = piVar21 + 0xc;
    DataMemoryBarrier(0xb);
    do {
      iVar12 = *piVar5;
      bVar40 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar40);
    *(char *)piVar5 = '\x01';
    DataMemoryBarrier(0xb);
    if ((char)iVar12 == '\0') {
      iVar12 = piVar21[10];
      piVar21[10] = 0;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(piVar21 + 0xc) = 0;
      DataMemoryBarrier(0xb);
      if (iVar12 != 0) {
        (**(code **)(iVar12 + 0xc))(piVar21[0xb]);
      }
    }
    piVar5 = piVar21 + 0xf;
    DataMemoryBarrier(0xb);
    do {
      iVar12 = *piVar5;
      bVar40 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar40);
    *(char *)piVar5 = '\x01';
    DataMemoryBarrier(0xb);
    if ((char)iVar12 == '\0') {
      iVar12 = piVar21[0xd];
      piVar21[0xd] = 0;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(piVar21 + 0xf) = 0;
      DataMemoryBarrier(0xb);
      if (iVar12 != 0) {
        (**(code **)(iVar12 + 4))(piVar21[0xe]);
      }
    }
    DataMemoryBarrier(0xb);
    do {
      iVar12 = *piVar21;
      bVar40 = (bool)hasExclusiveAccess(piVar21);
    } while (!bVar40);
    *piVar21 = iVar12 + -1;
    if (iVar12 == 1) {
      DataMemoryBarrier(0xb);
      FUN_014a5c48(piVar21);
    }
LAB_014b1b20:
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)param_1 = uVar27;
    return;
  }
LAB_014b12d8:
  pbVar31 = param_2 + 0x18;
  iVar12 = *(int *)pbVar31;
  if (iVar12 != 0) {
    puVar28 = (undefined4 *)*param_3;
    piVar21 = (int *)(iVar12 + 8);
    do {
      if (*piVar21 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(piVar21);
        goto LAB_014b1320;
      }
      bVar40 = (bool)hasExclusiveAccess(piVar21);
    } while (!bVar40);
    *piVar21 = 1;
    DataMemoryBarrier(0xb);
LAB_014b1320:
    local_208 = 0;
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      cVar2 = *(char *)(iVar12 + 0xc);
    }
    else {
      local_208 = FUN_015bf3f8();
      local_208 = local_208 ^ 1;
      cVar2 = *(char *)(iVar12 + 0xc);
    }
    if (cVar2 != '\0') {
      uVar11 = (uint)local_7c >> 8;
      local_7c = (int **)CONCAT31((int3)uVar11,(char)local_208);
      local_80 = piVar21;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_80,&DAT_018a5d18,&DAT_018a5cc8);
    }
    piVar25 = *(int **)(iVar12 + 0x10);
    piVar29 = *(int **)(iVar12 + 0x14);
    piVar5 = *(int **)(iVar12 + 0x18);
    if (*(int *)(iVar12 + 0x88) == 0) {
      FUN_015f3b0c(&local_80,1);
      iVar6 = *(int *)(iVar12 + 0x4c);
      local_158 = local_80;
      local_154 = local_7c;
      local_150 = local_78;
    }
    else {
      (**(code **)(*(int *)(iVar12 + 0x8c) + 0x14))
                (&local_158,
                 *(int *)(iVar12 + 0x88) + (*(int *)(*(int *)(iVar12 + 0x8c) + 8) - 1U & 0xfffffff8)
                 + 8);
      iVar6 = *(int *)(iVar12 + 0x4c);
    }
    if (iVar6 != 0) {
      uVar7 = FUN_014c854c(*(undefined4 *)(iVar12 + 0x50),*(undefined4 *)(iVar12 + 0x54),
                           *(undefined4 *)(iVar12 + 0x58),*(undefined4 *)(iVar12 + 0x5c),param_2);
      iVar6 = *(int *)(iVar12 + 0x40);
      uVar32 = *(uint *)(iVar12 + 0x44);
      uVar11 = uVar7 >> 0x19;
      local_1dc = 0;
      while( true ) {
        uVar7 = uVar32 & uVar7;
        uVar9 = *(uint *)(iVar6 + uVar7);
        uVar8 = uVar9 ^ uVar11 * 0x1010101;
        uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff;
        while (uVar8 != 0) {
          uVar36 = uVar7 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                          (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) &
                   uVar32;
          iVar10 = FUN_014c953c(param_2,iVar6 + -0x24 + uVar36 * -0x24);
          uVar8 = uVar8 - 1 & uVar8;
          if (iVar10 != 0) {
            iVar6 = iVar6 + uVar36 * -0x24;
            iVar10 = *(int *)(iVar6 + -4);
            if (iVar10 == 0) goto LAB_014b16b0;
            goto LAB_014b150c;
          }
        }
        if ((uVar9 & 0x80808080 & uVar9 << 1) != 0) break;
        local_1dc = local_1dc + 4;
        uVar7 = uVar7 + local_1dc;
      }
    }
    goto LAB_014b16b0;
  }
  goto LAB_014b22cc;
LAB_014b1e44:
  if (*(int *)(iVar12 + 0x68) == 0) {
    FUN_01491eac(piVar14,(undefined4 *)(iVar12 + 0x70));
    uVar32 = (uint)local_80 & 0xff;
  }
  local_a0 = local_74;
  local_9c = local_70;
  local_124 = *puVar19;
  local_122 = *(undefined1 *)(puVar19 + 1);
  local_98 = local_6c;
  if (uVar32 == 3) {
    ppiVar23 = ppiVar13;
  }
  else {
    puVar18 = (uint *)*piVar14;
    uVar9 = *(uint *)(iVar12 + 100);
    uVar8 = uVar9 & uVar7;
    uVar11 = *(uint *)((int)puVar18 + uVar8) & 0x80808080;
    if (uVar11 == 0) {
      iVar6 = 4;
      do {
        uVar8 = uVar8 + iVar6;
        iVar6 = iVar6 + 4;
        uVar8 = uVar8 & uVar9;
        uVar11 = *(uint *)((int)puVar18 + uVar8) & 0x80808080;
      } while (uVar11 == 0);
    }
    uVar11 = uVar8 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                    (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) & uVar9;
    uVar8 = (uint)*(char *)((int)puVar18 + uVar11);
    if (-1 < (int)uVar8) {
      uVar11 = *puVar18 & 0x80808080;
      uVar11 = LZCOUNT((*puVar18 & 0x80) << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                       (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18);
      uVar8 = (uint)*(byte *)((int)puVar18 + (uVar11 >> 3));
      uVar11 = uVar11 >> 3;
    }
    *(uint *)(iVar12 + 0x68) = *(int *)(iVar12 + 0x68) - (uVar8 & 1);
    bVar4 = (byte)(uVar7 >> 0x19);
    *(byte *)((int)puVar18 + uVar11) = bVar4;
    *(byte *)((int)puVar18 + (uVar11 - 4 & uVar9) + 4) = bVar4;
    ppiVar23 = (int **)(puVar18 + uVar11 * -10);
    *(undefined2 *)((int)ppiVar23 + -0x27) = local_124;
    *(char *)(ppiVar23 + -10) = (char)uVar32;
    *(undefined1 *)((int)ppiVar23 + -0x25) = local_122;
    ppiVar23[-1] = (int *)0x0;
    ppiVar23[-9] = (int *)ppiVar13;
    ppiVar23[-8] = local_78;
    ppiVar23[-7] = local_74;
    ppiVar23[-6] = local_70;
    ppiVar23[-5] = local_6c;
    ppiVar23[-4] = (int *)0x0;
    ppiVar23[-3] = (int *)0x4;
    ppiVar23[-2] = (int *)0x0;
    *(int *)(iVar12 + 0x6c) = *(int *)(iVar12 + 0x6c) + 1;
    local_120 = local_a0;
    local_11c = local_9c;
    local_118 = local_98;
    local_3c = local_124;
    local_3a = local_122;
  }
LAB_014b20b0:
  piVar29 = ppiVar23[-4];
  piVar25 = ppiVar23[-1];
  local_80 = piVar5;
  if (piVar25 == piVar29) {
    FUN_01456474();
    piVar29 = ppiVar23[-4];
    piVar25 = ppiVar23[-1];
  }
  piVar35 = (int *)((int)ppiVar23[-2] + (int)piVar25);
  piVar14 = (int *)((int)piVar35 - (int)piVar29);
  if (piVar35 < piVar29) {
    piVar14 = piVar35;
  }
  ppiVar23[-3][(int)piVar14] = (int)piVar5;
  ppiVar23[-1] = (int *)((int)piVar25 + 1);
  DataMemoryBarrier(0xb);
  if ((char)piVar5[0x10] != '\0') {
LAB_014b2198:
    piVar25 = piVar5 + 9;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar25;
      bVar40 = (bool)hasExclusiveAccess(piVar25);
    } while (!bVar40);
    *(char *)piVar25 = '\x01';
    DataMemoryBarrier(0xb);
    if ((char)iVar6 == '\0') {
      cVar2 = *(char *)((int)piVar5 + 0x21);
      *(undefined1 *)((int)piVar5 + 0x21) = 2;
      if (cVar2 != '\x02') {
        local_80 = (int *)piVar5[2];
        local_7c = (int **)piVar5[3];
        local_78 = (int *)piVar5[4];
        local_74 = (int *)piVar5[5];
        local_70 = (int *)piVar5[6];
        local_6c = (int *)piVar5[7];
        local_68._0_2_ = CONCAT11(cVar2,(char)piVar5[8]);
        local_68 = CONCAT22(*(undefined2 *)((int)piVar5 + 0x22),(undefined2)local_68);
        DataMemoryBarrier(0xb);
        *(char *)piVar25 = '\0';
        DataMemoryBarrier(0xb);
        if (cVar2 != '\x03') goto LAB_014b2454;
        goto LAB_014b2214;
      }
      DataMemoryBarrier(0xb);
      *(char *)piVar25 = '\0';
      DataMemoryBarrier(0xb);
    }
    local_68._0_2_ = CONCAT11(2,(undefined1)local_68);
LAB_014b2454:
    FUN_014b2c78(&local_80);
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00409069,0x39,&DAT_018a5cd8);
  }
  uVar41 = (**(code **)*puVar28)(puVar28[1]);
  piVar25 = piVar5 + 0xc;
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar25;
    bVar40 = (bool)hasExclusiveAccess(piVar25);
  } while (!bVar40);
  *(char *)piVar25 = '\x01';
  DataMemoryBarrier(0xb);
  if ((char)iVar6 != '\0') {
    (**(code **)((int)uVar41 + 0xc))((int)((ulonglong)uVar41 >> 0x20));
    goto LAB_014b2198;
  }
  if (piVar5[10] != 0) {
    (**(code **)(piVar5[10] + 0xc))(piVar5[0xb]);
  }
  *(undefined8 *)(piVar5 + 10) = uVar41;
  DataMemoryBarrier(0xb);
  *(undefined1 *)(piVar5 + 0xc) = 0;
  DataMemoryBarrier(0xb);
  DataMemoryBarrier(0xb);
  if ((char)piVar5[0x10] != '\0') goto LAB_014b2198;
LAB_014b2214:
  if (*(int *)pbVar24 != 0) {
    FUN_014b27f8(pbVar24);
  }
  *(int **)pbVar24 = piVar5;
  bVar40 = true;
  goto LAB_014b2234;
  while( true ) {
    puVar34 = local_100;
    iVar10 = local_104;
    if (local_104 != 0) {
      if ((code *)*local_100 != (code *)0x0) {
        (*(code *)*local_100)(local_104);
      }
      if (puVar34[1] != 0) {
        thunk_FUN_016d3fb4(iVar10);
      }
    }
    DataMemoryBarrier(0xb);
    do {
      iVar10 = *local_fc;
      bVar40 = (bool)hasExclusiveAccess(local_fc);
    } while (!bVar40);
    *local_fc = iVar10 + -1;
    if (iVar10 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00784894(local_fc);
    }
    FUN_014952b4(&local_110);
    iVar10 = *(int *)(iVar6 + -4);
    if (iVar10 == 0) break;
LAB_014b150c:
    *(int *)(iVar6 + -4) = iVar10 + -1;
    puVar34 = (undefined4 *)(*(int *)(iVar6 + -8) + (iVar10 + -1) * 0x30);
    piVar14 = (int *)*puVar34;
    piVar35 = (int *)puVar34[1];
    piVar22 = (int *)puVar34[2];
    piStack_114 = (int *)puVar34[3];
    local_110 = puVar34[4];
    uStack_10c = puVar34[5];
    local_108 = puVar34[6];
    local_104 = puVar34[7];
    local_100 = (undefined4 *)puVar34[8];
    local_fc = (int *)puVar34[9];
    uStack_f8 = puVar34[10];
    uStack_f4 = puVar34[0xb];
    local_120 = piVar14;
    local_11c = piVar35;
    local_118 = piVar22;
    if ((char)local_fc[2] == '\0') {
      DataMemoryBarrier(0xb);
      bVar40 = *(int *)(local_110 + 8) != 3;
      if ((char)local_108 != '\x02') {
        bVar40 = *(int *)(local_110 + 8) == 1;
      }
      if (bVar40) {
        local_34 = local_154;
        local_38 = local_158;
        local_30 = local_150;
        if (piVar5 == (int *)&DAT_3b9aca00) {
LAB_014b1b34:
          FUN_0147598c(&local_80,&local_110);
          if (local_4c._1_1_ == '\x02') {
            local_c0 = local_80;
            ppiStack_bc = local_7c;
            piStack_b8 = local_78;
            local_b4 = local_74;
            piStack_b0 = local_70;
            piStack_ac = local_6c;
            iStack_a8 = local_68;
            iVar10 = *(int *)(iVar6 + -4);
          }
          else {
            local_e0 = local_80;
            ppiStack_dc = local_7c;
            local_d8 = local_78;
            local_d4 = local_74;
            piStack_d0 = local_70;
            piStack_cc = local_6c;
            iStack_c8 = local_68;
            iVar10 = *(int *)(iVar6 + -4);
            local_ec = local_154;
            local_f0 = local_158;
            local_e8 = local_150;
            if (iVar10 == *(int *)(iVar6 + -0xc)) {
              FUN_0148d604(iVar6 + -0xc);
            }
            piVar5 = (int *)(*(int *)(iVar6 + -8) + iVar10 * 0x30);
            *piVar5 = (int)local_f0;
            piVar5[1] = (int)local_ec;
            piVar5[2] = (int)local_e8;
            piVar5[3] = (int)local_e4;
            piVar5[4] = (int)local_e0;
            piVar5[5] = (int)ppiStack_dc;
            piVar5[6] = (int)local_d8;
            piVar5[7] = (int)local_d4;
            piVar5[8] = (int)piStack_d0;
            piVar5[9] = (int)piStack_cc;
            piVar5[10] = iStack_c8;
            piVar5[0xb] = iStack_c4;
            iVar10 = iVar10 + 1;
            *(int *)(iVar6 + -4) = iVar10;
            local_c0 = local_64;
            ppiStack_bc = uStack_60;
            piStack_b8 = local_5c;
            local_b4 = local_58;
            piStack_b0 = piStack_54;
            piStack_ac = local_50;
            iStack_a8 = local_4c;
          }
          piVar5 = (int *)((uint)&local_a0 | 4);
          *piVar5 = (int)local_c0;
          piVar5[1] = (int)ppiStack_bc;
          piVar5[2] = (int)piStack_b8;
          piVar5[3] = (int)local_b4;
          piVar5[4] = (int)piStack_b0;
          piVar5[5] = (int)piStack_ac;
          piVar5[6] = iStack_a8;
          local_148 = local_a0;
          piStack_144 = local_9c;
          piStack_140 = local_98;
          uStack_13c = (int *)uStack_94;
          bVar20 = false;
          local_138 = (int *)local_90;
          uStack_134 = (int *)uStack_8c;
          uStack_130 = (int *)uStack_88;
          uStack_12c = uStack_84;
          local_e4 = local_a0;
          local_e0 = local_9c;
          ppiStack_dc = (int **)local_98;
          local_d8 = (int *)uStack_94;
          local_d4 = (int *)local_90;
          piStack_d0 = (int *)uStack_8c;
          piStack_cc = (int *)uStack_88;
          iStack_c8 = uStack_84;
          iStack_c4 = uStack_128;
          local_f0 = piVar14;
          local_ec = (int **)piVar35;
          local_e8 = piVar22;
          bVar40 = bVar20;
          if (iVar10 == 0) goto LAB_014b16dc;
          goto LAB_014b2234;
        }
        local_f0 = piVar14;
        local_ec = (int **)piVar35;
        local_e8 = piVar22;
        FUN_015f3c24(&local_80,&local_38,&local_f0);
        piVar15 = local_74;
        piVar17 = local_78;
        if (((uint)local_80 & 1) != 0) {
          piVar17 = (int *)0x0;
          piVar15 = (int *)0x0;
        }
        if (piVar17 == piVar25 && piVar15 == piVar29) {
          if (((uint)local_80 & 1) != 0 || local_70 <= piVar5) goto LAB_014b1b34;
        }
        else if (piVar15 < piVar29 ||
                 (uint)((int)piVar29 - (int)piVar15) < (uint)(piVar17 <= piVar25))
        goto LAB_014b1b34;
      }
    }
  }
LAB_014b16b0:
  bVar20 = true;
  local_e8 = (int *)&DAT_3b9aca00;
  local_e4 = local_148;
  local_e0 = piStack_144;
  ppiStack_dc = (int **)piStack_140;
  local_d8 = uStack_13c;
  local_d4 = local_138;
  piStack_d0 = uStack_134;
  piStack_cc = uStack_130;
  iStack_c8 = uStack_12c;
LAB_014b16dc:
  local_148 = local_e4;
  piStack_144 = local_e0;
  piStack_140 = (int *)ppiStack_dc;
  uStack_13c = local_d8;
  local_138 = local_d4;
  uStack_134 = piStack_d0;
  uStack_130 = piStack_cc;
  uStack_12c = iStack_c8;
  iStack_c4 = uStack_128;
  uVar7 = FUN_014c854c(*(undefined4 *)(iVar12 + 0x50),*(undefined4 *)(iVar12 + 0x54),
                       *(undefined4 *)(iVar12 + 0x58),*(undefined4 *)(iVar12 + 0x5c),param_2);
  iVar6 = *(int *)(iVar12 + 0x40);
  uVar32 = *(uint *)(iVar12 + 0x44);
  uVar11 = uVar7 >> 0x19;
  local_1f4 = 0;
  while( true ) {
    uVar7 = uVar32 & uVar7;
    uVar8 = *(uint *)(iVar6 + uVar7);
    uVar9 = uVar8 ^ uVar11 * 0x1010101;
    uVar9 = ~uVar9 & 0x80808080 & uVar9 + 0xfefefeff;
    while (uVar9 != 0) {
      uVar36 = uVar7 + ((uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                      (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3) & uVar32;
      iVar10 = FUN_014c953c(param_2,iVar6 + -0x24 + uVar36 * -0x24);
      uVar9 = uVar9 - 1 & uVar9;
      if (iVar10 != 0) {
        ppiVar13 = &local_80;
        iVar16 = ((int)(uVar36 * 0x24) >> 2) * 0x38e38e39;
        puVar18 = (uint *)(iVar6 + (iVar16 - 4U & uVar32));
        uVar11 = *puVar18;
        uVar7 = *(uint *)(iVar6 + iVar16) & 0x80808080 & *(uint *)(iVar6 + iVar16) << 1;
        uVar27 = 0x80;
        iVar10 = iVar6 + uVar36 * -0x24;
        if (((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8
                           | uVar7 >> 0x18) >> 3) +
            ((uint)LZCOUNT(uVar11 & 0x80808080 & uVar11 << 1) >> 3) < 4) {
          *(int *)(iVar12 + 0x48) = *(int *)(iVar12 + 0x48) + 1;
          uVar27 = 0xff;
        }
        *(undefined1 *)(iVar6 + iVar16) = uVar27;
        iVar6 = *(int *)(iVar12 + 0x4c);
        *(undefined1 *)(puVar18 + 1) = uVar27;
        *(int *)(iVar12 + 0x4c) = iVar6 + -1;
        local_80 = *(int **)(iVar10 + -0x24);
        ppiVar23 = *(int ***)(iVar10 + -0x20);
        local_78 = *(int **)(iVar10 + -0x1c);
        local_74 = *(int **)(iVar10 + -0x18);
        local_70 = *(int **)(iVar10 + -0x14);
        local_6c = *(int **)(iVar10 + -0x10);
        local_68 = *(int *)(iVar10 + -0xc);
        local_64 = *(int **)(iVar10 + -8);
        uStack_60 = *(int ***)(iVar10 + -4);
        local_7c = ppiVar23;
        if (local_68 != -0x80000000) {
          iVar16 = *(int *)(iVar10 + -0xc);
          iVar37 = *(int *)(iVar10 + -4);
          iVar6 = *(int *)(iVar10 + -8);
          if (1 < (byte)local_80) {
            (*(code *)(*ppiVar23)[4])(ppiVar23 + 3,ppiVar23[1],ppiVar23[2]);
            thunk_FUN_016d3fb4(ppiVar23);
          }
          (*(code *)local_78[4])(&local_6c,local_74,local_70);
          if (iVar16 != -0x80000000) {
            iVar10 = iVar6 + 0x1c;
            for (iVar33 = 0; iVar37 != iVar33; iVar33 = iVar33 + 1) {
              iVar30 = iVar10 + -0xc;
              FUN_014217b4(iVar10);
              iVar10 = iVar10 + 0x30;
              FUN_014952b4(iVar30);
            }
            if (iVar16 != 0) {
              thunk_FUN_016d3fb4(iVar6);
            }
          }
        }
        goto LAB_014b1908;
      }
    }
    ppiVar13 = (int **)0x0;
    if ((uVar8 & 0x80808080 & uVar8 << 1) != 0) break;
    local_1f4 = local_1f4 + 4;
    uVar7 = uVar7 + local_1f4;
  }
LAB_014b1908:
  bVar40 = false;
  if ((bVar20) && (bVar40 = true, *(int *)pbVar24 == 0)) {
    local_40 = 0;
    local_44 = 0;
    local_4c = 0;
    local_50 = (int *)((uint)local_50 & 0xffffff00);
    local_58 = (int *)0x0;
    local_5c = (int *)((uint)local_5c & 0xffffff00);
    uStack_60._0_2_ = CONCAT11(2,(undefined1)uStack_60);
    local_7c = (int **)0x1;
    local_80 = (int *)0x1;
    piVar5 = (int *)thunk_FUN_016d4a50(0x44);
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x44);
    }
    FUN_016dd1aa(piVar5,&local_80,0x44);
    do {
      iVar6 = *piVar5;
      bVar40 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar40);
    *piVar5 = iVar6 + 1;
    if (iVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x14b2478);
      (*pcVar1)();
    }
    uVar11 = (uint)*param_2;
    local_c0 = piVar5;
    local_38 = piVar5;
    if (uVar11 == 0) {
      uVar7 = 0;
    }
    else if (uVar11 == 1) {
      uVar7 = (uint)param_2[1] << 8;
    }
    else {
      puVar34 = *(undefined4 **)(param_2 + 4);
      ppiVar13 = (int **)FUN_01495428(DAT_018dd947);
      (**(code **)*puVar34)(&local_120,puVar34 + 3,puVar34[1],puVar34[2]);
      *ppiVar13 = local_120;
      ppiVar13[1] = local_11c;
      ppiVar13[2] = local_118;
      ppiVar13[3] = piStack_114;
      uVar7 = 0;
    }
    local_80 = (int *)(uVar7 | uVar11);
    local_7c = ppiVar13;
    (*(code *)**(undefined4 **)(param_2 + 8))
              (&local_78,param_2 + 0x14,*(undefined4 *)(param_2 + 0xc),
               *(undefined4 *)(param_2 + 0x10));
    uVar7 = FUN_014c854c(*(undefined4 *)(iVar12 + 0x70),*(undefined4 *)(iVar12 + 0x74),
                         *(undefined4 *)(iVar12 + 0x78),*(undefined4 *)(iVar12 + 0x7c),&local_80);
    piVar29 = local_70;
    piVar25 = local_74;
    ppiVar13 = local_7c;
    puVar19 = (undefined2 *)((uint)&local_80 | 1);
    local_228 = 0;
    piVar14 = (int *)(iVar12 + 0x60);
    uVar32 = (uint)local_80 & 0xff;
    uVar11 = uVar7;
    do {
      uVar11 = *(uint *)(iVar12 + 100) & uVar11;
      uVar9 = *(uint *)(*piVar14 + uVar11);
      uVar8 = uVar9 ^ (uVar7 >> 0x19) * 0x1010101;
      for (uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff; uVar8 != 0; uVar8 = uVar8 - 1 & uVar8)
      {
        ppiVar23 = (int **)(*piVar14 +
                           (uVar11 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                                    (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >>
                                     3) & *(uint *)(iVar12 + 100)) * -0x28);
        if (*(char *)(ppiVar23 + -10) == '\x01') {
          if (uVar32 == 1) {
            if ((uint)*(byte *)((int)ppiVar23 + -0x27) == ((uint)local_80 >> 8 & 0xff)) {
LAB_014b1d54:
              if (ppiVar23[-6] == local_70) {
                piVar35 = (int *)0x0;
                do {
                  if (local_70 == piVar35) {
                    if (1 < uVar32) {
                      (*(code *)(*local_7c)[4])(local_7c + 3,local_7c[1],local_7c[2]);
                      thunk_FUN_016d3fb4(ppiVar13);
                    }
                    (*(code *)local_78[4])(&local_6c,piVar25,piVar29);
                    goto LAB_014b20b0;
                  }
                  uVar36 = (uint)*(byte *)((int)local_74 + (int)piVar35);
                  uVar26 = (uint)*(byte *)((int)ppiVar23[-7] + (int)piVar35);
                  piVar35 = (int *)((int)piVar35 + 1);
                  if (uVar36 - 0x41 < 0x1a) {
                    uVar36 = uVar36 | 0x20;
                  }
                  if (uVar26 - 0x41 < 0x1a) {
                    uVar26 = uVar26 | 0x20;
                  }
                } while (uVar26 == uVar36);
              }
            }
          }
          else {
LAB_014b1da0:
            if (uVar32 == 0) {
LAB_014b23b0:
                    /* WARNING: Subroutine does not return */
              FUN_00faa464(&DAT_00419463,0x28,&DAT_0188452c);
            }
          }
        }
        else {
          if (*(char *)(ppiVar23 + -10) != '\x02') goto LAB_014b23b0;
          if (uVar32 != 2) goto LAB_014b1da0;
          piVar35 = (int *)ppiVar23[-9][2];
          if (piVar35 == local_7c[2]) {
            pbVar38 = (byte *)local_7c[1];
            pbVar39 = (byte *)ppiVar23[-9][1];
            do {
              if (piVar35 == (int *)0x0) goto LAB_014b1d54;
              uVar36 = (uint)*pbVar38;
              piVar35 = (int *)((int)piVar35 - 1);
              uVar26 = (uint)*pbVar39;
              if (uVar36 - 0x41 < 0x1a) {
                uVar36 = uVar36 | 0x20;
              }
              if (uVar26 - 0x41 < 0x1a) {
                uVar26 = uVar26 | 0x20;
              }
              pbVar38 = pbVar38 + 1;
              pbVar39 = pbVar39 + 1;
            } while (uVar26 == uVar36);
          }
        }
      }
      if ((uVar9 & 0x80808080 & uVar9 << 1) != 0) goto LAB_014b1e44;
      local_228 = local_228 + 4;
      uVar11 = uVar11 + local_228;
    } while( true );
  }
LAB_014b2234:
  local_178 = local_e4;
  piStack_174 = local_e0;
  piStack_170 = (int *)ppiStack_dc;
  uStack_16c = local_d8;
  local_168 = local_d4;
  uStack_164 = piStack_d0;
  uStack_160 = piStack_cc;
  uStack_15c = iStack_c8;
  if (((local_208 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar6 = FUN_015bf3f8(), iVar6 == 0)) {
    *(undefined1 *)(iVar12 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar12 = *piVar21;
    bVar20 = (bool)hasExclusiveAccess(piVar21);
  } while (!bVar20);
  *piVar21 = 0;
  if (iVar12 == 2) {
    FUN_016d6968(0xf0,piVar21,0x81,1);
  }
  if (!bVar40) {
    FUN_014b2928(&local_1d8,pbVar31,param_2,(uint)&local_178 | 4);
    if ((char)local_1a0 != '\x02') {
      *param_1 = local_1d8;
      param_1[1] = uStack_1d4;
      param_1[2] = uStack_1d0;
      param_1[3] = uStack_1cc;
      param_1[4] = uStack_1c8;
      param_1[5] = local_1c4;
      param_1[6] = uStack_1c0;
      param_1[7] = uStack_1bc;
      param_1[8] = uStack_1b8;
      param_1[9] = uStack_1b4;
      param_1[10] = local_1b0;
      param_1[0xb] = uStack_1ac;
      param_1[0xc] = uStack_1a8;
      param_1[0xd] = uStack_1a4;
      param_1[0xe] = local_1a0;
      return;
    }
  }
LAB_014b22cc:
  if (*(int *)pbVar31 == 0) {
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)param_1 = 0;
    return;
  }
LAB_014b22d8:
  *(undefined1 *)(param_1 + 0xe) = 3;
  return;
}

