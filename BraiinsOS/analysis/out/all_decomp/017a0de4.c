// FUN_017a0de4 @ 017a0de4 size=2004 calls_out=7 calls_in=1
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_017a0de4(undefined4 param_1,uint param_2,int param_3,undefined4 param_4,int param_5,
                code *param_6,int param_7,undefined4 param_8)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  undefined4 local_214 [46];
  int local_15c;
  int local_158;
  uint local_154;
  undefined4 local_150;
  uint local_14c;
  undefined4 local_148;
  undefined4 local_144;
  int local_140;
  int local_13c;
  uint local_138;
  undefined1 *local_134;
  int local_130;
  code *local_12c;
  int local_128;
  int local_124;
  uint local_120;
  int local_11c;
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  int local_108;
  int local_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  int local_ec;
  int local_e8;
  uint local_e4;
  undefined1 auStack_e0 [4];
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  int local_cc;
  int local_c8;
  uint local_c4;
  int local_74;
  int local_5c;
  int local_2c;
  
  local_12c = param_6;
  local_2c = DAT_018ddaf8;
  local_134 = auStack_e0;
  local_140 = param_7;
  local_148 = param_4;
  local_144 = param_1;
  local_130 = param_3;
  FUN_016dd1aa(local_134,param_5,0xb0);
  if ((param_6 == (code *)0x0) == (param_7 == 0)) {
    local_13c = *(int *)(param_5 + 0x6c);
    local_14c = *(uint *)(param_5 + 4);
    local_120 = *(uint *)(param_5 + 0x10);
    local_128 = *(int *)(param_5 + 0x14);
    local_124 = *(int *)(param_5 + 0x18);
    local_150 = *(undefined4 *)(param_5 + 0x2c);
    local_138 = *(uint *)(param_5 + 0x38);
    local_15c = *(int *)(param_5 + 0x54);
    local_11c = *(int *)(param_5 + 0x84);
    uVar5 = *(uint *)(param_5 + 8);
    uVar8 = *(uint *)(param_5 + 0xc);
    uVar7 = *(uint *)(param_5 + 0x1c);
    if (local_13c == 0) {
      local_214[0] = 2;
      FUN_0179bc88(&local_118,local_134,0xffffffff,0xffffffff);
      local_154 = local_10c;
      uVar11 = local_100 - 3;
      local_158 = local_108;
      uVar10 = local_110;
      uVar4 = local_100;
    }
    else {
      local_214[0] = 2;
      FUN_01799ec4(&local_118,local_150,0,0,param_2);
      uVar11 = local_100 - 3;
      if (uVar11 < 3) {
        local_110 = local_110 + 2;
      }
      local_fc = local_118;
      local_f8 = local_114;
      local_f0 = local_10c;
      uVar10 = local_110;
      if (uVar8 != 0) {
        uVar10 = uVar8;
      }
      if (uVar5 != 0) {
        local_114 = uVar5;
      }
      if (local_120 != 0) {
        local_10c = local_120;
      }
      local_ec = local_108;
      local_e8 = local_104;
      local_e4 = local_100;
      if (local_14c != 0) {
        local_118 = local_14c;
      }
      if (local_128 != 0) {
        local_108 = local_128;
      }
      if (local_124 != 0) {
        local_104 = local_124;
      }
      uVar4 = local_100;
      local_158 = local_108;
      local_154 = local_10c;
      local_f4 = local_110;
      if (uVar7 != 0) {
        uVar11 = uVar7 - 3;
        uVar4 = uVar7;
      }
    }
    if (uVar11 < 3) {
      bVar12 = 0x17 < local_114;
      if (local_114 < 0x19) {
        bVar12 = uVar10 <= local_114;
      }
      if (bVar12) goto LAB_017a0f24;
      if (local_11c == 0) {
        uVar5 = (uint)(uVar4 - 3 < 3);
        if (local_118 < 0x12) {
          uVar5 = 0;
        }
        local_11c = 2 - uVar5;
      }
      local_124 = local_104;
      if (local_13c == 0) {
        local_128 = local_158;
        local_120 = local_154;
LAB_017a11c4:
        if (uVar4 != 1) {
          local_154 = local_120;
          uVar5 = uVar4 - 3;
          goto LAB_017a14bc;
        }
LAB_017a11cc:
        local_154 = local_120;
        uVar4 = 1;
        local_158 = local_128;
        iVar9 = 4 << (uVar10 & 0xff);
        local_13c = 0;
        uVar5 = local_118;
      }
      else {
        iVar2 = 1 << (uVar10 & 0xff);
        iVar9 = (iVar2 + (1 << (local_114 & 0xff))) * 4;
        uVar5 = local_118;
        if ((uVar4 - 3 < 3) && (local_11c == 1)) goto LAB_017a1544;
      }
    }
    else {
LAB_017a0f24:
      bVar12 = (int)local_138 < 1;
      if (bVar12) {
        uVar6 = 0xffffffff;
        uVar11 = 0xffffffff;
      }
      else {
        uVar11 = (int)local_138 >> 0x1f;
        uVar6 = local_138;
      }
      local_214[0] = 2;
      FUN_01799ec4(&local_fc,local_150,uVar6,uVar11,param_2);
      if (local_15c == 1) {
        uVar3 = 0x1b;
      }
      else {
        uVar3 = local_fc;
      }
      if (local_14c != 0) {
        uVar3 = local_14c;
      }
      uVar10 = uVar8;
      if (uVar8 == 0) {
        uVar10 = local_f4;
      }
      local_114 = uVar5;
      if (uVar5 == 0) {
        local_114 = local_f8;
      }
      if (local_120 == 0) {
        local_120 = local_f0;
      }
      if (local_128 == 0) {
        local_128 = local_ec;
      }
      if (local_124 == 0) {
        local_124 = local_e8;
      }
      uVar4 = uVar7;
      if (uVar7 == 0) {
        uVar4 = local_e4;
      }
      if (bVar12 && param_2 != 0) {
        if (param_2 < 0x20000001) {
          uVar6 = 0x201;
          uVar11 = 0;
          uVar5 = param_2 + 0x201;
LAB_017a0fdc:
          uVar5 = 0x20 - LZCOUNT(uVar5 - 1);
LAB_017a10d8:
          if (uVar5 <= uVar3) {
            uVar3 = uVar5;
          }
LAB_017a10e0:
          uVar5 = uVar3;
          if (param_2 != 0) goto LAB_017a10e8;
LAB_017a1400:
          uVar7 = uVar5 + 1;
          uVar3 = uVar5;
        }
        else {
          uVar11 = 0;
          uVar6 = 0x201;
LAB_017a10e8:
          uVar11 = uVar11 + CARRY4(uVar6,param_2);
          uVar8 = 1 << (uVar3 - 0x20 & 0xff) | 1U >> (0x20 - uVar3 & 0xff);
          uVar7 = 1 << (uVar3 & 0xff);
          uVar5 = uVar3;
          if (uVar11 < uVar8 || uVar8 - uVar11 < (uint)(uVar6 + param_2 <= uVar7))
          goto LAB_017a1400;
          uVar8 = uVar8 + CARRY4(uVar7,param_2);
          if (uVar8 == 0 && (0x3fffffff < uVar7 + param_2) <= uVar8) {
            iVar2 = LZCOUNT((uVar7 + param_2) - 1);
            uVar5 = 0x20 - iVar2;
            uVar7 = 0x21 - iVar2;
          }
          else {
            uVar7 = 0x1f;
            uVar5 = 0x1e;
          }
        }
        if (uVar7 <= uVar10) {
          uVar10 = uVar7;
        }
        if (uVar5 < local_114 - (5 < uVar4)) {
          local_114 = (5 < uVar4) + uVar5;
        }
      }
      else {
        if (param_2 < 0x20000001 && (uVar11 == 0 && (0x20000000 < uVar6) <= uVar11)) {
          uVar5 = param_2 + uVar6;
          if (0x3f < uVar5) goto LAB_017a0fdc;
          uVar5 = 6;
          goto LAB_017a10d8;
        }
        if (uVar11 != 0xffffffff || uVar6 != 0xffffffff) goto LAB_017a10e0;
      }
      local_118 = uVar3;
      if (uVar3 < 10) {
        local_118 = 10;
      }
      if (uVar4 - 1 < 2) {
        if (0x17 < uVar10) {
          uVar10 = 0x18;
        }
        if (0x17 < local_114) {
          local_114 = 0x18;
        }
        if (local_11c == 0) goto LAB_017a11a0;
        if (uVar4 == 1) goto LAB_017a11cc;
        local_154 = local_120;
        iVar2 = 1 << (uVar10 & 0xff);
        uVar4 = 2;
LAB_017a13e8:
        local_13c = 0;
        iVar9 = (iVar2 + (1 << (local_114 & 0xff))) * 4;
        uVar5 = local_118;
        local_158 = local_128;
      }
      else {
        uVar5 = uVar4 - 3;
        bVar13 = 1 < uVar5;
        bVar12 = uVar5 == 2;
        if (uVar5 < 3) {
          bVar13 = local_11c != 0;
          bVar12 = local_11c == 1;
        }
        if (!bVar13 || bVar12) {
          uVar5 = local_120;
          if (5 < local_120) {
            uVar5 = 6;
          }
          if (uVar5 < 4) {
            uVar5 = 4;
          }
          if (uVar5 + 0x18 <= uVar10) {
            uVar10 = uVar5 + 0x18;
          }
          if (local_11c == 0) goto LAB_017a11a0;
          local_154 = local_120;
          iVar2 = 1 << (uVar10 & 0xff);
        }
        else {
          if (local_11c == 0) {
LAB_017a11a0:
            uVar5 = (uint)(uVar4 - 3 < 3);
            if (uVar3 < 0x12) {
              uVar5 = 0;
            }
            local_11c = 2 - uVar5;
            goto LAB_017a11c4;
          }
          local_154 = local_120;
LAB_017a14bc:
          iVar2 = 1 << (uVar10 & 0xff);
          if ((2 < uVar5) || (local_11c != 1)) goto LAB_017a13e8;
        }
        iVar9 = 4 << (uVar10 & 0xff);
        local_13c = 0;
        local_158 = local_128;
LAB_017a1544:
        iVar9 = iVar9 + (iVar2 + 0x3fU & 0xffffffc0);
        local_11c = 1;
        uVar5 = local_118;
      }
    }
    local_138 = param_8;
    iVar9 = iVar9 + 0x35b0;
    if (local_130 != 1) {
      iVar9 = iVar9 + (param_2 + 3 & 0xfffffffc);
    }
    local_120 = local_114;
    if (local_12c == (code *)0x0) {
      iVar2 = thunk_FUN_016d4a50(iVar9);
    }
    else {
      iVar2 = (*local_12c)(param_8,iVar9);
    }
    if (iVar2 != 0) {
      uVar8 = iVar2 + iVar9;
      uVar7 = iVar2 + 0x1330;
      if (uVar8 < uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0,0x17a15b4);
        _DAT_00000010 = iVar2;
        (*pcVar1)();
      }
      *(uint *)(iVar2 + 0x24) = uVar8 & 0xffffffc0;
      *(uint *)(iVar2 + 0x28) = uVar8 & 0xffffffc0;
      local_d0 = local_154;
      local_cc = local_158;
      local_74 = local_13c;
      *(uint *)(iVar2 + 0x18) = uVar7;
      *(uint *)(iVar2 + 0x1c) = uVar7;
      *(uint *)(iVar2 + 0x20) = uVar7;
      *(uint *)(iVar2 + 0x14) = uVar8;
      *(int *)(iVar2 + 0x10) = iVar2;
      *(undefined1 *)(iVar2 + 0x2c) = 0;
      *(undefined4 *)(iVar2 + 0x30) = 0;
      *(undefined4 *)(iVar2 + 0x34) = 0;
      *(undefined4 *)(iVar2 + 0x38) = 0;
      *(code **)(iVar2 + 0x1314) = local_12c;
      *(int *)(iVar2 + 0x1318) = local_140;
      *(uint *)(iVar2 + 0x131c) = local_138;
      *(undefined4 *)(iVar2 + 0x1324) = 0;
      local_5c = local_11c;
      *(int *)(iVar2 + 0x1328) = local_11c;
      local_dc = uVar5;
      local_d8 = local_120;
      local_d4 = uVar10;
      local_c8 = local_124;
      local_c4 = uVar4;
      FUN_016dd1aa(local_214,local_134,0xb0);
      uVar5 = FUN_0179f970(iVar2,local_144,param_2,local_130,local_148);
      if (uVar5 < 0xffffff89) goto LAB_017a1330;
    }
    FUN_017a0cdc(iVar2);
  }
  iVar2 = 0;
LAB_017a1330:
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return iVar2;
}

