// FUN_006fce58 @ 006fce58 size=2548 calls_out=21 calls_in=1
// strings: /etc/bosminer-experimental.toml | rambo_mode | rambo_mode | SetGloba | SetGloba | lDefaultError

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006fce58(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint ******ppppppuVar10;
  code *pcVar11;
  uint *puVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  uint uVar16;
  char *pcVar17;
  undefined *puVar18;
  uint *******pppppppuVar19;
  undefined4 ******ppppppuVar20;
  undefined4 *puVar21;
  uint *******pppppppuVar22;
  uint *******pppppppuVar23;
  undefined4 *puVar24;
  uint ******ppppppuVar25;
  int local_16c;
  int local_15c;
  int local_140;
  undefined4 *local_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  uint *******local_128;
  uint ******local_124;
  uint ******local_120;
  uint ******ppppppuStack_11c;
  uint ******local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  uint *******local_108;
  undefined4 local_104;
  undefined4 *local_100;
  undefined4 *******local_fc;
  undefined **local_f8;
  undefined *local_f4;
  undefined *local_f0;
  uint *******local_ec;
  uint *******local_e8;
  undefined4 *local_e4;
  int local_e0;
  undefined4 *******local_d8;
  code *local_d4;
  uint *******local_d0;
  uint local_cc;
  int local_c8;
  int local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int local_b0 [2];
  uint *******local_a8;
  uint local_a4;
  int local_a0;
  int iStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint *******local_80;
  undefined4 local_7c;
  undefined4 *local_78;
  int local_74;
  undefined4 *******local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined2 local_38;
  undefined1 local_36;
  undefined4 local_35;
  undefined4 local_31;
  undefined1 local_2d;
  undefined2 local_2c;
  undefined1 local_2a;
  
  FUN_015ec424(&local_80,"/etc/bosminer-experimental.toml",0x1f);
  if (local_80 == (uint *******)0x80000000) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((uint)local_7c & 0xff) {
    case 0:
      puVar15 = (undefined4 *)&SUB_00000002;
      if (local_78 == (undefined4 *)&SUB_00000002) goto LAB_006fcef8;
      goto LAB_006fd7d0;
    case 1:
      cVar5 = local_7c._1_1_;
      break;
    default:
      cVar5 = *(char *)(local_78 + 2);
    }
    if (cVar5 != '\0') {
LAB_006fd7d0:
      local_e8 = (uint *******)local_7c;
      local_e4 = local_78;
      uVar13 = FUN_00f40f24(&local_e8);
      goto LAB_006fd6a8;
    }
    puVar15 = local_78;
LAB_006fcef8:
    puVar21 = (undefined4 *)0x0;
    if (2 < (byte)local_7c) {
      uVar14 = *puVar15;
      puVar24 = (undefined4 *)puVar15[1];
      pcVar11 = (code *)*puVar24;
      if (pcVar11 != (code *)0x0) {
        (*pcVar11)(uVar14);
      }
      if (puVar24[1] != 0) {
        thunk_FUN_016d3fb4(uVar14);
      }
      thunk_FUN_016d3fb4(puVar15);
    }
    bVar4 = true;
    ppppppuVar20 = (undefined4 ******)0x1;
  }
  else {
    bVar4 = local_80 == (uint *******)0x0;
    puVar21 = local_78;
    ppppppuVar20 = local_7c;
  }
  FUN_00f43b4c(local_b0,ppppppuVar20,puVar21);
  if (local_b0[0] != 2) {
    uVar13 = FUN_00f40e24(local_b0);
    if (!bVar4) {
      thunk_FUN_016d3fb4(ppppppuVar20);
    }
    goto LAB_006fd6a8;
  }
  local_78 = (undefined4 *)local_a0;
  local_74 = iStack_9c;
  local_70 = (undefined4 *******)uStack_98;
  local_6c = uStack_94;
  local_68 = uStack_90;
  local_64 = uStack_8c;
  local_7c = (undefined4 ******)local_a4;
  local_80 = local_a8;
  if (iStack_9c != 0) {
    uVar6 = FUN_00f3bb58();
    uVar13 = uVar6 >> 0x19;
    local_16c = 0;
    while( true ) {
      uVar6 = local_a4 & uVar6;
      uVar16 = *(uint *)((int)local_a8 + uVar6);
      uVar7 = uVar16 ^ uVar13 * 0x1010101;
      uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff;
      while (uVar7 != 0) {
        uVar8 = uVar7 >> 8;
        uVar1 = uVar7 >> 0x10;
        uVar2 = uVar7 >> 0x18;
        uVar3 = uVar7 << 0x18;
        uVar7 = uVar7 - 1 & uVar7;
        uVar8 = uVar6 + ((uint)LZCOUNT(uVar3 | (uVar8 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 | uVar2)
                        >> 3) & local_a4;
        if ((local_a8[uVar8 * -10 + -8] == (uint ******)0xa) &&
           (iVar9 = thunk_FUN_016dd50a("rambo_mode",local_a8[uVar8 * -10 + -9],10), iVar9 == 0)) {
          if (local_a8[uVar8 * -10 + -6] != (uint ******)0x3) goto LAB_006fd360;
          ppppppuVar10 = local_a8[uVar8 * -10 + -4];
          if (local_a8[uVar8 * -10 + -3] != (uint ******)0x0 ||
              local_a8[uVar8 * -10 + -3] < (uint ******)(uint)((uint ******)0x2 < ppppppuVar10)) {
            uVar6 = FUN_00f3bb58(uStack_98,uStack_94,uStack_90,uStack_8c);
            uVar13 = uVar6 >> 0x19;
            local_15c = 0;
            goto LAB_006fd1d4;
          }
          puVar18 = (&PTR_DAT_018af6c4)[(int)ppppppuVar10];
          uVar14 = *(undefined4 *)(&DAT_0041db40 + (int)ppppppuVar10 * 4);
          local_13c = (undefined4 *)thunk_FUN_016d4a50(10);
          if (local_13c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,10);
          }
          *(undefined2 *)(local_13c + 2) = 0x6564;
          local_138 = 10;
          local_13c[1] = 0x6f6d5f6f;
          *local_13c = 0x626d6172;
          local_140 = 10;
          iVar9 = thunk_FUN_016d4a50(uVar14);
          if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,uVar14);
          }
          FUN_016dd1aa(iVar9,puVar18,uVar14);
          local_d0 = (uint *******)0x2;
          local_cc = uVar14;
          local_c8 = iVar9;
          local_c4 = uVar14;
          FUN_00f47aec(&local_128,&local_80,&local_140,&local_d0);
          FUN_00f37cf0(&local_128);
          goto LAB_006fd360;
        }
      }
      if ((uVar16 & 0x80808080 & uVar16 << 1) != 0) break;
      local_16c = local_16c + 4;
      uVar6 = uVar6 + local_16c;
    }
  }
  goto LAB_006fd360;
