// FUN_00eadd34 @ 00eadd34 size=1224 calls_out=14 calls_in=1
// strings: malformed base64 request | malformed base64 request has unencoded trailers

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00eadd34(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 **ppuVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 *local_168;
  undefined1 *local_164;
  undefined1 *local_160;
  undefined1 *local_15c;
  undefined1 *puStack_158;
  undefined1 *local_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 *local_128;
  undefined1 *local_124;
  undefined1 *local_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  undefined1 *local_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 *local_e8;
  undefined1 *local_e4;
  undefined1 *local_e0;
  undefined1 *local_dc;
  undefined1 *puStack_d8;
  undefined1 *puStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 *local_80;
  undefined1 *local_7c;
  undefined1 *local_78;
  undefined1 *local_74;
  undefined1 *puStack_70;
  undefined1 *local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int local_3c [3];
  undefined1 local_30 [12];
  
  if ((char)param_2[0x1a] == '\0') {
    do {
      if (3 < (uint)param_2[0x13]) {
        FUN_01283fd8(&local_128,param_2 + 0x12,param_2[0x13] & 0xfffffffc);
        FUN_01a7ec50(local_3c,&DAT_0052e2e9,local_128,local_124);
        FUN_012840cc(&local_128);
        if (local_3c[0] == -0x80000000) {
          local_164 = &LAB_007363b4;
          local_168 = local_30;
          FUN_00664898(&local_128,&DAT_00586fed,&local_168);
          FUN_01a70fd4(&local_e8,0xd,&local_128);
          puVar2 = puStack_d4;
          puVar1 = puStack_d8;
          if (local_e8 != &DAT_00000003 || local_e4 != (undefined1 *)0x0) {
            FUN_01bed4e2(param_1 + 6,&local_d0,0x50);
            param_1[3] = local_dc;
            param_1[4] = puVar1;
            param_1[5] = puVar2;
            iVar10 = 8;
            *param_1 = local_e8;
            param_1[1] = local_e4;
            goto LAB_00eae170;
          }
        }
        else {
          FUN_01283524(&local_7c,local_3c);
          local_e0 = local_7c;
          local_dc = local_78;
          puStack_d8 = local_74;
          puStack_d4 = puStack_70;
          local_e4 = (undefined1 *)0x0;
          local_e8 = &DAT_00000003;
        }
        if (local_e0 != (undefined1 *)0x0) {
          param_1[5] = local_dc;
          param_1[6] = puStack_d8;
          param_1[7] = puStack_d4;
          *param_1 = 3;
          param_1[1] = 0;
          param_1[2] = 3;
          param_1[3] = 0;
          iVar10 = 0x10;
LAB_00eae170:
          *(undefined1 **)((int)param_1 + iVar10) = local_e0;
          return;
        }
      }
      (**(code **)(param_2[0x11] + 0xc))(&local_128,param_2[0x10],param_3);
      if (local_128 == &DAT_00000006 && local_124 == (undefined1 *)0x0) {
        *param_1 = 5;
        param_1[1] = 0;
        return;
      }
      local_168 = local_128;
      local_164 = local_124;
      local_160 = local_120;
      local_15c = puStack_11c;
      puStack_158 = puStack_118;
      local_154 = local_114;
      uStack_150 = local_110;
      uStack_14c = uStack_10c;
      uStack_148 = uStack_108;
      uStack_144 = uStack_104;
      local_140 = local_100;
      uStack_13c = local_fc;
      uStack_138 = uStack_f8;
      uStack_134 = uStack_f4;
      uStack_130 = uStack_f0;
      uStack_12c = uStack_ec;
      if (((uint)local_128 & 7) != 3) {
        if (local_128 == &SUB_00000004) {
          FUN_00eae240(&local_e8,local_120,puStack_11c);
LAB_00eae040:
          FUN_01bed4e2(param_1,&local_e8,0x68);
        }
        else {
          if (local_128 != &DAT_00000005) {
            local_80 = local_128;
            local_7c = local_124;
            local_78 = local_120;
            local_74 = puStack_11c;
            puStack_70 = puStack_118;
            local_6c = local_114;
            uStack_68 = local_110;
            uStack_64 = uStack_10c;
            uStack_60 = uStack_108;
            uStack_5c = uStack_104;
            local_58 = local_100;
            uStack_54 = local_fc;
            uStack_50 = uStack_f8;
            uStack_4c = uStack_f4;
            uStack_48 = uStack_f0;
            uStack_44 = uStack_ec;
            FUN_00eae384(&local_e8,"malformed base64 request has unencoded trailers",0x2f);
            FUN_01bed4e2(param_1,&local_e8,0x68);
            ppuVar5 = &local_80;
            goto LAB_00eae0a4;
          }
          if (param_2[0x13] != 0) {
            FUN_00eae384(&local_e8,"malformed base64 request",0x18);
            goto LAB_00eae040;
          }
          iVar10 = *param_2;
          iVar11 = param_2[1];
          uVar3 = 3;
          *param_2 = 3;
          param_2[1] = 0;
          if (iVar10 == 3 && iVar11 == 0) {
            uVar3 = 4;
          }
          else {
            iVar6 = param_2[3];
            iVar7 = param_2[4];
            iVar8 = param_2[5];
            param_1[4] = param_2[2];
            param_1[5] = iVar6;
            param_1[6] = iVar7;
            param_1[7] = iVar8;
            iVar6 = param_2[7];
            iVar7 = param_2[8];
            iVar8 = param_2[9];
            iVar9 = param_2[10];
            param_1[8] = param_2[6];
            param_1[9] = iVar6;
            param_1[10] = iVar7;
            param_1[0xb] = iVar8;
            param_1[0xc] = iVar9;
            iVar6 = param_2[0xc];
            iVar7 = param_2[0xd];
            iVar8 = param_2[0xe];
            iVar9 = param_2[0xf];
            param_1[0xd] = param_2[0xb];
            param_1[0xe] = iVar6;
            param_1[0xf] = iVar7;
            param_1[0x10] = iVar8;
            param_1[0x11] = iVar9;
            param_1[2] = iVar10;
            param_1[3] = iVar11;
          }
          *param_1 = uVar3;
          param_1[1] = 0;
        }
        if (((uint)local_168 & 6) == 4) {
          return;
        }
        ppuVar5 = &local_168;
LAB_00eae0a4:
        FUN_00eae358(ppuVar5);
        return;
      }
      local_e8 = local_120;
      local_e4 = puStack_11c;
      local_e0 = puStack_118;
      local_dc = local_114;
      uVar4 = 0;
      if (local_128 != &DAT_00000003 || local_124 != (undefined1 *)0x0) {
        uVar4 = (uint)local_128 ^ 4;
      }
      if (local_124 != (undefined1 *)0x0 || local_128 != &DAT_00000003 && uVar4 != 0) {
        local_e8 = local_128;
        local_e4 = local_124;
        puStack_d8 = puStack_118;
        puStack_d4 = local_114;
        local_d0 = local_110;
        uStack_cc = uStack_10c;
        uStack_c8 = uStack_108;
        uStack_c4 = uStack_104;
        uStack_c0 = local_100;
        local_bc = local_fc;
        uStack_b8 = uStack_f8;
        uStack_b4 = uStack_f4;
        uStack_b0 = uStack_f0;
        uStack_ac = uStack_ec;
        uVar3 = FUN_00eae3e4();
        FUN_00eae358(&local_80);
                    /* WARNING: Subroutine does not return */
        FUN_01be040c(uVar3);
      }
      local_80 = local_e8;
      local_7c = local_e4;
      local_78 = local_e0;
      local_74 = local_dc;
      FUN_01a3d128(param_2 + 0x12);
    } while( true );
  }
  (**(code **)(param_2[0x11] + 0xc))(&local_e8,param_2[0x10],param_3);
  if (((uint)local_e8 & 7) == 4) {
    local_78 = local_e0;
    local_74 = local_dc;
LAB_00eadfc0:
    FUN_00eae240(param_1,local_78,local_74);
    return;
  }
  if (local_e8 != &DAT_00000005) {
    if ((local_e8 == &DAT_00000006) ||
       (FUN_011e5e98(&local_80,&local_e8), ((uint)local_80 & 7) == 6)) {
      uVar3 = 5;
      goto LAB_00eae010;
    }
    if (local_80 != &DAT_00000005) {
      if (local_80 != &SUB_00000004) {
        *param_1 = 3;
        param_1[1] = 0;
        param_1[2] = local_80;
        param_1[3] = local_7c;
        param_1[4] = local_78;
        param_1[5] = local_74;
        param_1[6] = puStack_70;
        param_1[7] = local_6c;
        param_1[8] = uStack_68;
        param_1[9] = uStack_64;
        param_1[10] = uStack_60;
        param_1[0xb] = uStack_5c;
        param_1[0xc] = local_58;
        param_1[0xd] = uStack_54;
        param_1[0xe] = uStack_50;
        param_1[0xf] = uStack_4c;
        param_1[0x10] = uStack_48;
        param_1[0x11] = uStack_44;
        return;
      }
      goto LAB_00eadfc0;
    }
  }
  uVar3 = 4;
LAB_00eae010:
  *param_1 = uVar3;
  param_1[1] = 0;
  return;
}

