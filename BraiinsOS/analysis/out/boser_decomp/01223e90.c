// FUN_01223e90 @ 01223e90 size=1076 calls_out=14 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01223e90(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined1 *unaff_r5;
  uint uVar8;
  int iVar9;
  int *piVar10;
  undefined4 uVar11;
  int local_380;
  int local_378;
  int local_368;
  int local_364;
  int local_360;
  int local_358;
  int iStack_354;
  int iStack_350;
  int local_34c;
  int iStack_348;
  int iStack_344;
  int iStack_340;
  undefined1 *local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  int local_318;
  int iStack_314;
  int iStack_310;
  int local_2f8;
  int iStack_2f4;
  int iStack_2f0;
  undefined1 auStack_2d8 [112];
  undefined1 auStack_268 [12];
  uint local_25c;
  undefined1 *local_220 [28];
  undefined4 local_1b0;
  undefined1 *local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  uint local_17c;
  undefined1 auStack_170 [4];
  undefined4 local_16c;
  int local_168;
  undefined1 auStack_128 [72];
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int iStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int local_b8;
  int local_b4;
  undefined1 auStack_98 [116];
  
  piVar4 = (int *)((uint)local_220 | 4);
  local_364 = 8;
  piVar5 = (int *)((uint)&local_338 | 4);
  local_380 = 8;
  local_360 = 0;
  local_368 = 0;
  do {
    iVar7 = local_360;
    piVar10 = (int *)param_2[0x2f];
    if (piVar10 != (int *)param_2[0x31]) {
      unaff_r5 = (undefined1 *)*piVar10;
      param_2[0x2f] = piVar10 + 0x30;
    }
    if (piVar10 == (int *)param_2[0x31] || unaff_r5 == (undefined1 *)0x4) {
      param_1[2] = local_368;
      param_1[3] = local_364;
      param_1[4] = local_360;
      *param_1 = 2;
      goto LAB_012241bc;
    }
    FUN_01bed4e2(auStack_268,piVar10 + 0x1c,0x48);
    FUN_01bed4e2(auStack_2d8,piVar10 + 1,0x6c);
    uVar1 = local_25c;
    local_220[0] = unaff_r5;
    FUN_01bed4e2(piVar4,auStack_2d8,0x6c);
    uVar8 = 0;
    if (uVar1 != 0x80000003) {
      uVar8 = (uint)(0x80000001 < uVar1);
    }
    FUN_01a60910(auStack_128,auStack_268);
    local_17c = uVar8;
    FUN_01bed4e2(auStack_170,auStack_128,0x48);
    iVar3 = local_168;
    uVar2 = local_16c;
    uVar11 = 0;
    if (local_168 < 0) {
LAB_01224248:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar11,local_378);
    }
    if (local_168 == 0) {
      local_378 = 1;
      iVar9 = 0;
    }
    else {
      uVar11 = 1;
      local_378 = FUN_01298504(local_168,1);
      if (local_378 == 0) {
        local_378 = iVar3;
        goto LAB_01224248;
      }
      iVar9 = iVar3;
    }
    FUN_01bed4e2(local_378,uVar2,iVar3);
    FUN_01272af8(auStack_170);
    local_19c = iVar3;
    local_1b0 = 2;
    local_1a8 = &DAT_8000000c;
    local_1a4 = iVar9;
    local_1a0 = local_378;
    FUN_01bed4e2(&local_e0,auStack_268,0x48);
    FUN_01bed4e2(auStack_98,local_220,0x70);
    FUN_01237bd0(param_2);
    FUN_01bed4e2(param_2,&local_e0,0xb8);
    local_318 = local_1a4;
    iStack_314 = local_1a0;
    iStack_310 = local_19c;
    local_220[0] = &DAT_8000000c;
    *piVar4 = local_1a4;
    piVar4[1] = local_1a0;
    piVar4[2] = local_19c;
    FUN_012381e8(&local_e0,param_2);
    if (local_e0 != 2) {
      local_358 = local_d4;
      iStack_354 = iStack_d0;
      iStack_350 = iStack_cc;
      local_34c = local_c8;
      iStack_348 = iStack_c4;
      iStack_344 = iStack_c0;
      iStack_340 = iStack_bc;
      FUN_012222e0(local_220);
      param_1[3] = local_358;
      param_1[4] = iStack_354;
      param_1[5] = iStack_350;
      param_1[6] = local_34c;
      param_1[7] = iStack_348;
      param_1[8] = iStack_344;
      param_1[9] = iStack_340;
      param_1[10] = local_b8;
      param_1[0xb] = local_b4;
      *param_1 = local_e0;
      param_1[1] = local_dc;
      param_1[2] = local_d8;
      FUN_01222378(&local_368);
LAB_012241bc:
      FUN_01a532f8(param_2 + 0x2e);
      if (param_2[0x12] == 4) {
        return;
      }
      FUN_019bb7e0(*param_2,param_2[1]);
      iVar7 = param_2[3];
      if ((iVar7 != -0x7ffffffd) && (-1 < iVar7)) {
        FUN_019bb7e0(iVar7,param_2[4]);
      }
      FUN_00a25e80(param_2 + 6);
      FUN_00a25e80(param_2 + 0xc);
      FUN_01224384(param_2 + 0x12);
      return;
    }
    local_2f8 = local_318;
    iStack_2f4 = iStack_314;
    iStack_2f0 = iStack_310;
    local_358 = local_318;
    iStack_354 = iStack_314;
    iStack_350 = iStack_310;
    local_34c = local_d8;
    iStack_348 = local_d4;
    iStack_344 = iStack_d0;
    iStack_340 = iStack_cc;
    local_338 = &DAT_8000000c;
    *piVar5 = local_318;
    piVar5[1] = iStack_314;
    piVar5[2] = iStack_310;
    piVar5[3] = local_d8;
    piVar5[4] = local_d4;
    piVar5[5] = iStack_d0;
    piVar5[6] = iStack_cc;
    if (iVar7 == local_368) {
      FUN_0126727c(&local_368);
      local_380 = local_364;
    }
    puVar6 = (undefined4 *)(local_380 + iVar7 * 0x20);
    local_360 = iVar7 + 1;
    *puVar6 = local_338;
    puVar6[1] = uStack_334;
    puVar6[2] = uStack_330;
    puVar6[3] = uStack_32c;
    puVar6[4] = local_328;
    puVar6[5] = uStack_324;
    puVar6[6] = uStack_320;
    puVar6[7] = uStack_31c;
    unaff_r5 = (undefined1 *)0x2;
  } while( true );
}

