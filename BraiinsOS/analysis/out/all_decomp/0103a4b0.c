// FUN_0103a4b0 @ 0103a4b0 size=384 calls_out=3 calls_in=6
// strings: 

/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xffffff10 */
/* WARNING: Switch with 1 destination removed at 0x0103a620 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_0103a4b0(undefined2 *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte bVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  int local_174;
  short sStack_170;
  undefined2 uStack_16e;
  int iStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  short sStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined1 local_130;
  int local_128;
  int local_124;
  int local_120;
  uint local_11c;
  short sStack_118;
  undefined2 uStack_116;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
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
  short asStack_b0 [2];
  undefined4 uStack_ac;
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
  
  FUN_016dd606(&sStack_170,0,0x41);
  local_120 = 0;
  local_124 = 1;
  local_128 = 0;
  if (param_3 == 1) {
    if (*param_2 == 0x2e) {
      local_130 = 1;
      local_174 = 1;
      FUN_016dd1aa(param_1,&sStack_170,0x44);
      goto LAB_0103b058;
    }
  }
  else if (param_3 == 0) {
    FUN_016dd606(param_1,0,0x41);
    return;
  }
  iVar9 = 0;
  pbVar4 = param_2;
  do {
    pbVar7 = pbVar4 + 1;
    uVar8 = (uint)*pbVar4;
    if (0x7fffffff < (uint)(int)(char)*pbVar4) {
      if (uVar8 < 0xe0) {
        uVar8 = pbVar4[1] & 0x3f | (uVar8 & 0x1f) << 6;
        pbVar7 = pbVar4 + 2;
      }
      else {
        uVar6 = pbVar4[2] & 0x3f | (pbVar4[1] & 0x3f) << 6;
        if (uVar8 < 0xf0) {
          uVar8 = uVar6 | (uVar8 & 0x1f) << 0xc;
          pbVar7 = pbVar4 + 3;
        }
        else {
          pbVar7 = pbVar4 + 4;
          uVar8 = pbVar4[3] & 0x3f | uVar6 << 6 | (uVar8 & 7) << 0x12;
        }
      }
    }
                    /* WARNING (jumptable): Second-stage recovery error */
                    /* WARNING: This code block may not be properly labeled as switch case */
    local_11c = uVar8;
    if (uVar8 == 0x2e) {
      FUN_016dd1aa(&puStack_70,&sStack_170,0x44);
      local_174 = local_124;
      FUN_0104930c(&sStack_90,local_124,iVar9);
      if (sStack_90 == 2) {
        *(undefined4 *)(param_1 + 2) = uStack_8c;
        *param_1 = 2;
        FUN_01039868(&sStack_170);
        goto LAB_0103b058;
      }
      uStack_110 = uStack_88;
      uStack_10c = uStack_84;
      uStack_108 = uStack_80;
      uStack_104 = uStack_7c;
      uStack_100 = uStack_78;
      uStack_114 = uStack_8c;
      uStack_116 = uStack_8e;
      sStack_118 = sStack_90;
      FUN_01080e04(&sStack_f8,&puStack_70,&sStack_118);
      if (sStack_f8 == 2) {
        *param_1 = 2;
        *(uint *)(param_1 + 2) = CONCAT22(uStack_f2,uStack_f4);
        goto LAB_0103b058;
      }
      iVar9 = 0;
      iStack_16c = CONCAT22(uStack_f2,uStack_f4);
      uStack_168 = uStack_f0;
      uStack_164 = uStack_ec;
      uStack_160 = uStack_e8;
      uStack_15c = uStack_e4;
      uStack_158 = uStack_e0;
      uStack_154 = uStack_dc;
      uStack_150 = uStack_d8;
      sStack_14c = (short)uStack_d4;
      iStack_148 = iStack_d0;
      uStack_144 = uStack_cc;
      uStack_140 = uStack_c8;
      uStack_13c = uStack_c4;
      uStack_138 = uStack_c0;
      uStack_134 = uStack_bc;
      local_130 = (undefined1)_uStack_b8;
      uStack_16e = uStack_f6;
      sStack_170 = sStack_f8;
LAB_0103a598:
      local_120 = iVar9;
    }
    else if (uVar8 != 0x5c) {
      if (((uVar8 < 0x20) || (uVar8 == 0x20)) || (uVar8 - 0x7f < 0x21)) goto LAB_0103adcc;
      uVar6 = 1;
      if (0x7f < uVar8) {
        uVar6 = uVar8 >> 8;
        if (uVar6 < 0x20) {
          if (uVar6 == 0) {
            bVar1 = (&DAT_0041951b)[uVar8 & 0xff] & 1;
joined_r0x0103a994:
            if (bVar1 != 0) {
LAB_0103adcc:
              puStack_70 = &local_11c;
              uStack_6c = 0xaf34;
              uStack_6a = 0xfa;
              FUN_00600d2c(&sStack_90,&DAT_005768f9,&puStack_70);
              uStack_f0._2_2_ = (undefined2)uStack_88;
              uStack_ec._0_2_ = (undefined2)((uint)uStack_88 >> 0x10);
              uStack_f2 = (undefined2)uStack_8c;
              uStack_f0._0_2_ = (undefined2)((uint)uStack_8c >> 0x10);
              uStack_f6 = (undefined2)_sStack_90;
              uStack_f4 = (undefined2)((uint)_sStack_90 >> 0x10);
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
              if (local_128 != 0) {
                thunk_FUN_016d3fb4(local_124);
              }
              iVar9 = 0;
              if (sStack_170 != 0) {
                iVar9 = iStack_16c;
              }
              if (sStack_170 != 0 && iVar9 != 0) {
                thunk_FUN_016d3fb4(uStack_168);
              }
              iVar9 = 0;
              if (sStack_14c != 0) {
                iVar9 = iStack_148;
              }
              if (sStack_14c != 0 && iVar9 != 0) {
                thunk_FUN_016d3fb4(uStack_144);
                return;
              }
              return;
            }
          }
          else if ((uVar6 == 0x16) && (uVar8 == 0x1680)) goto LAB_0103adcc;
        }
        else {
          if (uVar6 == 0x20) {
            bVar1 = (&DAT_0041951b)[uVar8 & 0xff] & 2;
            goto joined_r0x0103a994;
          }
          if (uVar6 == 0x30 && uVar8 == 0x3000) goto LAB_0103adcc;
        }
        uVar6 = 2;
        if ((0x7ff < uVar8) && (uVar6 = 4, uVar8 < 0x10000)) {
          uVar6 = 3;
        }
      }
      iVar3 = iVar9;
      if ((uint)(local_128 - iVar9) < uVar6) {
        FUN_0104e980(&local_128,iVar9,uVar6,1,1);
        iVar3 = local_120;
      }
      pbVar4 = (byte *)(local_124 + iVar3);
      if (uVar8 < 0x80) {
        *pbVar4 = (byte)uVar8;
      }
      else {
        bVar1 = (byte)uVar8 & 0x3f | 0x80;
        bVar5 = (byte)(uVar8 >> 6);
        if (uVar8 < 0x800) {
          bVar5 = bVar5 | 0xc0;
          pbVar4[1] = bVar1;
        }
        else {
          bVar2 = bVar5 & 0x3f | 0x80;
          bVar5 = (byte)(uVar8 >> 0xc);
          if (uVar8 >> 0x10 != 0) {
            pbVar4[3] = bVar1;
            pbVar4[2] = bVar2;
            iVar9 = uVar6 + iVar9;
            pbVar4[1] = bVar5 & 0x3f | 0x80;
            *pbVar4 = (byte)(uVar8 >> 0x12) | 0xf0;
            goto LAB_0103a598;
          }
          pbVar4[2] = bVar1;
          pbVar4[1] = bVar2;
          bVar5 = bVar5 | 0xe0;
        }
        *pbVar4 = bVar5;
      }
      iVar9 = uVar6 + iVar9;
      goto LAB_0103a598;
    }
    pbVar4 = pbVar7;
  } while (pbVar7 != param_2 + param_3);
  if (iVar9 == 0) {
    local_130 = 1;
LAB_0103aff8:
    iVar9 = local_128;
    FUN_016dd1aa(param_1,&sStack_170,0x44);
    if (iVar9 == 0) {
      return;
    }
    thunk_FUN_016d3fb4(local_124);
    return;
  }
  FUN_016dd1aa(&puStack_70,&sStack_170,0x44);
  local_174 = local_124;
  FUN_0104930c(asStack_b0,local_124,iVar9);
  if (asStack_b0[0] == 2) {
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
    uStack_84 = uStack_a4;
    uStack_80 = uStack_a0;
    uStack_7c = uStack_9c;
    uStack_78 = uStack_98;
    uStack_8c = uStack_ac;
    FUN_01080e04(&sStack_f8,&puStack_70,&sStack_90);
    if (sStack_f8 != 2) {
      uStack_164 = uStack_ec;
      uStack_160 = uStack_e8;
      uStack_15c = uStack_e4;
      uStack_158 = uStack_e0;
      uStack_154 = uStack_dc;
      uStack_150 = uStack_d8;
      uStack_140 = uStack_c8;
      uStack_13c = uStack_c4;
      uStack_138 = uStack_c0;
      uStack_134 = uStack_bc;
      local_130 = uStack_b8;
      uStack_16e = uStack_f6;
      sStack_170 = sStack_f8;
      goto LAB_0103aff8;
    }
    *param_1 = 2;
    *(uint *)(param_1 + 2) = CONCAT22(uStack_f2,uStack_f4);
  }
LAB_0103b058:
  if (local_128 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(local_174);
  return;
}

