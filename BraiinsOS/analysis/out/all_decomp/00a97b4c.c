// FUN_00a97b4c @ 00a97b4c size=3944 calls_out=13 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a97b4c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined4 *param_6)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint *puVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  undefined2 *puVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  int *piVar20;
  int iVar21;
  uint *puVar22;
  undefined4 *puVar23;
  uint *puVar24;
  uint uVar25;
  uint *puVar27;
  uint *puVar26;
  undefined4 *puVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined1 *puVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  int *piVar39;
  uint uVar40;
  undefined4 uVar41;
  uint uVar42;
  int iVar43;
  undefined2 *puVar44;
  bool bVar45;
  bool bVar46;
  undefined4 unaff_s16;
  undefined4 unaff_s18;
  undefined8 uVar47;
  uint local_12c;
  uint local_11c;
  undefined4 local_118;
  int local_114;
  int local_110;
  int local_10c;
  uint local_108;
  uint local_104;
  uint *local_100;
  uint local_fc;
  int local_ec;
  int local_d4;
  int local_c8;
  int local_c4;
  uint *local_c0;
  uint uStack_bc;
  int iStack_b8;
  int local_b4;
  uint local_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint local_a4;
  uint *local_a0;
  uint local_9c;
  int local_98;
  int local_94;
  uint local_90;
  uint uStack_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  undefined2 *local_7c;
  uint local_78;
  uint uStack_74;
  uint local_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  uint local_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  uint local_50;
  uint local_4c;
  int local_48;
  undefined4 local_44;
  undefined1 local_39;
  
  uVar40 = param_6[0x12];
  if ((uint)param_6[0xf] < (uint)param_6[0x12]) {
    uVar40 = param_6[0xf];
  }
  bVar46 = 0x1ffffffe < uVar40;
  bVar45 = uVar40 == 0x1fffffff;
  uVar12 = uVar40 * 8;
  if (uVar40 < 0x20000000) {
    bVar46 = 0x7ffffffb < uVar12;
    bVar45 = uVar12 == 0x7ffffffc;
  }
  if (bVar46 && !bVar45) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4();
  }
  puVar23 = (undefined4 *)param_6[0xe];
  puVar28 = (undefined4 *)param_6[0x11];
  local_118 = 0;
  if (uVar12 == 0) {
    local_114 = 4;
    local_11c = 0;
    if (uVar40 == 0) goto LAB_00a983fc;
LAB_00a97bd0:
    puVar2 = (undefined4 *)(local_114 + 4);
    uVar12 = uVar40;
    do {
      uVar18 = *puVar23;
      uVar12 = uVar12 - 1;
      puVar2[-1] = *puVar28;
      *puVar2 = uVar18;
      puVar2 = puVar2 + 2;
      puVar23 = puVar23 + 1;
      puVar28 = puVar28 + 1;
    } while (uVar12 != 0);
    if (uVar40 != 1) {
      if (uVar40 < 0x15) {
        FUN_00a74474(local_114,uVar40);
      }
      else {
        FUN_00a5e158(local_114,uVar40);
      }
    }
    iVar3 = local_114 + uVar40 * 8;
    unaff_s18 = *(undefined4 *)(iVar3 + -8);
    unaff_s16 = *(undefined4 *)(iVar3 + -4);
    local_118 = 1;
    iVar3 = param_6[6];
    if (iVar3 == 1) goto LAB_00a97c24;
LAB_00a9840c:
    uVar47 = thunk_FUN_016de0ee(iVar3,0x2c0);
    puVar24 = (uint *)((int)uVar47 + (int)((ulonglong)uVar47 >> 0x20));
    if ((char)puVar24[4] == '\0') {
      FUN_015f62e4(&local_80);
      *puVar24 = local_80;
      puVar24[1] = (uint)local_7c;
      puVar24[2] = local_78;
      puVar24[3] = uStack_74;
      *(undefined1 *)(puVar24 + 4) = 1;
    }
    local_b0 = *puVar24;
    uStack_ac = puVar24[1];
    uStack_a8 = puVar24[2];
    local_a4 = puVar24[3];
    *puVar24 = local_b0 + 1;
    puVar24[1] = uStack_ac + (0xfffffffe < local_b0);
    uStack_bc = 0;
    iStack_b8 = 0;
    local_c0 = &DAT_005674cc;
    local_b4 = 0;
  }
  else {
    local_114 = thunk_FUN_016d4a50(uVar12);
    if (local_114 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar12);
    }
    local_11c = uVar40;
    if (uVar40 != 0) goto LAB_00a97bd0;
