// FUN_0145e6c0 @ 0145e6c0 size=2016 calls_out=5 calls_in=1
// strings: Out of bounds access

/* WARNING: Removing unreachable block (ram,0x0145f178) */

void FUN_0145e6c0(char *param_1,int param_2,undefined4 param_3)

{
  undefined2 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  code *pcVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  undefined4 uVar16;
  bool bVar17;
  char local_238;
  undefined1 local_237;
  undefined1 uStack_236;
  undefined1 uStack_235;
  uint uStack_234;
  uint local_230;
  uint local_22c;
  int local_228;
  int local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  char local_2c [4];
  uint local_28;
  
  if ((*(char *)(param_2 + 0x158) == '\x01') && (*(int *)(param_2 + 0x14c) != 0)) {
LAB_0145e7a8:
    FUN_0145f218(param_2);
    FUN_0145f338(param_2,param_3);
    *param_1 = '\x04';
    return;
  }
  uVar11 = *(uint *)(param_2 + 0x110);
  iVar4 = 0;
  uVar13 = *(uint *)(param_2 + 0x114);
  uVar7 = *(uint *)(param_2 + 0x124);
  if (uVar7 == 0) {
    uVar12 = 0;
    uVar6 = 0;
  }
  else {
    uVar6 = *(uint *)(param_2 + 0x118);
    uVar14 = *(uint *)(param_2 + 0x120);
    uVar12 = uVar14 - uVar6;
    if (uVar14 < uVar6) {
      uVar12 = uVar14;
    }
    if (uVar6 - uVar12 < uVar7) {
      iVar4 = uVar7 - (uVar6 - uVar12);
    }
    else {
      uVar6 = uVar12 + uVar7;
    }
  }
  local_228 = *(int *)(param_2 + 0x11c);
  local_224 = local_228 + iVar4 * 0x28;
  local_230 = local_228 + uVar12 * 0x28;
  local_22c = local_228 + uVar6 * 0x28;
  iVar4 = FUN_0142bc4c(&local_230);
  if ((uVar11 - uVar13) + iVar4 == 0) {
    (**(code **)(*(int *)(param_2 + 0x140) + 0x14))
              (&local_238,*(undefined4 *)(param_2 + 0x13c),param_3);
LAB_0145e788:
    if (local_238 == '\x04') goto LAB_0145e7a8;
    if (local_238 == '\x05') {
      *param_1 = '\x05';
      return;
    }
  }
  else {
    if (*(char *)(param_2 + 300) == '\x01') {
      uVar7 = *(uint *)(param_2 + 0x110);
      uVar11 = *(uint *)(param_2 + 0x114);
      uVar13 = *(uint *)(param_2 + 0x124);
      do {
        uVar12 = 0;
        local_34 = 0;
        local_38 = 1;
        local_3c = 0;
        local_40 = 1;
        local_44 = 0;
        local_48 = 1;
        local_4c = 0;
        local_50 = 1;
        local_54 = 0;
        local_58 = 1;
        local_5c = 0;
        local_60 = 1;
        local_64 = 0;
        local_68 = 1;
        local_6c = 0;
        local_70 = 1;
        local_74 = 0;
        local_78 = 1;
        local_7c = 0;
        local_80 = 1;
        local_84 = 0;
        local_88 = 1;
        local_8c = 0;
        local_90 = 1;
        local_94 = 0;
        local_98 = 1;
        local_9c = 0;
        local_a0 = 1;
        local_a4 = 0;
        local_a8 = 1;
        local_ac = 0;
        local_b0 = 1;
        local_b4 = 0;
        local_b8 = 1;
        local_bc = 0;
        local_c0 = 1;
        local_c4 = 0;
        local_c8 = 1;
        local_cc = 0;
        local_d0 = 1;
        local_d4 = 0;
        local_d8 = 1;
        local_dc = 0;
        local_e0 = 1;
        local_e4 = 0;
        local_e8 = 1;
        local_ec = 0;
        local_f0 = 1;
        local_f4 = 0;
        local_f8 = 1;
        local_fc = 0;
        local_100 = 1;
        local_104 = 0;
        local_108 = 1;
        local_10c = 0;
        local_110 = 1;
        local_114 = 0;
        local_118 = 1;
        local_11c = 0;
        local_120 = 1;
        local_124 = 0;
        local_128 = 1;
        local_12c = 0;
        local_130 = 1;
        local_134 = 0;
        local_138 = 1;
        local_13c = 0;
        local_140 = 1;
        local_144 = 0;
        local_148 = 1;
        local_14c = 0;
        local_150 = 1;
        local_154 = 0;
        local_158 = 1;
        local_15c = 0;
        local_160 = 1;
        local_164 = 0;
        local_168 = 1;
        local_16c = 0;
        local_170 = 1;
        local_174 = 0;
        local_178 = 1;
        local_17c = 0;
        local_180 = 1;
        local_184 = 0;
        local_188 = 1;
        local_18c = 0;
        local_190 = 1;
        local_194 = 0;
        local_198 = 1;
        local_19c = 0;
        local_1a0 = 1;
        local_1a4 = 0;
        local_1a8 = 1;
        local_1ac = 0;
        local_1b0 = 1;
        local_1b4 = 0;
        local_1b8 = 1;
        local_1bc = 0;
        local_1c0 = 1;
        local_1c4 = 0;
        local_1c8 = 1;
        local_1cc = 0;
        local_1d0 = 1;
        local_1d4 = 0;
        local_1d8 = 1;
        local_1dc = 0;
        local_1e0 = 1;
        local_1e4 = 0;
        local_1e8 = 1;
        local_1ec = 0;
        local_1f0 = 1;
        local_1f4 = 0;
        local_1f8 = 1;
        local_1fc = 0;
        local_200 = 1;
        local_204 = 0;
        local_208 = 1;
        local_20c = 0;
        local_210 = 1;
        local_214 = 0;
        local_218 = 1;
        local_21c = 0;
        local_220 = 1;
        local_224 = 0;
        local_228 = 1;
        local_230 = 1;
        local_22c = 0;
        if (uVar7 != uVar11) {
          if (uVar7 < uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(uVar11,uVar7,uVar7,&DAT_018a6750);
          }
          uVar12 = 1;
          local_22c = uVar7 - uVar11;
          local_230 = *(int *)(param_2 + 0x10c) + uVar11;
        }
        uVar6 = 0;
        uVar14 = 0;
        iVar4 = 0;
        if (uVar13 != 0) {
          uVar14 = *(uint *)(param_2 + 0x118);
          uVar5 = *(uint *)(param_2 + 0x120);
          uVar6 = uVar5 - uVar14;
          if (uVar5 < uVar14) {
            uVar6 = uVar5;
          }
          if (uVar14 - uVar6 < uVar13) {
            iVar4 = uVar13 - (uVar14 - uVar6);
          }
          else {
            uVar14 = uVar6 + uVar13;
          }
        }
        piVar8 = *(int **)(param_2 + 0x11c);
        piVar15 = piVar8 + uVar6 * 10;
        if (piVar8 + uVar14 * 10 != piVar15) {
          piVar9 = piVar8;
LAB_0145eb48:
                    /* WARNING: Could not recover jumptable at 0x0145eb6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_0145eb70 + *(int *)(&DAT_0145eb70 + *piVar15 * 4)))
                    (0,0x40 - uVar12,0x40 - uVar12,piVar9);
          return;
        }
        if (piVar8 != piVar8 + iVar4 * 10 && piVar8 != (int *)0x0) {
          piVar9 = piVar8 + uVar14 * 10;
          piVar15 = piVar8;
          goto LAB_0145eb48;
        }
        if (0x40 < uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar12,0x40,&DAT_018a66e0);
        }
        iVar4 = *(int *)(param_2 + 0x140);
        uVar16 = *(undefined4 *)(param_2 + 0x13c);
        (**(code **)(iVar4 + 0x20))(local_2c,uVar16,param_3,&local_230,uVar12);
        uVar12 = local_28;
        if (local_2c[0] == '\x05') {
          local_238 = '\x05';
          goto LAB_0145e788;
        }
        if (local_2c[0] != '\x04') {
          uStack_234 = local_28;
          local_238 = local_2c[0];
          uVar1 = *(undefined2 *)((uint)local_2c | 1);
          uStack_235 = *(undefined1 *)((undefined2 *)((uint)local_2c | 1) + 1);
          local_237 = (undefined1)uVar1;
          uStack_236 = (undefined1)((ushort)uVar1 >> 8);
          goto LAB_0145e788;
        }
        uVar6 = uVar7 - uVar11;
        bVar17 = uVar6 < local_28;
        bVar2 = !bVar17 && uVar6 != local_28;
        if (bVar2 == bVar17) {
          *(undefined4 *)(param_2 + 0x110) = 0;
          *(undefined4 *)(param_2 + 0x114) = 0;
joined_r0x0145ede4:
          uVar11 = 0;
          uVar7 = 0;
          if (uVar13 == 0) goto LAB_0145ef90;
LAB_0145efc8:
          iVar3 = 0;
          uVar14 = *(uint *)(param_2 + 0x118);
          uVar5 = *(uint *)(param_2 + 0x120);
          uVar6 = uVar5 - uVar14;
          if (uVar5 < uVar14) {
            uVar6 = uVar5;
          }
          if (uVar14 - uVar6 < uVar13) {
            iVar3 = uVar13 - (uVar14 - uVar6);
          }
          else {
            uVar14 = uVar6 + uVar13;
          }
        }
        else {
          if ((char)(bVar2 - bVar17) != '\x01') {
            *(undefined4 *)(param_2 + 0x110) = 0;
            *(undefined4 *)(param_2 + 0x114) = 0;
            if (local_28 != uVar6) {
              uVar7 = *(uint *)(param_2 + 0x120);
              if (uVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00fb74b8("Out of bounds access",0x14,&DAT_018a6730);
              }
              uVar11 = uVar7 - *(uint *)(param_2 + 0x118);
              if (uVar7 < *(uint *)(param_2 + 0x118)) {
                uVar11 = uVar7;
              }
                    /* WARNING: Could not recover jumptable at 0x0145ee80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)(&DAT_0145ee84 +
                        *(int *)(&DAT_0145ee84 +
                                *(int *)(*(int *)(param_2 + 0x11c) + uVar11 * 0x28) * 4)))();
              return;
            }
            goto joined_r0x0145ede4;
          }
          uVar11 = uVar11 + local_28;
          *(uint *)(param_2 + 0x114) = uVar11;
          if (uVar13 != 0) goto LAB_0145efc8;
LAB_0145ef90:
          iVar3 = 0;
          uVar6 = 0;
          uVar14 = 0;
        }
        local_228 = *(int *)(param_2 + 0x11c);
        local_224 = local_228 + iVar3 * 0x28;
        local_230 = local_228 + uVar6 * 0x28;
        local_22c = local_228 + uVar14 * 0x28;
        iVar3 = FUN_0142bc4c(&local_230);
        if ((uVar7 - uVar11) + iVar3 == 0) {
          pcVar10 = *(code **)(iVar4 + 0x14);
          goto LAB_0145f150;
        }
      } while (uVar12 != 0);
    }
    else {
      iVar3 = *(int *)(param_2 + 0x10c);
      uVar16 = *(undefined4 *)(param_2 + 0x13c);
      iVar4 = *(int *)(param_2 + 0x140);
      do {
        if (uVar11 < uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar13,uVar11,uVar11,&DAT_018a6750);
        }
        (**(code **)(iVar4 + 0x10))(&local_230,uVar16,param_3,iVar3 + uVar13,uVar11 - uVar13);
        if ((local_230 & 0xff) == 5) {
          local_238 = '\x05';
          goto LAB_0145e788;
        }
        if ((local_230 & 0xff) != 4) {
          uVar1 = *(undefined2 *)((uint)&local_230 | 1);
          uStack_234 = local_22c;
          uStack_235 = *(undefined1 *)((undefined2 *)((uint)&local_230 | 1) + 1);
          local_238 = (char)local_230;
          local_237 = (undefined1)uVar1;
          uStack_236 = (undefined1)((ushort)uVar1 >> 8);
          goto LAB_0145e788;
        }
        uVar13 = uVar13 + local_22c;
        *(uint *)(param_2 + 0x114) = uVar13;
        if (uVar11 == uVar13) {
          pcVar10 = *(code **)(iVar4 + 0x14);
          *(undefined4 *)(param_2 + 0x110) = 0;
          *(undefined4 *)(param_2 + 0x114) = 0;
LAB_0145f150:
          (*pcVar10)(&local_238,uVar16,param_3);
          goto LAB_0145e788;
        }
      } while (local_22c != 0);
    }
    local_237 = 0x17;
    local_238 = '\x01';
  }
  *(uint *)(param_1 + 4) = uStack_234;
  *(uint *)(param_1 + 1) =
       CONCAT13((undefined1)uStack_234,CONCAT12(uStack_235,CONCAT11(uStack_236,local_237)));
  *param_1 = local_238;
  return;
}

