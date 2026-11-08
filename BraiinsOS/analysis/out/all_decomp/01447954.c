// FUN_01447954 @ 01447954 size=5196 calls_out=23 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01447954(undefined4 *param_1,byte *param_2,int *param_3)

{
  code *pcVar1;
  char cVar2;
  byte bVar3;
  int *piVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  byte *pbVar14;
  int iVar15;
  uint uVar16;
  undefined1 *puVar17;
  undefined4 *puVar18;
  uint uVar19;
  int *piVar20;
  uint *puVar21;
  undefined2 *puVar22;
  bool bVar23;
  int *piVar24;
  undefined1 *puVar25;
  byte *pbVar26;
  uint uVar27;
  undefined1 uVar28;
  uint uVar29;
  undefined4 *puVar30;
  uint *puVar31;
  byte *pbVar32;
  uint uVar33;
  byte *pbVar34;
  bool bVar35;
  undefined8 uVar36;
  int local_230;
  int local_1fc;
  int local_1f8;
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
  undefined1 *puStack_194;
  undefined1 *local_190;
  int iStack_18c;
  int iStack_188;
  int local_184;
  undefined1 local_180;
  char local_17f;
  undefined2 local_17e;
  int *local_178;
  undefined1 *puStack_174;
  undefined1 *puStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  int *local_158;
  uint *local_154;
  uint local_150;
  undefined4 local_148;
  undefined1 *puStack_144;
  undefined1 *puStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined2 local_124;
  undefined1 local_122;
  int *local_120;
  undefined1 *local_11c;
  undefined1 *local_118;
  uint uStack_114;
  int local_110;
  undefined4 uStack_10c;
  uint local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  int local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  int *local_f0;
  uint *local_ec;
  undefined1 *local_e8;
  int *local_e4;
  int *local_e0;
  uint *puStack_dc;
  uint local_d8;
  int *local_d4;
  undefined1 *puStack_d0;
  undefined1 *puStack_cc;
  int iStack_c8;
  int iStack_c4;
  int *local_c0;
  uint *puStack_bc;
  uint uStack_b8;
  int *local_b4;
  undefined1 *puStack_b0;
  undefined1 *puStack_ac;
  int iStack_a8;
  int *local_a0;
  undefined1 *local_9c;
  undefined1 *local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int *local_80;
  uint *local_7c;
  uint local_78;
  int *local_74;
  undefined1 *local_70;
  undefined1 *local_6c;
  undefined4 local_68;
  int *local_64;
  undefined4 uStack_60;
  uint local_5c;
  int *local_58;
  undefined1 *puStack_54;
  undefined1 *local_50;
  undefined4 local_4c;
  char local_48;
  undefined2 local_47;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_40;
  undefined2 local_3c;
  undefined1 local_3a;
  int *local_38;
  uint *local_34;
  uint local_30;
  
  pbVar26 = param_2 + 0x1c;
  piVar24 = *(int **)pbVar26;
  pbVar26[0] = 0;
  pbVar26[1] = 0;
  pbVar26[2] = 0;
  pbVar26[3] = 0;
  if (piVar24 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    local_120 = piVar24;
    if ((char)piVar24[0x10] == '\0') {
      uVar36 = (*(code *)**(undefined4 **)*param_3)(((undefined4 *)*param_3)[1]);
      piVar4 = piVar24 + 0xc;
      DataMemoryBarrier(0xb);
      do {
        iVar11 = *piVar4;
        bVar35 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar35);
      *(char *)piVar4 = '\x01';
      DataMemoryBarrier(0xb);
      if ((char)iVar11 == '\0') {
        if (piVar24[10] != 0) {
          (**(code **)(piVar24[10] + 0xc))(piVar24[0xb]);
        }
        *(undefined8 *)(piVar24 + 10) = uVar36;
        DataMemoryBarrier(0xb);
        *(undefined1 *)(piVar24 + 0xc) = 0;
        DataMemoryBarrier(0xb);
        DataMemoryBarrier(0xb);
        if ((char)piVar24[0x10] == '\0') goto LAB_01447ad0;
      }
      else {
        (**(code **)((int)uVar36 + 0xc))((int)((ulonglong)uVar36 >> 0x20));
      }
    }
    piVar4 = piVar24 + 9;
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar4;
      bVar35 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar35);
    *(char *)piVar4 = '\x01';
    uVar28 = 1;
    DataMemoryBarrier(0xb);
    if ((char)iVar11 == '\0') {
      cVar2 = *(char *)((int)piVar24 + 0x21);
      *(undefined1 *)((int)piVar24 + 0x21) = 2;
      if (cVar2 == '\x02') {
        DataMemoryBarrier(0xb);
        *(char *)piVar4 = '\0';
        uVar28 = 1;
        DataMemoryBarrier(0xb);
      }
      else {
        local_198 = (int *)piVar24[2];
        puStack_194 = (undefined1 *)piVar24[3];
        local_190 = (undefined1 *)piVar24[4];
        iStack_18c = piVar24[5];
        iStack_188 = piVar24[6];
        local_184 = piVar24[7];
        local_180 = (undefined1)piVar24[8];
        local_d8 = CONCAT31(local_d8._1_3_,local_180);
        DataMemoryBarrier(0xb);
        *(char *)piVar4 = '\0';
        DataMemoryBarrier(0xb);
        local_f0 = local_198;
        local_ec = (uint *)puStack_194;
        local_e8 = local_190;
        local_e4 = (int *)iStack_18c;
        local_e0 = (int *)iStack_188;
        puStack_dc = (uint *)local_184;
        if (cVar2 == '\x03') {
LAB_01447ad0:
          if (*(int *)pbVar26 != 0) {
            FUN_01449080(pbVar26);
          }
          *(int **)pbVar26 = piVar24;
          *(undefined1 *)(param_1 + 0xe) = 3;
          return;
        }
        local_17f = cVar2;
        local_17e = *(undefined2 *)((int)piVar24 + 0x22);
        if (*(char *)(local_184 + 8) == '\0') {
          DataMemoryBarrier(0xb);
          bVar35 = local_198[2] != 3;
          if (((uint)local_190 & 0xff) != 2) {
            bVar35 = local_198[2] == 1;
          }
          if (bVar35) {
            FUN_01449288(&local_80,param_2 + 0x18,param_2,&local_198);
            uVar28 = (byte)local_80;
            FUN_016dd1aa(&local_1d8,(uint)&local_80 | 1,0x37);
            piVar4 = piVar24 + 0xc;
            local_148 = (int *)CONCAT22(CONCAT11(local_148._3_1_,local_45),local_47);
            DataMemoryBarrier(0xb);
            *(undefined1 *)(piVar24 + 0x10) = 1;
            DataMemoryBarrier(0xb);
            do {
              iVar11 = *piVar4;
              bVar35 = (bool)hasExclusiveAccess(piVar4);
            } while (!bVar35);
            *(char *)piVar4 = '\x01';
            DataMemoryBarrier(0xb);
            if ((char)iVar11 == '\0') {
              iVar11 = piVar24[10];
              piVar24[10] = 0;
              DataMemoryBarrier(0xb);
              *(undefined1 *)(piVar24 + 0xc) = 0;
              DataMemoryBarrier(0xb);
              if (iVar11 != 0) {
                (**(code **)(iVar11 + 0xc))(piVar24[0xb]);
              }
            }
            piVar4 = piVar24 + 0xf;
            DataMemoryBarrier(0xb);
            do {
              iVar11 = *piVar4;
              bVar35 = (bool)hasExclusiveAccess(piVar4);
            } while (!bVar35);
            *(char *)piVar4 = '\x01';
            DataMemoryBarrier(0xb);
            if ((char)iVar11 == '\0') {
              iVar11 = piVar24[0xd];
              piVar24[0xd] = 0;
              DataMemoryBarrier(0xb);
              *(undefined1 *)(piVar24 + 0xf) = 0;
              DataMemoryBarrier(0xb);
              if (iVar11 != 0) {
                (**(code **)(iVar11 + 4))(piVar24[0xe]);
              }
            }
            DataMemoryBarrier(0xb);
            do {
              iVar11 = *piVar24;
              bVar35 = (bool)hasExclusiveAccess(piVar24);
            } while (!bVar35);
            *piVar24 = iVar11 + -1;
            if (iVar11 == 1) {
              DataMemoryBarrier(0xb);
              FUN_0143f6a0(piVar24);
            }
            if (local_48 == '\x02') goto LAB_0144844c;
            if (local_48 != '\x03') {
              if (local_48 != '\x04') {
                FUN_016dd1aa((undefined1 *)((int)param_1 + 1),&local_1d8,0x37);
                *(undefined2 *)((int)param_1 + 0x39) = (undefined2)local_148;
                *(undefined1 *)((int)param_1 + 0x3b) = local_148._2_1_;
                *(char *)(param_1 + 0xe) = local_48;
                *(undefined1 *)param_1 = uVar28;
                return;
              }
              goto LAB_01448c14;
            }
            goto LAB_01447cd8;
          }
        }
        uVar28 = 2;
        FUN_014491b0(&local_198);
      }
    }
    DataMemoryBarrier(0xb);
    *(undefined1 *)(piVar24 + 0x10) = 1;
    piVar4 = piVar24 + 0xc;
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar4;
      bVar35 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar35);
    *(char *)piVar4 = '\x01';
    DataMemoryBarrier(0xb);
    if ((char)iVar11 == '\0') {
      iVar11 = piVar24[10];
      piVar24[10] = 0;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(piVar24 + 0xc) = 0;
      DataMemoryBarrier(0xb);
      if (iVar11 != 0) {
        (**(code **)(iVar11 + 0xc))(piVar24[0xb]);
      }
    }
    piVar4 = piVar24 + 0xf;
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar4;
      bVar35 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar35);
    *(char *)piVar4 = '\x01';
    DataMemoryBarrier(0xb);
    if ((char)iVar11 == '\0') {
      iVar11 = piVar24[0xd];
      piVar24[0xd] = 0;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(piVar24 + 0xf) = 0;
      DataMemoryBarrier(0xb);
      if (iVar11 != 0) {
        (**(code **)(iVar11 + 4))(piVar24[0xe]);
      }
    }
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar24;
      bVar35 = (bool)hasExclusiveAccess(piVar24);
    } while (!bVar35);
    *piVar24 = iVar11 + -1;
    if (iVar11 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0143f6a0(piVar24);
    }
