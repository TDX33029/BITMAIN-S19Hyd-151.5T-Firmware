// FUN_005d4744 @ 005d4744 size=1792 calls_out=27 calls_in=1
// strings: BUG: request parameters cell was already initialized. | Other system task already in progress | Uninstall is not supportedUninstall was not successfulUninstall timed outFactory reset is not supportedCannot get default network interface | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_005d4744(undefined4 *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  char *pcVar3;
  undefined1 uVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  int *****pppppiVar8;
  int iVar9;
  int ****ppppiVar10;
  uint uVar11;
  int *****pppppiVar12;
  undefined4 *puVar13;
  int *****pppppiVar14;
  int *piVar15;
  undefined1 auStack_278 [64];
  undefined4 local_238;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined1 auStack_218 [72];
  int *****local_1d0;
  int *****local_1cc;
  int *****local_1c8;
  char local_1c4;
  undefined2 local_1c3;
  undefined1 local_1c1;
  int *****local_170;
  int *****local_16c;
  undefined4 *local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined1 auStack_158 [68];
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  int *****local_f8;
  int *****local_f4;
  int *****local_f0;
  undefined4 local_ec;
  int *****local_e8;
  undefined4 local_e4;
  int *****local_e0;
  undefined4 *local_dc;
  undefined4 local_d8;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined2 local_8c;
  undefined1 local_8a;
  int *****local_88;
  int *****pppppiStack_84;
  int *****pppppiStack_80;
  int *****local_78;
  int *****local_74;
  int *****local_70;
  int ****local_68;
  undefined4 local_64;
  int *****local_60;
  int *****local_5c;
  undefined4 *local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [12];
  int local_3c;
  
  if (*(char *)(param_2 + 0x4c) != '\0') {
    if (*(char *)(param_2 + 0x4c) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c021d0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c021d0);
  }
  piVar15 = *(int **)(param_2 + 0x48);
  FUN_01bed4e2(auStack_278,param_2,0x48);
  piVar6 = (int *)FUN_00a52660(local_238);
  if (piVar6 != (int *)0x0) {
    local_e8 = (int *****)&DAT_80000000;
    local_ec = (undefined4 *)0x0;
    local_f4 = (int *****)0x0;
    local_f8 = (int *****)0x0;
    FUN_0196ac88(&local_1d0,&local_f8);
    uVar4 = local_1d0._0_1_;
    uVar11 = (uint)local_1d0 & 0xff;
    if (uVar11 == 6) {
      FUN_00e0fe5c(local_1cc);
    }
    else {
      FUN_01bed4e2((uint)&local_60 | 1,(uint)&local_1d0 | 1,0x17);
      local_60 = (int *****)CONCAT31(local_60._1_3_,uVar4);
      if (uVar11 == 5) {
        local_e4 = 0;
        local_e0 = local_5c;
        local_d8 = uStack_54;
        if (local_5c == (int *****)0x0) {
          local_d8 = 0;
        }
        local_f0 = local_5c;
        local_f8 = (int *****)(uint)(local_5c != (int *****)0x0);
        local_dc = local_58;
        local_ec = local_58;
        local_f4 = (int *****)0x0;
        local_e8 = local_f8;
        FUN_00fea674(auStack_48,&local_f8);
        if (local_3c != 0) {
          FUN_0067b1ac(&local_f8,auStack_48);
          local_88 = local_f8;
          pppppiStack_84 = local_f4;
          pppppiStack_80 = local_f0;
          cVar5 = (char)local_ec;
          local_8c = local_ec._1_2_;
          local_8a = local_ec._3_1_;
          FUN_00e0febc(&local_60);
          if (cVar5 != '\x02') {
            local_f8 = local_88;
            local_f4 = pppppiStack_84;
            local_f0 = pppppiStack_80;
            local_ec = (undefined4 *)CONCAT31(CONCAT12(local_8a,local_8c),cVar5);
            DataMemoryBarrier(0xb);
            if (*(int *)(*piVar6 + 0x18) != 0) {
              FUN_00b065ec(*piVar6 + 8,&local_f8);
            }
            if ((char)local_ec != '\x02') {
              local_1d0 = local_f8;
              local_1cc = local_f4;
              local_1c8 = local_f0;
              local_1c1 = local_ec._3_1_;
              local_1c4 = (char)local_ec;
              local_1c3 = local_ec._1_2_;
              FUN_019cf348(&local_1d0);
              if ((DAT_01d50f88 < 5) &&
                 (((DAT_01d4c488 - 1 < 2 ||
                   ((DAT_01d4c488 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4c480), cVar5 != '\0')))) &&
                  (iVar7 = FUN_01aaa278(DAT_01d4c480), iVar7 != 0)))) {
                local_58 = (undefined4 *)(DAT_01d4c480 + 0x1c);
                if (*(int ******)(DAT_01d4c480 + 0x20) == (int *****)0x0) {
LAB_005d4e2c:
                    /* WARNING: Subroutine does not return */
                  FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17708);
                }
                local_f0 = *(int ******)(DAT_01d4c480 + 0x24);
                local_ec = *(undefined4 **)(DAT_01d4c480 + 0x28);
                local_1cc = (int *****)&local_170;
                local_1d0 = (int *****)&local_f8;
                local_5c = (int *****)&DAT_00000001;
                local_e8 = (int *****)0x0;
                local_1c8 = (int *****)&DAT_01d2ea4c;
                local_16c = (int *****)&DAT_0000006b;
                local_170 = (int *****)0x3fe987;
                local_f8 = (int *****)*local_58;
                local_f4 = *(int ******)(DAT_01d4c480 + 0x20);
                local_60 = (int *****)&local_1d0;
                FUN_00e0ff40(&local_60);
              }
              else {
                iVar7 = DAT_01d4c480;
                if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                  local_74 = *(int ******)(DAT_01d4c480 + 0x14);
                  local_70 = *(int ******)(DAT_01d4c480 + 0x18);
                  local_78 = (int *****)&DAT_00000001;
                  DataMemoryBarrier(0xb);
                  puVar13 = DAT_01d4edc8;
                  pcVar3 = DAT_01d4edc4;
                  if (DAT_01d51174 != 2) {
                    puVar13 = &DAT_01cfc5e0;
                    pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                  }
                  iVar9 = (*(code *)puVar13[3])(pcVar3,&local_78);
                  if (iVar9 != 0) {
                    local_168 = (undefined4 *)(DAT_01d4c480 + 0x1c);
                    if (*(int ******)(DAT_01d4c480 + 0x20) == (int *****)0x0) goto LAB_005d4e2c;
                    local_5c = &local_68;
                    local_60 = (int *****)&local_f8;
                    local_170 = (int *****)&local_60;
                    local_e8 = (int *****)0x0;
                    local_f0 = *(int ******)(DAT_01d4c480 + 0x24);
                    local_ec = *(undefined4 **)(DAT_01d4c480 + 0x28);
                    local_16c = (int *****)&DAT_00000001;
                    local_58 = (undefined4 *)&DAT_01d2ea4c;
                    local_64 = 0x6b;
                    local_68 = (int ****)0x3fe987;
                    local_1d0 = local_78;
                    local_1cc = local_74;
                    local_1c8 = local_70;
                    local_f8 = (int *****)*local_168;
                    local_f4 = *(int ******)(DAT_01d4c480 + 0x20);
                    FUN_01aaa328(iVar7,pcVar3,puVar13[4],&local_1d0,&local_170);
                  }
                }
              }
            }
          }
          goto LAB_005d49d0;
        }
        FUN_0165a1f4(auStack_48);
      }
      FUN_00e0febc(&local_60);
    }
  }
