// FUN_0154fd00 @ 0154fd00 size=916 calls_out=14 calls_in=1
// strings: else | else

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_0154fd00(undefined4 param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined1 uVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 auStack_568 [136];
  undefined1 local_4e0;
  int local_4d8;
  undefined4 local_4d4;
  undefined4 local_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  int local_4c0;
  int iStack_4bc;
  int iStack_4b8;
  int local_428;
  undefined4 local_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  int local_418;
  undefined4 local_414;
  undefined4 local_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  int local_380;
  undefined4 local_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 local_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined1 auStack_360 [152];
  undefined1 auStack_2c8 [144];
  int local_238 [38];
  int local_1a0;
  undefined4 local_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  int local_190;
  undefined1 auStack_18c [148];
  int local_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 auStack_e8 [168];
  int local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  uVar7 = *param_2;
  uVar9 = param_2[1];
  pcVar3 = (char *)FUN_0196b3a8(uVar7,uVar9,"if",2);
  if (pcVar3 == (char *)0x0) {
    iVar6 = 0;
    uVar5 = 0;
    goto LAB_01550074;
  }
  iVar6 = 0;
  uVar5 = 0;
  if (*pcVar3 != '\x05') goto LAB_01550074;
  FUN_01526248(auStack_568,param_1,"if",2);
  FUN_0156aa80(&local_4c0,pcVar3 + 4);
  piVar4 = (int *)((uint)local_238 | 4);
  *piVar4 = local_4c0;
  piVar4[1] = iStack_4bc;
  piVar4[2] = iStack_4b8;
  local_238[0] = CONCAT31(local_238[0]._1_3_,5);
  uVar2 = FUN_016731b0(local_4e0,local_238);
  FUN_0156aca8(&local_418,auStack_568,local_238,uVar2);
  if (local_418 == 0) {
    iVar6 = FUN_01594a60();
    FUN_00e0febc(local_238);
    uVar5 = 1;
  }
  else {
    local_4d0 = local_410;
    uStack_4cc = uStack_40c;
    uStack_4c8 = uStack_408;
    local_4d4 = local_414;
    local_4d8 = local_418;
    FUN_00e0febc(local_238);
    FUN_0154abd4(local_238,auStack_568,pcVar3 + 4);
    iVar8 = local_1a0;
    iVar6 = local_238[0];
    if (local_1a0 != -0x80000000) {
      FUN_01bed4e2((uint)&local_4c0 | 4,(uint)local_238 | 4,0x94);
      local_424 = local_19c;
      uStack_420 = uStack_198;
      uStack_41c = uStack_194;
      local_428 = iVar8;
      local_4c0 = iVar6;
      pcVar3 = (char *)FUN_0196b3a8(uVar7,uVar9,&DAT_0056c9d0,4);
      if ((pcVar3 == (char *)0x0) || (*pcVar3 != '\x05')) {
        bVar1 = true;
        local_380 = -0x80000000;
LAB_0154fee4:
        pcVar3 = (char *)FUN_0196b3a8(uVar7,uVar9,"else",4);
        iVar8 = -0x80000000;
        if ((pcVar3 != (char *)0x0) && (*pcVar3 == '\x05')) {
          FUN_01526248(auStack_2c8,param_1,"else",4);
          FUN_0154abd4(local_238,auStack_2c8,pcVar3 + 4);
          iVar6 = local_238[0];
          if (local_1a0 == -0x80000000) {
            FUN_014ff9e0(auStack_2c8);
            if (!bVar1) {
              FUN_0154e054(&local_418);
            }
            goto LAB_0154ff6c;
          }
          FUN_01bed4e2(auStack_360,(uint)local_238 | 4,0x94);
          local_370 = local_19c;
          uStack_36c = uStack_198;
          uStack_368 = uStack_194;
          FUN_014ff9e0(auStack_2c8);
          iVar8 = local_1a0;
        }
        local_40 = local_4d8;
        uStack_3c = local_4d4;
        uStack_38 = local_4d0;
        uStack_34 = uStack_4cc;
        uStack_30 = uStack_4c8;
        FUN_01bed4e2(auStack_e8,&local_4c0,0xa8);
        FUN_01bed4e2(local_238,&local_418,0xa8);
        local_190 = iVar6;
        FUN_01bed4e2(auStack_18c,auStack_360,0x94);
        local_f4 = local_370;
        uStack_f0 = uStack_36c;
        uStack_ec = uStack_368;
        local_f8 = iVar8;
        iVar6 = thunk_FUN_01be5118(0x210);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(8,0x210);
        }
        FUN_01bed4e2(iVar6,local_238,0x210);
        uVar5 = 0;
        goto LAB_0155006c;
      }
      FUN_01526248(auStack_2c8,param_1,&DAT_0056c9d0,4);
      FUN_0154abd4(local_238,auStack_2c8,pcVar3 + 4);
      iVar8 = local_1a0;
      iVar6 = local_238[0];
      if (local_1a0 != -0x80000000) {
        FUN_01bed4e2((uint)&local_418 | 4,(uint)local_238 | 4,0x94);
        local_37c = local_19c;
        uStack_378 = uStack_198;
        uStack_374 = uStack_194;
        local_380 = iVar8;
        local_418 = iVar6;
        FUN_014ff9e0(auStack_2c8);
        bVar1 = false;
        goto LAB_0154fee4;
      }
      FUN_014ff9e0(auStack_2c8);
LAB_0154ff6c:
      FUN_0154e054(&local_4c0);
    }
    uVar5 = 1;
    FUN_014fdb74(&local_4d8);
  }
LAB_0155006c:
  FUN_014ff9e0(auStack_568);
LAB_01550074:
  return CONCAT44(iVar6,uVar5);
}

