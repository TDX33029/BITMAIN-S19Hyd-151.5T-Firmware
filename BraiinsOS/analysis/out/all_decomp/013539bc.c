// FUN_013539bc @ 013539bc size=6940 calls_out=27 calls_in=5
// strings: Retrieving external resources is not supported once the registry is populated | additionalProperties | properties | unevaluatedProperties | allOf | anyOf

void FUN_013539bc(uint *param_1,int *param_2,char *param_3,uint param_4)

{
  byte *pbVar1;
  code *pcVar2;
  longlong lVar3;
  uint *puVar4;
  uint *puVar5;
  char cVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  char *pcVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  int *piVar20;
  int *piVar21;
  int iVar22;
  uint *puVar23;
  int *piVar24;
  int *piVar25;
  undefined1 uVar26;
  uint *puVar27;
  int **ppiVar28;
  char *pcVar29;
  uint uVar30;
  int *piVar31;
  int iVar32;
  uint *puVar33;
  uint *puVar34;
  uint uVar35;
  bool bVar36;
  ulonglong uVar37;
  uint *local_d4;
  int *local_c0;
  uint *local_b8;
  uint *local_b4;
  uint *local_b0;
  uint local_a8 [2];
  int *local_a0;
  int *local_9c;
  int *local_98;
  int *local_94;
  uint *local_90;
  uint *local_8c;
  uint *local_88;
  undefined4 local_84;
  uint *local_80;
  undefined4 local_7c;
  undefined1 local_78;
  uint *local_74;
  uint *local_70;
  undefined2 local_6c;
  char *local_68;
  undefined1 local_64;
  uint local_60;
  uint *local_5c;
  uint *local_58;
  uint *local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  if ((param_4 == 0) || (*param_3 != '#')) {
    pcVar8 = &DAT_00000001;
    uVar7 = param_4;
    do {
      uVar37 = FUN_00fb737c(0x23,param_3,uVar7);
      uVar7 = (uint)(uVar37 >> 0x20);
      if ((uVar37 & 1) == 0) break;
      if ((uVar7 < param_4) && (param_3[uVar7] == '#')) {
        pcVar8 = param_3 + uVar7 + 1;
        puVar33 = (uint *)(param_4 - (uVar7 + 1));
        param_4 = uVar7;
        goto LAB_01353a88;
      }
    } while (uVar7 <= param_4);
    puVar33 = (uint *)0x0;
LAB_01353a88:
    iVar9 = param_2[1];
    iVar32 = *param_2;
    local_90 = *(uint **)(iVar9 + 0xc);
    local_8c = *(uint **)(iVar9 + 0x10);
    FUN_016dd52c(&local_88,iVar9 + 0x14,0x1c);
    FUN_0134831c(&local_60,iVar32,&local_90,param_3,param_4);
    if (local_60 != 0x8000000a) {
      param_1[2] = (uint)local_58;
      param_1[3] = (uint)local_54;
      param_1[4] = local_50;
      param_1[5] = local_4c;
      param_1[6] = local_48;
      param_1[7] = local_44;
      param_1[8] = local_40;
      param_1[9] = local_3c;
      param_1[10] = uStack_38;
      param_1[0xb] = uStack_34;
      param_1[0xc] = uStack_30;
      param_1[0xd] = uStack_2c;
      *param_1 = local_60;
      param_1[1] = (uint)local_5c;
      return;
    }
    iVar9 = *(int *)(iVar32 + 0x3c);
    local_60 = 0x8000000a;
    puVar27 = local_5c;
  }
  else {
    puVar27 = (uint *)param_2[1];
    do {
      uVar7 = *puVar27;
      bVar36 = (bool)hasExclusiveAccess(puVar27);
    } while (!bVar36);
    *puVar27 = uVar7 + 1;
    if ((int)uVar7 < 0) goto LAB_01355790;
    pcVar8 = param_3 + 1;
    iVar32 = *param_2;
    puVar33 = (uint *)(param_4 - 1);
    iVar9 = *(int *)(iVar32 + 0x3c);
  }
  if (iVar9 == 0) {
LAB_01353d88:
    uVar7 = puVar27[3];
    uVar30 = puVar27[4];
    iVar32 = thunk_FUN_016d4a50(0x4d);
    if (iVar32 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,0x4d);
    }
    FUN_016dd1aa(iVar32,
                 "Retrieving external resources is not supported once the registry is populated",
                 0x4d);
    puVar11 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar11 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    *puVar11 = 0x4d;
    puVar11[1] = iVar32;
    puVar11[2] = 0x4d;
    FUN_0135ba80(&local_60,uVar7,uVar30,puVar11,&DAT_01892144);
    *param_1 = local_60;
    param_1[1] = (uint)local_5c;
    param_1[2] = (uint)local_58;
    param_1[3] = (uint)local_54;
    param_1[4] = local_50;
    param_1[5] = local_4c;
    param_1[6] = local_48;
    param_1[7] = local_44;
    param_1[8] = local_40;
    param_1[9] = local_3c;
    param_1[10] = uStack_38;
    param_1[0xb] = uStack_34;
    param_1[0xc] = uStack_30;
    param_1[0xd] = uStack_2c;
LAB_01353e18:
    DataMemoryBarrier(0xb);
    do {
      uVar7 = *puVar27;
      bVar36 = (bool)hasExclusiveAccess(puVar27);
    } while (!bVar36);
    *puVar27 = uVar7 - 1;
    if (uVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_013532e4(puVar27);
      return;
    }
    return;
  }
  local_48 = *(uint *)(iVar32 + 0x40);
  local_44 = *(uint *)(iVar32 + 0x44);
  local_50 = *(uint *)(iVar32 + 0x48);
  local_4c = *(uint *)(iVar32 + 0x4c);
  local_58 = *(uint **)(iVar32 + 0x58);
  local_5c = *(uint **)(iVar32 + 0x54);
  local_60 = *(uint *)(iVar32 + 0x50);
  local_54 = *(uint **)(iVar32 + 0x5c);
  FUN_01352290(&local_60,puVar27[3],puVar27[4]);
  iVar9 = *(int *)(iVar32 + 0x30);
  uVar7 = local_4c << 0x18 | (local_4c >> 8 & 0xff) << 0x10 | (local_4c >> 0x10 & 0xff) << 8 |
          local_4c >> 0x18;
  lVar3 = (ulonglong)~local_48 * (ulonglong)uVar7;
  uVar35 = (uint)lVar3;
  uVar30 = local_44 << 0x18 | (local_44 >> 8 & 0xff) << 0x10 | (local_44 >> 0x10 & 0xff) << 8 |
           local_44 >> 0x18;
  uVar7 = (local_50 << 0x18 | (local_50 >> 8 & 0xff) << 0x10 | (local_50 >> 0x10 & 0xff) << 8 |
          local_50 >> 0x18) * ~local_48 + uVar7 * ~local_44 + (int)((ulonglong)lVar3 >> 0x20);
  lVar3 = (ulonglong)local_50 * (ulonglong)uVar30;
  uVar7 = (uint)lVar3 ^
          (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
          uVar7 >> 0x18);
  uVar19 = *(uint *)(iVar32 + 0x34);
  uVar35 = (local_48 << 0x18 | (local_48 >> 8 & 0xff) << 0x10 | (local_48 >> 0x10 & 0xff) << 8 |
           local_48 >> 0x18) * local_50 + uVar30 * local_4c + (int)((ulonglong)lVar3 >> 0x20) ^
           (uVar35 << 0x18 | (uVar35 >> 8 & 0xff) << 0x10 | (uVar35 >> 0x10 & 0xff) << 8 |
           uVar35 >> 0x18);
  uVar30 = uVar35;
  if ((local_50 & 0x20) != 0) {
    uVar30 = uVar7;
    uVar7 = uVar35;
  }
  uVar30 = uVar7 << (local_50 & 0x1f) | (uVar30 >> 1) >> (~local_50 & 0x1f);
  uVar7 = uVar30 >> 0x19;
  iVar22 = 0;
  do {
    uVar30 = uVar19 & uVar30;
    uVar17 = *(uint *)(iVar9 + uVar30);
    uVar35 = uVar17 ^ uVar7 * 0x1010101;
    for (uVar35 = ~uVar35 & 0x80808080 & uVar35 + 0xfefefeff; uVar35 != 0;
        uVar35 = uVar35 - 1 & uVar35) {
      uVar10 = uVar30 + ((uint)LZCOUNT(uVar35 << 0x18 | (uVar35 >> 8 & 0xff) << 0x10 |
                                       (uVar35 >> 0x10 & 0xff) << 8 | uVar35 >> 0x18) >> 3) & uVar19
      ;
      iVar15 = *(int *)(iVar9 + -0xc + uVar10 * -0xc);
      if ((puVar27[4] == *(uint *)(iVar15 + 0x10)) &&
         (iVar15 = thunk_FUN_016dd50a(puVar27[3],*(undefined4 *)(iVar15 + 0xc)), iVar15 == 0)) {
        iVar9 = iVar9 + uVar10 * -0xc;
        if (puVar33 == (uint *)0x0) {
          FUN_01355ac4(&local_60,param_2,puVar27);
          puVar33 = &local_60;
          uVar7 = *(uint *)(iVar9 + -8);
          uVar26 = *(undefined1 *)(iVar9 + -4);
LAB_01353e68:
          uVar30 = puVar33[1];
          uVar35 = puVar33[2];
          param_1[2] = *puVar33;
          param_1[3] = uVar30;
          *param_1 = 0x8000000a;
          param_1[1] = uVar7;
          param_1[4] = uVar35;
          *(undefined1 *)(param_1 + 5) = uVar26;
          return;
        }
        if (*pcVar8 != '/') {
          FUN_0134a380(&local_60,iVar32,puVar27 + 2,pcVar8,puVar33);
          puVar23 = local_5c;
          if (local_60 != 0x8000000a) {
            param_1[2] = (uint)local_58;
            param_1[3] = (uint)local_54;
            param_1[4] = local_50;
            param_1[5] = local_4c;
            param_1[6] = local_48;
            param_1[7] = local_44;
            param_1[8] = local_40;
            param_1[9] = local_3c;
            param_1[10] = uStack_38;
            param_1[0xb] = uStack_34;
            param_1[0xc] = uStack_30;
            param_1[0xd] = uStack_2c;
            *param_1 = local_60;
            param_1[1] = (uint)local_5c;
            goto LAB_01353e18;
          }
          FUN_01355ac4(local_a8,param_2,puVar27);
          if (*puVar23 != 1) {
            puVar33 = local_a8;
            uVar7 = puVar23[3];
            uVar26 = (undefined1)puVar23[4];
            goto LAB_01353e68;
          }
          puVar33 = puVar23 + 3;
          if (local_a0 != (int *)0x0) goto LAB_01353ee8;
          local_9c = (int *)0x0;
          goto LAB_013552e0;
        }
        FUN_01355ac4(&local_b8,param_2,puVar27);
        pcVar29 = *(char **)(iVar9 + -8);
        local_94 = (int *)0x0;
        local_98 = (int *)&DAT_00000004;
        local_9c = (int *)0x0;
        if ((puVar33 != (uint *)&DAT_00000001) && (pcVar8[1] < -0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(pcVar8,puVar33,1,puVar33,&DAT_018920a4);
        }
        FUN_01287164(&local_90,pcVar8 + 1,pcVar8 + (int)puVar33);
        puVar14 = local_88;
        puVar23 = local_8c;
        puVar27 = local_90;
        if (local_90 == (uint *)&DAT_80000000) {
          FUN_00fab1e0(&local_60,local_8c,local_88);
          if (local_60 != 1) {
            local_d4 = (uint *)0x0;
            puVar14 = local_58;
            puVar23 = local_5c;
            goto LAB_01354024;
          }
          puVar34 = local_58;
          puVar18 = local_5c;
        }
        else {
          local_d4 = local_90;
          FUN_00fab1e0(&local_60,local_8c,local_88);
          puVar34 = local_58;
          puVar18 = local_5c;
          if (local_60 == 0) {
LAB_01354024:
            local_6c = 1;
            piVar20 = (int *)0x0;
            local_78 = 1;
            local_7c = 0x2f;
            local_90 = (uint *)&DAT_0000002f;
            local_74 = (uint *)0x0;
            local_84 = 0;
            local_c0 = (int *)&DAT_00000004;
            local_8c = puVar23;
            local_88 = puVar14;
            local_80 = puVar14;
            local_70 = puVar14;
            goto LAB_01354068;
          }
          if (puVar27 != (uint *)0x0) {
            thunk_FUN_016d3fb4(puVar23);
          }
        }
        uVar12 = 0;
        if (-1 < (int)puVar33) {
          uVar7 = thunk_FUN_016d4a50(puVar33);
          if (uVar7 != 0) {
            FUN_016dd1aa(uVar7,pcVar8,puVar33);
            *param_1 = 0x80000003;
            param_1[1] = (uint)puVar33;
            param_1[2] = uVar7;
            param_1[3] = (uint)puVar33;
            param_1[4] = (uint)puVar18;
            param_1[5] = (uint)puVar34;
            goto LAB_013556c0;
          }
          uVar12 = 1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar12,puVar33);
      }
    }
    if ((uVar17 & 0x80808080 & uVar17 << 1) != 0) goto LAB_01353d88;
    iVar22 = iVar22 + 4;
    uVar30 = uVar30 + iVar22;
  } while( true );
LAB_01354968:
  piVar21 = piVar24;
  if (piVar24 == piVar25) goto LAB_013550a8;
  goto LAB_01354970;
LAB_0135469c:
  piVar21 = piVar24;
  if (piVar24 == piVar25) goto LAB_013550a8;
  goto LAB_013546a4;
LAB_01354e34:
  piVar21 = piVar24;
  if (piVar24 == piVar25) goto LAB_013550a8;
  goto LAB_01354e3c;
LAB_01354bfc:
  piVar21 = piVar24;
  if (piVar24 == piVar25) goto LAB_013550a8;
  goto LAB_01354c04;
LAB_01354068:
  do {
    puVar27 = local_8c;
    FUN_0062a644(&local_60,&local_90);
    puVar14 = local_74;
    piVar21 = local_94;
    if (local_60 != 1) {
      if (local_6c._1_1_ == '\0') {
        local_6c = CONCAT11(1,(char)local_6c);
        if ((char)local_6c != '\x01') {
          if (local_70 == local_74) break;
        }
        uVar7 = (int)local_70 - (int)local_74;
        puVar27 = local_8c;
        if (*pcVar29 != '\x04') goto LAB_01354114;
LAB_013540a8:
        pcVar16 = (char *)((int)puVar27 + (int)puVar14);
        puVar27 = puVar33;
        if (uVar7 == 1) {
          cVar6 = *pcVar16;
          uVar26 = 1;
          if ((cVar6 != '+') && (cVar6 != '-')) goto LAB_0135424c;
          goto LAB_01355280;
        }
        if (uVar7 != 0) {
          cVar6 = *pcVar16;
LAB_0135424c:
          uVar35 = 0;
          uVar30 = (uint)(cVar6 == '+');
          uVar19 = uVar7 - uVar30;
          if (uVar19 < 9) {
            for (; uVar19 != 0; uVar19 = uVar19 - 1) {
              pbVar1 = (byte *)(pcVar16 + uVar30);
              if (9 < *pbVar1 - 0x30) goto LAB_01355278;
              uVar30 = uVar30 + 1;
              uVar35 = (*pbVar1 - 0x30) + uVar35 * 10;
            }
          }
          else {
            while (uVar19 != 0) {
              uVar17 = (uint)((ulonglong)uVar35 * 10);
              if ((int)((ulonglong)uVar35 * 10 >> 0x20) != 0) {
                uVar26 = 1;
                if ((byte)pcVar16[uVar30] - 0x30 < 10) {
                  uVar26 = 2;
                }
                goto LAB_01355280;
              }
              uVar10 = (byte)pcVar16[uVar30] - 0x30;
              if (9 < uVar10) goto LAB_01355278;
              uVar35 = uVar10 + uVar17;
              uVar19 = uVar19 - 1;
              uVar30 = uVar30 + 1;
              if (CARRY4(uVar10,uVar17)) {
                uVar26 = 2;
                goto LAB_01355280;
              }
            }
          }
          if (*(uint *)(pcVar29 + 0xc) <= uVar35) {
            FUN_01351b58(&local_60,puVar33,1,1);
            puVar27 = local_58;
            puVar14 = local_5c;
            if (local_60 != 0) goto LAB_0135528c;
            FUN_016dd1aa(local_58,pcVar8,puVar33);
            *param_1 = 0x80000002;
            param_1[1] = (uint)puVar14;
            param_1[2] = (uint)puVar27;
            param_1[3] = (uint)puVar33;
            goto LAB_013556ac;
          }
          iVar32 = *(int *)(pcVar29 + 8);
          if (local_94 == local_9c) {
            FUN_01351a38(&local_9c);
          }
          local_98[(int)piVar21 * 3] = -0x7fffffff;
          pcVar29 = (char *)(iVar32 + uVar35 * 0x18);
          (local_98 + (int)piVar21 * 3)[1] = uVar35;
          goto LAB_013542e4;
        }
        uVar26 = 0;
        puVar14 = (uint *)0x0;
        if ((int)puVar33 < 0) goto LAB_0135528c;
        goto LAB_01355600;
      }
      break;
    }
    local_74 = local_58;
    uVar7 = (int)local_5c - (int)puVar14;
    if (*pcVar29 == '\x04') goto LAB_013540a8;
LAB_01354114:
    FUN_01350f80(&local_60);
    puVar14 = local_58;
    puVar27 = local_5c;
    if ((*pcVar29 != '\x05') || (iVar32 = *(int *)(pcVar29 + 4), iVar32 == 0)) {
LAB_013553c8:
      uVar12 = 0;
      if ((int)puVar33 < 0) {
LAB_013553d4:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar12,puVar33);
      }
      uVar7 = thunk_FUN_016d4a50(puVar33);
      if (uVar7 == 0) {
        uVar12 = 1;
        goto LAB_013553d4;
      }
      FUN_016dd1aa(uVar7,pcVar8,puVar33);
      *param_1 = 0x80000002;
      param_1[1] = (uint)puVar33;
      param_1[2] = uVar7;
      param_1[3] = (uint)puVar33;
      if ((local_60 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(puVar27);
      }
      goto LAB_013556ac;
    }
    local_c0 = *(int **)(pcVar29 + 8);
    while( true ) {
      iVar15 = iVar32 + 0x10c;
      uVar7 = (uint)*(ushort *)(iVar32 + 0x192);
      uVar30 = 0xffffffff;
      iVar22 = uVar7 * 0xc;
      do {
        if (iVar22 == 0) goto LAB_013541cc;
        puVar34 = *(uint **)(iVar15 + 8);
        puVar18 = puVar34;
        if (puVar14 < puVar34) {
          puVar18 = puVar14;
        }
        iVar13 = FUN_016dd50a(puVar27,*(undefined4 *)(iVar15 + 4),puVar18);
        uVar35 = local_60;
        piVar21 = local_94;
        if (iVar13 == 0) {
          iVar13 = (int)puVar14 - (int)puVar34;
        }
        iVar22 = iVar22 + -0xc;
        uVar30 = uVar30 + 1;
        iVar15 = iVar15 + 0xc;
      } while ((char)((0 < iVar13) - (iVar13 < 0)) == '\x01');
      uVar7 = uVar30;
      if (0 < iVar13 == iVar13 < 0) break;
LAB_013541cc:
      if (local_c0 == (int *)0x0) goto LAB_013553c8;
      local_c0 = (int *)((int)local_c0 + -1);
      iVar32 = *(int *)(iVar32 + uVar7 * 4 + 0x198);
    }
    if (local_94 == local_9c) {
      FUN_01351a38(&local_9c);
    }
    pcVar29 = (char *)(iVar32 + uVar30 * 0x18);
    puVar18 = (uint *)(local_98 + (int)piVar21 * 3);
    *puVar18 = uVar35;
    puVar18[1] = (uint)puVar27;
    puVar18[2] = (uint)puVar14;
LAB_013542e4:
    local_c0 = local_98;
    local_94 = (int *)((int)piVar21 + 1);
    piVar20 = local_94;
    local_64 = *(undefined1 *)(iVar9 + -4);
    local_68 = pcVar29;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(local_64) {
    case 0:
      if (local_94 != (int *)0x0) {
        piVar25 = local_98 + (int)local_94 * 3;
        piVar21 = local_98;
LAB_01354c04:
        piVar24 = piVar21 + 3;
        if (*piVar21 == -0x7fffffff) goto LAB_01354bfc;
        uVar7 = piVar21[2] - 3;
        if (0x11 < uVar7) goto switchD_01354c30_caseD_1;
        iVar32 = piVar21[1];
        switch(uVar7) {
        case 0:
switchD_01354c30_caseD_0:
          uVar12 = 3;
          pcVar16 = "not";
          break;
        default:
          goto switchD_01354c30_caseD_1;
        case 2:
          iVar22 = thunk_FUN_016dd50a(iVar32,&DAT_004146ea,5);
          if (iVar22 != 0) {
switchD_01354cec_caseD_2:
            iVar22 = thunk_FUN_016dd50a("allOf",iVar32,5);
            if ((iVar22 != 0) && (iVar22 = thunk_FUN_016dd50a("anyOf",iVar32,5), iVar22 != 0)) {
              uVar12 = 5;
              pcVar16 = "oneOf";
              goto LAB_01354dfc;
            }
            goto LAB_01354e08;
          }
LAB_01354ccc:
          if (*local_68 != '\x05') {
            switch(uVar7) {
            case 0:
              goto switchD_01354c30_caseD_0;
            default:
              goto switchD_01354c30_caseD_1;
            case 2:
              goto switchD_01354cec_caseD_2;
            case 7:
              goto switchD_01354c30_caseD_7;
            case 8:
              goto switchD_01354c30_caseD_8;
            case 0xc:
              goto switchD_01354c30_caseD_c;
            case 0xe:
              goto switchD_01354c30_caseD_e;
            case 0x11:
              goto switchD_01354c30_caseD_11;
            }
          }
          goto LAB_013550a8;
        case 7:
switchD_01354c30_caseD_7:
          uVar12 = 10;
          pcVar16 = "properties";
          goto LAB_01354dfc;
        case 8:
switchD_01354c30_caseD_8:
          uVar12 = 0xb;
          pcVar16 = "definitions";
          goto LAB_01354dfc;
        case 9:
          iVar22 = thunk_FUN_016dd50a(iVar32,"dependencies",0xc);
          if (iVar22 == 0) goto LAB_01354ccc;
          goto switchD_01354c30_caseD_1;
        case 0xc:
switchD_01354c30_caseD_c:
          uVar12 = 0xf;
          pcVar16 = "additionalItems";
          break;
        case 0xe:
switchD_01354c30_caseD_e:
          uVar12 = 0x11;
          pcVar16 = "patternProperties";
LAB_01354dfc:
          iVar32 = thunk_FUN_016dd50a(pcVar16,iVar32,uVar12);
          if (iVar32 == 0) {
LAB_01354e08:
            if (piVar24 == piVar25) goto switchD_01354c30_caseD_1;
            piVar24 = piVar21 + 6;
            goto LAB_01354bfc;
          }
          goto switchD_01354c30_caseD_1;
        case 0x11:
switchD_01354c30_caseD_11:
          uVar12 = 0x14;
          pcVar16 = "additionalProperties";
        }
        iVar32 = thunk_FUN_016dd50a(pcVar16,iVar32,uVar12);
        if (iVar32 == 0) goto LAB_01354bfc;
switchD_01354c30_caseD_1:
        do {
          uVar7 = *local_b4;
          bVar36 = (bool)hasExclusiveAccess(local_b4);
        } while (!bVar36);
        *local_b4 = uVar7 + 1;
        if ((int)uVar7 < 0) goto LAB_01355790;
        puVar14 = local_b4;
        puVar27 = local_b8;
        puVar18 = local_b0;
        puVar34 = local_b8;
        puVar4 = local_b4;
        puVar5 = local_54;
        if (local_b0 != (uint *)0x0) {
          do {
            uVar7 = *local_b0;
            bVar36 = (bool)hasExclusiveAccess(local_b0);
          } while (!bVar36);
          *local_b0 = uVar7 + 1;
          puVar34 = local_b8;
          puVar4 = local_b4;
          if (0x7fffffff < uVar7) goto LAB_01355790;
        }
        goto LAB_01355180;
      }
      break;
    case 1:
      if (local_94 != (int *)0x0) {
        piVar25 = local_98 + (int)local_94 * 3;
        piVar21 = local_98;
LAB_01354e3c:
        piVar24 = piVar21 + 3;
        if (*piVar21 == -0x7fffffff) goto LAB_01354e34;
        uVar7 = piVar21[2] - 3;
        if (0x11 < uVar7) goto switchD_01354e68_caseD_1;
        iVar32 = piVar21[1];
        switch(uVar7) {
        case 0:
switchD_01354e68_caseD_0:
          uVar12 = 3;
          pcVar16 = "not";
          break;
        default:
          goto switchD_01354e68_caseD_1;
        case 2:
          iVar22 = thunk_FUN_016dd50a(iVar32,&DAT_004146ea,5);
          if (iVar22 != 0) {
switchD_01354f78_caseD_2:
            iVar22 = thunk_FUN_016dd50a("allOf",iVar32,5);
            if ((iVar22 != 0) && (iVar22 = thunk_FUN_016dd50a("anyOf",iVar32,5), iVar22 != 0)) {
              uVar12 = 5;
              pcVar16 = "oneOf";
              goto LAB_01355010;
            }
            goto LAB_0135501c;
          }
LAB_01354f58:
          if (*local_68 != '\x05') {
            switch(uVar7) {
            case 0:
              goto switchD_01354e68_caseD_0;
            default:
              goto switchD_01354e68_caseD_1;
            case 2:
              goto switchD_01354f78_caseD_2;
            case 5:
              goto switchD_01354e68_caseD_5;
            case 7:
              goto switchD_01354e68_caseD_7;
            case 8:
              goto switchD_01354e68_caseD_8;
            case 10:
              goto switchD_01354e68_caseD_a;
            case 0xc:
              goto switchD_01354e68_caseD_c;
            case 0xe:
              goto switchD_01354e68_caseD_e;
            case 0x11:
              goto switchD_01354e68_caseD_11;
            }
          }
          goto LAB_013550a8;
        case 5:
switchD_01354e68_caseD_5:
          uVar12 = 8;
          pcVar16 = &DAT_0056aa28;
          break;
        case 7:
switchD_01354e68_caseD_7:
          uVar12 = 10;
          pcVar16 = "properties";
          goto LAB_01355010;
        case 8:
switchD_01354e68_caseD_8:
          uVar12 = 0xb;
          pcVar16 = "definitions";
          goto LAB_01355010;
        case 9:
          iVar22 = thunk_FUN_016dd50a(iVar32,"dependencies",0xc);
          if (iVar22 == 0) goto LAB_01354f58;
          goto switchD_01354e68_caseD_1;
        case 10:
switchD_01354e68_caseD_a:
          uVar12 = 0xd;
          pcVar16 = "propertyNames";
          break;
        case 0xc:
switchD_01354e68_caseD_c:
          uVar12 = 0xf;
          pcVar16 = "additionalItems";
          break;
        case 0xe:
switchD_01354e68_caseD_e:
          uVar12 = 0x11;
          pcVar16 = "patternProperties";
LAB_01355010:
          iVar32 = thunk_FUN_016dd50a(pcVar16,iVar32,uVar12);
          if (iVar32 == 0) {
LAB_0135501c:
            if (piVar24 == piVar25) goto switchD_01354e68_caseD_1;
            piVar24 = piVar21 + 6;
            goto LAB_01354e34;
          }
          goto switchD_01354e68_caseD_1;
        case 0x11:
switchD_01354e68_caseD_11:
          uVar12 = 0x14;
          pcVar16 = "additionalProperties";
        }
        iVar32 = thunk_FUN_016dd50a(pcVar16,iVar32,uVar12);
        if (iVar32 == 0) goto LAB_01354e34;
switchD_01354e68_caseD_1:
        do {
          uVar7 = *local_b4;
          bVar36 = (bool)hasExclusiveAccess(local_b4);
        } while (!bVar36);
        *local_b4 = uVar7 + 1;
        if ((int)uVar7 < 0) goto LAB_01355790;
        puVar14 = local_b4;
        puVar27 = local_b8;
        puVar18 = local_b0;
        puVar34 = local_b8;
        puVar4 = local_b4;
        puVar5 = local_b0;
        if (local_b0 != (uint *)0x0) {
          do {
            uVar7 = *local_b0;
            bVar36 = (bool)hasExclusiveAccess(local_b0);
          } while (!bVar36);
          *local_b0 = uVar7 + 1;
LAB_01355254:
          puVar14 = local_b4;
          puVar27 = local_b8;
          puVar18 = local_b0;
          puVar34 = local_b8;
          puVar4 = local_b4;
          puVar5 = local_b0;
          if ((int)uVar7 < 0) goto LAB_01355790;
        }
        goto LAB_01355180;
      }
      break;
    case 2:
      if (local_94 != (int *)0x0) {
        piVar25 = local_98 + (int)local_94 * 3;
        piVar21 = local_98;
LAB_013546a4:
        piVar24 = piVar21 + 3;
        if (*piVar21 == -0x7fffffff) goto LAB_0135469c;
        uVar7 = piVar21[2] - 2;
        if (0x12 < uVar7) goto switchD_013546d0_caseD_4;
        puVar27 = (uint *)piVar21[1];
        switch(uVar7) {
        case 0:
switchD_013546d0_caseD_0:
          uVar7 = (uint)(ushort)*puVar27;
          uVar30 = 0x6669;
          goto LAB_01354870;
        case 1:
switchD_013546d0_caseD_1:
          uVar12 = 3;
          pcVar16 = "not";
          break;
        case 2:
switchD_013546d0_caseD_2:
          if (*puVar27 == 0x65736c65) goto LAB_0135469c;
          uVar7 = *puVar27;
          uVar30 = 0x6e656874;
LAB_01354870:
          bVar36 = uVar7 == uVar30;
          goto LAB_013548f4;
        case 3:
          iVar32 = thunk_FUN_016dd50a(puVar27,&DAT_004146ea,5);
          if (iVar32 != 0) {
switchD_013547e0_caseD_3:
            iVar32 = thunk_FUN_016dd50a("allOf",puVar27,5);
            if ((iVar32 != 0) && (iVar32 = thunk_FUN_016dd50a("anyOf",puVar27,5), iVar32 != 0)) {
              uVar12 = 5;
              pcVar16 = "oneOf";
              goto LAB_013548b4;
            }
            goto LAB_013548c0;
          }
LAB_013547c0:
          if (*local_68 != '\x05') {
            switch(uVar7) {
            case 0:
              goto switchD_013546d0_caseD_0;
            case 1:
              goto switchD_013546d0_caseD_1;
            case 2:
              goto switchD_013546d0_caseD_2;
            case 3:
              goto switchD_013547e0_caseD_3;
            default:
              goto switchD_013546d0_caseD_4;
            case 6:
              goto switchD_013546d0_caseD_6;
            case 8:
              goto switchD_013546d0_caseD_8;
            case 9:
              goto switchD_013546d0_caseD_9;
            case 0xb:
              goto switchD_013546d0_caseD_b;
            case 0xd:
              goto switchD_013546d0_caseD_d;
            case 0xf:
              goto switchD_013546d0_caseD_f;
            case 0x12:
              goto switchD_013546d0_caseD_12;
            }
          }
          goto LAB_013550a8;
        default:
          goto switchD_013546d0_caseD_4;
        case 6:
switchD_013546d0_caseD_6:
          uVar12 = 8;
          pcVar16 = &DAT_0056aa28;
          break;
        case 8:
switchD_013546d0_caseD_8:
          uVar12 = 10;
          pcVar16 = "properties";
          goto LAB_013548b4;
        case 9:
switchD_013546d0_caseD_9:
          uVar12 = 0xb;
          pcVar16 = "definitions";
          goto LAB_013548b4;
        case 10:
          iVar32 = thunk_FUN_016dd50a(puVar27,"dependencies",0xc);
          if (iVar32 == 0) goto LAB_013547c0;
          goto switchD_013546d0_caseD_4;
        case 0xb:
switchD_013546d0_caseD_b:
          uVar12 = 0xd;
          pcVar16 = "propertyNames";
          break;
        case 0xd:
switchD_013546d0_caseD_d:
          uVar12 = 0xf;
          pcVar16 = "additionalItems";
          break;
        case 0xf:
switchD_013546d0_caseD_f:
          uVar12 = 0x11;
          pcVar16 = "patternProperties";
LAB_013548b4:
          iVar32 = thunk_FUN_016dd50a(pcVar16,puVar27,uVar12);
          if (iVar32 == 0) {
LAB_013548c0:
            if (piVar24 == piVar25) goto switchD_013546d0_caseD_4;
            piVar24 = piVar21 + 6;
            goto LAB_0135469c;
          }
          goto switchD_013546d0_caseD_4;
        case 0x12:
switchD_013546d0_caseD_12:
          uVar12 = 0x14;
          pcVar16 = "additionalProperties";
        }
        iVar32 = thunk_FUN_016dd50a(pcVar16,puVar27,uVar12);
        bVar36 = iVar32 == 0;
LAB_013548f4:
        if (bVar36) goto LAB_0135469c;
switchD_013546d0_caseD_4:
        do {
          uVar7 = *local_b4;
          bVar36 = (bool)hasExclusiveAccess(local_b4);
        } while (!bVar36);
        *local_b4 = uVar7 + 1;
        if ((int)uVar7 < 0) goto LAB_01355790;
        puVar14 = local_b4;
        puVar27 = local_b8;
        puVar18 = local_b0;
        puVar34 = local_b8;
        puVar4 = local_b4;
        puVar5 = local_b0;
        if (local_b0 != (uint *)0x0) {
          do {
            uVar7 = *local_b0;
            bVar36 = (bool)hasExclusiveAccess(local_b0);
          } while (!bVar36);
          *local_b0 = uVar7 + 1;
          goto LAB_01355254;
        }
        goto LAB_01355180;
      }
      break;
    case 3:
      if (local_94 != (int *)0x0) {
        piVar25 = local_98 + (int)local_94 * 3;
        piVar21 = local_98;
LAB_01354970:
        piVar24 = piVar21 + 3;
        if (*piVar21 == -0x7fffffff) goto LAB_01354968;
        if (0x13 < piVar21[2] - 2U) goto switchD_0135499c_caseD_6;
        puVar27 = (uint *)piVar21[1];
        switch(piVar21[2]) {
        case 2:
          uVar7 = (uint)(ushort)*puVar27;
          uVar30 = 0x6669;
LAB_01354aec:
          bVar36 = uVar7 == uVar30;
          goto LAB_01354ba8;
        case 3:
          uVar12 = 3;
          pcVar16 = "not";
          break;
        case 4:
          if (*puVar27 != 0x65736c65) {
            uVar7 = *puVar27;
            uVar30 = 0x6e656874;
            goto LAB_01354aec;
          }
          goto LAB_01354968;
        case 5:
          iVar32 = thunk_FUN_016dd50a(puVar27,&DAT_004146ea,5);
          if ((iVar32 != 0) || (*local_68 != '\x05')) {
            iVar32 = thunk_FUN_016dd50a("allOf",puVar27,5);
            if ((iVar32 != 0) &&
               ((iVar32 = thunk_FUN_016dd50a("anyOf",puVar27,5), iVar32 != 0 &&
                (iVar32 = thunk_FUN_016dd50a("oneOf",puVar27,5), iVar32 != 0)))) {
              uVar12 = 5;
              pcVar16 = "$defs";
              goto LAB_01354bc4;
            }
            goto LAB_01354bd0;
          }
          goto LAB_013550a8;
        default:
          goto switchD_0135499c_caseD_6;
        case 8:
          uVar12 = 8;
          pcVar16 = &DAT_0056aa28;
          break;
        case 10:
          uVar12 = 10;
          pcVar16 = "properties";
          goto LAB_01354bc4;
        case 0xb:
          uVar12 = 0xb;
          pcVar16 = "definitions";
          goto LAB_01354bc4;
        case 0xd:
          iVar32 = thunk_FUN_016dd50a("contentSchema",puVar27,0xd);
          if (iVar32 == 0) goto LAB_01354968;
          uVar12 = 0xd;
          pcVar16 = "propertyNames";
          break;
        case 0xf:
          uVar12 = 0xf;
          pcVar16 = "additionalItems";
          break;
        case 0x10:
          iVar32 = thunk_FUN_016dd50a("unevaluatedItemsconversion error",puVar27,0x10);
          if (iVar32 == 0) goto LAB_01354968;
          uVar12 = 0x10;
          pcVar16 = "dependentSchemas";
          goto LAB_01354bc4;
        case 0x11:
          uVar12 = 0x11;
          pcVar16 = "patternProperties";
LAB_01354bc4:
          iVar32 = thunk_FUN_016dd50a(pcVar16,puVar27,uVar12);
          if (iVar32 == 0) {
LAB_01354bd0:
            if (piVar24 == piVar25) goto switchD_0135499c_caseD_6;
            piVar24 = piVar21 + 6;
            goto LAB_01354968;
          }
          goto switchD_0135499c_caseD_6;
        case 0x14:
          uVar12 = 0x14;
          pcVar16 = "additionalProperties";
          break;
        case 0x15:
          uVar12 = 0x15;
          pcVar16 = "unevaluatedProperties";
        }
        iVar32 = thunk_FUN_016dd50a(pcVar16,puVar27,uVar12);
        bVar36 = iVar32 == 0;
LAB_01354ba8:
        if (bVar36) goto LAB_01354968;
switchD_0135499c_caseD_6:
        do {
          uVar7 = *local_b4;
          bVar36 = (bool)hasExclusiveAccess(local_b4);
        } while (!bVar36);
        *local_b4 = uVar7 + 1;
        if ((int)uVar7 < 0) goto LAB_01355790;
        puVar14 = local_b4;
        puVar27 = local_b8;
        puVar18 = local_b0;
        puVar34 = local_b8;
        puVar4 = local_b4;
        puVar5 = local_b0;
        if (local_b0 != (uint *)0x0) {
          do {
            uVar7 = *local_b0;
            bVar36 = (bool)hasExclusiveAccess(local_b0);
          } while (!bVar36);
          *local_b0 = uVar7 + 1;
          goto LAB_01355254;
        }
        goto LAB_01355180;
      }
      break;
    default:
      if (local_94 != (int *)0x0) {
        piVar25 = local_98 + (int)local_94 * 3;
        piVar21 = local_98;
        do {
          piVar24 = piVar21 + 3;
          if (*piVar21 == -0x7fffffff) goto LAB_01354370;
          if (0x13 < piVar21[2] - 2U) goto switchD_013543a4_caseD_6;
          piVar31 = (int *)piVar21[1];
          switch(piVar21[2]) {
          case 2:
            if ((short)*piVar31 != 0x6669) goto switchD_013543a4_caseD_6;
            goto LAB_01354370;
          case 3:
            iVar32 = thunk_FUN_016dd50a("not",piVar31,3);
            if (iVar32 == 0) goto LAB_01354370;
            goto switchD_013543a4_caseD_6;
          case 4:
            if ((*piVar31 == 0x65736c65) || (*piVar31 == 0x6e656874)) goto LAB_01354370;
            goto switchD_013543a4_caseD_6;
          case 5:
            iVar32 = thunk_FUN_016dd50a(&DAT_004146ea,piVar31,5);
            if (iVar32 == 0) goto LAB_01354370;
            iVar32 = thunk_FUN_016dd50a("allOf",piVar31,5);
            if (((iVar32 == 0) || (iVar32 = thunk_FUN_016dd50a("anyOf",piVar31,5), iVar32 == 0)) ||
               (iVar32 = thunk_FUN_016dd50a("oneOf",piVar31,5), iVar32 == 0)) goto LAB_013545e4;
            uVar12 = 5;
            pcVar16 = "$defs";
            break;
          default:
            goto switchD_013543a4_caseD_6;
          case 8:
            iVar32 = thunk_FUN_016dd50a(&DAT_0056aa28,piVar31,8);
            goto joined_r0x013544b8;
          case 10:
            uVar12 = 10;
            pcVar16 = "properties";
            break;
          case 0xb:
            iVar32 = thunk_FUN_016dd50a("prefixItems",piVar31,0xb);
            if (iVar32 != 0) {
              uVar12 = 0xb;
              pcVar16 = "definitions";
              break;
            }
            goto LAB_013545e4;
          case 0xd:
            iVar32 = thunk_FUN_016dd50a("contentSchema",piVar31,0xd);
            if (iVar32 == 0) goto LAB_01354370;
            iVar32 = thunk_FUN_016dd50a("propertyNames",piVar31,0xd);
            goto joined_r0x013544b8;
          case 0x10:
            iVar32 = thunk_FUN_016dd50a("unevaluatedItemsconversion error",piVar31,0x10);
            if (iVar32 == 0) goto LAB_01354370;
            uVar12 = 0x10;
            pcVar16 = "dependentSchemas";
            break;
          case 0x11:
            uVar12 = 0x11;
            pcVar16 = "patternProperties";
            break;
          case 0x14:
            iVar32 = thunk_FUN_016dd50a("additionalProperties",piVar31,0x14);
            goto joined_r0x013544b8;
          case 0x15:
            iVar32 = thunk_FUN_016dd50a("unevaluatedProperties",piVar31,0x15);
joined_r0x013544b8:
            if (iVar32 != 0) goto switchD_013543a4_caseD_6;
            goto LAB_01354370;
          }
          iVar32 = thunk_FUN_016dd50a(pcVar16,piVar31,uVar12);
          if (iVar32 != 0) {
switchD_013543a4_caseD_6:
            do {
              uVar7 = *local_b4;
              bVar36 = (bool)hasExclusiveAccess(local_b4);
            } while (!bVar36);
            *local_b4 = uVar7 + 1;
            if ((int)uVar7 < 0) goto LAB_01355790;
            puVar14 = local_b4;
            puVar27 = local_b8;
            puVar18 = local_b0;
            puVar34 = local_b8;
            puVar4 = local_b4;
            puVar5 = local_b0;
            if (local_b0 != (uint *)0x0) {
              do {
                uVar7 = *local_b0;
                bVar36 = (bool)hasExclusiveAccess(local_b0);
              } while (!bVar36);
              *local_b0 = uVar7 + 1;
              goto LAB_01355254;
            }
            goto LAB_01355180;
          }
LAB_013545e4:
          if (piVar24 == piVar25) goto switchD_013543a4_caseD_6;
          piVar24 = piVar21 + 6;
LAB_01354370:
          piVar21 = piVar24;
        } while (piVar24 != piVar25);
      }
    }
LAB_013550a8:
    FUN_013537e8(&local_60,&local_b8,&local_68);
    puVar18 = local_54;
    puVar14 = local_58;
    puVar27 = local_5c;
    if (local_60 != 0x8000000a) {
      param_1[4] = local_50;
      param_1[5] = local_4c;
      param_1[6] = local_48;
      param_1[7] = local_44;
      param_1[8] = local_40;
      param_1[9] = local_3c;
      param_1[10] = uStack_38;
      param_1[0xb] = uStack_34;
      param_1[0xc] = uStack_30;
      param_1[0xd] = uStack_2c;
      *param_1 = local_60;
      param_1[1] = (uint)local_5c;
      param_1[2] = (uint)local_58;
      param_1[3] = (uint)local_54;
      goto LAB_013556ac;
    }
    puVar34 = local_5c;
    puVar4 = local_58;
    puVar5 = local_54;
    if (local_58 != local_b4) {
      if (local_58[4] == local_b4[4]) {
        iVar32 = thunk_FUN_016dd50a(local_58[3],local_b4[3]);
        puVar34 = local_5c;
        puVar4 = local_58;
        puVar5 = local_54;
        if (iVar32 == 0) goto LAB_01355180;
      }
      if (piVar20 != (int *)0x0) {
        piVar21 = local_c0 + 1;
        do {
          if ((-0x7fffffff < piVar21[-1]) && (piVar21[-1] != 0)) {
            thunk_FUN_016d3fb4(*piVar21);
          }
          piVar21 = piVar21 + 3;
          piVar20 = (int *)((int)piVar20 + -1);
        } while (piVar20 != (int *)0x0);
      }
      if (local_9c != (int *)0x0) {
        thunk_FUN_016d3fb4(local_c0);
      }
      piVar20 = (int *)0x0;
      local_94 = (int *)0x0;
      local_c0 = (int *)&DAT_00000004;
      local_98 = (int *)&DAT_00000004;
      local_9c = (int *)0x0;
      puVar34 = local_5c;
      puVar4 = local_58;
      puVar5 = local_54;
    }
LAB_01355180:
    local_54 = puVar5;
    local_58 = puVar4;
    local_5c = puVar34;
    FUN_01167ec8(&local_b8);
    local_b8 = puVar27;
    local_b4 = puVar14;
    local_b0 = puVar18;
  } while (local_6c._1_1_ == '\0');
  uVar26 = *(undefined1 *)(iVar9 + -4);
  param_1[2] = (uint)local_b8;
  param_1[3] = (uint)local_b4;
  param_1[4] = (uint)local_b0;
  *param_1 = 0x8000000a;
  param_1[1] = (uint)pcVar29;
  *(undefined1 *)(param_1 + 5) = uVar26;
  if (((uint)local_d4 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(puVar23);
  }
  if (piVar20 != (int *)0x0) {
    local_c0 = local_c0 + 1;
    do {
      if ((-0x7fffffff < local_c0[-1]) && (local_c0[-1] != 0)) {
        thunk_FUN_016d3fb4(*local_c0);
      }
      local_c0 = local_c0 + 3;
      piVar20 = (int *)((int)piVar20 + -1);
    } while (piVar20 != (int *)0x0);
  }
  if (local_9c == (int *)0x0) {
    return;
  }
  thunk_FUN_016d3fb4(local_98);
  return;
LAB_01355278:
  uVar26 = 1;
LAB_01355280:
  puVar14 = (uint *)0x0;
  if (-1 < (int)puVar33) {
LAB_01355600:
    uVar30 = thunk_FUN_016d4a50(puVar33);
    if (uVar30 != 0) {
      FUN_016dd1aa(uVar30,pcVar8,puVar33);
      uVar12 = 0;
      if ((int)uVar7 < 0) {
LAB_01355638:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar12,uVar7);
      }
      if (uVar7 == 0) {
        uVar19 = 1;
        uVar35 = 0;
      }
      else {
        uVar19 = thunk_FUN_016d4a50(uVar7);
        uVar35 = uVar7;
        if (uVar19 == 0) {
          uVar12 = 1;
          goto LAB_01355638;
        }
      }
      FUN_016dd1aa(uVar19,pcVar16);
      *param_1 = (uint)&DAT_80000004;
      param_1[1] = (uint)puVar33;
      *(undefined1 *)(param_1 + 7) = uVar26;
      param_1[2] = uVar30;
      param_1[3] = (uint)puVar33;
      param_1[4] = uVar35;
      param_1[5] = uVar19;
      param_1[6] = uVar7;
LAB_013556ac:
      if (((uint)local_d4 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(puVar23);
      }
LAB_013556c0:
      piVar20 = local_98;
      if (local_94 != (int *)0x0) {
        piVar25 = local_98 + 1;
        piVar21 = local_94;
        do {
          if ((-0x7fffffff < piVar25[-1]) && (piVar25[-1] != 0)) {
            thunk_FUN_016d3fb4(*piVar25);
          }
          piVar25 = piVar25 + 3;
          piVar21 = (int *)((int)piVar21 + -1);
        } while (piVar21 != (int *)0x0);
      }
      if (local_9c != (int *)0x0) {
        thunk_FUN_016d3fb4(piVar20);
      }
      FUN_01167ec8(&local_b8);
      return;
    }
    puVar14 = (uint *)&DAT_00000001;
  }
LAB_0135528c:
                    /* WARNING: Subroutine does not return */
  FUN_00600af4(puVar14,puVar27);
LAB_01353ee8:
  do {
    iVar32 = *local_a0;
    bVar36 = (bool)hasExclusiveAccess(local_a0);
  } while (!bVar36);
  *local_a0 = iVar32 + 1;
  if (-1 < iVar32) {
    ppiVar28 = &local_9c;
    local_9c = local_a0;
    do {
      piVar21 = *ppiVar28;
      ppiVar28 = (int **)(piVar21 + 3);
      piVar20 = *ppiVar28;
      FUN_0134a380(&local_60,local_a8[0],piVar21[2] + 8,puVar23[1],puVar23[2]);
      if (local_60 == 0x8000000a) {
        if (*local_5c != 0) {
          puVar33 = local_5c + 3;
        }
      }
      else {
        if (local_60 != 0x80000005) {
          *param_1 = local_60;
          param_1[1] = (uint)local_5c;
          param_1[2] = (uint)local_58;
          param_1[3] = (uint)local_54;
          param_1[4] = local_50;
          param_1[5] = local_4c;
          param_1[6] = local_48;
          param_1[7] = local_44;
          param_1[8] = local_40;
          param_1[9] = local_3c;
          param_1[10] = uStack_38;
          param_1[0xb] = uStack_34;
          param_1[0xc] = uStack_30;
          param_1[0xd] = uStack_2c;
          FUN_01351c48(&local_9c);
          if (local_9c != (int *)0x0) {
            DataMemoryBarrier(0xb);
            do {
              iVar32 = *local_9c;
              bVar36 = (bool)hasExclusiveAccess(local_9c);
            } while (!bVar36);
            *local_9c = iVar32 + -1;
            if (iVar32 == 1) {
              DataMemoryBarrier(0xb);
              FUN_01353090(&local_9c);
            }
          }
          goto LAB_013553b8;
        }
        if (local_5c != (uint *)0x0) {
          thunk_FUN_016d3fb4(local_58);
        }
      }
    } while (piVar20 != (int *)0x0);
LAB_013552e0:
    FUN_01351c48(&local_9c);
    if (local_9c != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar32 = *local_9c;
        bVar36 = (bool)hasExclusiveAccess(local_9c);
      } while (!bVar36);
      *local_9c = iVar32 + -1;
      if (iVar32 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01353090(&local_9c);
      }
    }
    uVar7 = *puVar33;
    FUN_013537e8(&local_60,local_a8,puVar33);
    local_90 = local_5c;
    local_8c = local_58;
    local_88 = local_54;
    if (local_60 == 0x8000000a) {
      param_1[1] = uVar7;
      uVar7 = puVar33[1];
      *param_1 = 0x8000000a;
      param_1[2] = (uint)local_5c;
      param_1[3] = (uint)local_58;
      param_1[4] = (uint)local_54;
      *(char *)(param_1 + 5) = (char)uVar7;
      FUN_01353184(local_a8);
      return;
    }
    param_1[4] = local_50;
    param_1[5] = local_4c;
    param_1[6] = local_48;
    param_1[7] = local_44;
    param_1[8] = local_40;
    param_1[9] = local_3c;
    param_1[10] = uStack_38;
    param_1[0xb] = uStack_34;
    param_1[0xc] = uStack_30;
    param_1[0xd] = uStack_2c;
    *param_1 = local_60;
    param_1[1] = (uint)local_5c;
    param_1[2] = (uint)local_58;
    param_1[3] = (uint)local_54;
LAB_013553b8:
    FUN_01353184(local_a8);
    return;
  }
LAB_01355790:
                    /* WARNING: Does not return */
  pcVar2 = (code *)software_udf(0xfdee,0x1355790);
  (*pcVar2)();
}