LAB_0144844c:
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)param_1 = uVar28;
    return;
  }
LAB_01447cd8:
  pbVar14 = param_2 + 0x18;
  iVar11 = *(int *)pbVar14;
  if (iVar11 != 0) {
    piVar24 = (int *)(iVar11 + 8);
    puVar18 = (undefined4 *)*param_3;
    do {
      if (*piVar24 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(piVar24);
        goto LAB_01447d1c;
      }
      bVar35 = (bool)hasExclusiveAccess(piVar24);
    } while (!bVar35);
    *piVar24 = 1;
    DataMemoryBarrier(0xb);
LAB_01447d1c:
    uVar19 = 0;
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      cVar2 = *(char *)(iVar11 + 0xc);
    }
    else {
      uVar19 = FUN_015bf3f8();
      uVar19 = uVar19 ^ 1;
      cVar2 = *(char *)(iVar11 + 0xc);
    }
    if (cVar2 != '\0') {
      uVar27 = (uint)local_7c >> 8;
      local_7c = (uint *)CONCAT31((int3)uVar27,(char)uVar19);
      local_80 = piVar24;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_80,&DAT_018a41dc,&DAT_018a5cc8);
    }
    uVar27 = *(uint *)(iVar11 + 0x10);
    piVar4 = *(int **)(iVar11 + 0x14);
    puVar5 = *(undefined1 **)(iVar11 + 0x18);
    if (*(int *)(iVar11 + 0x88) == 0) {
      FUN_015f3b0c(&local_80,1);
      iVar6 = *(int *)(iVar11 + 0x4c);
      local_158 = local_80;
      local_154 = local_7c;
      local_150 = local_78;
    }
    else {
      (**(code **)(*(int *)(iVar11 + 0x8c) + 0x14))
                (&local_158,
                 *(int *)(iVar11 + 0x88) + (*(int *)(*(int *)(iVar11 + 0x8c) + 8) - 1U & 0xfffffff8)
                 + 8);
      iVar6 = *(int *)(iVar11 + 0x4c);
    }
    if (iVar6 != 0) {
      uVar29 = FUN_01441568(*(undefined4 *)(iVar11 + 0x50),*(undefined4 *)(iVar11 + 0x54),
                            *(undefined4 *)(iVar11 + 0x58),*(undefined4 *)(iVar11 + 0x5c),param_2);
      iVar6 = *(int *)(iVar11 + 0x40);
      uVar8 = *(uint *)(iVar11 + 0x44);
      uVar7 = uVar29 >> 0x19;
      local_1fc = 0;
      while( true ) {
        uVar29 = uVar8 & uVar29;
        uVar33 = *(uint *)(iVar6 + uVar29);
        uVar9 = uVar33 ^ uVar7 * 0x1010101;
        uVar9 = ~uVar9 & 0x80808080 & uVar9 + 0xfefefeff;
        while (uVar9 != 0) {
          uVar13 = uVar29 + ((uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                           (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3) &
                   uVar8;
          iVar10 = FUN_014c953c(param_2,iVar6 + -0x24 + uVar13 * -0x24);
          uVar9 = uVar9 - 1 & uVar9;
          if (iVar10 != 0) {
            iVar6 = iVar6 + uVar13 * -0x24;
            iVar10 = *(int *)(iVar6 + -4);
            if (iVar10 == 0) goto LAB_01448044;
            goto LAB_01447f08;
          }
        }
        if ((uVar33 & 0x80808080 & uVar33 << 1) != 0) break;
        local_1fc = local_1fc + 4;
        uVar29 = uVar29 + local_1fc;
      }
    }
    goto LAB_01448044;
  }
  goto LAB_01448c08;
LAB_0144877c:
  if (*(int *)(iVar11 + 0x68) == 0) {
    FUN_0142a60c(piVar12,(undefined4 *)(iVar11 + 0x70));
    uVar29 = (uint)local_80 & 0xff;
  }
  local_122 = *(undefined1 *)(puVar22 + 1);
  local_124 = *puVar22;
  local_a0 = local_74;
  local_9c = local_70;
  local_98 = local_6c;
  if (uVar29 == 3) {
    puVar21 = puVar31;
  }
  else {
    puVar21 = (uint *)*piVar12;
    uVar9 = *(uint *)(iVar11 + 100);
    uVar8 = uVar9 & uVar7;
    uVar27 = *(uint *)((int)puVar21 + uVar8) & 0x80808080;
    if (uVar27 == 0) {
      iVar6 = 4;
      do {
        uVar8 = uVar8 + iVar6;
        iVar6 = iVar6 + 4;
        uVar8 = uVar8 & uVar9;
        uVar27 = *(uint *)((int)puVar21 + uVar8) & 0x80808080;
      } while (uVar27 == 0);
    }
    uVar27 = uVar8 + ((uint)LZCOUNT(uVar27 << 0x18 | (uVar27 >> 8 & 0xff) << 0x10 |
                                    (uVar27 >> 0x10 & 0xff) << 8 | uVar27 >> 0x18) >> 3) & uVar9;
    uVar8 = (uint)*(char *)((int)puVar21 + uVar27);
    if (-1 < (int)uVar8) {
      uVar27 = *puVar21 & 0x80808080;
      uVar27 = LZCOUNT((*puVar21 & 0x80) << 0x18 | (uVar27 >> 8 & 0xff) << 0x10 |
                       (uVar27 >> 0x10 & 0xff) << 8 | uVar27 >> 0x18);
      uVar8 = (uint)*(byte *)((int)puVar21 + (uVar27 >> 3));
      uVar27 = uVar27 >> 3;
    }
    *(uint *)(iVar11 + 0x68) = *(int *)(iVar11 + 0x68) - (uVar8 & 1);
    bVar3 = (byte)(uVar7 >> 0x19);
    *(byte *)((int)puVar21 + uVar27) = bVar3;
    *(byte *)((int)puVar21 + (uVar27 - 4 & uVar9) + 4) = bVar3;
    puVar21 = puVar21 + uVar27 * -10;
    *(char *)(puVar21 + -10) = (char)uVar29;
    *(undefined2 *)((int)puVar21 + -0x27) = local_124;
    *(undefined1 *)((int)puVar21 + -0x25) = local_122;
    puVar21[-1] = 0;
    puVar21[-9] = (uint)puVar31;
    puVar21[-8] = local_78;
    puVar21[-7] = (uint)local_74;
    puVar21[-6] = (uint)local_70;
    puVar21[-5] = (uint)local_6c;
    puVar21[-4] = 0;
    puVar21[-3] = 4;
    puVar21[-2] = 0;
    *(int *)(iVar11 + 0x6c) = *(int *)(iVar11 + 0x6c) + 1;
    local_120 = local_a0;
    local_11c = local_9c;
    local_118 = local_98;
    local_3c = local_124;
    local_3a = local_122;
  }
LAB_014489e0:
  uVar7 = puVar21[-4];
  uVar27 = puVar21[-1];
  local_80 = piVar4;
  if (uVar27 == uVar7) {
    FUN_01456474();
    uVar7 = puVar21[-4];
    uVar27 = puVar21[-1];
  }
  uVar8 = puVar21[-2] + uVar27;
  uVar29 = uVar8 - uVar7;
  if (uVar8 < uVar7) {
    uVar29 = uVar8;
  }
  *(int **)(puVar21[-3] + uVar29 * 4) = piVar4;
  puVar21[-1] = uVar27 + 1;
  DataMemoryBarrier(0xb);
  if ((char)piVar4[0x10] == '\0') {
    uVar36 = (**(code **)*puVar18)(puVar18[1]);
    piVar20 = piVar4 + 0xc;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar20;
      bVar35 = (bool)hasExclusiveAccess(piVar20);
    } while (!bVar35);
    *(char *)piVar20 = '\x01';
    DataMemoryBarrier(0xb);
    if ((char)iVar6 != '\0') {
      (**(code **)((int)uVar36 + 0xc))((int)((ulonglong)uVar36 >> 0x20));
      goto LAB_01448acc;
    }
    if (piVar4[10] != 0) {
      (**(code **)(piVar4[10] + 0xc))(piVar4[0xb]);
    }
    *(undefined8 *)(piVar4 + 10) = uVar36;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(piVar4 + 0xc) = 0;
    DataMemoryBarrier(0xb);
    DataMemoryBarrier(0xb);
    if ((char)piVar4[0x10] != '\0') goto LAB_01448acc;
  }
  else {
LAB_01448acc:
    piVar20 = piVar4 + 9;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar20;
      bVar35 = (bool)hasExclusiveAccess(piVar20);
    } while (!bVar35);
    *(char *)piVar20 = '\x01';
    DataMemoryBarrier(0xb);
    if ((char)iVar6 != '\0') {
LAB_01448d90:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00409069,0x39,&DAT_018a5cd8);
    }
    bVar3 = *(byte *)((int)piVar4 + 0x21);
    *(undefined1 *)((int)piVar4 + 0x21) = 2;
    if (bVar3 == 2) {
      DataMemoryBarrier(0xb);
      *(char *)piVar20 = '\0';
      DataMemoryBarrier(0xb);
      goto LAB_01448d90;
    }
    local_80 = (int *)piVar4[2];
    local_7c = (uint *)piVar4[3];
    local_78 = piVar4[4];
    local_74 = (int *)piVar4[5];
    local_70 = (undefined1 *)piVar4[6];
    local_6c = (undefined1 *)piVar4[7];
    local_68 = CONCAT22(*(undefined2 *)((int)piVar4 + 0x22),CONCAT11(bVar3,(char)piVar4[8]));
    DataMemoryBarrier(0xb);
    *(char *)piVar20 = '\0';
    DataMemoryBarrier(0xb);
    if (bVar3 != 3) {
      if (bVar3 < 2) {
        FUN_014491b0(&local_80);
      }
      goto LAB_01448d90;
    }
  }
  if (*(int *)pbVar26 != 0) {
    FUN_01449080(pbVar26);
  }
  *(int **)pbVar26 = piVar4;
  bVar35 = true;
  goto LAB_01448b6c;
