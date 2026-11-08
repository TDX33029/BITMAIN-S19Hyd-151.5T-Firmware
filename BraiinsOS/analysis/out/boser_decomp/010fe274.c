// FUN_010fe274 @ 010fe274 size=1700 calls_out=20 calls_in=0
// strings: 

void FUN_010fe274(undefined4 *param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 local_484;
  undefined4 local_480;
  undefined1 *local_474;
  undefined1 auStack_470 [136];
  undefined4 local_3e8;
  undefined4 local_3e4;
  int local_3e0;
  int local_3dc;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 local_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 local_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 local_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined4 local_398;
  undefined4 local_394;
  undefined4 local_370;
  undefined4 local_36c;
  int local_340;
  int local_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 local_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined1 auStack_31c [124];
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 local_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 local_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 local_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  int local_210;
  int local_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 local_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 local_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 local_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined1 auStack_1c0 [72];
  int local_178;
  int local_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 local_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined1 auStack_154 [76];
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined1 auStack_98 [48];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x94)) {
  case 0:
    puVar8 = (undefined4 *)(param_2 + 0x90);
    *(undefined1 *)(param_2 + 0xa0) = 0;
    *(undefined2 *)(param_2 + 0x95) = 0x101;
    *(undefined1 *)(param_2 + 0x97) = 1;
    *(int *)(param_2 + 0x98) = param_2;
    *(undefined4 **)(param_2 + 0x9c) = puVar8;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c22510);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c22510);
  case 3:
    if (*(char *)(param_2 + 0xa0) != '\0') {
      if (*(char *)(param_2 + 0xa0) == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20db4);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20db4);
    }
    puVar8 = *(undefined4 **)(param_2 + 0x9c);
    break;
  case 4:
    goto switchD_010fe298_caseD_4;
  case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0xad)) {
    case 0:
      uVar5 = *(undefined4 *)(param_2 + 0xa4);
      uVar6 = *(undefined4 *)(param_2 + 0xa8);
      goto LAB_010fe4c8;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1fb9c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1fb9c);
    case 3:
      uVar6 = *(undefined4 *)(param_2 + 0x98);
    }
    goto LAB_010fe568;
  }
  piVar4 = (int *)*puVar8;
  do {
    iVar7 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar7 + 1;
  if (iVar7 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x10fe948);
    (*pcVar1)();
  }
  *(int **)(param_2 + 0x98) = piVar4;
  *(undefined1 *)(param_2 + 0xa0) = 1;
  *(undefined1 *)(param_2 + 0x96) = 0;
  FUN_01bed4e2(auStack_470,param_2,0x88);
  local_3e8 = *(undefined4 *)(param_2 + 0x88);
  local_3e4 = *(undefined4 *)(param_2 + 0x8c);
  *(undefined1 *)(param_2 + 0x95) = 0;
  FUN_00f1eb4c(&local_340,auStack_470,param_2 + 0x90);
  FUN_01bed4e2(&local_3e0,&local_340,0xa0);
  FUN_01bed4e2(param_2 + 0xa0,&local_3e0,0xa0);
switchD_010fe298_caseD_4:
  FUN_00fb2224(&local_340,param_2 + 0xa0);
  uVar6 = local_338;
  iVar7 = local_33c;
  if (local_340 == 1) {
    *param_1 = 3;
    param_1[1] = 0;
    uVar3 = 4;
    goto LAB_010fe8d4;
  }
  if (*(char *)(param_2 + 0x138) == '\x03' || *(char *)(param_2 + 0x138) == '\0') {
    FUN_01839f10(param_2 + 0xa0);
  }
  if (iVar7 == 0) {
    uVar5 = *(undefined4 *)(param_2 + 0x98);
    *(undefined4 *)(param_2 + 0xa4) = uVar5;
    *(undefined1 *)(param_2 + 0xad) = 0;
    *(undefined1 *)(param_2 + 0x97) = 0;
    *(undefined4 *)(param_2 + 0xa8) = uVar6;
LAB_010fe4c8:
    *(undefined4 *)(param_2 + 0xa0) = uVar5;
    *(undefined1 *)(param_2 + 0xac) = 0;
    FUN_0160aaa4(&local_3e0,0);
    local_3a0 = 0;
    piVar4 = (int *)FUN_00a5284c(&local_3a0,uVar6);
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00a934a0();
      }
    }
    FUN_01bed4e2(auStack_1c0,&local_3e0,0x48);
    *(undefined1 *)(param_2 + 0xac) = 0;
    uVar6 = FUN_00e48968(*(int *)(param_2 + 0xa0) + 8,auStack_1c0);
    *(undefined4 *)(param_2 + 0x98) = uVar6;
    *(undefined **)(param_2 + 0x9c) = &DAT_01c172b4;
