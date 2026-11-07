// FUN_0103b9f8 @ 0103b9f8 size=396 calls_out=3 calls_in=2
// strings: 

/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xffffff10 */
/* WARNING: Switch with 1 destination removed at 0x0103bb74 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_0103b9f8(undefined2 *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  int local_194;
  short sStack_190;
  undefined2 uStack_18e;
  int iStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  short sStack_16c;
  int iStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined1 local_150;
  int local_148;
  int local_144;
  int local_140;
  uint local_13c;
  short sStack_138;
  undefined2 uStack_136;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined1 auStack_11c [36];
  short sStack_f8;
  undefined2 uStack_f6;
  undefined2 uStack_f4;
  undefined2 uStack_f2;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 uStack_b8;
  short sStack_b0;
  undefined2 uStack_ae;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  short sStack_90;
  undefined2 uStack_8e;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  uint *puStack_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined2 uStack_66;
  undefined2 uStack_64;
  undefined2 uStack_62;
  short sStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  
  FUN_016dd606(&sStack_190,0,0x41);
  local_140 = 0;
  local_144 = 1;
  local_148 = 0;
  if (param_3 == 1) {
    if (*param_2 == 0x2e) {
      local_150 = 1;
      local_194 = 1;
      FUN_016dd1aa(param_1,&sStack_190,0x44);
      goto LAB_0103c5b0;
    }
  }
  else if (param_3 == 0) {
    FUN_016dd1aa(param_1,&sStack_190,0x44);
    return;
  }
  iVar9 = 0;
  pbVar5 = param_2;
  do {
    pbVar7 = pbVar5 + 1;
    uVar8 = (uint)*pbVar5;
    if (0x7fffffff < (uint)(int)(char)*pbVar5) {
      if (uVar8 < 0xe0) {
        uVar8 = pbVar5[1] & 0x3f | (uVar8 & 0x1f) << 6;
        pbVar7 = pbVar5 + 2;
      }
      else {
        uVar6 = pbVar5[2] & 0x3f | (pbVar5[1] & 0x3f) << 6;
        if (uVar8 < 0xf0) {
          uVar8 = uVar6 | (uVar8 & 0x1f) << 0xc;
          pbVar7 = pbVar5 + 3;
        }
        else {
          pbVar7 = pbVar5 + 4;
          uVar8 = pbVar5[3] & 0x3f | uVar6 << 6 | (uVar8 & 7) << 0x12;
        }
      }
    }
                    /* WARNING (jumptable): Second-stage recovery error */
                    /* WARNING: This code block may not be properly labeled as switch case */
    local_13c = uVar8;
    if (uVar8 == 0x2e) {
      FUN_016dd1aa(&puStack_70,&sStack_190,0x44);
      local_194 = local_144;
      FUN_01049f70(&sStack_b0,local_144,iVar9);
      if (sStack_b0 == 2) {
        *(undefined4 *)(param_1 + 2) = uStack_ac;
        *param_1 = 2;
        FUN_01039868(&sStack_190);
        goto LAB_0103c5b0;
      }
      uStack_130 = uStack_a8;
      uStack_12c = uStack_a4;
      uStack_128 = uStack_a0;
      uStack_124 = uStack_9c;
      uStack_120 = uStack_98;
      uStack_134 = uStack_ac;
      uStack_136 = uStack_ae;
      sStack_138 = sStack_b0;
      FUN_01080e04(&sStack_f8,&puStack_70,&sStack_138);
      if (sStack_f8 == 2) {
        *param_1 = 2;
        *(uint *)(param_1 + 2) = CONCAT22(uStack_f2,uStack_f4);
        goto LAB_0103c5b0;
      }
      iVar9 = 0;
      iStack_18c = CONCAT22(uStack_f2,uStack_f4);
      uStack_188 = uStack_f0;
      uStack_184 = uStack_ec;
      uStack_180 = uStack_e8;
      uStack_17c = uStack_e4;
      uStack_178 = uStack_e0;
      uStack_174 = uStack_dc;
      uStack_170 = uStack_d8;
      sStack_16c = (short)uStack_d4;
      iStack_168 = iStack_d0;
      uStack_164 = uStack_cc;
      uStack_160 = uStack_c8;
      uStack_15c = uStack_c4;
      uStack_158 = uStack_c0;
      uStack_154 = uStack_bc;
      local_150 = (undefined1)_uStack_b8;
      uStack_18e = uStack_f6;
      sStack_190 = sStack_f8;
LAB_0103baec:
      local_140 = iVar9;
    }
    else if (uVar8 != 0x5c) {
      if (((uVar8 < 0x20) || (uVar8 == 0x20)) || (uVar8 - 0x7f < 0x21)) goto LAB_0103c32c;
      uVar6 = 1;
      if (0x7f < uVar8) {
        uVar6 = uVar8 >> 8;
        if (uVar6 < 0x20) {
          if (uVar6 == 0) {
            bVar1 = (&DAT_0041951b)[uVar8 & 0xff] & 1;
joined_r0x0103bedc:
            if (bVar1 != 0) {
LAB_0103c32c:
              puStack_70 = &local_13c;
              uStack_6c = 0xaf34;
              uStack_6a = 0xfa;
              FUN_00600d2c(auStack_11c,&DAT_005768f9,&puStack_70);
              uStack_f0._2_2_ = auStack_11c._8_2_;
              uStack_ec._0_2_ = auStack_11c._10_2_;
              uStack_f2 = auStack_11c._4_2_;
              uStack_f0._0_2_ = auStack_11c._6_2_;
              uStack_f6 = auStack_11c._0_2_;
              uStack_f4 = auStack_11c._2_2_;
              uStack_6a = uStack_f4;
              uStack_68 = uStack_f2;
              puStack_70._0_2_ = 0x11;
              uStack_6c = uStack_f6;
              uStack_66 = (undefined2)uStack_f0;
              uStack_64 = uStack_f0._2_2_;
              uStack_62 = (undefined2)uStack_ec;
              iVar9 = thunk_FUN_016d4a50(0x44);
              if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600874(4,0x44);
              }
              FUN_016dd1aa(iVar9,&puStack_70,0x44);
              *param_1 = 2;
              *(int *)(param_1 + 2) = iVar9;
              if (local_148 != 0) {
                thunk_FUN_016d3fb4(local_144);
              }
              iVar9 = 0;
              if (sStack_190 != 0) {
                iVar9 = iStack_18c;
              }
              if (sStack_190 != 0 && iVar9 != 0) {
                thunk_FUN_016d3fb4(uStack_188);
              }
              iVar9 = 0;
              if (sStack_16c != 0) {
                iVar9 = iStack_168;
              }
              if (sStack_16c != 0 && iVar9 != 0) {
                thunk_FUN_016d3fb4(uStack_164);
                return;
              }
              return;
            }
          }
          else if ((uVar6 == 0x16) && (uVar8 == 0x1680)) goto LAB_0103c32c;
        }
        else {
          if (uVar6 == 0x20) {
            bVar1 = (&DAT_0041951b)[uVar8 & 0xff] & 2;
            goto joined_r0x0103bedc;
          }
          if (uVar6 == 0x30 && uVar8 == 0x3000) goto LAB_0103c32c;
        }
        uVar6 = 2;
        if ((0x7ff < uVar8) && (uVar6 = 4, uVar8 < 0x10000)) {
          uVar6 = 3;
        }
      }
      iVar4 = iVar9;
      if ((uint)(local_148 - iVar9) < uVar6) {
        FUN_0104e980(&local_148,iVar9,uVar6,1,1);
        iVar4 = local_140;
      }
      pbVar5 = (byte *)(local_144 + iVar4);
      if (uVar8 < 0x80) {
        *pbVar5 = (byte)uVar8;
      }
      else {
        bVar1 = (byte)uVar8 & 0x3f | 0x80;
        bVar2 = (byte)(uVar8 >> 6);
        if (0x7ff < uVar8) {
          bVar2 = bVar2 & 0x3f | 0x80;
          bVar3 = (byte)(uVar8 >> 0xc);
          if (uVar8 >> 0x10 == 0) {
            pbVar5[2] = bVar1;
            iVar9 = uVar6 + iVar9;
            pbVar5[1] = bVar2;
            *pbVar5 = bVar3 | 0xe0;
          }
          else {
            pbVar5[3] = bVar1;
            pbVar5[2] = bVar2;
            iVar9 = uVar6 + iVar9;
            pbVar5[1] = bVar3 & 0x3f | 0x80;
            *pbVar5 = (byte)(uVar8 >> 0x12) | 0xf0;
          }
          goto LAB_0103baec;
        }
        pbVar5[1] = bVar1;
        *pbVar5 = bVar2 | 0xc0;
      }
      iVar9 = uVar6 + iVar9;
      goto LAB_0103baec;
    }
    pbVar5 = pbVar7;
  } while (pbVar7 != param_2 + param_3);
  if (iVar9 == 0) {
    local_150 = 1;
LAB_0103c550:
    iVar9 = local_148;
    FUN_016dd1aa(param_1,&sStack_190,0x44);
    if (iVar9 == 0) {
      return;
    }
    thunk_FUN_016d3fb4(local_144);
    return;
  }
  FUN_016dd1aa(&puStack_70,&sStack_190,0x44);
  local_194 = local_144;
  FUN_01049f70(&sStack_b0,local_144,iVar9);
  if (sStack_b0 == 2) {
    *param_1 = 2;
    *(undefined4 *)(param_1 + 2) = uStack_ac;
    if ((short)puStack_70 != 0 && CONCAT22(uStack_6a,uStack_6c) != 0) {
      thunk_FUN_016d3fb4(CONCAT22(uStack_66,uStack_68));
    }
    iVar9 = 0;
    if (sStack_4c != 0) {
      iVar9 = iStack_48;
    }
    if (sStack_4c != 0 && iVar9 != 0) {
      thunk_FUN_016d3fb4(uStack_44);
    }
  }
  else {
    uStack_88 = uStack_a8;
    uStack_84 = uStack_a4;
    uStack_80 = uStack_a0;
    uStack_7c = uStack_9c;
    uStack_78 = uStack_98;
    uStack_8c = uStack_ac;
    uStack_8e = uStack_ae;
    sStack_90 = sStack_b0;
    FUN_01080e04(&sStack_f8,&puStack_70);
    if (sStack_f8 != 2) {
      uStack_184 = uStack_ec;
      uStack_180 = uStack_e8;
      uStack_17c = uStack_e4;
      uStack_178 = uStack_e0;
      uStack_174 = uStack_dc;
      uStack_170 = uStack_d8;
      uStack_160 = uStack_c8;
      uStack_15c = uStack_c4;
      uStack_158 = uStack_c0;
      uStack_154 = uStack_bc;
      local_150 = uStack_b8;
      uStack_18e = uStack_f6;
      sStack_190 = sStack_f8;
      goto LAB_0103c550;
    }
    *param_1 = 2;
    *(uint *)(param_1 + 2) = CONCAT22(uStack_f2,uStack_f4);
  }
LAB_0103c5b0:
  if (local_148 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(local_194);
  return;
}