LAB_01447f08:
  do {
    *(int *)(iVar6 + -4) = iVar10 + -1;
    puVar30 = (undefined4 *)(*(int *)(iVar6 + -8) + (iVar10 + -1) * 0x30);
    piVar20 = (int *)*puVar30;
    puVar17 = (undefined1 *)puVar30[1];
    puVar25 = (undefined1 *)puVar30[2];
    uStack_114 = puVar30[3];
    local_110 = puVar30[4];
    uStack_10c = puVar30[5];
    local_108 = puVar30[6];
    uStack_104 = puVar30[7];
    uStack_100 = puVar30[8];
    local_fc = puVar30[9];
    uStack_f8 = puVar30[10];
    uStack_f4 = puVar30[0xb];
    local_120 = piVar20;
    local_11c = puVar17;
    local_118 = puVar25;
    if (*(char *)(local_fc + 8) == '\0') {
      DataMemoryBarrier(0xb);
      bVar35 = *(int *)(local_110 + 8) != 3;
      if ((local_108 & 0xff) != 2) {
        bVar35 = *(int *)(local_110 + 8) == 1;
      }
      if (bVar35) {
        local_34 = local_154;
        local_38 = local_158;
        local_30 = local_150;
        if (puVar5 == &DAT_3b9aca00) {
LAB_01448460:
          FUN_0142bdd8(&local_80,&local_110);
          if (local_4c._1_1_ == '\x02') {
            local_c0 = local_80;
            puStack_bc = local_7c;
            uStack_b8 = local_78;
            local_b4 = local_74;
            puStack_b0 = local_70;
            puStack_ac = local_6c;
            iStack_a8 = local_68;
            iVar10 = *(int *)(iVar6 + -4);
          }
          else {
            local_e0 = local_80;
            puStack_dc = local_7c;
            local_d8 = local_78;
            local_d4 = local_74;
            puStack_d0 = local_70;
            puStack_cc = local_6c;
            iStack_c8 = local_68;
            iVar10 = *(int *)(iVar6 + -4);
            local_ec = local_154;
            local_f0 = local_158;
            local_e8 = (undefined1 *)local_150;
            if (iVar10 == *(int *)(iVar6 + -0xc)) {
              FUN_0148d604(iVar6 + -0xc);
            }
            piVar4 = (int *)(*(int *)(iVar6 + -8) + iVar10 * 0x30);
            *piVar4 = (int)local_f0;
            piVar4[1] = (int)local_ec;
            piVar4[2] = (int)local_e8;
            piVar4[3] = (int)local_e4;
            piVar4[4] = (int)local_e0;
            piVar4[5] = (int)puStack_dc;
            piVar4[6] = local_d8;
            piVar4[7] = (int)local_d4;
            piVar4[8] = (int)puStack_d0;
            piVar4[9] = (int)puStack_cc;
            piVar4[10] = iStack_c8;
            piVar4[0xb] = iStack_c4;
            iVar10 = iVar10 + 1;
            *(int *)(iVar6 + -4) = iVar10;
            local_c0 = local_64;
            puStack_bc = uStack_60;
            uStack_b8 = local_5c;
            local_b4 = local_58;
            puStack_b0 = puStack_54;
            puStack_ac = local_50;
            iStack_a8 = local_4c;
          }
          piVar4 = (int *)((uint)&local_a0 | 4);
          *piVar4 = (int)local_c0;
          piVar4[1] = (int)puStack_bc;
          piVar4[2] = uStack_b8;
          piVar4[3] = (int)local_b4;
          piVar4[4] = (int)puStack_b0;
          piVar4[5] = (int)puStack_ac;
          piVar4[6] = iStack_a8;
          local_148 = local_a0;
          puStack_144 = local_9c;
          puStack_140 = local_98;
          uStack_13c = uStack_94;
          bVar23 = false;
          local_138 = (int *)local_90;
          uStack_134 = (undefined1 *)uStack_8c;
          uStack_130 = (undefined1 *)uStack_88;
          uStack_12c = uStack_84;
          local_e4 = local_a0;
          local_e0 = (int *)local_9c;
          puStack_dc = (uint *)local_98;
          local_d8 = uStack_94;
          local_d4 = (int *)local_90;
          puStack_d0 = (undefined1 *)uStack_8c;
          puStack_cc = (undefined1 *)uStack_88;
          iStack_c8 = uStack_84;
          iStack_c4 = uStack_128;
          local_f0 = piVar20;
          local_ec = (uint *)puVar17;
          local_e8 = puVar25;
          bVar35 = bVar23;
          if (iVar10 == 0) goto LAB_01448070;
          goto LAB_01448b6c;
        }
        local_f0 = piVar20;
        local_ec = (uint *)puVar17;
        local_e8 = puVar25;
        FUN_015f3c24(&local_80,&local_38,&local_f0);
        piVar12 = local_74;
        uVar7 = local_78;
        if (((uint)local_80 & 1) != 0) {
          uVar7 = 0;
          piVar12 = (int *)0x0;
        }
        if (uVar7 == uVar27 && piVar12 == piVar4) {
          if (((uint)local_80 & 1) != 0 || local_70 <= puVar5) goto LAB_01448460;
        }
        else if (piVar12 < piVar4 || (uint)((int)piVar4 - (int)piVar12) < (uint)(uVar7 <= uVar27))
        goto LAB_01448460;
      }
    }
    FUN_014491b0(&local_110);
    iVar10 = *(int *)(iVar6 + -4);
  } while (iVar10 != 0);