LAB_005d49d0:
  iVar7 = *piVar15;
  FUN_0103b1a8(&local_170,*(undefined1 *)(*(int *)(iVar7 + 8) + 0x24),*(undefined4 *)(iVar7 + 0x1c))
  ;
  if (local_170 == (int *****)&DAT_80000016) {
    pppppiVar14 = local_16c;
  }
  else {
    local_60 = local_170;
    local_5c = local_16c;
    local_58 = local_168;
    uStack_54 = uStack_164;
    uStack_50 = uStack_160;
    uStack_4c = uStack_15c;
    local_70 = (int *****)0x0;
    local_78 = (int *****)0x0;
    local_ec = (undefined4 *)0x0;
    local_74 = (int *****)&DAT_00000001;
    local_f0 = (int *****)0x60000020;
    local_f8 = (int *****)&local_78;
    local_f4 = (int *****)&DAT_01c02660;
    iVar7 = FUN_0121efc4(&local_60,&local_f8);
    pppppiVar12 = local_70;
    pppppiVar14 = local_74;
    pppppiVar8 = local_78;
    if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&local_88,&DAT_01c02728,&DAT_01d30334);
    }
    if (local_70 == (int *****)&DAT_0000001a) {
      iVar7 = thunk_FUN_01bed842(local_74,
                                 "Uninstall is not supportedUninstall was not successfulUninstall timed outFactory reset is not supportedCannot get default network interface"
                                 ,0x1a);
      if (iVar7 != 0) goto LAB_005d4ad4;
      local_70 = (int *****)&DAT_0000001a;
      local_78 = pppppiVar8;
      local_74 = pppppiVar14;
      FUN_01a70fd4(&local_f8,0xc,&local_78);
    }
    else if ((local_70 == (int *****)&DAT_00000025) &&
            (iVar7 = thunk_FUN_01bed842(local_74,"Other system task already in progress",0x25),
            iVar7 == 0)) {
      local_70 = (int *****)&DAT_00000025;
      local_78 = pppppiVar8;
      local_74 = pppppiVar14;
      FUN_01a70fd4(&local_f8,10,&local_78);
    }
    else {
LAB_005d4ad4:
      local_78 = pppppiVar8;
      local_74 = pppppiVar14;
      local_70 = pppppiVar12;
      FUN_01a70fd4(&local_f8,0xd,&local_78);
    }
    FUN_005f6674(&local_170);
    pppppiVar14 = local_f0;
    pppppiVar12 = local_f4;
    pppppiVar8 = local_f8;
    FUN_01bed4e2(&local_1d0,&local_ec,0x5c);
    if (pppppiVar8 != (int *****)&DAT_00000003 || pppppiVar12 != (int *****)0x0) {
      FUN_01bed4e2(auStack_158,&local_1d0,0x5c);
      FUN_01bed4e2(auStack_218,auStack_158,0x44);
      local_230 = local_114;
      uStack_22c = uStack_110;
      uStack_228 = uStack_10c;
      uStack_224 = uStack_108;
      uStack_220 = uStack_104;
      uStack_21c = uStack_100;
      FUN_00f9604c(auStack_278);
      goto LAB_005d4c14;
    }
  }
  pppppiVar8 = (int *****)*piVar15;
  do {
    ppppiVar10 = *pppppiVar8;
    bVar2 = (bool)hasExclusiveAccess(pppppiVar8);
  } while (!bVar2);
  *pppppiVar8 = (int ****)((int)ppppiVar10 + 1);
  if ((int)ppppiVar10 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x5d4e44);
    (*pcVar1)();
  }
  local_f0._0_2_ = (ushort)(byte)local_f0;
  local_f8 = pppppiVar8;
  local_f4 = pppppiVar14;
  piVar6 = (int *)FUN_010a27f4(&local_f8);
  if (*piVar6 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar2 = (bool)hasExclusiveAccess(piVar6);
    if (!bVar2) goto LAB_005d4b88;
    *piVar6 = 0x84;
  }
  else {
    ClearExclusiveLocal();
LAB_005d4b88:
    (**(code **)(piVar6[2] + 0x10))();
  }
  pppppiVar12 = (int *****)0x0;
  FUN_0160aaa4(&local_f8,0);
  pppppiVar14 = local_f8;
  local_b4 = 1;
  local_b8 = 0;
  FUN_01bed4e2(auStack_218,(uint)&local_f8 | 4,0x44);
  pppppiVar8 = (int *****)&DAT_00000003;
  FUN_00f9604c(auStack_278);
LAB_005d4c14:
  *param_1 = pppppiVar8;
  param_1[1] = pppppiVar12;
  param_1[2] = pppppiVar14;
  FUN_01bed4e2(param_1 + 3,auStack_218,0x44);
  param_1[0x14] = local_230;
  param_1[0x15] = uStack_22c;
  param_1[0x16] = uStack_228;
  param_1[0x17] = uStack_224;
  param_1[0x18] = uStack_220;
  param_1[0x19] = uStack_21c;
  *(undefined1 *)(param_2 + 0x4c) = 1;
  return;
}

