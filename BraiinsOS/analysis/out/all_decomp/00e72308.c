// FUN_00e72308 @ 00e72308 size=1480 calls_out=7 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00e72308(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 *unaff_r7;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined1 *puVar38;
  undefined4 *puVar39;
  undefined4 *puVar40;
  undefined4 *puVar41;
  undefined4 uVar42;
  undefined1 *local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 *local_cc;
  undefined4 *local_c8;
  undefined4 local_bc;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined1 *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  FUN_00f1457c(&local_50);
  puVar4 = local_48;
  puVar3 = local_4c;
  puVar18 = local_50;
  puVar38 = &DAT_3b9aca00;
  if (local_48 == &DAT_3b9aca00) {
LAB_00e72334:
    puVar18 = local_50;
    goto LAB_00e7251c;
  }
  if (param_2[1] == 0) {
    local_48 = (undefined1 *)0x1;
    local_4c = (undefined4 *)0x2501;
    local_50 = (undefined4 *)0x80000000;
    puVar18 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar18 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
  }
  else {
    param_2[1] = param_2[1] + -1;
    uVar16 = (uint)*(byte *)*param_2;
    *param_2 = (byte *)*param_2 + 1;
    if (uVar16 == 0) {
      iVar17 = param_2[1];
      uVar1 = 0;
      puVar2 = local_4c;
joined_r0x00e72458:
      if (iVar17 == 0) {
        local_48 = (undefined1 *)0x1;
        local_4c = (undefined4 *)0x2501;
        local_50 = (undefined4 *)0x80000000;
        puVar18 = (undefined4 *)thunk_FUN_016d4a50(0xc);
        if (puVar18 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0xc);
        }
      }
      else {
        param_2[1] = iVar17 + -1;
        local_4c = (undefined4 *)(uint)*(byte *)*param_2;
        *param_2 = (byte *)*param_2 + 1;
        if (local_4c == (undefined4 *)0x0) {
          local_bc = 0;
          uVar19 = 0;
LAB_00e72564:
          FUN_00e71d48(&local_50,param_2);
          uVar13 = local_2c;
          uVar10 = local_30;
          uVar7 = local_34;
          uVar16 = local_38;
          puVar2 = local_50;
          if (local_38 == 0x80000001) {
            *param_1 = 2;
            param_1[1] = 0;
            param_1[2] = local_50;
            return;
          }
          puVar39 = (undefined4 *)((uint)&local_50 | 4);
          uVar20 = *puVar39;
          uVar23 = puVar39[1];
          uVar27 = puVar39[2];
          uVar31 = puVar39[3];
          uVar35 = puVar39[4];
          FUN_00e71d48(&local_50,param_2);
          uVar14 = local_2c;
          uVar11 = local_30;
          uVar8 = local_34;
          uVar5 = local_38;
          puVar39 = local_50;
          if (local_38 == 0x80000001) {
            *param_1 = 2;
            param_1[1] = 0;
            param_1[2] = local_50;
          }
          else {
            puVar40 = (undefined4 *)((uint)&local_50 | 4);
            uVar21 = *puVar40;
            uVar24 = puVar40[1];
            uVar28 = puVar40[2];
            uVar32 = puVar40[3];
            uVar36 = puVar40[4];
            FUN_00e71d48(&local_50,param_2);
            uVar15 = local_2c;
            uVar12 = local_30;
            uVar9 = local_34;
            uVar6 = local_38;
            puVar40 = local_50;
            if (local_38 == 0x80000001) {
              *param_1 = 2;
              param_1[1] = 0;
              param_1[2] = local_50;
            }
            else {
              puVar41 = (undefined4 *)((uint)&local_50 | 4);
              uVar22 = *puVar41;
              uVar25 = puVar41[1];
              uVar29 = puVar41[2];
              uVar33 = puVar41[3];
              uVar37 = puVar41[4];
              FUN_00e71d48(&local_50,param_2);
              if (local_38 != 0x80000001) {
                puVar41 = (undefined4 *)((uint)&local_50 | 4);
                uVar26 = puVar41[1];
                uVar30 = puVar41[2];
                uVar34 = puVar41[3];
                uVar42 = puVar41[4];
                param_1[0x31] = *puVar41;
                param_1[0x32] = uVar26;
                param_1[0x33] = uVar30;
                param_1[0x34] = uVar34;
                param_1[0x35] = uVar42;
                param_1[0x37] = local_34;
                param_1[0x38] = local_30;
                param_1[0x39] = local_2c;
                param_1[0x12] = puVar2;
                param_1[0x13] = uVar20;
                param_1[0x14] = uVar23;
                param_1[0x15] = uVar27;
                param_1[0x16] = uVar31;
                param_1[0x17] = uVar35;
                param_1[0x1c] = puVar39;
                param_1[0x1a] = uVar10;
                param_1[0x18] = uVar16;
                param_1[0x19] = uVar7;
                param_1[0x1b] = uVar13;
                param_1[0x1d] = uVar21;
                param_1[0x1e] = uVar24;
                param_1[0x1f] = uVar28;
                param_1[0x20] = uVar32;
                param_1[0x21] = uVar36;
                param_1[0x26] = puVar40;
                param_1[0x24] = uVar11;
                param_1[0x22] = uVar5;
                param_1[0x23] = uVar8;
                param_1[0x25] = uVar14;
                param_1[0x27] = uVar22;
                param_1[0x28] = uVar25;
                param_1[0x29] = uVar29;
                param_1[0x2a] = uVar33;
                param_1[0x2b] = uVar37;
                param_1[0xb] = local_d0;
                param_1[0xc] = local_d4;
                param_1[0xd] = uVar1;
                param_1[0xe] = local_c8;
                param_1[0xf] = local_cc;
                *param_1 = uVar19;
                param_1[1] = 0;
                param_1[2] = local_f4;
                param_1[3] = local_ec;
                param_1[4] = local_f0;
                param_1[5] = local_bc;
                param_1[6] = puVar18;
                param_1[7] = puVar3;
                param_1[0x2c] = uVar6;
                param_1[0x2d] = uVar9;
                param_1[0x2e] = uVar12;
                param_1[0x36] = local_38;
                param_1[0x30] = local_50;
                param_1[0x10] = puVar38;
                param_1[10] = unaff_r7;
                param_1[8] = puVar4;
                param_1[0x2f] = uVar15;
                return;
              }
              param_1[1] = 0;
              param_1[2] = local_50;
              *param_1 = 2;
              if ((uVar6 & 0x7fffffff) != 0) {
                thunk_FUN_016d3fb4(uVar9);
              }
            }
            if ((uVar5 & 0x7fffffff) != 0) {
              thunk_FUN_016d3fb4(uVar8);
            }
          }
          if ((uVar16 & 0x7fffffff) == 0) {
            return;
          }
          thunk_FUN_016d3fb4(uVar7);
          return;
        }
        if (local_4c == (undefined4 *)0x1) {
          local_4c = puVar2;
          FUN_00efcd38(&local_50,param_2);
          if (local_50 != (undefined4 *)&DAT_00000001) {
            local_f4 = local_48;
            local_ec = local_44;
            local_f0 = local_40;
            local_bc = local_3c;
            uVar19 = 1;
            goto LAB_00e72564;
          }
          goto LAB_00e7249c;
        }
        local_50 = (undefined4 *)&DAT_80000004;
        puVar18 = (undefined4 *)thunk_FUN_016d4a50(0xc);
        if (puVar18 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0xc);
        }
      }
    }
    else {
      if (uVar16 == 1) {
        FUN_00e94900(&local_50,param_2);
        puVar38 = local_48;
        local_cc = local_4c;
        local_c8 = local_50;
        if (local_48 == &DAT_3b9aca00) goto LAB_00e72334;
        FUN_00efcd38(&local_50,param_2);
        if (local_50 != (undefined4 *)&DAT_00000001) {
          iVar17 = param_2[1];
          uVar1 = local_3c;
          unaff_r7 = local_48;
          puVar2 = local_4c;
          local_d4 = local_40;
          local_d0 = local_44;
          goto joined_r0x00e72458;
        }
LAB_00e7249c:
        puVar18 = local_4c;
        goto LAB_00e7251c;
      }
      local_50 = (undefined4 *)&DAT_80000004;
      local_4c = (undefined4 *)uVar16;
      puVar18 = (undefined4 *)thunk_FUN_016d4a50(0xc);
      if (puVar18 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
    }
  }
  *puVar18 = local_50;
  puVar18[1] = local_4c;
  puVar18[2] = local_48;
LAB_00e7251c:
  *param_1 = 2;
  param_1[1] = 0;
  param_1[2] = puVar18;
  return;
}

