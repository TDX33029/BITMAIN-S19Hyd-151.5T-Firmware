// FUN_00e33544 @ 00e33544 size=2076 calls_out=34 calls_in=1
// strings: contract_key | keep_existing | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs

void FUN_00e33544(undefined4 *param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined1 uVar2;
  char cVar3;
  int *piVar4;
  char **ppcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  uint uVar11;
  char cVar12;
  undefined4 ****ppppuVar13;
  undefined4 ****ppppuVar14;
  uint local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined1 auStack_400 [72];
  undefined4 ****local_3b8;
  undefined4 ****local_3b4;
  undefined4 ****local_3b0;
  undefined4 ****local_3ac;
  undefined4 ****local_3a8;
  undefined4 uStack_3a4;
  undefined4 ****ppppuStack_3a0;
  undefined4 ****ppppuStack_39c;
  undefined1 auStack_358 [24];
  undefined1 auStack_340 [71];
  undefined1 auStack_2f9 [29];
  undefined2 local_2dc;
  undefined1 local_2da;
  undefined4 ****local_2d8;
  undefined4 ****ppppuStack_2d4;
  undefined4 ****ppppuStack_2d0;
  char *local_2c8;
  undefined4 local_2c4;
  undefined4 ****local_2c0;
  undefined4 ****local_2bc;
  undefined4 ****local_2b8;
  undefined4 uStack_2b4;
  undefined1 auStack_2a8 [12];
  int local_29c;
  undefined4 ****local_288;
  undefined4 local_284;
  undefined4 *local_280;
  undefined4 ****local_270;
  undefined4 ****local_26c;
  undefined4 ****local_268;
  undefined4 ****local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 ****local_250;
  undefined4 local_24c;
  undefined4 ****local_248;
  undefined4 ****local_244;
  undefined4 local_240;
  undefined4 local_220;
  undefined1 local_21c;
  uint local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 local_38;
  int local_34;
  int local_30;
  undefined1 local_2c;
  byte local_2b;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 200)) {
  case 0:
    iVar8 = *(int *)(param_2 + 0xb8);
    *(undefined2 *)(param_2 + 0xc9) = 0x100;
    FUN_01bed4e2(param_2 + 0x58,param_2,0x58);
    piVar4 = (int *)FUN_00a52660(*(undefined4 *)(param_2 + 0xa8));
    if (piVar4 != (int *)0x0) {
      local_3a8 = (undefined4 ****)&DAT_80000000;
      local_3ac = (undefined4 ****)0x0;
      local_3b4 = (undefined4 ****)0x0;
      local_3b8 = (undefined4 ****)0x0;
      ppcVar5 = (char **)FUN_01271f48(&local_3b8,"contract_key",0xc,*(undefined4 *)(param_2 + 0x9c),
                                      *(undefined4 *)(param_2 + 0xa0));
      if ((ppcVar5 == (char **)0x0) &&
         (ppcVar5 = (char **)FUN_00a46668(&local_3b8,"keep_existing",0xd,
                                          *(undefined1 *)(param_2 + 0xa4)), ppcVar5 == (char **)0x0)
         ) {
        local_260 = local_3b8;
        local_25c = local_3b4;
        local_258 = local_3b0;
        local_254 = local_3ac;
        local_250 = local_3a8;
        local_24c = uStack_3a4;
        local_248 = ppppuStack_3a0;
        local_244 = ppppuStack_39c;
        FUN_0196ac88(&local_288);
        uVar2 = local_288._0_1_;
        uVar11 = (uint)local_288 & 0xff;
        if (uVar11 != 6) {
          FUN_01bed4e2((uint)&local_2c0 | 1,(uint)&local_288 | 1,0x17);
          local_2c0 = (undefined4 ****)CONCAT31(local_2c0._1_3_,uVar2);
          if (uVar11 == 5) {
            local_24c = 0;
            local_248 = local_2bc;
            if (local_2bc == (undefined4 ****)0x0) {
              uStack_2b4 = 0;
            }
            local_258 = local_2bc;
            local_260 = (undefined4 ****)(uint)(local_2bc != (undefined4 ****)0x0);
            local_244 = local_2b8;
            local_254 = local_2b8;
            local_25c = (undefined4 ****)0x0;
            local_250 = local_260;
            local_240 = uStack_2b4;
            FUN_00fea674(auStack_2a8,&local_260);
            if (local_29c != 0) {
              FUN_0067b1ac(&local_260,auStack_2a8);
              local_2d8 = local_260;
              ppppuStack_2d4 = local_25c;
              ppppuStack_2d0 = local_258;
              cVar3 = (char)local_254;
              local_2dc = local_254._1_2_;
              local_2da = local_254._3_1_;
              FUN_00e0febc(&local_2c0);
              if (cVar3 != '\x02') {
                local_260 = local_2d8;
                local_25c = ppppuStack_2d4;
                local_258 = ppppuStack_2d0;
                local_254 = (undefined4 ****)CONCAT31(CONCAT12(local_2da,local_2dc),cVar3);
                DataMemoryBarrier(0xb);
                if (*(int *)(*piVar4 + 0x18) != 0) {
                  FUN_00b065ec(*piVar4 + 8,&local_260);
                }
                if (((uint)local_254 & 0xff) != 2) {
                  local_3b8 = local_260;
                  local_3b4 = local_25c;
                  local_3b0 = local_258;
                  local_3ac = local_254;
                  FUN_019cf348();
                  if ((DAT_01d50f88 < 5) &&
                     (((DAT_01d4c488 - 1 < 2 ||
                       ((DAT_01d4c488 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4c480), cVar3 != '\0')))
                       ) && (iVar6 = FUN_01aaa278(DAT_01d4c480), iVar6 != 0)))) {
                    local_280 = (undefined4 *)(DAT_01d4c480 + 0x1c);
                    if (*(undefined4 *****)(DAT_01d4c480 + 0x20) == (undefined4 ****)0x0) {
LAB_00e33d60:
                    /* WARNING: Subroutine does not return */
                      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17708);
                    }
                    local_3b4 = &local_2c0;
                    local_258 = *(undefined4 *****)(DAT_01d4c480 + 0x24);
                    local_254 = *(undefined4 *****)(DAT_01d4c480 + 0x28);
                    local_3b8 = &local_260;
                    local_288 = &local_3b8;
                    local_284 = (char **)&DAT_00000001;
                    local_250 = (undefined4 ****)0x0;
                    local_3b0 = (undefined4 ****)&DAT_01d2ea4c;
                    local_2bc = (undefined4 ****)&DAT_0000006b;
                    local_2c0 = (undefined4 ****)0x3fe987;
                    local_260 = (undefined4 ****)*local_280;
                    local_25c = *(undefined4 *****)(DAT_01d4c480 + 0x20);
                    FUN_00e0ff40(&local_288);
                  }
                  else {
                    iVar6 = DAT_01d4c480;
                    if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                      local_26c = *(undefined4 *****)(DAT_01d4c480 + 0x14);
                      local_268 = *(undefined4 *****)(DAT_01d4c480 + 0x18);
                      local_270 = (undefined4 ****)&DAT_00000001;
                      DataMemoryBarrier(0xb);
                      puVar9 = DAT_01d4edc8;
                      pcVar1 = DAT_01d4edc4;
                      if (DAT_01d51174 != 2) {
                        puVar9 = &DAT_01cfc5e0;
                        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                      }
                      iVar7 = (*(code *)puVar9[3])(pcVar1,&local_270);
                      if (iVar7 != 0) {
                        local_2b8 = (undefined4 ****)(DAT_01d4c480 + 0x1c);
                        if (*(undefined4 *****)(DAT_01d4c480 + 0x20) == (undefined4 ****)0x0)
                        goto LAB_00e33d60;
                        local_284 = &local_2c8;
                        local_258 = *(undefined4 *****)(DAT_01d4c480 + 0x24);
                        local_254 = *(undefined4 *****)(DAT_01d4c480 + 0x28);
                        local_288 = &local_260;
                        local_2c0 = &local_288;
                        local_2bc = (undefined4 ****)&DAT_00000001;
                        local_250 = (undefined4 ****)0x0;
                        local_280 = (undefined4 *)&DAT_01d2ea4c;
                        local_2c4 = 0x6b;
                        local_2c8 = "BUG: request parameters cell was already initialized.";
                        local_3b8 = local_270;
                        local_3b4 = local_26c;
                        local_3b0 = local_268;
                        local_260 = (undefined4 ****)*local_2b8;
                        local_25c = *(undefined4 *****)(DAT_01d4c480 + 0x20);
                        FUN_01aaa328(iVar6,pcVar1,puVar9[4],&local_3b8,&local_2c0);
                      }
                    }
                  }
                }
              }
              goto LAB_00e33640;
            }
            FUN_0165a1f4(auStack_2a8);
          }
          FUN_00e0febc(&local_2c0);
          goto LAB_00e33640;
        }
        ppcVar5 = local_284;
      }
      else {
        local_288 = (undefined4 ****)CONCAT31(local_288._1_3_,6);
        local_284 = ppcVar5;
        FUN_01276d58(&local_3b8);
      }
      FUN_00e0fe5c(ppcVar5);
    }
