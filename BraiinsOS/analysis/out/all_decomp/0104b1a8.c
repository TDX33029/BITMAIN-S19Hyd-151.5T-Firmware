// FUN_0104b1a8 @ 0104b1a8 size=944 calls_out=9 calls_in=1
// strings: 

void FUN_0104b1a8(undefined2 *param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  uint uVar13;
  bool bVar14;
  undefined8 uVar15;
  ushort local_1a0;
  ushort local_19e;
  uint local_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 local_184;
  undefined4 uStack_180;
  uint local_17c;
  int local_178;
  undefined4 local_174;
  uint local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  uint local_160;
  undefined2 local_158;
  ushort local_156;
  uint local_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  uint uStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  uint local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  uint uStack_118;
  undefined1 auStack_b8 [148];
  
  FUN_010393a0(&local_158);
  uVar4 = local_154;
  uVar3 = local_158;
  if (local_158 == 2) {
    *param_1 = 2;
    *(uint *)(param_1 + 2) = local_154;
    return;
  }
  local_198 = local_150;
  uStack_194 = uStack_14c;
  uStack_190 = uStack_148;
  uStack_18c = uStack_144;
  uStack_188 = uStack_140;
  local_184 = local_13c;
  uStack_180 = uStack_138;
  local_17c = uStack_134;
  local_178 = iStack_130;
  local_174 = uStack_12c;
  local_170 = local_128;
  uStack_16c = uStack_124;
  uStack_168 = uStack_120;
  uStack_164 = uStack_11c;
  local_160 = uStack_118;
  uVar5 = *(uint *)(param_2 + 0xc);
  local_19c = local_154;
  local_19e = local_156;
  local_1a0 = local_158;
  if (uVar5 < 2) {
    local_158 = local_158 & 0xff00;
    local_150 = 2;
    uVar6 = FUN_0104f1e0(&local_158);
LAB_0104b248:
    *param_1 = 2;
    *(undefined4 *)(param_1 + 2) = uVar6;
    if (uVar3 == 0 || uVar4 == 0) goto LAB_0104b25c;
  }
  else {
    uVar13 = uVar5 - 2;
    uVar1 = **(ushort **)(param_2 + 8);
    *(ushort **)(param_2 + 8) = *(ushort **)(param_2 + 8) + 1;
    *(uint *)(param_2 + 0xc) = uVar13;
    uVar15 = FUN_0104319c(((uint)uVar1 << 0x18 | (uint)(uVar1 >> 8) << 0x10) >> 0x10);
    uVar10 = (uint)uVar15;
    if ((uVar10 & 0xffff) != 0x19) {
      if (1 < uVar13) {
        puVar9 = (uint *)(*(ushort **)(param_2 + 8) + 1);
        uVar1 = **(ushort **)(param_2 + 8);
        *(uint **)(param_2 + 8) = puVar9;
        *(uint *)(param_2 + 0xc) = uVar5 - 4;
        uVar8 = (uint)uVar1 << 0x18 | (uint)(uVar1 >> 8) << 0x10;
        uVar13 = uVar8 >> 0x10;
        uVar12 = (undefined2)(uVar8 >> 0x10);
        uVar11 = 6;
        if (uVar13 < 4) {
          if (uVar13 == 1) {
            uVar11 = 0;
          }
          else if (uVar13 == 3) {
            uVar11 = 1;
          }
        }
        else if (uVar13 == 4) {
          uVar11 = 2;
        }
        else if (uVar13 == 0xfe) {
          uVar11 = 3;
        }
        else if (uVar13 == 0xff) {
          uVar11 = 4;
        }
        goto LAB_0104b3f0;
      }
      local_150 = 2;
      local_154 = 0;
      local_158 = (ushort)local_158._1_1_ << 8;
      uVar6 = FUN_0104f1e0(&local_158);
      goto LAB_0104b248;
    }
    if ((local_17c & 0xffff) == 1) {
      uVar8 = local_170;
    }
    else {
      uVar8 = local_17c >> 0x10;
    }
    if ((uVar8 != 0) || ((local_160 & 1) == 0)) {
      iVar7 = thunk_FUN_016d4a50(0x44);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x44);
      }
      FUN_016dd1aa(iVar7,&local_1a0,0x44);
      *(int *)(param_1 + 2) = iVar7;
      *param_1 = 2;
      return;
    }
    if (uVar13 < 2) {
      local_150 = 2;
      local_154 = 0;
      local_158 = (ushort)local_158._1_1_ << 8;
      uVar6 = FUN_0104f1e0(&local_158);
      goto LAB_0104b248;
    }
    uVar12 = 0x200;
    puVar9 = (uint *)(*(ushort **)(param_2 + 8) + 1);
    uVar1 = **(ushort **)(param_2 + 8);
    *(uint **)(param_2 + 8) = puVar9;
    *(uint *)(param_2 + 0xc) = uVar5 - 4;
    uVar13 = (uint)uVar1 << 0x18 | (uint)(uVar1 >> 8) << 0x10;
    if (0x200 < uVar13 >> 0x10) {
      uVar12 = (undefined2)(uVar13 >> 0x10);
    }
    uVar11 = 5;
