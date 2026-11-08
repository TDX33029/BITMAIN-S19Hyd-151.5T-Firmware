// FUN_00b049c4 @ 00b049c4 size=1288 calls_out=18 calls_in=0
// strings: mdns_enabledevent open/boser/boser/src/api/grpc/authentication.rs:113open/boser/boser/src/api/grpc/authentication.rs

void FUN_00b049c4(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *extraout_r2;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined4 *local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  uint local_1b8;
  uint uStack_1b4;
  uint local_1b0;
  uint local_1ac;
  undefined4 *local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  uint *puStack_19c;
  uint local_198;
  uint uStack_194;
  uint local_190;
  uint local_18c;
  undefined4 local_188;
  uint *local_184;
  uint *local_180;
  uint *local_17c;
  uint local_178;
  uint *local_174;
  int local_170;
  int local_16c;
  uint local_168;
  uint uStack_164;
  uint uStack_160;
  uint local_15c;
  uint uStack_158;
  uint uStack_154;
  uint uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  uint local_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  undefined1 **local_68;
  undefined *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 *local_50;
  undefined1 *local_4c;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  uint local_3c;
  uint uStack_38;
  undefined1 *local_30;
  uint local_2c;
  uint local_28;
  
  uVar12 = thunk_FUN_01bee35a(param_1,0x2c0);
  puVar9 = (uint *)((int)uVar12 + (int)((ulonglong)uVar12 >> 0x20));
  if ((char)puVar9[4] == '\0') {
    FUN_019ae6ac(&local_130);
    *puVar9 = local_130;
    puVar9[1] = uStack_12c;
    puVar9[2] = uStack_128;
    puVar9[3] = uStack_124;
    *(undefined1 *)(puVar9 + 4) = 1;
  }
  local_1b8 = *puVar9;
  uStack_1b4 = puVar9[1];
  local_1b0 = puVar9[2];
  local_1ac = puVar9[3];
  local_198 = local_1b8 + 1;
  uStack_194 = uStack_1b4 + (0xfffffffe < local_1b8);
  local_184 = &local_198;
  *puVar9 = local_198;
  puVar9[1] = uStack_194;
  local_1c8 = &DAT_0056d238;
  uStack_1c4 = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  *puVar9 = local_1b8 + 2;
  puVar9[1] = uStack_1b4 + (0xfffffffd < local_1b8);
  local_1a8 = &DAT_0056d238;
  uStack_1a4 = 0;
  uStack_1a0 = 0;
  puStack_19c = (uint *)0x0;
  local_17c = (uint *)*extraout_r2;
  iVar7 = extraout_r2[1];
  local_16c = extraout_r2[3];
  if (iVar7 == 0) {
    local_188 = 0;
    local_180 = puStack_19c;
  }
  else {
    local_188 = 8;
    local_184 = (uint *)(iVar7 * 0x29 + 0x2d);
    local_180 = local_17c + iVar7 * -10 + -10;
  }
  local_174 = local_17c + 1;
  local_178 = ~*local_17c & 0x80808080;
  local_170 = (int)local_17c + iVar7 + 1;
  uVar1 = *(undefined1 *)(param_2 + 8);
  puVar5 = (undefined4 *)((uint)&local_168 | 4);
  local_190 = local_1b0;
  local_18c = local_1ac;
LAB_00b04b00:
  do {
    if (local_16c == 0) {
LAB_00b04e2c:
      FUN_01ada55c(&local_188);
      *param_1 = local_1c8;
      param_1[1] = uStack_1c4;
      param_1[2] = uStack_1c0;
      param_1[3] = uStack_1bc;
      param_1[4] = local_1b8;
      param_1[5] = uStack_1b4;
      param_1[6] = local_1b0;
      param_1[7] = local_1ac;
      param_1[8] = local_1a8;
      param_1[9] = uStack_1a4;
      param_1[10] = uStack_1a0;
      param_1[0xb] = puStack_19c;
      param_1[0xc] = local_198;
      param_1[0xd] = uStack_194;
      param_1[0xe] = local_190;
      param_1[0xf] = local_18c;
      return;
    }
    if (local_178 == 0) {
      puVar9 = local_174;
      do {
        local_174 = puVar9 + 1;
        uVar8 = *puVar9;
        local_17c = local_17c + -0x28;
        puVar9 = local_174;
      } while ((uVar8 & 0x80808080) == 0x80808080);
      local_178 = uVar8 & 0x80808080 ^ 0x80808080;
    }
    local_16c = local_16c + -1;
    uVar2 = local_178 - 1 & local_178;
    uVar8 = (uint)LZCOUNT(local_178 << 0x18 | (local_178 >> 8 & 0xff) << 0x10 |
                          (local_178 >> 0x10 & 0xff) << 8 | local_178 >> 0x18) >> 3;
    uVar6 = local_17c[uVar8 * -10 + -9];
    puVar11 = (undefined1 *)local_17c[uVar8 * -10 + -10];
    uVar10 = local_17c[uVar8 * -10 + -8];
    local_168 = local_17c[uVar8 * -10 + -7];
    uStack_164 = local_17c[uVar8 * -10 + -6];
    uStack_160 = local_17c[uVar8 * -10 + -5];
    local_15c = local_17c[uVar8 * -10 + -4];
    uStack_158 = local_17c[uVar8 * -10 + -3];
    uStack_154 = local_17c[uVar8 * -10 + -2];
    uStack_150 = local_17c[uVar8 * -10 + -1];
    local_178 = uVar2;
    if (puVar11 == (undefined1 *)0x80000000) goto LAB_00b04e2c;
    local_148 = *puVar5;
    uStack_144 = puVar5[1];
    uStack_140 = puVar5[2];
    uStack_13c = puVar5[3];
    uStack_138 = puVar5[4];
    uStack_134 = puVar5[5];
    if (uVar10 == 0xc) {
      iVar7 = thunk_FUN_01bed842(uVar6,
                                 "mdns_enabledevent open/boser/boser/src/api/grpc/authentication.rs:113open/boser/boser/src/api/grpc/authentication.rs"
                                 ,0xc);
      if (iVar7 != 0) goto LAB_00b04c20;
      FUN_00b0394c(&local_130,uVar1);
LAB_00b04cb8:
      puVar4 = (undefined4 *)FUN_0126d620(&local_130,&local_148);
      if (puVar4 == (undefined4 *)0x0) {
        local_30 = puVar11;
        local_2c = uVar6;
        local_28 = uVar10;
        FUN_01274ad8(&local_68,&local_1c8,&local_30,&local_148);
        if ((char)local_68 != '\x06') {
          FUN_00e0febc(&local_68);
        }
        FUN_00b03818(&local_130);
        goto LAB_00b04b00;
      }
      local_28 = 0;
      local_30 = (undefined1 *)0x0;
      local_5c = 0;
      local_2c = 1;
      local_60 = 0x60000020;
      local_64 = &DAT_01c10bb0;
      local_68 = &local_30;
      local_50 = puVar4;
      local_4c = puVar11;
      local_48 = uVar6;
      local_44 = uVar10;
      iVar7 = FUN_00667a08(&local_50,&local_68);
      if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533383,0x37,&local_40,&DAT_01c10bf8,&DAT_01d30334);
      }
      local_40 = local_30;
      local_3c = local_2c;
      uStack_38 = local_28;
      FUN_01aa42f8(&local_68,&local_1a8,&local_4c);
      if (local_68 != (undefined1 **)&DAT_80000000) {
        FUN_019bb7e0(local_68,local_64);
      }
      (**(code **)*puVar4)(puVar4);
      FUN_00b03818(&local_130);
    }
    else {
      if ((uVar10 == 0x10) && (iVar7 = thunk_FUN_01bed842(uVar6,&DAT_00569338,0x10), iVar7 == 0)) {
        DataMemoryBarrier(0xb);
        if (DAT_01d4bae0 != 0) {
          local_68 = &local_30;
          local_30 = &DAT_01d4ba18;
          FUN_019a768c(&DAT_01d4bae0,1,&local_68,&DAT_01c10b4c,&DAT_01d293e0);
        }
        FUN_00b0319c(&local_130);
        goto LAB_00b04cb8;
      }
LAB_00b04c20:
      local_30 = puVar11;
      local_2c = uVar6;
      local_28 = uVar10;
      puVar3 = (undefined *)thunk_FUN_01be5118(0x10);
      if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0x10);
      }
      FUN_01bed4e2(puVar3,&DAT_0056ad08,0x10);
      local_60 = 0x10;
      local_68 = (undefined1 **)&DAT_00000010;
      local_64 = puVar3;
      FUN_01aa42f8(&local_40,&local_1a8,&local_30,&local_68);
      if (local_40 != (undefined1 *)0x80000000) {
        FUN_019bb7e0(local_40,local_3c);
      }
    }
    FUN_00e0febc(&local_148);
  } while( true );
}