LAB_00e33640:
    *(undefined1 *)(param_2 + 0xca) = 0;
    FUN_01bed4e2(&local_260,param_2 + 0x58,0x58);
    FUN_00f07a08(&local_3b8,&local_260);
    *(undefined4 *****)(param_2 + 0xbc) = local_3b8;
    *(undefined4 *****)(param_2 + 0xc0) = local_3b4;
    *(undefined4 *****)(param_2 + 0xc4) = local_3b0;
    if (*(int *)(param_2 + 0xc4) != 0) {
      local_38 = *(undefined4 *)(param_2 + 0xc0);
      local_2b = (byte)local_3ac & 1;
      local_30 = *(int *)(iVar8 + 4) + 8;
      local_2c = 0;
      local_34 = *(int *)(param_2 + 0xc4);
      iVar8 = thunk_FUN_01be5118(0x238);
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x238);
      }
      FUN_01bed4e2(iVar8,&local_260,0x238);
      puVar10 = &DAT_01c135a0;
      *(int *)(param_2 + 0xb0) = iVar8;
      *(undefined **)(param_2 + 0xb4) = &DAT_01c135a0;
      goto LAB_00e336e8;
    }
    FUN_01a71aac(&local_260,3,"Contract key cannot be empty",0x1c);
    ppppuVar14 = local_25c;
    ppppuVar13 = local_260;
    cVar12 = (char)local_258;
    FUN_01bed4e2(auStack_400,(int)&local_258 + 1,0x47);
    local_418 = local_210;
    uStack_414 = uStack_20c;
    uStack_410 = uStack_208;
    uStack_40c = uStack_204;
    uStack_408 = uStack_200;
    uStack_404 = uStack_1fc;
