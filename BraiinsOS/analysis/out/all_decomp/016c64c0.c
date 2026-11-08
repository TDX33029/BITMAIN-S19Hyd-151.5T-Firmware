// FUN_016c64c0 @ 016c64c0 size=2800 calls_out=4 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016c64c0(uint *param_1,int *param_2,uint *param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  undefined1 uVar8;
  byte **ppbVar9;
  byte **ppbVar10;
  byte **ppbVar11;
  byte **ppbVar12;
  uint *puVar13;
  uint uVar14;
  byte **ppbVar15;
  byte **ppbVar16;
  byte **ppbVar17;
  byte **ppbVar18;
  uint uVar19;
  byte **ppbVar20;
  uint uVar21;
  uint uVar22;
  byte **ppbVar23;
  byte ***pppbVar24;
  byte **ppbVar25;
  undefined1 *puVar26;
  byte **ppbVar27;
  uint3 *puVar28;
  byte **local_16c;
  uint local_168;
  byte **local_150;
  byte **local_140;
  uint local_13c;
  uint local_128;
  byte **local_124;
  undefined4 local_118;
  int local_114;
  uint local_110;
  int local_f4;
  uint local_f0;
  uint local_ec;
  int local_e8;
  byte **local_e4;
  byte **local_e0;
  uint local_dc;
  byte **local_d8;
  byte local_d4;
  uint3 local_d3;
  byte ***local_d0;
  byte **local_cc;
  undefined1 *local_c8;
  byte **local_c4;
  undefined4 local_a8;
  byte *local_a4;
  byte *local_84;
  uint local_80;
  uint local_7c;
  undefined1 *local_78;
  undefined1 local_74;
  byte **local_54;
  byte **local_50;
  byte **local_4c;
  undefined1 *local_48;
  byte **local_44;
  byte **local_40;
  uint local_3c;
  byte **local_38;
  byte local_34;
  uint3 local_33;
  byte ***local_30;
  byte **local_2c;
  
  uVar14 = param_2[1];
  uVar19 = param_2[2];
  if (uVar14 <= uVar19) goto switchD_016c6654_default;
  local_114 = *param_2;
  uVar22 = uVar19 + 1;
  param_2[2] = uVar22;
  bVar2 = *(byte *)(local_114 + uVar19);
  if (((~bVar2 & 0x1f) == 0) || (uVar14 <= uVar22)) goto switchD_016c6654_default;
  bVar3 = *(byte *)(local_114 + uVar22);
  local_110 = (uint)bVar3;
  uVar22 = uVar19 + 2;
  param_2[2] = uVar22;
  if ((char)bVar3 < '\0') {
    switch(local_110) {
    case 0x81:
      if (uVar14 <= uVar22) goto switchD_016c6654_default;
      bVar3 = *(byte *)(local_114 + uVar22);
      local_110 = (uint)bVar3;
      uVar22 = uVar19 + 3;
      param_2[2] = uVar22;
      if ((uint)(int)(char)bVar3 < 0x80000000) goto switchD_016c6654_default;
      goto LAB_016c6510;
    case 0x82:
      if (uVar14 <= uVar22) goto switchD_016c6654_default;
      uVar21 = uVar19 + 3;
      param_2[2] = uVar21;
      if (uVar14 <= uVar21) goto switchD_016c6654_default;
      cVar7 = *(char *)(local_114 + uVar22);
      uVar22 = uVar19 + 4;
      uVar8 = *(undefined1 *)(local_114 + uVar21);
      param_2[2] = uVar22;
      if (cVar7 == '\0') goto switchD_016c6654_default;
      local_110 = (uint)CONCAT11(cVar7,uVar8);
      break;
    case 0x83:
      if (uVar14 <= uVar22) goto switchD_016c6654_default;
      bVar3 = *(byte *)(local_114 + uVar22);
      uVar22 = uVar19 + 3;
      param_2[2] = uVar22;
      if (uVar14 <= uVar22) goto switchD_016c6654_default;
      uVar21 = uVar19 + 4;
      param_2[2] = uVar21;
      if (uVar14 <= uVar21) goto switchD_016c6654_default;
      bVar4 = *(byte *)(local_114 + uVar22);
      uVar22 = uVar19 + 5;
      bVar5 = *(byte *)(local_114 + uVar21);
      param_2[2] = uVar22;
      if (bVar3 == 0) goto switchD_016c6654_default;
      local_110 = (uint)bVar4 << 8 | (uint)bVar3 << 0x10 | (uint)bVar5;
      break;
    case 0x84:
      if (uVar14 <= uVar22) goto switchD_016c6654_default;
      bVar3 = *(byte *)(local_114 + uVar22);
      uVar22 = uVar19 + 3;
      param_2[2] = uVar22;
      if (uVar14 <= uVar22) goto switchD_016c6654_default;
      bVar4 = *(byte *)(local_114 + uVar22);
      uVar21 = uVar19 + 4;
      param_2[2] = uVar21;
      if (uVar14 <= uVar21) goto switchD_016c6654_default;
      uVar22 = uVar19 + 5;
      param_2[2] = uVar22;
      if (uVar14 <= uVar22) goto switchD_016c6654_default;
      bVar5 = *(byte *)(local_114 + uVar22);
      uVar22 = uVar19 + 6;
      bVar6 = *(byte *)(local_114 + uVar21);
      param_2[2] = uVar22;
      if (bVar3 == 0) goto switchD_016c6654_default;
      local_110 = (uint)bVar4 << 0x10 | (uint)bVar3 << 0x18 | (uint)bVar6 << 8 | (uint)bVar5;
      break;
    default:
      goto switchD_016c6654_default;
    }
    if (0xfffe < local_110) goto switchD_016c6654_default;
  }
