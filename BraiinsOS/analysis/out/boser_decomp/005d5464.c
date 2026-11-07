// FUN_005d5464 @ 005d5464 size=2584 calls_out=30 calls_in=1
// strings: BUG: request parameters cell was already initialized. | BUG: request parameters cell was already initialized. | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | BUG: request parameters cell was already initialized.

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_005d5464(uint *param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  uint ****ppppuVar2;
  undefined4 ****ppppuVar3;
  uint ****ppppuVar4;
  undefined1 uVar5;
  char cVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 ****ppppuVar13;
  undefined4 ***pppuVar14;
  undefined4 ****ppppuVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uVar18;
  undefined4 ****local_4b4;
  uint ****local_4a8;
  undefined4 ****local_4a4;
  undefined4 ****local_490;
  uint local_488;
  uint uStack_484;
  uint uStack_480;
  uint uStack_47c;
  uint uStack_478;
  uint local_474;
  uint uStack_470;
  uint uStack_46c;
  uint uStack_468;
  uint uStack_464;
  undefined1 auStack_460 [72];
  uint ****local_418;
  undefined4 ****ppppuStack_414;
  uint ****ppppuStack_410;
  undefined4 ***pppuStack_40c;
  uint uStack_408;
  undefined4 ****ppppuStack_404;
  int local_400 [48];
  undefined4 ****local_340;
  uint ****local_33c;
  undefined4 ****local_338;
  undefined4 uStack_334;
  undefined4 ****local_330;
  uint ****ppppuStack_32c;
  undefined4 ****ppppuStack_328;
  uint ****local_324;
  undefined4 ***local_320;
  uint uStack_31c;
  undefined4 ****ppppuStack_318;
  undefined4 uStack_314;
  undefined4 ****local_310;
  uint ****ppppuStack_30c;
  undefined4 ****ppppuStack_308;
  uint ****ppppuStack_304;
  uint ****local_300;
  undefined4 ****ppppuStack_2fc;
  uint ****ppppuStack_2f8;
  undefined4 ***pppuStack_2f4;
  uint uStack_2f0;
  undefined4 ****ppppuStack_2ec;
  uint ****local_2e8;
  undefined4 ****local_2e4;
  uint ****local_2e0;
  undefined4 ***pppuStack_2dc;
  uint uStack_2d8;
  undefined4 ****ppppuStack_2d4;
  undefined1 auStack_2d0 [72];
  uint ****local_288;
  undefined4 ****local_284;
  uint ****local_280;
  undefined4 ***pppuStack_27c;
  uint uStack_278;
  undefined4 ****ppppuStack_274;
  undefined1 auStack_270 [72];
  uint ****local_228;
  undefined4 ****ppppuStack_224;
  uint ****ppppuStack_220;
  undefined4 ***pppuStack_21c;
  uint uStack_218;
  undefined4 ****ppppuStack_214;
  undefined4 ****local_210;
  uint ****local_20c;
  undefined4 ****local_208;
  uint ****local_1c8;
  undefined4 ****ppppuStack_1c4;
  uint ****ppppuStack_1c0;
  undefined4 ***pppuStack_1bc;
  uint uStack_1b8;
  undefined4 ****ppppuStack_1b4;
  undefined4 ****local_1b0;
  uint ****local_1ac;
  undefined4 ****local_1a8;
  uint ****local_1a4;
  undefined4 ****local_1a0;
  uint ****local_19c;
  undefined4 ****local_198;
  uint ****local_194;
  undefined4 ***local_190;
  uint uStack_18c;
  undefined4 ****local_188;
  undefined4 uStack_184;
  undefined4 ****local_180;
  uint ****ppppuStack_17c;
  undefined4 ****ppppuStack_178;
  uint ****ppppuStack_174;
  undefined4 ***pppuStack_170;
  uint uStack_16c;
  undefined4 ****ppppuStack_168;
  undefined1 local_164;
  undefined1 auStack_160 [32];
  uint local_140;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  uint uStack_130;
  uint local_12c;
  uint uStack_128;
  uint uStack_124;
  uint local_120;
  uint uStack_11c;
  undefined4 ****local_f4;
  uint ****local_f0;
  undefined4 ****ppppuStack_ec;
  uint ****ppppuStack_e8;
  undefined4 ***pppuStack_e4;
  uint uStack_e0;
  undefined4 ****ppppuStack_dc;
  undefined4 ****local_d8;
  uint ****local_d4;
  undefined4 ****local_d0;
  uint ****local_cc;
  undefined4 ****ppppuStack_c8;
  uint ****ppppuStack_c4;
  undefined4 ***pppuStack_c0;
  uint uStack_bc;
  undefined4 ****ppppuStack_b8;
  undefined1 auStack_b4 [72];
  uint ****local_6c;
  undefined4 ***local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 ***local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 auStack_48 [12];
  int local_3c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x154)) {
  case 0:
    *(undefined2 *)(param_2 + 0x155) = 0;
    *(undefined4 *)(param_2 + 0x94) = *(undefined4 *)(param_2 + 0x90);
    FUN_01bed4e2(param_2 + 0x48,param_2,0x48);
    piVar7 = (int *)FUN_00a52660(*(undefined4 *)(param_2 + 0x88));
    if (piVar7 != (int *)0x0) {
      local_1a0 = (undefined4 ****)&DAT_80000000;
      local_1a4 = (uint ****)0x0;
      local_1ac = (uint ****)0x0;
      local_1b0 = (undefined4 ****)0x0;
      FUN_0196ac88(&local_d8,&local_1b0);
      uVar5 = local_d8._0_1_;
      uVar17 = (uint)local_d8 & 0xff;
      if (uVar17 == 6) {
        FUN_00e0fe5c(local_d4);
      }
      else {
        FUN_01bed4e2((uint)&local_288 | 1,(uint)&local_d8 | 1,0x17);
        local_288 = (uint ****)CONCAT31(local_288._1_3_,uVar5);
        if (uVar17 == 5) {
          local_19c = (uint ****)0x0;
          local_198 = local_284;
          local_190 = pppuStack_27c;
          if (local_284 == (undefined4 ****)0x0) {
            local_190 = (undefined4 ***)0x0;
          }
          local_1a8 = local_284;
          local_1b0 = (undefined4 ****)(uint)(local_284 != (undefined4 ****)0x0);
          local_194 = local_280;
          local_1a4 = local_280;
          local_1ac = (uint ****)0x0;
          local_1a0 = local_1b0;
          FUN_00fea674(auStack_48,&local_1b0);
          if (local_3c != 0) {
            FUN_0067b1ac(&local_1b0,auStack_48);
            local_340 = local_1b0;
            local_33c = local_1ac;
            local_338 = local_1a8;
            cVar6 = (char)local_1a4;
            local_1c8._0_3_ = (undefined3)((uint)local_1a4 >> 8);
            FUN_00e0febc(&local_288);
            if (cVar6 != '\x02') {
              local_1b0 = local_340;
              local_1ac = local_33c;
              local_1a8 = local_338;
              local_1a4 = (uint ****)CONCAT31((int3)local_1c8,cVar6);
              DataMemoryBarrier(0xb);
              if (*(int *)(*piVar7 + 0x18) != 0) {
                FUN_00b065ec(*piVar7 + 8,&local_1b0);
              }
              if ((char)local_1a4 != '\x02') {
                local_d8 = local_1b0;
                local_d4 = local_1ac;
                local_d0 = local_1a8;
                local_cc = local_1a4;
                FUN_019cf348();
                if ((DAT_01d50f88 < 5) &&
                   (((DAT_01d4c488 - 1 < 2 ||
                     ((DAT_01d4c488 != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d4c480), cVar6 != '\0'))))
                    && (iVar8 = FUN_01aaa278(DAT_01d4c480), iVar8 != 0)))) {
                  local_280 = (uint ****)(DAT_01d4c480 + 0x1c);
                  if (*(uint *****)(DAT_01d4c480 + 0x20) == (uint ****)0x0) {
LAB_005d5e7c:
                    /* WARNING: Subroutine does not return */
                    FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17708);
                  }
                  local_d4 = (uint ****)&local_2e8;
                  local_1a8 = *(undefined4 *****)(DAT_01d4c480 + 0x24);
                  local_1a4 = *(uint *****)(DAT_01d4c480 + 0x28);
                  local_d8 = &local_1b0;
                  local_288 = (uint ****)&local_d8;
                  local_284 = (undefined4 ****)&DAT_00000001;
                  local_1a0 = (undefined4 ****)0x0;
                  local_d0 = (undefined4 ****)&DAT_01d2ea4c;
                  local_2e4 = (undefined4 ****)&DAT_0000006b;
                  local_2e8 = (uint ****)0x3fe987;
                  local_1b0 = (undefined4 ****)*local_280;
                  local_1ac = *(uint *****)(DAT_01d4c480 + 0x20);
                  FUN_00e0ff40(&local_288);
                }
                else {
                  iVar8 = DAT_01d4c480;
                  if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                    local_20c = *(uint *****)(DAT_01d4c480 + 0x14);
                    local_208 = *(undefined4 *****)(DAT_01d4c480 + 0x18);
                    local_210 = (undefined4 ****)&DAT_00000001;
                    DataMemoryBarrier(0xb);
                    puVar16 = DAT_01d4edc8;
                    pcVar1 = DAT_01d4edc4;
                    if (DAT_01d51174 != 2) {
                      puVar16 = &DAT_01cfc5e0;
                      pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                    }
                    iVar10 = (*(code *)puVar16[3])(pcVar1);
                    if (iVar10 != 0) {
                      local_2e0 = (uint ****)(DAT_01d4c480 + 0x1c);
                      if (*(uint *****)(DAT_01d4c480 + 0x20) == (uint ****)0x0) goto LAB_005d5e7c;
                      local_284 = &local_f4;
                      local_1a8 = *(undefined4 *****)(DAT_01d4c480 + 0x24);
                      local_1a4 = *(uint *****)(DAT_01d4c480 + 0x28);
                      local_288 = (uint ****)&local_1b0;
                      local_2e8 = (uint ****)&local_288;
                      local_2e4 = (undefined4 ****)&DAT_00000001;
                      local_1a0 = (undefined4 ****)0x0;
                      local_280 = (uint ****)&DAT_01d2ea4c;
                      local_f0 = (uint ****)&DAT_0000006b;
                      local_f4 = (undefined4 ****)0x3fe987;
                      local_d8 = local_210;
                      local_d4 = local_20c;
                      local_d0 = local_208;
                      local_1b0 = (undefined4 ****)*local_2e0;
                      local_1ac = *(uint *****)(DAT_01d4c480 + 0x20);
                      FUN_01aaa328(iVar8,pcVar1,puVar16[4],&local_d8,&local_2e8);
                    }
                  }
                }
              }
            }
            goto LAB_005d5748;
          }
          FUN_0165a1f4(auStack_48);
        }
        FUN_00e0febc(&local_288);
      }
    }