LAB_01448044:
  bVar23 = true;
  local_e8 = &DAT_3b9aca00;
  local_e4 = local_148;
  local_e0 = (int *)puStack_144;
  puStack_dc = (uint *)puStack_140;
  local_d8 = uStack_13c;
  local_d4 = local_138;
  puStack_d0 = uStack_134;
  puStack_cc = uStack_130;
  iStack_c8 = uStack_12c;
LAB_01448070:
  local_148 = local_e4;
  puStack_144 = (undefined1 *)local_e0;
  puStack_140 = (undefined1 *)puStack_dc;
  uStack_13c = local_d8;
  local_138 = local_d4;
  uStack_134 = puStack_d0;
  uStack_130 = puStack_cc;
  uStack_12c = iStack_c8;
  iStack_c4 = uStack_128;
  uVar7 = FUN_01441568(*(undefined4 *)(iVar11 + 0x50),*(undefined4 *)(iVar11 + 0x54),
                       *(undefined4 *)(iVar11 + 0x58),*(undefined4 *)(iVar11 + 0x5c),param_2);
  iVar6 = *(int *)(iVar11 + 0x40);
  uVar29 = *(uint *)(iVar11 + 0x44);
  uVar27 = uVar7 >> 0x19;
  local_1f8 = 0;
  while( true ) {
    uVar7 = uVar29 & uVar7;
    uVar8 = *(uint *)(iVar6 + uVar7);
    uVar9 = uVar8 ^ uVar27 * 0x1010101;
    puVar31 = (uint *)(~uVar9 & 0x80808080 & uVar9 + 0xfefefeff);
    while (puVar31 != (uint *)0x0) {
      uVar9 = uVar7 + ((uint)LZCOUNT((int)puVar31 << 0x18 | ((uint)puVar31 >> 8 & 0xff) << 0x10 |
                                     ((uint)puVar31 >> 0x10 & 0xff) << 8 | (uint)puVar31 >> 0x18) >>
                      3) & uVar29;
      iVar10 = FUN_014c953c(param_2,iVar6 + -0x24 + uVar9 * -0x24);
      puVar31 = (uint *)((int)puVar31 - 1U & (uint)puVar31);
      if (iVar10 != 0) {
        iVar15 = ((int)(uVar9 * 0x24) >> 2) * 0x38e38e39;
        puVar21 = (uint *)(iVar6 + (iVar15 - 4U & uVar29));
        uVar27 = *puVar21;
        uVar7 = *(uint *)(iVar6 + iVar15) & 0x80808080 & *(uint *)(iVar6 + iVar15) << 1;
        iVar10 = iVar6 + uVar9 * -0x24;
        uVar28 = 0x80;
        if (((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8
                           | uVar7 >> 0x18) >> 3) +
            ((uint)LZCOUNT(uVar27 & 0x80808080 & uVar27 << 1) >> 3) < 4) {
          *(int *)(iVar11 + 0x48) = *(int *)(iVar11 + 0x48) + 1;
          uVar28 = 0xff;
        }
        *(undefined1 *)(iVar6 + iVar15) = uVar28;
        iVar6 = *(int *)(iVar11 + 0x4c);
        *(undefined1 *)(puVar21 + 1) = uVar28;
        *(int *)(iVar11 + 0x4c) = iVar6 + -1;
        local_80 = *(int **)(iVar10 + -0x24);
        puVar21 = *(uint **)(iVar10 + -0x20);
        local_78 = *(uint *)(iVar10 + -0x1c);
        local_74 = *(int **)(iVar10 + -0x18);
        local_70 = *(undefined1 **)(iVar10 + -0x14);
        local_6c = *(undefined1 **)(iVar10 + -0x10);
        local_68 = *(int *)(iVar10 + -0xc);
        local_64 = *(int **)(iVar10 + -8);
        uStack_60 = *(uint **)(iVar10 + -4);
        local_7c = puVar21;
        if (local_68 != -0x80000000) {
          iVar15 = *(int *)(iVar10 + -0xc);
          puVar31 = *(uint **)(iVar10 + -8);
          iVar6 = *(int *)(iVar10 + -4);
          if (1 < (byte)local_80) {
            (**(code **)(*puVar21 + 0x10))(puVar21 + 3,puVar21[1],puVar21[2]);
            thunk_FUN_016d3fb4(puVar21);
          }
          (**(code **)(local_78 + 0x10))(&local_6c,local_74,local_70);
          if (iVar15 != -0x80000000) {
            iVar6 = iVar6 + 1;
            puVar21 = puVar31;
            while (iVar6 = iVar6 + -1, iVar6 != 0) {
              FUN_0141ab58(puVar21);
              puVar21 = puVar21 + 0xc;
            }
            if (iVar15 != 0) {
              thunk_FUN_016d3fb4(puVar31);
            }
          }
        }
        goto LAB_01448298;
      }
    }
    puVar31 = (uint *)0x0;
    if ((uVar8 & 0x80808080 & uVar8 << 1) != 0) break;
    local_1f8 = local_1f8 + 4;
    uVar7 = uVar7 + local_1f8;
  }