LAB_016c6510:
  if (((CARRY4(uVar22,local_110)) || (uVar14 < uVar22 + local_110)) ||
     (param_2[2] = uVar22 + local_110, bVar2 != 0x30)) {
switchD_016c6654_default:
    local_118 = 0x80000000;
    uVar14 = param_3[1];
    uVar19 = param_3[2];
    uVar22 = param_3[3];
    param_1[2] = *param_3;
    param_1[3] = uVar14;
    param_1[4] = uVar19;
    param_1[5] = uVar22;
    uVar14 = param_3[5];
    uVar19 = param_3[6];
    uVar22 = param_3[7];
    param_1[6] = param_3[4];
    param_1[7] = uVar14;
    param_1[8] = uVar19;
    param_1[9] = uVar22;
    *param_1 = 2;
    param_1[1] = 0;
    FUN_016c3a1c(&local_118);
    return;
  }
  local_114 = local_114 + uVar22;
  local_118 = 0x8000002d;
  local_ec = 0;
  local_f4 = local_114;
  local_f0 = local_110;
  FUN_016c607c(&local_e8,&local_f4,2);
  if (local_e8 == -0x7fffffd3) {
    FUN_016d0414(&local_48,&local_f4);
    uVar14 = local_3c;
    ppbVar11 = local_40;
    if (local_48 != (undefined1 *)0x8000002d) {
      ppbVar20 = (byte **)(uint)local_33;
      ppbVar17 = local_38;
      puVar26 = local_48;
      local_e0 = local_2c;
      goto LAB_016c6838;
    }
    local_124 = local_e4;
    ppbVar25 = (byte **)&DAT_0000000b;
    if (local_ec == local_f0) {
      local_128 = 0;
LAB_016c65d8:
      if (local_ec == local_f0) {
        *(short *)((int)param_1 + 0x1d) = (short)(uVar14 >> 8);
        *(char *)((int)param_1 + 0x1f) = (char)(uVar14 >> 0x18);
        param_1[9] = 0;
        *param_1 = local_128;
        param_1[1] = 0;
        param_1[2] = (uint)local_140;
        param_1[8] = (uint)ppbVar25;
        param_1[4] = (uint)local_e4;
        param_1[5] = (uint)local_e0;
        *(char *)(param_1 + 7) = (char)uVar14;
        param_1[6] = (uint)ppbVar11;
        param_1[3] = local_13c;
        FUN_016c3a1c();
        return;
      }
      uVar14 = param_3[1];
      uVar19 = param_3[2];
      uVar22 = param_3[3];
      param_1[2] = *param_3;
      param_1[3] = uVar14;
      param_1[4] = uVar19;
      param_1[5] = uVar22;
      uVar14 = param_3[5];
      uVar19 = param_3[6];
      uVar22 = param_3[7];
      param_1[6] = param_3[4];
      param_1[7] = uVar14;
      param_1[8] = uVar19;
      param_1[9] = uVar22;
      *param_1 = 2;
      param_1[1] = 0;
      return;
    }
    FUN_016c607c(&local_48,&local_f4,0x30);
    ppbVar23 = local_40;
    ppbVar9 = local_44;
    if (local_48 == (undefined1 *)0x8000002d) {
      if (local_40 == (byte **)0x0) {
        ppbVar25 = (byte **)&DAT_0000000b;
        local_128 = 0;
      }
      else {
        puVar28 = (uint3 *)((uint)&local_48 | 5);
        ppbVar25 = (byte **)&DAT_0000000b;
        ppbVar15 = (byte **)0x0;
        local_13c = 0;
        local_128 = 0;
        do {
          local_c8 = &DAT_8000001d;
          local_c4 = (byte **)CONCAT31(local_c4._1_3_,0x17);
          ppbVar20 = local_c4;
          ppbVar17 = ppbVar15;
          if (((ppbVar23 <= ppbVar15) ||
              (pbVar1 = (byte *)((int)ppbVar9 + (int)ppbVar15), (~*pbVar1 & 0x1f) == 0)) ||
             (ppbVar23 <= (byte **)((int)ppbVar15 + 1))) {
LAB_016c6d48:
            local_a8 = 0x80000000;
            FUN_016c3a1c(&local_a8);
            local_3c = 0;
            local_40 = ppbVar23;
            local_30 = &local_40;
            puVar26 = &DAT_8000001d;
            local_44 = ppbVar20;
            local_34 = 0x1d;
            goto LAB_016c6838;
          }
          bVar2 = *(byte *)((int)ppbVar9 + (int)ppbVar15 + 1);
          ppbVar12 = (byte **)((int)ppbVar15 + 2);
          uVar19 = (uint)bVar2;
          if ((char)bVar2 < '\0') {
            if (uVar19 - 0x81 < 4) {
              puVar13 = &switchD_016c6a7c::switchdataD_016c6a80;
              ppbVar18 = (byte **)(&switchD_016c6a7c::switchdataD_016c6a80)[uVar19 - 0x81];
              switch(uVar19) {
              case 0x81:
                if ((ppbVar12 < ppbVar23) &&
                   (0x7fffffff < (uint)(int)(char)*(byte *)((int)ppbVar9 + (int)ppbVar12))) {
                  uVar19 = (uint)*(byte *)((int)ppbVar9 + (int)ppbVar12);
                  ppbVar12 = (byte **)((int)ppbVar15 + 3);
                  goto LAB_016c6944;
                }
                break;
              case 0x82:
                if (ppbVar12 < ppbVar23) {
                  ppbVar18 = (byte **)((int)ppbVar15 + 3);
                }
                if ((ppbVar12 < ppbVar23 && ppbVar18 < ppbVar23) &&
                   (*(byte *)((int)ppbVar9 + (int)ppbVar12) != 0)) {
                  uVar19 = (uint)CONCAT11(*(byte *)((int)ppbVar9 + (int)ppbVar12),
                                          *(byte *)((int)ppbVar9 + (int)ppbVar18));
                  ppbVar12 = ppbVar15 + 1;
LAB_016c6b74:
                  ppbVar17 = ppbVar15;
                  if (uVar19 < 0xffff) goto LAB_016c6944;
                }
                break;
              case 0x83:
                if (ppbVar12 < ppbVar23) {
                  ppbVar18 = (byte **)((int)ppbVar15 + 3);
                  if (ppbVar18 < ppbVar23) {
                    puVar13 = (uint *)(ppbVar15 + 1);
                  }
                  if ((ppbVar18 < ppbVar23 && puVar13 < ppbVar23) &&
                     (*(byte *)((int)ppbVar9 + (int)ppbVar12) != 0)) {
                    uVar19 = (uint)*(byte *)((int)ppbVar9 + (int)ppbVar18) << 8 |
                             (uint)*(byte *)((int)ppbVar9 + (int)ppbVar12) << 0x10 |
                             (uint)*(byte *)((int)ppbVar9 + (int)puVar13);
                    ppbVar12 = (byte **)((int)ppbVar15 + 5);
                    goto LAB_016c6b74;
                  }
                }
                break;
              case 0x84:
                if (ppbVar12 < ppbVar23) {
                  ppbVar18 = (byte **)((int)ppbVar15 + 3);
                }
                if (ppbVar12 < ppbVar23 && ppbVar18 < ppbVar23) {
                  ppbVar27 = ppbVar15 + 1;
                  if (ppbVar27 < ppbVar23) {
                    ppbVar17 = (byte **)((int)ppbVar15 + 5);
                  }
                  if ((ppbVar27 < ppbVar23 && ppbVar17 < ppbVar23) &&
                     (*(byte *)((int)ppbVar9 + (int)ppbVar12) != 0)) {
                    uVar19 = (uint)*(byte *)((int)ppbVar9 + (int)ppbVar18) << 0x10 |
                             (uint)*(byte *)((int)ppbVar9 + (int)ppbVar12) << 0x18 |
                             (uint)*(byte *)((int)ppbVar9 + (int)ppbVar27) << 8 |
                             (uint)*(byte *)((int)ppbVar9 + (int)ppbVar17);
                    ppbVar12 = (byte **)((int)ppbVar15 + 6);
                    ppbVar15 = (byte **)(uint)*(byte *)((int)ppbVar9 + (int)ppbVar17);
                    goto LAB_016c6b74;
                  }
                }
              }
            }
            goto LAB_016c6d48;
          }
LAB_016c6944:
          ppbVar15 = (byte **)((int)ppbVar12 + uVar19);
          if (((CARRY4((uint)ppbVar12,uVar19)) || (ppbVar23 < ppbVar15)) || (*pbVar1 != 0x30))
          goto LAB_016c6d48;
          ppbVar20 = &local_84;
          local_a4 = (byte *)((int)ppbVar9 + (int)ppbVar12);
          local_7c = 0;
          local_84 = local_a4;
          local_80 = uVar19;
          FUN_016c607c(&local_48,ppbVar20,6);
          ppbVar12 = local_40;
          ppbVar17 = local_44;
          local_150 = local_44;
          if (local_48 != (undefined1 *)0x8000002d) {
            ppbVar20 = (byte **)(uint)local_33;
            local_168 = local_3c;
            ppbVar18 = (byte **)((uint)local_44 >> 8);
            local_124 = local_38;
            local_128 = (uint)local_34;
            ppbVar23 = local_40;
            pppbVar24 = local_30;
            puVar26 = local_48;
            ppbVar27 = local_2c;
LAB_016c6f7c:
            FUN_016c3a1c(&local_c8);
            local_3c = local_168;
            ppbVar17 = local_124;
            local_40 = ppbVar23;
            local_30 = pppbVar24;
            local_e0 = ppbVar27;
            local_44 = (byte **)((uint)local_150 & 0xff | (int)ppbVar18 << 8);
            local_34 = (byte)local_128;
            goto LAB_016c6838;
          }
          FUN_016c624c(&local_48,ppbVar20);
          ppbVar10 = local_44;
          ppbVar16 = (byte **)((uint)local_44 & 0xff);
          if (local_48 != (undefined1 *)0x8000002d) {
            ppbVar20 = (byte **)(uint)puVar28[4];
            ppbVar27 = *(byte ***)((int)puVar28 + 0x17);
            local_168 = local_3c;
            local_124 = local_38;
            ppbVar18 = (byte **)(uint)*puVar28;
            local_128 = (uint)local_34;
            ppbVar23 = local_40;
            pppbVar24 = *(byte ****)((int)puVar28 + 0x13);
            puVar26 = local_48;
            local_150 = ppbVar16;
            goto LAB_016c6f7c;
          }
          FUN_016c607c(&local_48,ppbVar20,4);
          if (local_48 != (undefined1 *)0x8000002d) {
            ppbVar18 = (byte **)((uint)local_44 >> 8);
            local_168 = local_3c;
            local_124 = local_38;
            ppbVar20 = (byte **)(uint)local_33;
            local_128 = (uint)local_34;
            local_150 = local_44;
            ppbVar23 = local_40;
            pppbVar24 = local_30;
            puVar26 = local_48;
            ppbVar27 = local_2c;
            goto LAB_016c6f7c;
          }
          ppbVar18 = ppbVar16;
          pppbVar24 = &local_40;
          ppbVar27 = local_e0;
          if ((ppbVar12 == (byte **)0x3) && (*(short *)ppbVar17 == 0x1d55)) {
            bVar2 = *(byte *)((int)ppbVar17 + 2);
            if (bVar2 == 0x15) {
              if (ppbVar25 == (byte **)&DAT_0000000b) {
                local_74 = 0xd;
                local_54 = local_44;
                local_50 = local_40;
                local_4c = (byte **)0x0;
                local_78 = &DAT_8000001d;
                FUN_016c607c(&local_48,&local_54,10);
                local_150 = local_44;
                if (local_48 == (undefined1 *)0x8000002d) {
                  local_48 = (undefined1 *)0x80000000;
                  if (local_40 == (byte **)&DAT_00000001) {
                    ppbVar20 = (byte **)(uint)*(byte *)local_44;
                    FUN_016c3a1c(&local_48);
                    if ((ppbVar20 < &DAT_00000007) || (ppbVar20 + -2 < (byte **)0x3)) {
                      if (local_4c != local_50) {
                        local_150 = (byte **)&DAT_0000000d;
                        local_168 = 0;
                        puVar26 = &DAT_8000001d;
                        goto LAB_016c6f7c;
                      }
                      FUN_016c3a1c(&local_78);
                      local_16c = (byte **)((uint)local_16c & 0xffffff00 | (uint)ppbVar20);
                      ppbVar25 = ppbVar20;
                      goto LAB_016c6a20;
                    }
                    puVar26 = (undefined1 *)0x80000027;
                    local_150 = local_16c;
                  }
                  else {
                    if (local_40 != (byte **)0x0) {
                      local_150 = (byte **)0x0;
                      local_168 = 0;
                      puVar26 = (undefined1 *)0x80000000;
                      goto LAB_016c6f6c;
                    }
                    FUN_016c3a1c(&local_48);
                    puVar26 = (undefined1 *)0x80000000;
                    local_150 = (byte **)&DAT_0000000b;
                  }
                  local_168 = 0;
                }
                else {
                  local_168 = local_3c;
                  local_124 = local_38;
                  ppbVar20 = (byte **)(uint)local_33;
                  local_128 = (uint)local_34;
                  ppbVar23 = local_40;
                  pppbVar24 = local_30;
                  puVar26 = local_48;
                  ppbVar27 = local_2c;
                }
LAB_016c6f6c:
                FUN_016c3a1c(&local_78);
                goto LAB_016c6f74;
              }
LAB_016c6e80:
              puVar26 = (undefined1 *)0x80000009;
            }
            else {
              if (bVar2 == 0x18) {
                if (local_128 != 0) goto LAB_016c6e80;
                local_78 = (undefined1 *)0x80000000;
                local_54 = local_44;
                local_50 = local_40;
                local_4c = (byte **)0x0;
                FUN_016d0414(&local_48,&local_54);
                puVar26 = local_48;
                if (local_48 == (undefined1 *)0x8000002d) {
                  if (local_4c == local_50) {
                    local_140 = local_40;
                    local_13c = local_3c;
                    FUN_016c3a1c(&local_78);
                    local_128 = 1;
                    goto LAB_016c6a20;
                  }
                  puVar26 = (undefined1 *)0x80000000;
                  local_168 = 0;
                }
                else {
                  local_168 = local_3c;
                  local_150 = local_44;
                  local_124 = local_38;
                  local_128 = (uint)local_34;
                  FUN_016c3a1c(&local_78);
                  ppbVar20 = (byte **)(uint)local_33;
                  ppbVar23 = local_40;
                  pppbVar24 = local_30;
                  ppbVar27 = local_2c;
                }
LAB_016c6f74:
                ppbVar18 = (byte **)((uint)local_150 >> 8);
                goto LAB_016c6f7c;
              }
              if (bVar2 == 0x1d) {
                puVar26 = (undefined1 *)0x80000025;
              }
              else {
                if (((uint)ppbVar10 & 1) == 0) goto LAB_016c6a20;
                puVar26 = (undefined1 *)0x80000021;
              }
            }
LAB_016c6e7c:
            local_168 = 0;
            goto LAB_016c6f7c;
          }
          if (((uint)ppbVar10 & 1) != 0) {
            puVar26 = (undefined1 *)0x80000021;
            goto LAB_016c6e7c;
          }
LAB_016c6a20:
          if (local_7c != local_80) {
            local_3c = 0;
            local_38 = ppbVar16;
            local_30 = &local_40;
            puVar26 = &DAT_8000001d;
            local_e4 = local_c4;
            local_34 = 0x1d;
            goto LAB_016c66c4;
          }
          FUN_016c3a1c(&local_c8);
        } while (ppbVar15 != ppbVar23);
      }
      goto LAB_016c65d8;
    }
    ppbVar20 = (byte **)(uint)local_33;
    puVar26 = local_48;
    local_e0 = local_2c;
    local_e4 = local_44;
  }
  else {
    FUN_016c3a1c();
    puVar26 = &DAT_8000000d;
    ppbVar20 = (byte **)(uint)local_d3;
    local_3c = local_dc;
    local_38 = local_d8;
    ppbVar23 = local_e0;
    local_30 = local_d0;
    local_e0 = local_cc;
    local_34 = local_d4;
  }
LAB_016c66c4:
  ppbVar17 = local_38;
  local_40 = ppbVar23;
  local_44 = local_e4;
LAB_016c6838:
  param_1[4] = (uint)local_40;
  param_1[5] = local_3c;
  *(byte *)(param_1 + 7) = local_34;
  param_1[6] = (uint)ppbVar17;
  *param_1 = 2;
  param_1[1] = 0;
  param_1[2] = (uint)puVar26;
  param_1[3] = (uint)local_44;
  *(short *)((int)param_1 + 0x1d) = (short)ppbVar20;
  param_1[8] = (uint)local_30;
  *(char *)((int)param_1 + 0x1f) = (char)((uint)ppbVar20 >> 0x10);
  param_1[9] = (uint)local_e0;
  FUN_016c3a1c(param_3);
  return;
}