LAB_005d5748:
    iVar8 = *(int *)(*(int *)(param_2 + 0x94) + 4);
    *(undefined1 *)(param_2 + 0x194) = 0;
    *(int *)(param_2 + 0x158) = iVar8 + 8;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c02210);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c02210);
  case 4:
    goto switchD_005d549c_caseD_4;
  }
  FUN_005fe098(local_400,param_2 + 0x158,param_3);
  if (local_400[0] == -0x7fffffff) {
    uVar5 = 3;
    *param_1 = 3;
    param_1[1] = 0;
    goto LAB_005d5c44;
  }
  *(undefined1 *)(param_2 + 0x156) = 1;
  FUN_01bed4e2(param_2 + 0x98,local_400,0xbc);
  FUN_00bba254(param_2 + 0x158);
  iVar8 = *(int *)(*(int *)(param_2 + 0x94) + 4);
  *(undefined1 *)(param_2 + 0x2f8) = 0;
  *(int *)(param_2 + 0x158) = iVar8 + 8;
switchD_005d549c_caseD_4:
  FUN_005fe48c(&local_1b0,param_2 + 0x158,param_3);
  ppppuVar3 = local_1a8;
  ppppuVar2 = local_1ac;
  ppppuVar15 = local_1b0;
  uVar17 = (uint)local_194 & 0xffff;
  if (uVar17 == 0x256) {
    *param_1 = 3;
    param_1[1] = 0;
    uVar5 = 4;
    goto LAB_005d5c44;
  }
  local_320 = local_190;
  uStack_31c = uStack_18c;
  ppppuStack_318 = local_188;
  uStack_314 = uStack_184;
  local_310 = local_180;
  ppppuStack_30c = ppppuStack_17c;
  ppppuStack_308 = ppppuStack_178;
  ppppuStack_304 = ppppuStack_174;
  if (*(char *)(param_2 + 0x2f8) == '\x03') {
    FUN_005fc224(param_2 + 0x160);
  }
  local_340 = (undefined4 ****)local_320;
  local_33c = (uint ****)uStack_31c;
  local_338 = ppppuStack_318;
  uStack_334 = uStack_314;
  local_330 = local_310;
  ppppuStack_32c = ppppuStack_30c;
  ppppuStack_328 = ppppuStack_308;
  local_324 = ppppuStack_304;
  *(undefined1 *)(param_2 + 0x156) = 0;
  if (*(undefined4 *****)(param_2 + 0x98) == (undefined4 ****)&DAT_80000000) {
    uVar18 = (uint)ppppuStack_304 & 0xffff;
    local_490 = (undefined4 ****)&SUB_00000004;
LAB_005d5a70:
    local_300 = local_2e8;
    ppppuStack_2fc = local_2e4;
    ppppuStack_2f8 = local_2e0;
    pppuStack_2f4 = pppuStack_2dc;
    uStack_2f0 = uStack_2d8;
    ppppuStack_2ec = ppppuStack_2d4;
    local_228 = local_2e8;
    ppppuStack_224 = local_2e4;
    ppppuStack_220 = local_2e0;
    pppuStack_21c = pppuStack_2dc;
    uStack_218 = uStack_2d8;
    ppppuStack_214 = ppppuStack_2d4;
    uVar5 = *(undefined1 *)(param_2 + 0x150);
    pppuVar14 = (undefined4 ***)0x255;
    if (uVar18 != 0x255) {
      uVar9 = FUN_012920c0(local_340);
      uVar11 = (uint)((ulonglong)uVar9 * 0x15180);
      local_4a4 = local_338;
      uVar12 = uVar11 + 0x886cb780;
      local_4b4 = (undefined4 ****)(uVar12 + (int)local_33c);
      local_4a8 = (uint ****)
                  (((int)uVar9 >> 0x1f) * 0x15180 + (int)((ulonglong)uVar9 * 0x15180 >> 0x20) + -0xf
                   + (uint)(0x7793487f < uVar11) + (uint)CARRY4(uVar12,(uint)local_33c));
    }
    uStack_408 = 0xfffffff1;
    uVar18 = (uint)(uVar18 != 0x255);
    if (uVar17 != 0x255) {
      uVar9 = FUN_012920c0(ppppuVar15);
      uVar11 = (uint)((ulonglong)uVar9 * 0x15180);
      uVar12 = uVar11 + 0x886cb780;
      pppuVar14 = (undefined4 ***)(uVar12 + (int)ppppuVar2);
      uStack_408 = ((int)uVar9 >> 0x1f) * 0x15180 + (int)((ulonglong)uVar9 * 0x15180 >> 0x20) + -0xf
                   + (uint)(0x7793487f < uVar11) + (uint)CARRY4(uVar12,(uint)ppppuVar2);
    }
    ppppuVar15 = (undefined4 ****)(uint)(uVar17 != 0x255);
    FUN_0160aaa4(auStack_160,0);
    local_194 = (uint ****)0x0;
    local_180 = local_490;
    local_188 = ppppuVar3;
    ppppuStack_17c = local_228;
    ppppuStack_178 = ppppuStack_224;
    ppppuStack_174 = ppppuStack_220;
    pppuStack_170 = pppuStack_21c;
    uStack_16c = uStack_218;
    ppppuStack_168 = ppppuStack_214;
    local_120 = 0;
    local_418 = local_19c;
    ppppuStack_410 = (uint ****)0x0;
    ppppuStack_404 = ppppuVar3;
    ppppuStack_414 = ppppuVar15;
    pppuStack_40c = pppuVar14;
    local_198 = ppppuVar15;
    local_190 = pppuVar14;
    local_164 = uVar5;
    FUN_01bed4e2(auStack_460,&uStack_184,0x44);
    local_488 = local_140;
    uStack_484 = uStack_13c;
    uStack_480 = uStack_138;
    uStack_47c = uStack_134;
    uStack_478 = uStack_130;
    local_474 = local_12c;
    uStack_470 = uStack_128;
    uStack_46c = uStack_124;
    uStack_468 = local_120;
    uStack_464 = uStack_11c;
    *(undefined1 *)(param_2 + 0x156) = 0;
    FUN_00f9604c(param_2 + 0x48);
    local_490 = local_4b4;
  }
  else {
    local_1b0 = *(undefined4 *****)(param_2 + 0x98);
    FUN_01bed4e2(&local_1ac,param_2 + 0x9c,0xb4);
    uVar18 = (uint)local_324 & 0xffff;
    ppppuVar13 = (undefined4 ****)0x0;
    if (uVar18 != 0x255) {
      ppppuVar13 = &local_340;
    }
    FUN_00ab34d4(&local_f4,local_1ac,local_1a8,ppppuVar13);
    ppppuVar4 = local_f0;
    local_490 = local_f4;
    if (local_f4 != (undefined4 ****)&SUB_00000004) {
      local_1c8 = local_f0;
      ppppuStack_1c4 = ppppuStack_ec;
      ppppuStack_1c0 = ppppuStack_e8;
      pppuStack_1bc = pppuStack_e4;
      uStack_1b8 = uStack_e0;
      ppppuStack_1b4 = ppppuStack_dc;
      FUN_01a2affc(&local_1b0);
      local_288 = local_1c8;
      local_284 = ppppuStack_1c4;
      local_280 = ppppuStack_1c0;
      pppuStack_27c = pppuStack_1bc;
      uStack_278 = uStack_1b8;
      ppppuStack_274 = ppppuStack_1b4;
      FUN_01bed4e2(auStack_270,&local_210,0x44);
LAB_005d5a24:
      local_2e8 = local_288;
      local_2e4 = local_284;
      local_2e0 = local_280;
      pppuStack_2dc = pppuStack_27c;
      uStack_2d8 = uStack_278;
      ppppuStack_2d4 = ppppuStack_274;
      goto LAB_005d5a70;
    }
    local_d8 = &local_58;
    local_50 = 0;
    local_58 = (undefined4 ***)0x0;
    local_cc = (uint ****)0x0;
    local_6c = local_f0;
    local_54 = 1;
    local_d0 = (undefined4 ****)0x60000020;
    local_d4 = (uint ****)&DAT_01c02660;
    iVar8 = FUN_00667a08(&local_6c,&local_d8);
    if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&local_68,&DAT_01c02728,&DAT_01d30334);
    }
    local_68 = local_58;
    uStack_64 = local_54;
    uStack_60 = local_50;
    FUN_01a70fd4(&local_d8,0xd);
    (*(code *)**ppppuVar4)(ppppuVar4);
    ppppuVar13 = local_d0;
    ppppuVar4 = local_d4;
    local_490 = local_d8;
    local_4a8 = local_d4;
    local_4a4 = local_d0;
    local_1c8 = local_cc;
    ppppuStack_1c4 = ppppuStack_c8;
    ppppuStack_1c0 = ppppuStack_c4;
    pppuStack_1bc = pppuStack_c0;
    uStack_1b8 = uStack_bc;
    ppppuStack_1b4 = ppppuStack_b8;
    FUN_01bed4e2(&local_210,auStack_b4,0x44);
    FUN_01a2affc(&local_1b0);
    local_288 = local_1c8;
    local_284 = ppppuStack_1c4;
    local_280 = ppppuStack_1c0;
    pppuStack_27c = pppuStack_1bc;
    uStack_278 = uStack_1b8;
    ppppuStack_274 = ppppuStack_1b4;
    FUN_01bed4e2(auStack_270,&local_210,0x44);
    if (((uint)local_490 & 7) == 4) {
      goto LAB_005d5a70;
    }
    if (local_490 == (undefined4 ****)&DAT_00000003) {
      local_490 = ppppuVar13;
      goto LAB_005d5a24;
    }
    FUN_01bed4e2(&local_2e8,&local_288,0x5c);
    if (local_490 == (undefined4 ****)&DAT_00000003 && ppppuVar4 == (uint ****)0x0) {
      local_490 = ppppuVar13;
      goto LAB_005d5a70;
    }
    local_300 = local_2e8;
    ppppuStack_2fc = local_2e4;
    ppppuStack_2f8 = local_2e0;
    pppuStack_2f4 = pppuStack_2dc;
    uStack_2f0 = uStack_2d8;
    ppppuStack_2ec = ppppuStack_2d4;
    FUN_01bed4e2(auStack_460,auStack_2d0,0x44);
    local_418 = local_300;
    ppppuStack_414 = ppppuStack_2fc;
    ppppuStack_410 = ppppuStack_2f8;
    pppuStack_40c = pppuStack_2f4;
    uStack_408 = uStack_2f0;
    ppppuStack_404 = ppppuStack_2ec;
    *(undefined1 *)(param_2 + 0x156) = 0;
    FUN_00f9604c(param_2 + 0x48);
    uVar18 = 2;
    if (*(char *)(param_2 + 0x155) == '\x01') {
      FUN_00f9604c(param_2);
    }
  }
  param_1[3] = (uint)local_4a8;
  *param_1 = uVar18;
  param_1[1] = 0;
  param_1[2] = (uint)local_490;
  param_1[4] = (uint)local_4a4;
  param_1[5] = (uint)local_418;
  param_1[6] = (uint)ppppuStack_414;
  param_1[7] = (uint)ppppuStack_410;
  param_1[8] = (uint)pppuStack_40c;
  param_1[9] = uStack_408;
  param_1[10] = (uint)ppppuStack_404;
  FUN_01bed4e2(param_1 + 0xb,auStack_460,0x44);
  param_1[0x1c] = local_488;
  param_1[0x1d] = uStack_484;
  param_1[0x1e] = uStack_480;
  param_1[0x1f] = uStack_47c;
  param_1[0x20] = uStack_478;
  param_1[0x21] = local_474;
  param_1[0x22] = uStack_470;
  param_1[0x23] = uStack_46c;
  param_1[0x24] = uStack_468;
  param_1[0x25] = uStack_464;
  uVar5 = 1;
LAB_005d5c44:
  *(undefined1 *)(param_2 + 0x154) = uVar5;
  return;
}

