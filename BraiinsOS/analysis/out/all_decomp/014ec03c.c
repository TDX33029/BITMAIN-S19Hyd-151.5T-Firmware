// FUN_014ec03c @ 014ec03c size=2336 calls_out=25 calls_in=1
// strings: send stream capacity unexpectedly closedFuture polled twice

/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong FUN_014ec03c(int *param_1,undefined4 *param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined1 *puVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  byte *pbVar16;
  int *piVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  undefined8 uVar21;
  undefined1 local_330;
  undefined2 local_32f;
  undefined1 local_32d;
  uint local_32c;
  uint local_328;
  uint uStack_324;
  uint local_318;
  int local_314;
  uint local_310;
  uint local_30c;
  uint uStack_308;
  uint uStack_304;
  undefined4 uStack_300;
  undefined4 local_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 local_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  uint local_2d8;
  int local_2d4;
  uint local_2d0;
  uint local_2cc;
  uint uStack_2c8;
  uint uStack_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 local_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 local_298 [6];
  uint local_280;
  int local_27c;
  uint local_278;
  uint uStack_274;
  uint uStack_270;
  uint local_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  uint local_240;
  uint uStack_23c;
  uint uStack_238;
  uint uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined1 local_224;
  char local_223;
  undefined1 local_20c;
  undefined1 local_20b;
  int local_1f4;
  uint local_1f0;
  int local_1ec;
  uint local_1e8;
  int iStack_1e4;
  uint uStack_1e0;
  uint uStack_1dc;
  uint uStack_1d8;
  uint local_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  uint local_198;
  int local_194;
  uint uStack_190;
  uint uStack_18c;
  uint uStack_188;
  uint local_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined1 local_158 [20];
  undefined4 local_144;
  undefined4 local_134;
  undefined4 local_124;
  undefined4 local_114;
  undefined2 local_104;
  undefined4 local_100;
  undefined1 local_fc;
  undefined1 local_f3;
  int local_f0;
  undefined1 local_ec;
  undefined4 local_e8;
  code *local_e4;
  uint local_e0;
  uint uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  uint local_2c;
  int local_28;
  
  puVar5 = (uint *)((uint)local_298 | 4);
  while( true ) {
    puVar14 = &local_e8;
    FUN_014ac0f4(param_1,1);
    iVar6 = FUN_014ac298(param_1);
    if (iVar6 != 0) break;
    do {
      FUN_0146aa28(puVar14,param_1,*param_2);
      uVar7 = (uint)local_e8 & 0xff;
      if (uVar7 == 7) goto LAB_014ec250;
      if (uVar7 != 5) {
        if (uVar7 == 6) {
          puVar14 = (undefined4 *)thunk_FUN_016d4a50(0xc);
          if (puVar14 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0xc);
          }
          *(undefined1 *)(puVar14 + 2) = 9;
          *puVar14 = 0;
          FUN_01497114(puVar14,"send stream capacity unexpectedly closedFuture polled twice",0x28);
          return ZEXT48(puVar14) << 0x20;
        }
        local_330 = (undefined1)local_e8;
        local_328 = local_e0;
        uStack_324 = uStack_dc;
        local_32f = *(undefined2 *)((uint)&local_e8 | 1);
        local_32d = *(undefined1 *)((undefined2 *)((uint)&local_e8 | 1) + 1);
        puVar5 = (uint *)&local_330;
        local_32c = (uint)local_e4;
        goto LAB_014ec770;
      }
    } while (local_e4 == (code *)0x0);
LAB_014ec0c4:
    FUN_014a6c58(&local_318,param_1 + 4,param_2);
    if (local_318 == 6 && local_314 == 0) {
LAB_014ec250:
      uVar8 = 1;
LAB_014ec254:
      return CONCAT44(puVar14,uVar8);
    }
    if ((local_318 & 7) == 4) {
      piVar11 = (int *)FUN_01496cfc();
      uVar8 = 2;
      if (*piVar11 == 0) goto LAB_014ec7a8;
      uVar21 = CONCAT44(piVar11[1],*piVar11);
      goto LAB_014ec330;
    }
    if (local_318 == 5) {
      local_e8 = (int *)0x2;
      cVar3 = FUN_014ac4a8(param_1,&local_e8,1);
      uVar8 = 0;
      puVar14 = (undefined4 *)0x0;
      if (cVar3 == '\f') goto LAB_014ec254;
      local_e8 = (int *)((uint)CONCAT21(local_e8._2_2_,cVar3) << 8);
      uVar4 = 3;
      goto LAB_014ec2e8;
    }
    local_2d0 = local_310;
    local_2d8 = local_318;
    local_2d4 = local_314;
    local_2cc = local_30c;
    uStack_2c8 = uStack_308;
    uStack_2c4 = uStack_304;
    local_2c0 = uStack_300;
    local_2bc = local_2fc;
    uStack_2b8 = uStack_2f8;
    uStack_2b4 = uStack_2f4;
    uStack_2b0 = uStack_2f0;
    local_2ac = local_2ec;
    uStack_2a8 = uStack_2e8;
    uStack_2a4 = uStack_2e4;
    uStack_2a0 = uStack_2e0;
    uStack_29c = uStack_2dc;
    if (local_318 != 3 || local_314 != 0) {
      FUN_014ac0f4(param_1,0);
      local_278 = local_2d0;
      uStack_274 = local_2cc;
      uStack_270 = uStack_2c8;
      local_26c = uStack_2c4;
      local_268 = local_2c0;
      uStack_264 = local_2bc;
      uStack_260 = uStack_2b8;
      uStack_25c = uStack_2b4;
      local_258 = uStack_2b0;
      local_254 = local_2ac;
      uStack_250 = uStack_2a8;
      uStack_24c = uStack_2a4;
      uStack_248 = uStack_2a0;
      uStack_244 = uStack_29c;
      iVar6 = *param_1;
      local_27c = local_314;
      piVar11 = (int *)(iVar6 + 8);
      local_280 = local_318;
      goto LAB_014ec3cc;
    }
    local_e8 = (int *)local_310;
    local_e4 = (code *)local_30c;
    local_e0 = uStack_308;
    uStack_dc = uStack_304;
    if (param_1[4] == 0) {
      uVar7 = (**(code **)(param_1[6] + 0x10))(param_1[5]);
    }
    else {
      uVar7 = (uint)(param_1[6] == 0);
    }
    *puVar5 = local_2d0;
    puVar5[1] = local_2cc;
    puVar5[2] = uStack_2c8;
    puVar5[3] = uStack_2c4;
    local_298[0] = 0;
    cVar3 = FUN_014ac4a8(param_1,local_298,uVar7);
    if (cVar3 != '\f') {
      local_224 = 3;
      puVar5 = (uint *)&local_224;
      local_223 = cVar3;
      goto LAB_014ec770;
    }
    if (uVar7 != 0) {
      return 0;
    }
  }
  FUN_014abba4(puVar14,param_1,*param_2);
  if (((uint)local_e8 & 0xff) == 6) goto LAB_014ec0c4;
  if (((uint)local_e8 & 0xff) == 5) {
    uVar4 = 2;
LAB_014ec2e8:
    local_e8 = (int *)CONCAT31(local_e8._1_3_,uVar4);
    puVar5 = &local_e8;
  }
  else {
    puVar5 = &local_240;
    local_240 = (uint)local_e8;
    uStack_23c = (uint)local_e4;
    uStack_238 = local_e0;
    uStack_234 = uStack_dc;
    uStack_230 = uStack_d8;
    uStack_22c = local_d4;
  }
  goto LAB_014ec770;
  while (uVar21 = (**(code **)(iVar6 + 0x18))(pbVar16), (int)uVar21 != 0) {
LAB_014ec330:
    iVar6 = (int)((ulonglong)uVar21 >> 0x20);
    pbVar16 = (byte *)uVar21;
    (**(code **)(iVar6 + 0x1c))(&local_e8,pbVar16);
    if ((local_e8 == (int *)0xb8558d8 && local_e0 == 0x7f7d8494) &&
        (local_e4 == (code *)0x291847ab && uStack_dc == 0xa2bc2329)) {
      uVar8 = 2;
      if (*pbVar16 < 3) {
        uVar8 = *(undefined4 *)(pbVar16 + *(int *)(&DAT_00422458 + (uint)*pbVar16 * 4));
      }
      goto LAB_014ec7a8;
    }
  }
  uVar8 = 2;
