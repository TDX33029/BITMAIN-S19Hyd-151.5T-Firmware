// FUN_008b6468 @ 008b6468 size=1416 calls_out=3 calls_in=3
// strings: 

void FUN_008b6468(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  undefined8 *puVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  uint uVar32;
  uint uVar33;
  undefined4 uVar34;
  undefined8 *puVar35;
  uint uVar36;
  uint extraout_r12;
  uint extraout_r12_00;
  uint extraout_r12_01;
  uint extraout_r12_02;
  bool bVar37;
  bool bVar38;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined4 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  uint local_12c;
  undefined1 local_11c;
  undefined2 local_118;
  undefined2 local_114;
  int local_10c;
  int local_108;
  int local_e0;
  uint local_dc;
  int local_d8;
  int local_cc;
  uint local_c0;
  int local_84;
  uint local_78;
  int local_74;
  
  uVar7 = *param_2;
  uVar20 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 0x44);
  uVar8 = param_2[0x42];
  uVar9 = param_2[0x43];
  uVar10 = param_2[0x3b];
  uVar11 = param_2[0x4f];
  uVar36 = param_3[0x12];
  uVar42 = *(undefined8 *)(param_2 + 6);
  uVar43 = *(undefined8 *)(param_2 + 8);
  uVar44 = *(undefined8 *)(param_2 + 10);
  uVar45 = *(undefined8 *)(param_2 + 0xc);
  uVar4 = *(undefined1 *)((int)param_2 + 0x143);
  uVar12 = param_2[0x20];
  uVar13 = param_2[0x3f];
  uVar32 = param_2[0x39];
  uVar34 = param_2[0x3a];
  uVar26 = param_2[4];
  uVar23 = param_3[0x11];
  uVar5 = *(undefined1 *)((int)param_3 + 0x5d);
  uVar41 = param_2[5];
  uVar40 = *(undefined8 *)(param_2 + 2);
  uVar21 = param_2[0x1f];
  uVar6 = *(undefined1 *)(param_3 + 0x17);
  if (uVar36 == 0) {
    iVar14 = 1;
  }
  else {
    iVar14 = thunk_FUN_016d4a50(uVar36);
    if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar36);
    }
  }
  FUN_016dd1aa(iVar14,uVar23,uVar36);
  uVar24 = param_3[0x15];
  iVar1 = uVar24 * 0x48;
  uVar23 = 0;
  if (0x1c71c71 < uVar24) {
LAB_008b6564:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar23,iVar1);
  }
  uVar46 = *(undefined8 *)(param_3 + 0xe);
  uVar23 = param_3[0x16];
  if (iVar1 == 0) {
    local_74 = 8;
    local_78 = 0;
  }
  else {
    puVar15 = (undefined8 *)param_3[0x14];
    local_74 = thunk_FUN_016d4a50(iVar1);
    if (local_74 == 0) {
      uVar23 = 8;
      goto LAB_008b6564;
    }
    local_78 = uVar24;
    if (uVar24 != 0) {
      iVar25 = 0;
      local_c0 = 0;
      uVar17 = uVar26;
      uVar33 = uVar32;
      puVar35 = puVar15;
      uVar18 = extraout_r12;
      do {
        if (iVar1 == iVar25) break;
        uVar16 = *(undefined4 *)(puVar35 + 8);
        iVar28 = -0x80000000;
        uVar39 = *puVar35;
        local_84 = -0x80000000;
        if (*(int *)(puVar35 + 1) != -0x80000000) {
          uVar33 = *(uint *)((int)puVar15 + iVar25 + 0xc);
          iVar28 = *(int *)((int)puVar15 + iVar25 + 0x10);
          if (iVar28 == 0) {
            uVar17 = 1;
          }
          else {
            uVar17 = thunk_FUN_016d4a50();
            if (uVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,iVar28);
            }
          }
          FUN_016dd1aa(uVar17,uVar33,iVar28);
          uVar18 = extraout_r12_00;
          local_cc = iVar28;
        }
        if (*(int *)((int)puVar35 + 0x14) != -0x80000000) {
          local_108 = *(int *)((int)puVar15 + iVar25 + 0x1c);
          uVar33 = *(uint *)((int)puVar15 + iVar25 + 0x18);
          if (local_108 == 0) {
            local_e0 = 1;
          }
          else {
            local_e0 = thunk_FUN_016d4a50(local_108);
            if (local_e0 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,local_108);
            }
          }
          FUN_016dd1aa(local_e0,uVar33,local_108);
          uVar18 = extraout_r12_01;
          local_84 = local_108;
        }
        iVar29 = -0x80000000;
        if (*(int *)(puVar35 + 4) != -0x80000000) {
          iVar29 = *(int *)((int)puVar15 + iVar25 + 0x28);
          uVar33 = *(uint *)((int)puVar15 + iVar25 + 0x24);
          if (iVar29 == 0) {
            local_d8 = 1;
          }
          else {
            local_d8 = thunk_FUN_016d4a50(iVar29);
            if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,iVar29);
            }
          }
          FUN_016dd1aa(local_d8,uVar33,iVar29);
          uVar18 = extraout_r12_02;
          local_10c = iVar29;
        }
        local_12c = 0x80000000;
        uVar27 = uVar17;
        if (*(int *)((int)puVar35 + 0x2c) != -0x80000000) {
          uVar22 = 0;
          uVar27 = *(uint *)((int)puVar15 + iVar25 + 0x34);
          bVar38 = 0x3ffffffe < uVar27;
          bVar37 = uVar27 == 0x3fffffff;
          uVar2 = uVar36;
          if (uVar27 < 0x40000000) {
            uVar2 = uVar27 << 2;
            bVar38 = 0x7ffffffd < uVar2;
            bVar37 = uVar2 == 0x7ffffffe;
          }
          if (bVar38 && !bVar37) {
LAB_008b69fc:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar22,local_dc);
          }
          uVar33 = (uint)*(byte *)((int)puVar15 + iVar25 + 0x3d);
          uVar22 = *(undefined4 *)((int)puVar15 + iVar25 + 0x30);
          uVar18 = (uint)*(byte *)((int)puVar15 + iVar25 + 0x3e);
          local_114 = *(undefined2 *)((int)puVar15 + iVar25 + 0x3a);
          local_118 = *(undefined2 *)((int)puVar15 + iVar25 + 0x38);
          if (uVar2 == 0) {
            local_dc = 2;
            local_12c = 0;
          }
          else {
            local_dc = thunk_FUN_016d4a50(uVar2,local_dc);
            if (local_dc == 0) {
              uVar22 = 2;
              local_dc = uVar2;
              goto LAB_008b69fc;
            }
            local_12c = uVar27;
          }
          FUN_016dd1aa(local_dc,uVar22,uVar2);
          local_11c = *(undefined1 *)((int)puVar15 + iVar25 + 0x3c);
        }
        puVar35 = puVar35 + 9;
        puVar19 = (undefined8 *)(local_74 + iVar25);
        iVar25 = iVar25 + 0x48;
        *(undefined4 *)(puVar19 + 8) = uVar16;
        local_c0 = local_c0 + 1;
        *(undefined1 *)((int)puVar19 + 0x3c) = local_11c;
        *(undefined2 *)((int)puVar19 + 0x3a) = local_114;
        *(undefined2 *)(puVar19 + 7) = local_118;
        *(int *)(puVar19 + 5) = local_10c;
        *(uint *)(puVar19 + 6) = local_dc;
        *(int *)(puVar19 + 1) = iVar28;
        *(int *)(puVar19 + 2) = local_cc;
        *(int *)((int)puVar19 + 0x14) = local_84;
        *(int *)(puVar19 + 3) = local_e0;
        *(uint *)((int)puVar19 + 0x34) = uVar27;
        *(int *)((int)puVar19 + 0x1c) = local_108;
        *(int *)((int)puVar19 + 0x24) = local_d8;
        *(char *)((int)puVar19 + 0x3e) = (char)uVar18;
        *(char *)((int)puVar19 + 0x3d) = (char)uVar33;
        *(uint *)((int)puVar19 + 0x2c) = local_12c;
        *(uint *)((int)puVar19 + 0xc) = uVar17;
        *(int *)(puVar19 + 4) = iVar29;
        *puVar19 = uVar39;
      } while (uVar24 != local_c0);
    }
  }
  param_1[0x33] = local_78;
  param_1[0x35] = uVar24;
  param_1[0x31] = iVar14;
  param_1[0x34] = local_74;
  param_1[0x32] = uVar36;
  param_1[0x30] = uVar36;
  uVar16 = param_3[1];
  uVar22 = param_3[2];
  uVar30 = param_3[3];
  param_1[0x20] = *param_3;
  param_1[0x21] = uVar16;
  param_1[0x22] = uVar22;
  param_1[0x23] = uVar30;
  uVar16 = param_3[5];
  uVar22 = param_3[6];
  uVar30 = param_3[7];
  uVar31 = param_3[8];
  param_1[0x24] = param_3[4];
  param_1[0x25] = uVar16;
  param_1[0x26] = uVar22;
  param_1[0x27] = uVar30;
  param_1[0x28] = uVar31;
  uVar16 = param_3[10];
  uVar22 = param_3[0xb];
  uVar30 = param_3[0xc];
  uVar31 = param_3[0xd];
  param_1[0x29] = param_3[9];
  param_1[0x2a] = uVar16;
  param_1[0x2b] = uVar22;
  param_1[0x2c] = uVar30;
  param_1[0x2d] = uVar31;
  *param_1 = uVar7;
  param_1[1] = uVar20;
  *(undefined1 *)((int)param_1 + 0x7d) = uVar3;
  *(undefined1 *)((int)param_1 + 0xdd) = uVar5;
  param_1[0x1d] = uVar8;
  *(undefined1 *)(param_1 + 0x37) = uVar6;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x36] = uVar23;
  *(undefined1 *)((int)param_1 + 0x7f) = uVar4;
  param_1[0x15] = uVar21;
  param_1[0x16] = uVar12;
  *(undefined1 *)((int)param_1 + 0x7e) = 1;
  *(undefined1 *)(param_1 + 0x1f) = 1;
  param_1[0x12] = 1;
  param_1[0x13] = uVar13;
  *(undefined8 *)(param_1 + 0x2e) = uVar46;
  param_1[0x1e] = uVar9;
  param_1[0x17] = uVar34;
  param_1[0x18] = uVar10;
  param_1[0x1a] = 100;
  *(undefined8 *)(param_1 + 6) = uVar42;
  *(undefined8 *)(param_1 + 8) = uVar43;
  *(undefined8 *)(param_1 + 10) = uVar44;
  *(undefined8 *)(param_1 + 0xc) = uVar45;
  param_1[0x19] = uVar11;
  param_1[0x1c] = uVar32;
  *(undefined8 *)(param_1 + 0xe) = in_d0;
  *(undefined8 *)(param_1 + 0x10) = in_d1;
  param_1[5] = uVar41;
  param_1[4] = uVar26;
  *(undefined8 *)(param_1 + 2) = uVar40;
  return;
}

