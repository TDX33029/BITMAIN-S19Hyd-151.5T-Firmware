// FUN_00f382f8 @ 00f382f8 size=2936 calls_out=31 calls_in=11
// strings: title | description | BUG: SettingSchema must be JSON-serializable | Cannot convert TOML value to JSON for validation | minimumMissingGroupsFirstMustBeUnnamed | x-documentationUrl

undefined4 FUN_00f382f8(char *param_1)

{
  uint *puVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined2 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  uint uVar17;
  undefined1 *puVar18;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 *puVar19;
  undefined1 *puVar20;
  undefined4 uVar21;
  undefined4 *puVar22;
  code *pcVar23;
  undefined4 *puVar24;
  bool bVar25;
  undefined8 uVar26;
  char local_2a8;
  undefined2 local_2a7;
  undefined1 local_2a5;
  int local_2a4;
  undefined4 *local_2a0;
  int iStack_29c;
  undefined4 *puStack_298;
  undefined4 *puStack_294;
  undefined4 **local_288;
  undefined4 *local_284;
  undefined1 *local_280;
  undefined4 *puStack_27c;
  undefined1 *puStack_278;
  undefined4 uStack_274;
  undefined1 *local_270;
  undefined4 *local_26c;
  undefined1 *local_268;
  undefined4 uStack_264;
  undefined4 **local_260;
  undefined4 *local_25c;
  undefined1 *local_258;
  undefined4 *puStack_254;
  undefined1 *puStack_250;
  undefined4 uStack_24c;
  undefined1 *local_248;
  undefined4 *local_244;
  undefined1 *local_240;
  undefined4 *local_238;
  int local_234;
  undefined4 *local_230;
  int local_22c;
  undefined4 *local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 *local_218;
  int local_214;
  undefined4 *puStack_210;
  int iStack_20c;
  undefined4 *local_208;
  undefined1 local_204;
  undefined2 local_203;
  undefined1 local_201;
  undefined4 local_200;
  int local_1fc;
  undefined4 *local_1f8;
  int local_1f4;
  undefined4 *local_1f0;
  undefined4 *puStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1d0;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  
  FUN_00f4b814(&local_200);
  if ((char)local_200 == '\x06') {
    uVar21 = FUN_00f3d460(local_1fc,"Cannot convert TOML value to JSON for validation",0x30);
    return uVar21;
  }
  local_2a8 = (char)local_200;
  local_230 = local_1f0;
  local_22c = 0;
  local_234 = 0;
  local_238 = (undefined4 *)0x0;
  iVar5 = *(int *)(param_1 + 0x60);
  local_2a0 = local_1f8;
  iStack_29c = local_1f4;
  puStack_298 = local_1f0;
  puStack_294 = puStack_1ec;
  uVar21 = 4;
  iVar12 = *(int *)(param_1 + 0x94);
  iVar13 = *(int *)(param_1 + 0x88);
  iVar14 = *(int *)(param_1 + 0x7c);
  iVar6 = *(int *)(param_1 + 0x70);
  local_2a4 = local_1fc;
  iVar7 = *(int *)(param_1 + 0xc0);
  cVar2 = param_1[0x18];
  cVar3 = *param_1;
  local_2a5 = local_200._3_1_;
  local_2a7 = local_200._1_2_;
  local_228 = (undefined4 *)&DAT_80000000;
  cVar4 = param_1[0xc4];
  puVar8 = (undefined4 *)thunk_FUN_016d4a50(4);
  if (puVar8 == (undefined4 *)0x0) goto LAB_00f38e40;
  *puVar8 = 0x65707974;
  local_220 = 4;
  local_228 = (undefined4 *)&DAT_80000000;
  local_280 = (undefined1 *)0x4;
  local_288 = (undefined4 **)&DAT_00000004;
  local_284 = puVar8;
  local_224 = puVar8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(cVar4) {
  case '\0':
    uVar21 = 7;
    local_1f8 = (undefined4 *)thunk_FUN_016d4a50(7);
    if (local_1f8 == (undefined4 *)0x0) {
LAB_00f38e50:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar21);
    }
    *(undefined4 *)((int)local_1f8 + 3) = 0x6e61656c;
    uVar21 = 0x6c6f6f62;
    break;
  case '\x01':
    uVar21 = 7;
    local_1f8 = (undefined4 *)thunk_FUN_016d4a50(7);
    if (local_1f8 == (undefined4 *)0x0) goto LAB_00f38e50;
    *(undefined4 *)((int)local_1f8 + 3) = 0x72656765;
    uVar21 = 0x65746e69;
    break;
  case '\x02':
    uVar21 = 6;
    local_1f8 = (undefined4 *)thunk_FUN_016d4a50(6);
    if (local_1f8 == (undefined4 *)0x0) goto LAB_00f38e50;
    *(undefined2 *)(local_1f8 + 1) = 0x7265;
    uVar21 = 0x626d756e;
    goto LAB_00f384bc;
  case '\x03':
    uVar21 = 6;
    local_1f8 = (undefined4 *)thunk_FUN_016d4a50(6);
    if (local_1f8 == (undefined4 *)0x0) goto LAB_00f38e50;
    *(undefined2 *)(local_1f8 + 1) = 0x676e;
    uVar21 = 0x69727473;
LAB_00f384bc:
    *local_1f8 = uVar21;
    local_1fc = 6;
    goto LAB_00f384f8;
  }
  *local_1f8 = uVar21;
  local_1fc = 7;