LAB_014ec7a8:
  FUN_014abdc4(param_1,uVar8);
  goto LAB_014ec778;
  while (bVar1 = (bool)hasExclusiveAccess(piVar11), !bVar1) {
LAB_014ec3cc:
    if (*piVar11 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar11);
      goto LAB_014ec3e8;
    }
  }
  *piVar11 = 1;
  DataMemoryBarrier(0xb);
LAB_014ec3e8:
  uVar7 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar3 = *(char *)(iVar6 + 0xc);
  }
  else {
    uVar7 = FUN_015bf3f8();
    uVar7 = uVar7 ^ 1;
    cVar3 = *(char *)(iVar6 + 0xc);
  }
  if (cVar3 != '\0') {
    local_e4._1_3_ = (undefined3)((uint)local_e4 >> 8);
    local_e4 = (code *)CONCAT31(local_e4._1_3_,(char)uVar7);
    local_e8 = piVar11;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_e8,&DAT_018a5c2c,&DAT_018a593c);
  }
  uVar20 = param_1[1];
  local_1f4 = iVar6 + 0x160;
  iVar19 = param_1[2];
  iVar18 = param_1[3];
  piVar17 = (int *)(iVar18 + 8);
  do {
    local_1f0 = uVar20;
    local_1ec = iVar19;
    if (*piVar17 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar17);
      goto LAB_014ec458;
    }
    bVar1 = (bool)hasExclusiveAccess(piVar17);
  } while (!bVar1);
  *piVar17 = 1;
  DataMemoryBarrier(0xb);
