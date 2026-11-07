// FUN_00a41ecc @ 00a41ecc size=1016 calls_out=9 calls_in=3
// strings: boser::webopen/boser/boser/src/web.rsevent open/boser/boser/src/web.rs:330event open/boser/boser/src/web.rs:1017event open/boser/boser/src/web.rs:1033event open/boser/boser/src/web.rs:899event open/boser/boser/src/web.rs:1039event open/boser/boser/src/web.rs:173event open/boser/boser/src/web.rs:1105event open/boser/boser/src/config.rs:64 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::webopen/boser/boser/src/web.rsevent open/boser/boser/src/web.rs:330event open/boser/boser/src/web.rs:1017event open/boser/boser/src/web.rs:1033event open/boser/boser/src/web.rs:899event open/boser/boser/src/web.rs:1039event open/boser/boser/src/web.rs:173event open/boser/boser/src/web.rs:1105event open/boser/boser/src/config.rs:64 | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_00a41ecc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *local_98;
  undefined1 *local_94;
  undefined1 **local_90;
  undefined1 *local_88;
  undefined1 **local_84;
  int ***local_80;
  undefined4 local_7c;
  undefined4 *local_78;
  undefined4 ***local_74;
  undefined **local_70;
  undefined4 *local_6c;
  undefined4 **local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined *local_50;
  undefined4 **local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 *local_40;
  undefined1 *local_3c;
  undefined1 **local_38;
  code *local_34;
  int **local_30;
  undefined **local_2c;
  undefined1 *local_28;
  
  FUN_019ac8ac(&local_98);
  if (local_98 == (undefined4 *)&DAT_80000000) {
    local_84 = local_90;
    local_88 = local_94;
    if ((DAT_01d50f88 < 4) &&
       (((DAT_01d4b930 - 1 < 2 ||
         ((DAT_01d4b930 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4b928), cVar2 != '\0')))) &&
        (iVar3 = FUN_01aaa278(DAT_01d4b928), iVar3 != 0)))) {
      local_64 = *(int *)(DAT_01d4b928 + 0x20);
      if (local_64 == 0) {
LAB_00a422ac:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c0e834);
      }
      local_60 = *(undefined4 *)(DAT_01d4b928 + 0x24);
      local_5c = *(undefined4 *)(DAT_01d4b928 + 0x28);
      local_78 = (undefined4 *)(DAT_01d4b928 + 0x1c);
      local_68 = (undefined4 **)*local_78;
      local_70 = &local_50;
      local_74 = &local_68;
      local_4c = &local_40;
      local_58 = 0;
      local_6c = (undefined4 *)&DAT_01d2ea4c;
      local_34 = FUN_019a7d7c;
      local_50 = &DAT_0057764f;
      local_38 = &local_88;
      local_3c = &LAB_019ba78c;
      local_40 = &local_48;
      local_7c = 1;
      local_80 = (int ***)&local_74;
      local_48 = param_2;
      local_44 = param_3;
      FUN_01aaaecc(DAT_01d4b928,&local_80);
      iVar3 = DAT_01d4b928;
      if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
        local_2c = *(undefined ***)(DAT_01d4b928 + 0x14);
        local_28 = *(undefined1 **)(DAT_01d4b928 + 0x18);
        local_30 = (int **)0x2;
        DataMemoryBarrier(0xb);
        puVar5 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar5 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar4 = (*(code *)puVar5[3])(pcVar1,&local_30);
        if (iVar4 != 0) {
          FUN_01aaa328(iVar3,pcVar1,puVar5[4],&local_30,&local_80);
        }
      }
    }
    else {
      iVar3 = DAT_01d4b928;
      if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
        local_7c = *(undefined4 *)(DAT_01d4b928 + 0x14);
        local_78 = *(undefined4 **)(DAT_01d4b928 + 0x18);
        local_80 = (int ***)0x2;
        DataMemoryBarrier(0xb);
        puVar5 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar5 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar4 = (*(code *)puVar5[3])(pcVar1,&local_80);
        if (iVar4 != 0) {
          local_6c = (undefined4 *)(DAT_01d4b928 + 0x1c);
          local_68 = (undefined4 **)*local_6c;
          local_64 = *(int *)(DAT_01d4b928 + 0x20);
          if (local_64 == 0) goto LAB_00a422ac;
          local_60 = *(undefined4 *)(DAT_01d4b928 + 0x24);
          local_5c = *(undefined4 *)(DAT_01d4b928 + 0x28);
          local_2c = &local_50;
          local_58 = 0;
          local_30 = (int **)&local_68;
          local_28 = &DAT_01d2ea4c;
          local_4c = &local_40;
          local_50 = &DAT_0057764f;
          local_34 = FUN_019a7d7c;
          local_38 = &local_88;
          local_3c = &LAB_019ba78c;
          local_40 = &local_48;
          local_70 = (undefined **)&DAT_00000001;
          local_74 = &local_30;
          local_48 = param_2;
          local_44 = param_3;
          FUN_01aaa328(iVar3,pcVar1,puVar5[4],&local_80,&local_74);
        }
      }
    }
    FUN_015e8ad4(&local_40,param_2,param_3);
    FUN_0069d8a4((uint)local_88 & 0xff,local_84);
  }
  else {
    local_40 = local_98;
    local_3c = local_94;
    local_38 = local_90;
  }
  FUN_015e8ad4(&local_68,param_4,param_5);
  *param_1 = local_40;
  param_1[1] = local_3c;
  param_1[2] = local_38;
  param_1[3] = local_68;
  param_1[4] = local_64;
  param_1[5] = local_60;
  return;
}