LAB_00a983fc:
    iVar3 = param_6[6];
    if (iVar3 != 1) goto LAB_00a9840c;
LAB_00a97c24:
    uVar47 = thunk_FUN_016de0ee(1,0x2c0);
    piVar20 = (int *)param_6[7];
    puVar24 = (uint *)((int)uVar47 + (int)((ulonglong)uVar47 >> 0x20));
    uVar40 = param_6[8];
    iVar3 = param_6[9];
    if (piVar20 == (int *)0x0) {
      iVar3 = 0;
    }
    bVar45 = piVar20 != (int *)0x0;
    if ((char)puVar24[4] == '\0') {
      FUN_015f62e4(&local_80);
      *puVar24 = local_80;
      puVar24[1] = (uint)local_7c;
      puVar24[2] = local_78;
      puVar24[3] = uStack_74;
      *(undefined1 *)(puVar24 + 4) = 1;
    }
    local_90 = *puVar24;
    uStack_8c = puVar24[1];
    local_88 = puVar24[2];
    local_84 = puVar24[3];
    *puVar24 = local_90 + 1;
    puVar24[1] = uStack_8c + (0xfffffffe < local_90);
    local_9c = 0;
    local_98 = 0;
    local_a0 = &DAT_005674cc;
    local_94 = 0;
    if (iVar3 != 0) {
      FUN_01154538(&local_a0,iVar3,&local_90);
    }
    piVar39 = (int *)0x0;
    local_100 = &local_70;
LAB_00a97cf8:
    if (iVar3 != 0) {
      if (!bVar45) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018a9ff4);
      }
      if (piVar39 == (int *)0x0) {
        piVar4 = (int *)0x0;
        for (; uVar40 != 0; uVar40 = uVar40 - 1) {
          piVar20 = (int *)piVar20[0x44];
        }
        uVar12 = 0;
        piVar13 = piVar20;
        if (*(short *)((int)piVar20 + 0x10e) != 0) goto LAB_00a97d7c;
      }
      else {
        piVar4 = piVar20;
        piVar20 = piVar39;
        piVar13 = piVar39;
        uVar12 = uVar40;
        if (uVar40 < *(ushort *)((int)piVar39 + 0x10e)) goto LAB_00a97d7c;
      }
      do {
        piVar13 = (int *)*piVar20;
        if (piVar13 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018aa004);
        }
        uVar12 = (uint)*(ushort *)(piVar20 + 0x43);
        piVar4 = (int *)((int)piVar4 + 1);
        piVar20 = piVar13;
      } while (*(ushort *)((int)piVar13 + 0x10e) <= uVar12);