LAB_006fd1d4:
  uVar6 = local_a4 & uVar6;
  uVar16 = *(uint *)((int)local_a8 + uVar6);
  uVar7 = uVar16 ^ uVar13 * 0x1010101;
  uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff;
  while (uVar7 != 0) {
    uVar8 = uVar7 >> 8;
    uVar1 = uVar7 >> 0x10;
    uVar2 = uVar7 >> 0x18;
    uVar3 = uVar7 << 0x18;
    uVar7 = uVar7 - 1 & uVar7;
    uVar8 = uVar6 + ((uint)LZCOUNT(uVar3 | (uVar8 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 | uVar2) >>
                    3) & local_a4;
    if ((local_a8[uVar8 * -10 + -8] == (uint ******)0xa) &&
       (iVar9 = thunk_FUN_016dd50a("rambo_mode",local_a8[uVar8 * -10 + -9],10), iVar9 == 0)) {
      iVar9 = ((int)(uVar8 * 0x28) >> 3) * -0x33333333;
      puVar12 = (uint *)((int)local_a8 + (iVar9 - 4U & local_a4));
      uVar6 = *puVar12;
      uVar13 = *(uint *)((int)local_a8 + iVar9) & 0x80808080 & *(uint *)((int)local_a8 + iVar9) << 1
      ;
      uVar13 = ((uint)LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                              (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3) +
               ((uint)LZCOUNT(uVar6 & 0x80808080 & uVar6 << 1) >> 3);
      puVar21 = (undefined4 *)0x80;
      if (uVar13 < 4) {
        puVar21 = local_78;
      }
      if (uVar13 < 4) {
        local_78 = (undefined4 *)((int)puVar21 + 1);
        puVar21 = (undefined4 *)0xff;
      }
      *(char *)((int)local_a8 + iVar9) = (char)puVar21;
      *(char *)(puVar12 + 1) = (char)puVar21;
      local_74 = iStack_9c + -1;
      local_d0 = (uint *******)local_a8[uVar8 * -10 + -6];
      ppppppuVar10 = local_a8[uVar8 * -10 + -10];
      ppppppuVar25 = local_a8[uVar8 * -10 + -9];
      local_128 = (uint *******)local_a8[uVar8 * -10 + -5];
      local_124 = local_a8[uVar8 * -10 + -4];
      local_120 = local_a8[uVar8 * -10 + -3];
      ppppppuStack_11c = local_a8[uVar8 * -10 + -2];
      local_118 = local_a8[uVar8 * -10 + -1];
      if (local_d0 == (uint *******)0x9) goto LAB_006fd328;
      puVar12 = (uint *)((uint)&local_d0 | 4);
      *puVar12 = (uint)local_128;
      puVar12[1] = (uint)local_124;
      puVar12[2] = (uint)local_120;
      puVar12[3] = (uint)ppppppuStack_11c;
      puVar12[4] = (uint)local_118;
      if (ppppppuVar10 != (uint ******)0x0) {
        thunk_FUN_016d3fb4(ppppppuVar25);
      }
      goto LAB_006fd358;
    }
  }
  if ((uVar16 & 0x80808080 & uVar16 << 1) != 0) goto LAB_006fd328;
  local_15c = local_15c + 4;
  uVar6 = uVar6 + local_15c;
  goto LAB_006fd1d4;
LAB_006fd328:
  local_d0 = (uint *******)0x9;
LAB_006fd358:
  FUN_00f37cf0(&local_d0);
LAB_006fd360:
  uVar13 = (uint)local_7c;
  pppppppuVar19 = local_80;
  local_140 = (int)local_78;
  local_13c = (undefined4 *)local_74;
  local_138 = local_70;
  uStack_134 = local_6c;
  uStack_130 = local_68;
  uStack_12c = local_64;
  if (!bVar4) {
    thunk_FUN_016d3fb4(ppppppuVar20);
  }
  if (pppppppuVar19 == (uint *******)0x0) {
LAB_006fd6a8:
    *param_1 = uVar13;
    *(undefined1 *)((int)param_1 + 0x56) = 2;
    return;
  }
  local_124 = (uint ******)uVar13;
  local_128 = pppppppuVar19;
  local_120 = (uint ******)local_140;
  ppppppuStack_11c = (uint ******)local_13c;
  local_118 = (uint ******)local_138;
  uStack_114 = uStack_134;
  uStack_110 = uStack_130;
  uStack_10c = uStack_12c;
  if ((2 < DAT_018d9130) || (DAT_018d9254 == '\0')) goto LAB_006fd4cc;
  if (DAT_018d9254 == '\x01') {
LAB_006fd41c:
    DataMemoryBarrier(0xb);
    pcVar17 = s_SetGloba_00414c05;
    puVar18 = &DAT_018ae394;
    if (DAT_018dd984 == 2) {
      pcVar17 = DAT_018daa74;
      puVar18 = DAT_018daa78;
      if (DAT_018daa70 != 0) {
        pcVar17 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
    }
    iVar9 = (**(code **)(puVar18 + 0x14))(pcVar17,DAT_018d924c);
    if (iVar9 == 0) goto LAB_006fd4cc;
  }
  else if (DAT_018d9254 != '\x02') {
    cVar5 = FUN_0169ac90(&DAT_018d924c);
    if (cVar5 == '\0') goto LAB_006fd4cc;
    if (cVar5 != '\x02') goto LAB_006fd41c;
  }
  if (*(int *)(DAT_018d924c + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01859704);
  }
  puVar21 = (undefined4 *)(DAT_018d924c + 0x1c);
  local_d0 = (uint *******)*puVar21;
  local_cc = *(undefined4 *)(DAT_018d924c + 0x20);
  local_c8 = *(undefined4 *)(DAT_018d924c + 0x24);
  local_c4 = *(undefined4 *)(DAT_018d924c + 0x28);
  local_c0 = 0;
  FUN_006fda48(&local_80,&local_128);
  if (local_80 == (uint *******)&DAT_80000000) {
    local_e8 = (uint *******)&DAT_80000000;
  }
  else {
    local_e0 = (int)local_78;
    local_e8 = local_80;
  }
  local_e4 = local_7c;
  local_ec = (uint *******)&local_d8;
  local_f8 = &local_f0;
  local_fc = &local_d0;
  local_108 = (uint *******)&local_fc;
  local_d4 = FUN_006fdd78;
  local_6c = DAT_018d924c;
  local_f0 = &DAT_00591940;
  local_70 = &local_108;
  local_104 = 1;
  local_f4 = &DAT_018abb78;
  local_7c = (undefined4 ******)0x0;
  local_80 = (uint *******)0x1;
  DataMemoryBarrier(0xb);
  pcVar17 = s_SetGloba_00414c05;
  puVar18 = &DAT_018ae394;
  if (DAT_018dd984 == 2) {
    pcVar17 = DAT_018daa74;
    puVar18 = DAT_018daa78;
    if (DAT_018daa70 != 0) {
      pcVar17 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
  }
  local_100 = puVar21;
  local_d8 = &local_e8;
  iVar9 = (**(code **)(puVar18 + 0x28))(pcVar17,&local_80);
  if (iVar9 != 0) {
    (**(code **)(puVar18 + 0x2c))(pcVar17,&local_80);
  }
  if (local_e8 == (uint *******)&DAT_80000000) {
    FUN_011e1b28((uint)&local_e8 | 4);
  }
  else if (local_e8 != (uint *******)0x0) {
    thunk_FUN_016d3fb4(local_e4);
  }
LAB_006fd4cc:
  local_d0 = local_128;
  local_cc = (uint)local_124;
  local_c8 = (int)local_120;
  local_c4 = (int)ppppppuStack_11c;
  local_c0 = local_118;
  uStack_bc = uStack_114;
  uStack_b8 = uStack_110;
  uStack_b4 = uStack_10c;
  local_2c = 0;
  local_38 = 0;
  local_3c = 3;
  local_68 = 10;
  local_78 = (undefined4 *)0x1e;
  local_80 = (uint *******)0x1e;
  local_74 = 0;
  local_70 = (undefined4 *******)0x12c;
  local_6c = 0;
  local_64 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0x3c;
  local_44 = 0;
  local_7c = (undefined4 ******)0x0;
  local_35 = 0;
  local_31 = 0;
  local_40 = 0x14;
  local_2d = 0;
  local_54 = 0x40468000;
  local_58 = 0;
  local_60 = 0x4008000000000000;
  local_36 = 0;
  local_2a = 0;
  DataMemoryBarrier(0xb);
  if (DAT_018db580 != 0) {
    local_e8 = (uint *******)&local_fc;
    local_fc = (undefined4 *******)&DAT_018db550;
    FUN_015eedc4(&DAT_018db580,1,&local_e8,&DAT_018590b8,&DAT_018ac9b8);
  }
  if (DAT_018db568 != 0) {
    puVar21 = (undefined4 *)(DAT_018db564 + 8);
    iVar9 = DAT_018db568 * 0x14;
    do {
      (**(code **)(puVar21[1] + 0x38))(*puVar21,&local_80,&local_d0);
      puVar21 = puVar21 + 5;
      iVar9 = iVar9 + -0x14;
    } while (iVar9 != 0);
  }
  FUN_016dd1aa(param_1,&local_80,0x58);
  uVar13 = local_cc;
  if (local_cc == 0) {
    return;
  }
  if (local_c4 != 0) {
    pppppppuVar23 = local_d0 + 1;
    uVar6 = ~(uint)*local_d0 & 0x80808080;
    pppppppuVar19 = local_d0;
    iVar9 = local_c4;
    do {
      pppppppuVar22 = pppppppuVar23;
      if (uVar6 == 0) {
        do {
          pppppppuVar23 = pppppppuVar22 + 1;
          ppppppuVar10 = *pppppppuVar22;
          pppppppuVar19 = pppppppuVar19 + -0x28;
          pppppppuVar22 = pppppppuVar23;
        } while (((uint)ppppppuVar10 & 0x80808080) == 0x80808080);
        uVar6 = (uint)ppppppuVar10 & 0x80808080 ^ 0x80808080;
      }
      uVar7 = (uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                            (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3;
      if (pppppppuVar19[uVar7 * -10 + -10] != (uint ******)0x0) {
        thunk_FUN_016d3fb4(pppppppuVar19[uVar7 * -10 + -9]);
      }
      iVar9 = iVar9 + -1;
      uVar6 = uVar6 - 1 & uVar6;
      FUN_00783d8c(pppppppuVar19 + uVar7 * -10 + -6);
    } while (iVar9 != 0);
  }
  if (uVar13 * 0x29 == -0x2d) {
    return;
  }
  thunk_FUN_016d3fb4(local_d0 + uVar13 * -10 + -10);
  return;
}