LAB_010fe568:
    local_474 = (undefined1 *)(param_2 + 0xad);
    (**(code **)(*(int *)(param_2 + 0x9c) + 0xc))(&local_3e0,uVar6,param_3);
    iVar9 = local_3dc;
    iVar7 = local_3e0;
    if (local_3e0 == 4 && local_3dc == 0) {
      *local_474 = 3;
LAB_010fe5a8:
      *param_1 = 3;
      param_1[1] = 0;
      uVar3 = 5;
      goto LAB_010fe8d4;
    }
    FUN_01bed4e2(&local_100,&local_3d8,0x68);
    FUN_01139b38(*(undefined4 *)(param_2 + 0x98),*(undefined4 *)(param_2 + 0x9c));
    if (iVar7 == 3 && iVar9 == 0) {
      FUN_01bed4e2(&local_3e0,&local_100,0x68);
      FUN_00a40ce8(&local_170,&local_3e0);
      local_40 = local_170;
      uStack_3c = uStack_16c;
      uStack_38 = uStack_168;
      local_34 = local_164;
      uStack_30 = uStack_160;
      uStack_2c = uStack_15c;
      uStack_28 = uStack_158;
      *(undefined1 *)(param_2 + 0xac) = 0;
      piVar4 = *(int **)(param_2 + 0xa0);
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_011808f4(*(undefined4 *)(param_2 + 0xa0));
      }
      *local_474 = 1;
      iVar7 = 0;
      iVar9 = 3;
    }
    else {
      local_178 = iVar7;
      local_174 = iVar9;
      FUN_01bed4e2(&local_170,&local_100,0x68);
      local_104 = local_36c;
      local_108 = local_370;
      FUN_01bed4e2(auStack_31c,auStack_154,0x54);
      local_33c = iVar9;
      local_340 = iVar7;
      local_338 = local_100;
      uStack_334 = uStack_fc;
      uStack_330 = uStack_f8;
      local_32c = local_f4;
      uStack_328 = uStack_f0;
      uStack_324 = uStack_ec;
      uStack_320 = uStack_e8;
      FUN_00d91ba0(auStack_98,&local_340);
      FUN_00da9b4c(&local_3e0,auStack_98);
      local_40 = local_3d8;
      uStack_3c = uStack_3d4;
      uStack_38 = uStack_3d0;
      local_34 = local_3cc;
      uStack_30 = uStack_3c8;
      uStack_2c = uStack_3c4;
      uStack_28 = uStack_3c0;
      local_68 = local_3bc;
      uStack_64 = uStack_3b8;
      uStack_60 = uStack_3b4;
      uStack_5c = uStack_3b0;
      local_58 = local_3ac;
      uStack_54 = uStack_3a8;
      uStack_50 = uStack_3a4;
      uStack_4c = local_3a0;
      uStack_48 = uStack_39c;
      *(undefined1 *)(param_2 + 0xac) = 0;
      piVar4 = *(int **)(param_2 + 0xa0);
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar7 + -1;
      local_484 = local_394;
      local_480 = local_398;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_011808f4(*(undefined4 *)(param_2 + 0xa0));
      }
      *local_474 = 1;
      iVar7 = local_3dc;
      iVar9 = local_3e0;
      if (local_3e0 == 4 && local_3dc == 0) goto LAB_010fe5a8;
    }
    local_230 = local_40;
    uStack_22c = uStack_3c;
    uStack_228 = uStack_38;
    local_224 = local_34;
    uStack_220 = uStack_30;
    uStack_21c = uStack_2c;
    uStack_218 = uStack_28;
    local_258 = local_68;
    uStack_254 = uStack_64;
    uStack_250 = uStack_60;
    uStack_24c = uStack_5c;
    local_248 = local_58;
    uStack_244 = uStack_54;
    uStack_240 = uStack_50;
    uStack_23c = uStack_4c;
    uStack_238 = uStack_48;
    local_2a0 = local_68;
    uStack_29c = uStack_64;
    uStack_298 = uStack_60;
    uStack_294 = uStack_5c;
    local_290 = local_58;
    uStack_28c = uStack_54;
    uStack_288 = uStack_50;
    uStack_284 = uStack_4c;
    uStack_280 = uStack_48;
    local_278 = local_40;
    uStack_274 = uStack_3c;
    uStack_270 = uStack_38;
    local_26c = local_34;
    uStack_268 = uStack_30;
    uStack_264 = uStack_2c;
    uStack_260 = uStack_28;
    FUN_00fb4058((undefined4 *)(param_2 + 0x98));
    if (iVar9 == 3 && iVar7 == 0) {
      FUN_00a28800(&local_210,&local_230);
    }
    else {
      local_208 = local_230;
      uStack_204 = uStack_22c;
      uStack_200 = uStack_228;
      local_1fc = local_224;
      uStack_1f8 = uStack_220;
      uStack_1f4 = uStack_21c;
      uStack_1f0 = uStack_218;
      local_1ec = local_258;
      uStack_1e8 = uStack_254;
      uStack_1e4 = uStack_250;
      uStack_1e0 = uStack_24c;
      local_1dc = local_248;
      uStack_1d8 = uStack_244;
      uStack_1d4 = uStack_240;
      uStack_1d0 = uStack_23c;
      uStack_1cc = uStack_238;
      local_1c4 = local_484;
      local_1c8 = local_480;
      local_210 = iVar9;
      local_20c = iVar7;
    }
    piVar4 = *(int **)(param_2 + 0x90);
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011808f4(*(undefined4 *)(param_2 + 0x90));
    }
  }
  else {
    FUN_0070821c(&local_210,iVar7,uVar6);
    piVar4 = *(int **)(param_2 + 0x98);
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011808f4(*(undefined4 *)(param_2 + 0x98));
    }
    if (*(char *)(param_2 + 0x96) != '\0') {
      FUN_01839f10(param_2);
    }
    piVar4 = *(int **)(param_2 + 0x90);
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011808f4(*(undefined4 *)(param_2 + 0x90));
    }
    if (*(char *)(param_2 + 0x95) == '\x01') {
      FUN_00b19860(*(undefined4 *)(param_2 + 0x88),*(undefined4 *)(param_2 + 0x8c));
    }
  }
  FUN_01bed4e2(param_1,&local_210,0x50);
  uVar3 = 1;
LAB_010fe8d4:
  *(undefined1 *)(param_2 + 0x94) = uVar3;
  return;
}