LAB_00a97d7c:
      if (piVar4 == (int *)0x0) {
        uVar40 = uVar12 + 1;
        piVar39 = piVar13;
      }
      else {
        piVar20 = piVar13 + uVar12 + 0x45;
        do {
          piVar39 = (int *)*piVar20;
          piVar4 = (int *)((int)piVar4 + -1);
          piVar20 = piVar39 + 0x44;
        } while (piVar4 != (int *)0x0);
        uVar40 = 0;
      }
      uVar29 = 1;
      uVar5 = 1;
      uVar16 = piVar13[uVar12 * 3 + 3];
      iVar21 = piVar13[uVar12 * 3 + 2];
      if ((uVar16 != 0) && (uVar5 = thunk_FUN_016d4a50(uVar16), uVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,uVar16);
      }
      FUN_016dd1aa(uVar5,iVar21,uVar16);
      iVar21 = piVar13[uVar12 * 3 + 0x23];
      uVar12 = piVar13[uVar12 * 3 + 0x24];
      if ((uVar12 != 0) && (uVar29 = thunk_FUN_016d4a50(uVar12), uVar29 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,uVar12);
      }
      FUN_016dd1aa(uVar29,iVar21,uVar12);
      uStack_74 = uStack_8c ^ 0x6c796765;
      local_78 = local_90 ^ 0x6e657261;
      uStack_6c = local_84 ^ 0x646f7261;
      local_70 = local_88 ^ 0x6e646f6d;
      uStack_64 = local_84 ^ 0x74656462;
      local_68 = local_88 ^ 0x79746573;
      local_60 = local_90;
      uStack_5c = uStack_8c;
      local_58 = local_88;
      uStack_54 = local_84;
      local_50 = 0;
      local_4c = 0;
      local_48 = 0;
      local_44 = 0;
      local_7c = (undefined2 *)(uStack_8c ^ 0x736f6d65);
      local_80 = local_90 ^ 0x70736575;
      FUN_00ed56f4(&local_80,uVar5,uVar16);
      local_39 = 0xff;
      FUN_00ed56f4(&local_80,&local_39,1);
      puVar34 = (undefined1 *)((int)local_7c + CARRY4(local_70,local_80) + uStack_6c);
      uVar14 = (uStack_6c << 0xd | local_70 >> 0x13) ^ (uint)puVar34;
      uVar17 = (local_70 << 0xd | uStack_6c >> 0x13) ^ local_70 + local_80;
      uVar30 = local_4c | local_48 << 0x18;
      uVar25 = uVar30 ^ uStack_64;
      uVar6 = local_50 ^ local_68;
      uVar35 = uVar6 + local_78;
      uVar37 = uVar25 + uStack_74 + (uint)CARRY4(uVar6,local_78);
      uVar19 = uVar37 + uVar14 + (uint)CARRY4(uVar35,uVar17);
      uVar42 = uVar19 ^ (uVar14 << 0x11 | uVar17 >> 0xf);
      uVar7 = (uVar6 << 0x10 | uVar25 >> 0x10) ^ uVar35;
      uVar37 = (uVar25 << 0x10 | uVar6 >> 0x10) ^ uVar37;
      uVar14 = uVar35 + uVar17 ^ (uVar17 << 0x11 | uVar14 >> 0xf);
      uVar6 = (uint)(puVar34 + uVar7) ^ local_50;
      uVar25 = uVar37 + local_70 + local_80 + (uint)CARRY4(uVar7,(uint)puVar34);
      uVar38 = uVar6 + uVar14;
      uVar36 = (uVar25 ^ uVar30) + uVar42 + (uint)CARRY4(uVar6,uVar14);
      uVar25 = (uVar37 << 0x15 | uVar7 >> 0xb) ^ uVar25;
      uVar31 = uVar36 ^ (uVar42 << 0xd | uVar14 >> 0x13);
      uVar19 = uVar19 ^ 0xff;
      uVar6 = (uVar7 << 0x15 | uVar37 >> 0xb) ^ (uint)(puVar34 + uVar7);
      uVar7 = uVar38 ^ (uVar14 << 0xd | uVar42 >> 0x13);
      uVar30 = uVar6 + uVar19;
      uVar19 = uVar25 + uVar35 + uVar17 + (uint)CARRY4(uVar6,uVar19);
      uVar35 = uVar31 + uVar19 + (uint)CARRY4(uVar7,uVar30);
      uVar17 = uVar35 ^ (uVar31 << 0x11 | uVar7 >> 0xf);
      uVar14 = uVar7 + uVar30 ^ (uVar7 << 0x11 | uVar31 >> 0xf);
      uVar19 = (uVar25 << 0x10 | uVar6 >> 0x10) ^ uVar19;
      uVar25 = (uVar6 << 0x10 | uVar25 >> 0x10) ^ uVar30;
      uVar31 = uVar25 + uVar36;
      uVar37 = uVar19 + uVar38 + (uint)CARRY4(uVar25,uVar36);
      uVar36 = uVar17 + uVar37 + (uint)CARRY4(uVar14,uVar31);
      uVar6 = (uVar17 << 0xd | uVar14 >> 0x13) ^ uVar36;
      uVar17 = (uVar14 << 0xd | uVar17 >> 0x13) ^ uVar14 + uVar31;
      uVar37 = (uVar19 << 0x15 | uVar25 >> 0xb) ^ uVar37;
      uVar25 = (uVar25 << 0x15 | uVar19 >> 0xb) ^ uVar31;
      uVar19 = uVar25 + uVar35;
      uVar30 = uVar37 + uVar7 + uVar30 + (uint)CARRY4(uVar25,uVar35);
      uVar38 = uVar6 + uVar30 + (uint)CARRY4(uVar17,uVar19);
      uVar35 = (uVar6 << 0x11 | uVar17 >> 0xf) ^ uVar38;
      uVar30 = (uVar37 << 0x10 | uVar25 >> 0x10) ^ uVar30;
      uVar7 = (uVar25 << 0x10 | uVar37 >> 0x10) ^ uVar19;
      uVar25 = uVar7 + uVar36;
      uVar37 = uVar30 + uVar14 + uVar31 + (uint)CARRY4(uVar7,uVar36);
      uVar31 = (uVar7 << 0x15 | uVar30 >> 0xb) ^ uVar25;
      uVar7 = (uVar30 << 0x15 | uVar7 >> 0xb) ^ uVar37;
      uVar30 = uVar31 + uVar38;
      uVar6 = (uVar17 << 0x11 | uVar6 >> 0xf) ^ uVar17 + uVar19;
      uVar14 = uVar7 + uVar17 + uVar19 + (uint)CARRY4(uVar31,uVar38);
      uVar17 = (uVar35 << 0xd | uVar6 >> 0x13) ^ uVar35 + uVar37 + (uint)CARRY4(uVar6,uVar25);
      uVar6 = (uVar6 << 0xd | uVar35 >> 0x13) ^ uVar6 + uVar25;
      if (local_98 == 0) {
        FUN_01154538(&local_a0,1,&local_90);
      }
      uVar25 = local_9c;
      puVar24 = local_a0;
      iVar43 = 0;
      iVar3 = iVar3 + -1;
      iVar21 = 0;
      uVar7 = ((uVar7 >> 0x10 ^ uVar30) << 0x15 | ((uVar7 << 0x10 | uVar31 >> 0x10) ^ uVar14) >> 0xb
              ) ^ (uVar6 << 0x11 | uVar17 >> 0xf) ^ uVar17 + uVar14 + (uint)CARRY4(uVar6,uVar30) ^
              uVar6 + uVar30;
      uVar14 = (uVar7 >> 0x19) * 0x1010101;
      uVar6 = uVar7;
      do {
        uVar6 = uVar25 & uVar6;
        uVar19 = *(uint *)((int)puVar24 + uVar6);
        for (uVar17 = ~(uVar19 ^ uVar14) & 0x80808080 & (uVar19 ^ uVar14) + 0xfefefeff; uVar17 != 0;
            uVar17 = uVar17 - 1 & uVar17) {
          uVar37 = uVar6 + ((uint)LZCOUNT(uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                                          (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18) >> 3) &
                   uVar25;
          local_110 = iVar21;
          local_10c = iVar43;
          local_108 = uVar14;
          local_104 = uVar25;
          if ((uVar16 == puVar24[uVar37 * -6 + -4]) &&
             (iVar8 = thunk_FUN_016dd50a(uVar5,puVar24[uVar37 * -6 + -5],uVar16), iVar8 == 0)) {
            uVar6 = puVar24[uVar37 * -6 + -3];
            uVar7 = puVar24[uVar37 * -6 + -2];
            puVar24[uVar37 * -6 + -3] = uVar12;
            puVar24[uVar37 * -6 + -1] = uVar12;
            puVar24[uVar37 * -6 + -2] = uVar29;
            if (uVar16 != 0) {
              thunk_FUN_016d3fb4(uVar5);
            }
            piVar20 = (int *)0x0;
            bVar45 = true;
            if ((uVar6 & 0x7fffffff) != 0) {
              thunk_FUN_016d3fb4(uVar7);
            }
            goto LAB_00a97cf8;
          }
        }
        uVar37 = uVar19 & 0x80808080;
        uVar17 = local_12c;
        if (iVar21 == 1) {
LAB_00a98290:
          if ((uVar37 & uVar19 << 1) != 0) goto LAB_00a98308;
          iVar21 = 1;
          local_12c = uVar17;
        }
        else {
          if (uVar37 != 0) {
            uVar17 = uVar6 + ((uint)LZCOUNT((uVar19 & 0x80) << 0x18 | (uVar37 >> 8 & 0xff) << 0x10 |
                                            (uVar37 >> 0x10 & 0xff) << 8 | uVar37 >> 0x18) >> 3) &
                     uVar25;
            goto LAB_00a98290;
          }
          iVar21 = 0;
        }
        iVar43 = iVar43 + 4;
        uVar6 = iVar43 + uVar6;
      } while( true );
    }
    local_c0 = local_a0;
    uStack_bc = local_9c;
    iStack_b8 = local_98;
    local_b4 = local_94;
    local_b0 = local_90;
    uStack_ac = uStack_8c;
    uStack_a8 = local_88;
    local_a4 = local_84;
  }
  iVar3 = *(int *)(param_5 + 0x154);
  uVar18 = *(undefined4 *)(param_5 + 0x150);
  if (iVar3 == 0) {
    puVar24 = (uint *)&DAT_00000001;
  }
  else {
    puVar24 = (uint *)thunk_FUN_016d4a50(iVar3);
    if (puVar24 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar3);
    }
  }
  FUN_016dd1aa(puVar24,uVar18,iVar3);
  uVar18 = param_6[2];
  uVar40 = param_6[5];
  iVar21 = -0x80000000;
  uVar9 = param_6[3];
  uVar10 = param_6[4];
  uVar41 = *param_6;
  uVar32 = param_6[1];
  if (param_6[0x13] == -0x80000000) {
    local_c8 = -0x80000000;
    iVar43 = param_6[0x19];
  }
  else {
    local_c8 = param_6[0x15];
    uVar33 = param_6[0x14];
    if (local_c8 == 0) {
      local_100 = (uint *)&DAT_00000001;
    }
    else {
      local_100 = (uint *)thunk_FUN_016d4a50();
      if (local_100 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,local_c8);
      }
    }
    FUN_016dd1aa(local_100,uVar33,local_c8);
    iVar43 = param_6[0x19];
  }
  if (iVar43 != -0x80000000) {
    uVar33 = param_6[0x1a];
    iVar21 = param_6[0x1b];
    if (iVar21 == 0) {
      local_104 = 1;
    }
    else {
      local_104 = thunk_FUN_016d4a50(iVar21);
      if (local_104 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar21);
      }
    }
    FUN_016dd1aa(local_104,uVar33,iVar21);
  }
  local_c4 = -0x80000000;
  if (param_6[0x1c] == -0x80000000) {
    local_d4 = -0x80000000;
    if (param_6[0x16] == -0x80000000) goto LAB_00a985d0;
LAB_00a9864c:
    local_c4 = param_6[0x18];
    uVar33 = param_6[0x17];
    if (local_c4 == 0) {
      local_10c = 1;
    }
    else {
      local_10c = thunk_FUN_016d4a50();
      if (local_10c == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,local_c4);
      }
    }
    FUN_016dd1aa(local_10c,uVar33,local_c4);
    if (param_6[0x1f] != -0x80000000) goto LAB_00a986a0;