LAB_014ec458:
  uVar12 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar3 = *(char *)(iVar18 + 0xc);
  }
  else {
    uVar12 = FUN_015bf3f8();
    uVar12 = uVar12 ^ 1;
    cVar3 = *(char *)(iVar18 + 0xc);
  }
  if (cVar3 != '\0') {
    local_e4._1_3_ = (undefined3)((uint)local_e4 >> 8);
    local_e4 = (code *)CONCAT31(local_e4._1_3_,(char)uVar12);
    local_e8 = piVar17;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_e8,&DAT_018a5c1c,&DAT_018a594c);
  }
  local_1a8 = iVar6 + 0xf0;
  iVar13 = iVar18 + 0x10;
  iVar15 = iVar6 + 0xe8;
  local_1e8 = local_280;
  iStack_1e4 = local_27c;
  uStack_1e0 = local_278;
  uStack_1dc = uStack_274;
  uStack_1d8 = uStack_270;
  local_1d4 = local_26c;
  uStack_1d0 = local_268;
  uStack_1cc = uStack_264;
  uStack_1c8 = uStack_260;
  uStack_1c4 = uStack_25c;
  local_1c0 = local_258;
  uStack_1bc = local_254;
  uStack_1b8 = uStack_250;
  uStack_1b4 = uStack_24c;
  uStack_1b0 = uStack_248;
  uStack_1ac = uStack_244;
  local_1a4 = iVar15;
  local_1a0 = iVar13;
  local_198 = uVar20;
  local_194 = iVar19;
  if (((*(uint *)(iVar6 + 0x198) <= uVar20) ||
      (piVar9 = (int *)(*(int *)(iVar6 + 0x194) + uVar20 * 0xf8), *piVar9 == 3 && piVar9[1] == 0))
     || (piVar9[0x35] != iVar19)) {
    local_e8 = &local_194;
    local_e4 = FUN_0101a4ac;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00599806,&local_e8,&DAT_01882550);
  }
  puVar10 = (undefined1 *)piVar9[6];
  local_100 = FUN_01022864(&local_280);
  local_198 = local_280;
  local_194 = local_27c;
  uStack_190 = local_278;
  uStack_18c = uStack_274;
  uStack_188 = uStack_270;
  local_184 = local_26c;
  uStack_180 = local_268;
  uStack_17c = uStack_264;
  uStack_178 = uStack_260;
  uStack_174 = uStack_25c;
  local_170 = local_258;
  uStack_16c = local_254;
  uStack_168 = uStack_250;
  uStack_164 = uStack_24c;
  uStack_160 = uStack_248;
  uStack_15c = uStack_244;
  local_f3 = 2;
  local_ec = 5;
  local_158[0] = 0xb;
  local_fc = 0;
  local_104 = 0;
  local_114 = 0;
  local_124 = 0;
  local_134 = 0;
  local_144 = 0;
  local_f0 = iVar19;
  local_2c = uVar20;
  local_28 = iVar19;
  if (((*(uint *)(iVar6 + 0x198) <= uVar20) ||
      (piVar9 = (int *)(*(int *)(iVar6 + 0x194) + uVar20 * 0xf8), *piVar9 == 3 && piVar9[1] == 0))
     || (piVar9[0x35] != iVar19)) {
    local_e8 = &local_28;
    local_e4 = FUN_0101a4ac;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00599806,&local_e8,&DAT_01882550);
  }
  cVar3 = *(byte *)(piVar9 + 8) - 6;
  if (*(byte *)(piVar9 + 8) < 6) {
    cVar3 = '\x06';
  }
  if ((cVar3 == '\x05' || cVar3 == '\x03') && (*(char *)((int)piVar9 + 0x21) != '\0')) {
    FUN_0101ffc0();
    FUN_016dd1aa(&local_e0,&local_198,0xb0);
    bVar1 = true;
    local_e8 = (int *)CONCAT31(local_e8._1_3_,1);
    FUN_01473b88(iVar6 + 0xf8,&local_e8,iVar13,&local_1f4,iVar15);
    uVar4 = 0xc;
    FUN_0101c8fc(iVar6 + 0xf8,0,&local_1f4,iVar6 + 0x10);
  }
  else {
    FUN_01015c1c(&local_198);
    FUN_01404298(local_158);
    uVar4 = 1;
    bVar1 = false;
  }
  FUN_0102e068(iVar6 + 0x10,&local_1f4,puVar10 != &DAT_3b9aca00);
  if (((uVar12 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar19 = FUN_015bf3f8(), iVar19 == 0)) {
    *(undefined1 *)(iVar18 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar18 = *piVar17;
    bVar2 = (bool)hasExclusiveAccess(piVar17);
  } while (!bVar2);
  *piVar17 = 0;
  if (iVar18 == 2) {
    FUN_016d6968(0xf0,piVar17,0x81,1);
  }
  if (((uVar7 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar18 = FUN_015bf3f8(), iVar18 == 0)
     ) {
    *(undefined1 *)(iVar6 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar11;
    bVar2 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar2);
  *piVar11 = 0;
  if (iVar6 == 2) {
    FUN_016d6968(0xf0,piVar11,0x81,1);
  }
  piVar11 = (int *)0x0;
  if (bVar1) goto LAB_014ec778;
  local_20c = 3;
  puVar5 = (uint *)&local_20c;
  local_20b = uVar4;
LAB_014ec770:
  piVar11 = (int *)FUN_01496dbc(puVar5);
LAB_014ec778:
  return ZEXT48(piVar11) << 0x20;
}