LAB_00f384f8:
  local_200 = (undefined4 *)CONCAT31(local_200._1_3_,3);
  local_1f4 = local_1fc;
  FUN_00f45bb4(&local_218,(uint)&local_238 | 4,&local_288,&local_200);
  if ((char)local_218 != '\x06') {
    FUN_00f3732c(&local_218);
  }
  puVar8 = (undefined4 *)
           FUN_00f3f420(&local_238,"title",5,*(undefined4 *)(param_1 + 0xa4),
                        *(undefined4 *)(param_1 + 0xa8));
  if ((puVar8 == (undefined4 *)0x0) &&
     (puVar8 = (undefined4 *)
               FUN_00f3f420(&local_238,"description",0xb,*(undefined4 *)(param_1 + 0xb0),
                            *(undefined4 *)(param_1 + 0xb4)), puVar8 == (undefined4 *)0x0)) {
    if (local_238 == (undefined4 *)&DAT_00000001) {
      local_200 = (undefined4 *)&DAT_0000000a;
      puVar8 = (undefined4 *)FUN_0157c50c(&local_200,0,0);
      goto LAB_00f38630;
    }
    uVar21 = 7;
    puVar8 = (undefined4 *)thunk_FUN_016d4a50(7);
    if (puVar8 == (undefined4 *)0x0) {
LAB_00f38e40:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar21);
    }
    *(undefined4 *)((int)puVar8 + 3) = 0x746c7561;
    *puVar8 = 0x61666564;
    if (((uint)local_228 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(local_224,param_1 + 0x30);
    }
    local_220 = 7;
    local_228 = (undefined4 *)&DAT_00000007;
    local_224 = puVar8;
    puVar8 = (undefined4 *)FUN_00f3f5a0(&local_238,param_1 + 0x30);
    if ((((((puVar8 != (undefined4 *)0x0) ||
           ((cVar3 != '\x06' &&
            (puVar8 = (undefined4 *)
                      FUN_00f3fafc(&local_238,"minimumMissingGroupsFirstMustBeUnnamed",param_1),
            puVar8 != (undefined4 *)0x0)))) ||
          ((cVar2 != '\x06' &&
           (puVar8 = (undefined4 *)FUN_00f3fafc(&local_238,&DAT_0040f6c1,param_1 + 0x18),
           puVar8 != (undefined4 *)0x0)))) ||
         ((((((iVar7 != 0 &&
              (puVar8 = (undefined4 *)FUN_00f3ffd8(&local_238,*(undefined4 *)(param_1 + 0xbc)),
              puVar8 != (undefined4 *)0x0)) ||
             (puVar8 = (undefined4 *)FUN_00f3f16c(&local_238,param_1[0xc5]),
             puVar8 != (undefined4 *)0x0)) ||
            ((iVar6 != -0x80000000 &&
             (puVar8 = (undefined4 *)
                       FUN_00f402c0(&local_238,"x-documentationUrl",0x12,param_1 + 0x70),
             puVar8 != (undefined4 *)0x0)))) ||
           ((iVar14 != -0x80000000 &&
            (puVar8 = (undefined4 *)FUN_00f402c0(&local_238,"x-unit",6,param_1 + 0x7c),
            puVar8 != (undefined4 *)0x0)))) ||
          ((iVar13 != -0x80000000 &&
           (puVar8 = (undefined4 *)FUN_00f402c0(&local_238,"x-category",10,param_1 + 0x88),
           puVar8 != (undefined4 *)0x0)))))) ||
        ((iVar12 != -0x80000000 &&
         (puVar8 = (undefined4 *)FUN_00f402c0(&local_238,"x-minVersion",0xc,param_1 + 0x94),
         puVar8 != (undefined4 *)0x0)))) ||
       ((iVar5 != -0x80000000 &&
        (puVar8 = (undefined4 *)FUN_00f3fc70(&local_238,param_1 + 0x48), puVar8 != (undefined4 *)0x0
        )))) goto LAB_00f38630;
    local_200 = local_238;
    local_1fc = local_234;
    local_1f8 = local_230;
    local_1f4 = local_22c;
    local_1f0 = local_228;
    puStack_1ec = local_224;
    uStack_1e8 = local_220;
    uStack_1e4 = uStack_21c;
    FUN_0157cf8c(&local_260,&local_200);
    if ((char)local_260 != '\x06') {
      local_270 = local_258;
      local_26c = puStack_254;
      local_268 = puStack_250;
      uStack_264 = uStack_24c;
      local_280 = local_258;
      puStack_27c = puStack_254;
      puStack_278 = puStack_250;
      uStack_274 = uStack_24c;
      local_284 = local_25c;
      local_288 = local_260;
      FUN_01214068(&local_200);
      FUN_0125089c(&local_238,&local_200,&local_288);
      FUN_01212754(&local_200);
      if (((uint)local_224 & 0xff) == 6) {
        uVar21 = FUN_00f373f0();
      }
      else {
        local_204 = (undefined1)local_224;
        local_1d0 = 0;
        local_214 = local_234;
        puStack_210 = local_230;
        iStack_20c = local_22c;
        local_198 = 0;
        local_19c = 4;
        local_1a0 = 0;
        local_200 = (undefined4 *)0x0;
        uVar15 = 1;
        if ((int)local_238[2] < 0) {
          uVar15 = local_238[2] ^ 0x80000000;
        }
        local_208 = local_228;
        local_203 = local_224._1_2_;
        local_201 = local_224._3_1_;
        local_218 = local_238;
        if (uVar15 == 0) {
          iVar5 = local_238[3];
          FUN_00f3744c(&local_200);
          if (iVar5 == 0) {
LAB_00f38b10:
            FUN_00f37554(&local_218);
            uVar21 = 0;
            FUN_00f3732c(&local_288);
            goto LAB_00f38690;
          }
        }
        else if (uVar15 == 1) {
          puVar8 = (undefined4 *)local_238[3];
          iVar5 = local_238[4];
          if (iVar5 == 1) {
            uVar15 = (**(code **)(puVar8[1] + 0x10))(*puVar8,&local_2a8,&local_200);
          }
          else {
            if (iVar5 == 0) {
LAB_00f38b08:
              FUN_00f3744c(&local_200);
              goto LAB_00f38b10;
            }
            puVar22 = puVar8 + iVar5 * 8;
            do {
              uVar15 = (**(code **)(puVar8[1] + 0x10))(*puVar8,&local_2a8,&local_200);
              puVar8 = puVar8 + 8;
            } while ((uVar15 & puVar8 != puVar22) != 0);
          }
          FUN_00f3744c(&local_200);
          if (uVar15 != 0) goto LAB_00f38b10;
        }
        else {
          puVar8 = (undefined4 *)local_238[4];
          iVar5 = local_238[5] << 5;
          do {
            if (iVar5 == 0) goto LAB_00f38b08;
            iVar6 = (**(code **)(puVar8[1] + 0x10))(*puVar8,&local_2a8,&local_200);
            iVar5 = iVar5 + -0x20;
            puVar8 = puVar8 + 8;
          } while (iVar6 != 0);
          FUN_00f3744c(&local_200);
        }
        local_198 = 0;
        local_1a0 = 0;
        local_1d0 = 0;
        local_200 = (undefined4 *)0x0;
        local_22c = 0;
        local_234 = 0;
        local_19c = 4;
        local_238 = (undefined4 *)0x80000001;
        uVar26 = FUN_011cf8a8(&local_218,&local_2a8,&local_238,0,&local_200);
        puVar8 = (undefined4 *)((ulonglong)uVar26 >> 0x20);
        uVar21 = (undefined4)uVar26;
        FUN_00f3744c(&local_200);
        FUN_00f3a55c(&local_260,uVar21,puVar8[3]);
        if (local_260 == (undefined4 **)&DAT_80000000) {
          local_244 = (undefined4 *)&DAT_00000004;
          local_240 = (undefined1 *)0x0;
          local_248 = (undefined1 *)0x0;
          if ((code *)*puVar8 != (code *)0x0) {
            (*(code *)*puVar8)(uVar21);
          }
          if (puVar8[1] != 0) {
            thunk_FUN_016d3fb4(uVar21);
          }
LAB_00f38c9c:
          local_230 = (undefined4 *)0x0;
          local_234 = 1;
          local_238 = (undefined4 *)0x0;
        }
        else {
          pcVar23 = (code *)puVar8[4];
          (*pcVar23)(&local_200,uVar21);
          puVar22 = (undefined4 *)&DAT_00000004;
          puVar20 = (undefined1 *)((int)local_200 + 1);
          if (local_200 == (undefined4 *)0xffffffff) {
            puVar20 = (undefined1 *)0xffffffff;
          }
          puVar18 = (undefined1 *)0x4;
          if ((undefined1 *)0x4 < puVar20) {
            puVar18 = puVar20;
          }
          iVar5 = (int)puVar18 * 0xc;
          uVar9 = 0;
          if ((undefined1 *)0xaaaaaaa < puVar20) {
LAB_00f38afc:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar9,iVar5);
          }
          if (iVar5 == 0) {
            puVar18 = (undefined1 *)0x0;
          }
          else {
            puVar22 = (undefined4 *)thunk_FUN_016d4a50(iVar5);
            if (puVar22 == (undefined4 *)0x0) {
              uVar9 = 4;
              goto LAB_00f38afc;
            }
          }
          iVar5 = 0xc;
          local_268 = (undefined1 *)0x1;
          *puVar22 = local_260;
          puVar22[1] = local_25c;
          puVar22[2] = local_258;
          local_270 = puVar18;
          local_26c = puVar22;
          while (puVar20 = local_268, FUN_00f3a55c(&local_238,uVar21,puVar8[3]),
                local_238 != (undefined4 *)0x80000000) {
            if (puVar20 == local_270) {
              (*pcVar23)(&local_200,uVar21);
              puVar18 = (undefined1 *)((int)local_200 + 1);
              if (local_200 == (undefined4 *)0xffffffff) {
                puVar18 = (undefined1 *)0xffffffff;
              }
              FUN_00f411dc(&local_270,puVar20,puVar18,4,0xc);
              puVar22 = local_26c;
            }
            local_268 = puVar20 + 1;
            piVar16 = (int *)((int)puVar22 + iVar5);
            *piVar16 = (int)local_238;
            iVar5 = iVar5 + 0xc;
            piVar16[1] = local_234;
            piVar16[2] = (int)local_230;
          }
          if ((code *)*puVar8 != (code *)0x0) {
            (*(code *)*puVar8)(uVar21);
          }
          if (puVar8[1] != 0) {
            thunk_FUN_016d3fb4(uVar21);
          }
          puVar22 = local_26c;
          local_248 = local_270;
          local_244 = local_26c;
          local_240 = local_268;
          if (local_268 == (undefined1 *)0x0) goto LAB_00f38c9c;
          iVar5 = (int)local_268 * 0xc;
          uVar15 = iVar5 - 0xc;
          puVar19 = (undefined4 *)((uVar15 >> 2) * 0x55555556);
          puVar10 = local_26c;
          while (iVar5 != 0) {
            puVar1 = puVar10 + 2;
            iVar5 = iVar5 + -0xc;
            puVar10 = puVar10 + 3;
            bVar25 = CARRY4(*puVar1,(uint)puVar19);
            puVar19 = (undefined4 *)(*puVar1 + (int)puVar19);
            if (bVar25) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8("attempt to join into collection with len > usize::MAX",0x35,
                           &DAT_018ad7c8);
            }
          }
          puVar10 = (undefined4 *)0x0;
          if ((int)puVar19 < 0) {
LAB_00f38d68:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(puVar10,puVar19);
          }
          if (puVar19 == (undefined4 *)0x0) {
            iVar5 = 1;
          }
          else {
            iVar5 = thunk_FUN_016d4a50(puVar19);
            puVar10 = puVar19;
            if (iVar5 == 0) {
              puVar10 = (undefined4 *)&DAT_00000001;
              goto LAB_00f38d68;
            }
          }
          puVar24 = (undefined4 *)puVar22[2];
          uVar21 = puVar22[1];
          local_1f8 = (undefined4 *)0x0;
          local_200 = puVar10;
          local_1fc = iVar5;
          if (puVar10 < puVar24) {
            FUN_00f411dc(&local_200,0,puVar24,1,1);
          }
          puVar10 = local_1f8;
          iVar5 = local_1fc;
          FUN_016dd1aa((undefined1 *)(local_1fc + (int)local_1f8),uVar21,puVar24);
          puVar22 = puVar22 + 4;
          uVar17 = (int)puVar19 - ((int)puVar10 + (int)puVar24);
          puVar11 = (undefined2 *)((undefined1 *)((int)puVar10 + (int)puVar24) + iVar5);
          uVar21 = extraout_r2;
          for (; uVar15 != 0; uVar15 = uVar15 - 0xc) {
            if (1 < uVar17) {
              puVar8 = (undefined4 *)(uVar17 - 2);
              uVar21 = *puVar22;
              puVar24 = (undefined4 *)puVar22[1];
              *puVar11 = 0x203b;
            }
            if (1 >= uVar17 || puVar8 < puVar24) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018ad7b8);
            }
            FUN_016dd1aa(puVar11 + 1,uVar21,puVar24);
            uVar17 = (int)puVar8 - (int)puVar24;
            puVar11 = (undefined2 *)((int)(puVar11 + 1) + (int)puVar24);
            puVar22 = puVar22 + 3;
            uVar21 = extraout_r2_00;
          }
          local_230 = (undefined4 *)((int)puVar19 - uVar17);
          local_234 = local_1fc;
          local_238 = local_200;
        }
        local_260 = &local_238;
        local_25c = &DAT_006043a8;
        FUN_00600d2c(&local_200,&DAT_00590e71,&local_260);
        if (local_238 != (undefined4 *)0x0) {
          thunk_FUN_016d3fb4(local_234);
        }
        uVar21 = FUN_00f40bcc(&local_200);
        puVar8 = local_244;
        puVar22 = local_244 + 1;
        for (puVar20 = local_240; puVar20 != (undefined1 *)0x0; puVar20 = puVar20 + -1) {
          if (puVar22[-1] != 0) {
            thunk_FUN_016d3fb4(*puVar22);
          }
          puVar22 = puVar22 + 3;
        }
        if (local_248 != (undefined1 *)0x0) {
          thunk_FUN_016d3fb4(puVar8);
        }
        FUN_00f37554(&local_218);
      }
      FUN_00f3732c(&local_288);
      goto LAB_00f38690;
    }
  }
  else {
LAB_00f38630:
    local_25c = puVar8;
    if (local_238 == (undefined4 *)0x0) {
      FUN_00f47a28((uint)&local_238 | 4);
      if (((uint)local_228 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(local_224);
      }
    }
    else if ((char)local_230 != '\x06') {
      FUN_00f3732c(&local_230);
    }
  }
  uVar21 = FUN_00f3d460(local_25c,"BUG: SettingSchema must be JSON-serializable",0x2c);
LAB_00f38690:
  FUN_00f3732c(&local_2a8);
  return uVar21;
}