LAB_00a985e0:
    local_ec = -0x80000000;
    if (param_6[0x22] == -0x80000000) goto LAB_00a985f4;
LAB_00a9870c:
    iVar43 = param_6[0x24];
    puVar11 = (uint *)param_6[0x23];
    if (iVar43 == 0) {
      local_12c = 1;
    }
    else {
      local_12c = thunk_FUN_016d4a50(iVar43);
      if (local_12c == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar43);
      }
    }
    FUN_016dd1aa(local_12c,puVar11,iVar43);
  }
  else {
    local_d4 = param_6[0x1e];
    uVar33 = param_6[0x1d];
    if (local_d4 == 0) {
      local_108 = 1;
    }
    else {
      local_108 = thunk_FUN_016d4a50(local_d4);
      if (local_108 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,local_d4);
      }
    }
    FUN_016dd1aa(local_108,uVar33,local_d4);
    if (param_6[0x16] != -0x80000000) goto LAB_00a9864c;
LAB_00a985d0:
    if (param_6[0x1f] == -0x80000000) goto LAB_00a985e0;
LAB_00a986a0:
    local_ec = param_6[0x21];
    uVar33 = param_6[0x20];
    if (local_ec == 0) {
      local_110 = 1;
    }
    else {
      local_110 = thunk_FUN_016d4a50(local_ec);
      if (local_110 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,local_ec);
      }
    }
    FUN_016dd1aa(local_110,uVar33,local_ec);
    if (param_6[0x22] != -0x80000000) goto LAB_00a9870c;