LAB_01448298:
  bVar35 = false;
  if ((bVar23) && (bVar35 = true, *(int *)pbVar26 == 0)) {
    local_40 = 0;
    local_44 = 0;
    local_4c = 0;
    local_50 = (undefined1 *)((uint)local_50 & 0xffffff00);
    local_58 = (int *)0x0;
    local_5c = local_5c & 0xffffff00;
    uStack_60._0_2_ = CONCAT11(2,(undefined1)uStack_60);
    local_7c = (uint *)0x1;
    local_80 = (int *)0x1;
    piVar4 = (int *)thunk_FUN_016d4a50(0x44);
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x44);
    }
    FUN_016dd1aa(piVar4,&local_80,0x44);
    do {
      iVar6 = *piVar4;
      bVar35 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar35);
    *piVar4 = iVar6 + 1;
    if (iVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1448dac);
      (*pcVar1)();
    }
    uVar27 = (uint)*param_2;
    local_c0 = piVar4;
    local_38 = piVar4;
    if (uVar27 == 0) {
      uVar7 = 0;
    }
    else if (uVar27 == 1) {
      uVar7 = (uint)param_2[1] << 8;
    }
    else {
      puVar30 = *(undefined4 **)(param_2 + 4);
      puVar31 = (uint *)FUN_01495428(DAT_018dd947);
      (**(code **)*puVar30)(&local_120,puVar30 + 3,puVar30[1],puVar30[2]);
      *puVar31 = (uint)local_120;
      puVar31[1] = (uint)local_11c;
      puVar31[2] = (uint)local_118;
      puVar31[3] = uStack_114;
      uVar7 = 0;
    }
    local_80 = (int *)(uVar7 | uVar27);
    local_7c = puVar31;
    (*(code *)**(undefined4 **)(param_2 + 8))
              (&local_78,param_2 + 0x14,*(undefined4 *)(param_2 + 0xc),
               *(undefined4 *)(param_2 + 0x10));
    uVar7 = FUN_01441568(*(undefined4 *)(iVar11 + 0x70),*(undefined4 *)(iVar11 + 0x74),
                         *(undefined4 *)(iVar11 + 0x78),*(undefined4 *)(iVar11 + 0x7c),&local_80);
    puVar5 = local_70;
    piVar20 = local_74;
    puVar31 = local_7c;
    puVar22 = (undefined2 *)((uint)&local_80 | 1);
    local_230 = 0;
    piVar12 = (int *)(iVar11 + 0x60);
    uVar29 = (uint)local_80 & 0xff;
    uVar27 = uVar7;
    do {
      uVar27 = *(uint *)(iVar11 + 100) & uVar27;
      uVar9 = *(uint *)(*piVar12 + uVar27);
      uVar8 = uVar9 ^ (uVar7 >> 0x19) * 0x1010101;
      for (uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff; uVar8 != 0; uVar8 = uVar8 - 1 & uVar8)
      {
        puVar21 = (uint *)(*piVar12 +
                          (uVar27 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                                   (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3
                                    ) & *(uint *)(iVar11 + 100)) * -0x28);
        if ((char)puVar21[-10] == '\x01') {
          if (uVar29 == 1) {
            if ((uint)*(byte *)((int)puVar21 + -0x27) == ((uint)local_80 >> 8 & 0xff)) {
LAB_0144868c:
              if ((undefined1 *)puVar21[-6] == local_70) {
                puVar17 = (undefined1 *)0x0;
                do {
                  if (local_70 == puVar17) {
                    if (1 < uVar29) {
                      (**(code **)(*local_7c + 0x10))(local_7c + 3,local_7c[1],local_7c[2]);
                      thunk_FUN_016d3fb4(puVar31);
                    }
                    (**(code **)(local_78 + 0x10))(&local_6c,piVar20,puVar5);
                    goto LAB_014489e0;
                  }
                  uVar13 = (uint)*(byte *)((int)local_74 + (int)puVar17);
                  uVar33 = (uint)(byte)puVar17[puVar21[-7]];
                  puVar17 = puVar17 + 1;
                  if (uVar13 - 0x41 < 0x1a) {
                    uVar13 = uVar13 | 0x20;
                  }
                  if (uVar33 - 0x41 < 0x1a) {
                    uVar33 = uVar33 | 0x20;
                  }
                } while (uVar33 == uVar13);
              }
            }
          }
          else {
LAB_014486d8:
            if (uVar29 == 0) {
LAB_01448ce0:
                    /* WARNING: Subroutine does not return */
              FUN_00faa464(&DAT_00419463,0x28,&DAT_0188452c);
            }
          }
        }
        else {
          if ((char)puVar21[-10] != '\x02') goto LAB_01448ce0;
          if (uVar29 != 2) goto LAB_014486d8;
          uVar33 = *(uint *)(puVar21[-9] + 8);
          if (uVar33 == local_7c[2]) {
            pbVar32 = *(byte **)(puVar21[-9] + 4);
            pbVar34 = (byte *)local_7c[1];
            do {
              if (uVar33 == 0) goto LAB_0144868c;
              uVar13 = (uint)*pbVar34;
              uVar33 = uVar33 - 1;
              uVar16 = (uint)*pbVar32;
              if (uVar13 - 0x41 < 0x1a) {
                uVar13 = uVar13 | 0x20;
              }
              if (uVar16 - 0x41 < 0x1a) {
                uVar16 = uVar16 | 0x20;
              }
              pbVar32 = pbVar32 + 1;
              pbVar34 = pbVar34 + 1;
            } while (uVar16 == uVar13);
          }
        }
      }
      if ((uVar9 & 0x80808080 & uVar9 << 1) != 0) goto LAB_0144877c;
      local_230 = local_230 + 4;
      uVar27 = uVar27 + local_230;
    } while( true );
  }
LAB_01448b6c:
  local_178 = local_e4;
  puStack_174 = (undefined1 *)local_e0;
  puStack_170 = (undefined1 *)puStack_dc;
  uStack_16c = local_d8;
  local_168 = local_d4;
  uStack_164 = puStack_d0;
  uStack_160 = puStack_cc;
  uStack_15c = iStack_c8;
  if (((uVar19 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar6 = FUN_015bf3f8(), iVar6 == 0))
  {
    *(undefined1 *)(iVar11 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar11 = *piVar24;
    bVar23 = (bool)hasExclusiveAccess(piVar24);
  } while (!bVar23);
  *piVar24 = 0;
  if (iVar11 == 2) {
    FUN_016d6968(0xf0,piVar24,0x81,1);
  }
  if (!bVar35) {
    FUN_01449288(&local_1d8,pbVar14,param_2,(uint)&local_178 | 4);
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
LAB_01448c08:
  if (*(int *)pbVar14 == 0) {
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)param_1 = 0;
    return;
  }
LAB_01448c14:
  *(undefined1 *)(param_1 + 0xe) = 3;
  return;
}