LAB_00e338d8:
    FUN_019bb7e0(*(undefined4 *)(param_2 + 0xbc),*(undefined4 *)(param_2 + 0xc0));
    *(undefined1 *)(param_2 + 0xca) = 0;
    if (*(char *)(param_2 + 0xc9) == '\x01') {
      FUN_00e16da0(param_2);
    }
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c17074);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c17074);
  case 3:
    iVar8 = *(int *)(param_2 + 0xb0);
    puVar10 = *(undefined **)(param_2 + 0xb4);
LAB_00e336e8:
    (**(code **)(puVar10 + 0xc))(&local_260,iVar8,param_3);
    ppppuVar13 = local_260;
    if (local_260 == (undefined4 ****)0x80000017) {
      *param_1 = 4;
      param_1[1] = 0;
      uVar2 = 3;
      goto LAB_00e3392c;
    }
    cVar3 = (char)local_25c;
    FUN_01bed4e2(auStack_358,(int)&local_25c + 1,0x13);
    FUN_01139b38(*(undefined4 *)(param_2 + 0xb0),*(undefined4 *)(param_2 + 0xb4));
    if (ppppuVar13 != (undefined4 ****)&DAT_80000016) {
      local_288 = ppppuVar13;
      local_284 = (char **)CONCAT31(local_284._1_3_,cVar3);
      FUN_01bed4e2((int)&local_284 + 1,auStack_358,0x13);
      local_260 = &local_2c0;
      local_2b8 = (undefined4 ****)0x0;
      local_2c0 = (undefined4 ****)0x0;
      local_254 = (undefined4 ****)0x0;
      local_2bc = (undefined4 ****)&DAT_00000001;
      local_258 = (undefined4 ****)0x60000020;
      local_25c = (undefined4 ****)&DAT_01c17420;
      iVar8 = FUN_0121efc4(&local_288,&local_260);
      if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533383,0x37,&local_270,&DAT_01c17458,&DAT_01d30334);
      }
      local_270 = local_2c0;
      local_26c = local_2bc;
      local_268 = local_2b8;
      FUN_01a70fd4(&local_260,0xd);
      FUN_00df4ae4(&local_288);
      ppppuVar14 = local_25c;
      ppppuVar13 = local_260;
      cVar12 = (char)local_258;
      FUN_01bed4e2(&local_3b8,(int)&local_258 + 1,0x5f);
      if (ppppuVar13 != (undefined4 ****)&DAT_00000003 || ppppuVar14 != (undefined4 ****)0x0) {
        FUN_01bed4e2(auStack_340,&local_3b8,0x5f);
        FUN_01bed4e2(auStack_400,auStack_340,0x47);
        FUN_01bed4e2(&local_418,auStack_2f9,0x18);
        goto LAB_00e338d8;
      }
      cVar3 = cVar12;
    }
    ppppuVar14 = (undefined4 ****)0x0;
    FUN_0160aaa4(&local_260,0);
    cVar12 = (char)local_260;
    local_21c = cVar3 == '\0';
    local_220 = 0;
    FUN_01bed4e2(auStack_400,(uint)&local_260 | 1,0x47);
    FUN_019bb7e0(*(undefined4 *)(param_2 + 0xbc),*(undefined4 *)(param_2 + 0xc0));
    ppppuVar13 = (undefined4 ****)&DAT_00000003;
    *(undefined1 *)(param_2 + 0xca) = 0;
  }
  *(char *)(param_1 + 2) = cVar12;
  *param_1 = ppppuVar13;
  param_1[1] = ppppuVar14;
  FUN_01bed4e2((int)param_1 + 9,auStack_400,0x47);
  param_1[0x14] = local_418;
  param_1[0x15] = uStack_414;
  param_1[0x16] = uStack_410;
  param_1[0x17] = uStack_40c;
  param_1[0x18] = uStack_408;
  param_1[0x19] = uStack_404;
  uVar2 = 1;
LAB_00e3392c:
  *(undefined1 *)(param_2 + 200) = uVar2;
  return;
}