LAB_00a985f4:
    iVar43 = -0x80000000;
    puVar11 = puVar24;
  }
  iVar8 = param_6[0xc];
  puVar44 = (undefined2 *)&SUB_00000002;
  uVar12 = 0;
  if (iVar8 != 0) {
    puVar22 = (uint *)param_6[0xb] + iVar8;
    iVar8 = iVar8 << 2;
    puVar27 = (uint *)param_6[0xb];
    do {
      puVar26 = puVar27 + 1;
      uVar5 = *puVar27;
      if (uVar5 < 0x8000) {
        puVar44 = (undefined2 *)thunk_FUN_016d4a50(8);
        if (puVar44 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(2,8);
        }
        uVar12 = 1;
        *puVar44 = (short)uVar5;
        local_78 = 1;
        local_80 = 4;
        local_7c = puVar44;
        if (puVar26 == puVar22) goto LAB_00a98840;
        puVar11 = &local_80;
        goto LAB_00a987e8;
      }
      iVar8 = iVar8 + -4;
      puVar27 = puVar26;
    } while (iVar8 != 0);
  }
  local_fc = 0;
  iVar8 = *(int *)(param_5 + 0x17c);
joined_r0x00a98858:
  if (iVar8 == -0x80000000) {
    iVar8 = -0x80000000;
  }
  else {
    iVar8 = *(int *)(param_5 + 0x184);
    uVar33 = *(undefined4 *)(param_5 + 0x180);
    if (iVar8 == 0) {
      puVar11 = (uint *)&DAT_00000001;
    }
    else {
      puVar11 = (uint *)thunk_FUN_016d4a50(iVar8);
      if (puVar11 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar8);
      }
    }
    FUN_016dd1aa(puVar11,uVar33,iVar8);
  }
  param_1[0xc] = local_c0;
  param_1[0xd] = uStack_bc;
  param_1[0xe] = iStack_b8;
  param_1[0xf] = local_b4;
  param_1[0x10] = local_b0;
  param_1[0x11] = uStack_ac;
  param_1[0x12] = uStack_a8;
  param_1[0x13] = local_a4;
  param_1[4] = uVar41;
  param_1[5] = uVar32;
  *param_1 = 1;
  param_1[1] = 0;
  param_1[6] = uVar18;
  param_1[2] = param_3;
  param_1[7] = uVar9;
  param_1[3] = param_4;
  *(short *)((int)param_1 + 0xbe) = (short)uVar40;
  param_1[0x18] = puVar24;
  param_1[0x24] = local_10c;
  param_1[0x1b] = local_100;
  param_1[0x26] = local_ec;
  param_1[0x28] = local_ec;
  param_1[0x1a] = local_c8;
  param_1[0x1c] = local_c8;
  param_1[0x29] = iVar43;
  param_1[0x2b] = iVar43;
  param_1[0x1e] = local_104;
  param_1[0x2d] = puVar11;
  param_1[0x2e] = iVar8;
  param_1[0x1d] = iVar21;
  param_1[0x1f] = iVar21;
  param_1[0x27] = local_110;
  param_1[0x21] = local_108;
  param_1[0x20] = local_d4;
  param_1[0x22] = local_d4;
  *(ushort *)(param_1 + 0x2f) = (ushort)uVar10 & (ushort)(uVar40 < 0x8000);
  param_1[0x19] = iVar3;
  param_1[0x17] = iVar3;
  param_1[0x25] = local_c4;
  param_1[0x2a] = local_12c;
  param_1[0x23] = local_c4;
  param_1[9] = unaff_s18;
  param_1[8] = local_118;
  param_1[0x2c] = iVar8;
  param_1[0x16] = uVar12;
  param_1[0x15] = puVar44;
  param_1[0x14] = local_fc;
  param_1[0xb] = unaff_s16;
  param_1[10] = local_118;
  if (local_11c != 0) {
    thunk_FUN_016d3fb4(local_114);
  }
  return;