LAB_0104b3f0:
    if (uVar5 - 4 < 4) {
      local_150 = 4;
      local_158 = (ushort)local_158._1_1_ << 8;
      uVar5 = FUN_0104f1e0(&local_158);
    }
    else {
      uVar13 = *puVar9;
      *(uint **)(param_2 + 8) = puVar9 + 1;
      *(uint *)(param_2 + 0xc) = uVar5 - 8;
      if (uVar5 - 8 < 2) {
        local_150 = 2;
        local_154 = 0;
        local_158 = (ushort)local_158._1_1_ << 8;
        uVar6 = FUN_0104f1e0(&local_158);
        goto LAB_0104b248;
      }
      uVar1 = (ushort)puVar9[1];
      uVar5 = uVar5 - 10;
      uVar2 = (uint)uVar1 << 0x18 | (uint)(uVar1 >> 8) << 0x10;
      *(ushort **)(param_2 + 8) = (ushort *)((int)puVar9 + 6);
      *(uint *)(param_2 + 0xc) = uVar5;
      uVar8 = uVar2 >> 0x10;
      if (uVar5 < uVar2 >> 0x10) {
        uVar5 = FUN_0104b588(uVar5,uVar8);
      }
      else {
        uVar5 = (uint)((ulonglong)uVar15 >> 0x20) & 0xffff;
        if (uVar1 == 0) {
          local_158 = 0x19;
LAB_0104b504:
          FUN_016dd1aa(param_1,&local_1a0,0x44);
          *(uint *)(param_1 + 0x26) = uVar5;
          param_1[0x25] = (short)uVar10;
          param_1[0x24] = local_158;
          param_1[0x23] = uVar12;
          param_1[0x22] = uVar11;
          FUN_016dd1aa(param_1 + 0x28,auStack_b8,0x94);
          *(uint *)(param_1 + 0x72) =
               uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
               uVar13 >> 0x18;
          return;
        }
        FUN_010336ac(&local_158,param_2,uVar10,uVar5,uVar8);
        if (local_158 != 0x1b) {
          uVar10 = (uint)local_156;
          FUN_016dd1aa(auStack_b8,&local_150,0x94);
          uVar5 = local_154;
          goto LAB_0104b504;
        }
        uVar5 = local_154;
      }
    }
    *param_1 = 2;
    *(uint *)(param_1 + 2) = uVar5;
    if (uVar3 == 0 || uVar4 == 0) goto LAB_0104b25c;
  }
  thunk_FUN_016d3fb4(local_198);
LAB_0104b25c:
  bVar14 = (local_17c & 0xffff) != 0;
  iVar7 = 0;
  if (bVar14) {
    iVar7 = local_178;
  }
  if (!(bVar14 && iVar7 != 0)) {
    return;
  }
  thunk_FUN_016d3fb4(local_174);
  return;
}