LAB_00a98308:
  uVar6 = (uint)*(char *)((int)puVar24 + uVar17);
  if (-1 < (int)uVar6) {
    uVar6 = *puVar24 & 0x80808080;
    uVar17 = LZCOUNT((*puVar24 & 0x80) << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                     (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18);
    uVar6 = (uint)*(byte *)((int)puVar24 + (uVar17 >> 3));
    uVar17 = uVar17 >> 3;
  }
  bVar1 = (byte)(uVar7 >> 0x19);
  *(byte *)((int)puVar24 + uVar17) = bVar1;
  *(byte *)((int)puVar24 + (uVar25 & uVar17 - 4) + 4) = bVar1;
  local_98 = local_98 - (uVar6 & 1);
  bVar45 = true;
  puVar24[uVar17 * -6 + -5] = uVar5;
  puVar24[uVar17 * -6 + -6] = uVar16;
  puVar24[uVar17 * -6 + -4] = uVar16;
  piVar20 = (int *)0x0;
  puVar24[uVar17 * -6 + -3] = uVar12;
  puVar24[uVar17 * -6 + -1] = uVar12;
  puVar24[uVar17 * -6 + -2] = uVar29;
  local_94 = local_94 + 1;
  goto LAB_00a97cf8;
  while( true ) {
    if (uVar12 == local_80) {
      FUN_00a8a86c(puVar11,uVar12,1,2,2);
      puVar44 = local_7c;
    }
    puVar15 = puVar44 + uVar12;
    uVar12 = uVar12 + 1;
    *puVar15 = (short)uVar5;
    local_78 = uVar12;
    if (puVar27 == puVar22) break;
LAB_00a987e8:
    puVar27 = puVar26 + 1;
    uVar5 = *puVar26;
    puVar26 = puVar27;
    if (0x7fff < uVar5) {
      if (puVar27 == puVar22) break;
      goto LAB_00a987e8;
    }
  }
LAB_00a98840:
  iVar8 = *(int *)(param_5 + 0x17c);
  local_fc = local_80;
  puVar44 = local_7c;
  goto joined_r0x00a98858;
}

