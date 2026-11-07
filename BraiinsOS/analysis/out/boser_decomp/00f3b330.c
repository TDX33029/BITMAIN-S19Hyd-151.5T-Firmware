// FUN_00f3b330 @ 00f3b330 size=1124 calls_out=14 calls_in=1
// strings: boser::button_manageropen/boser/boser/src/button_manager.rsevent open/boser/boser/src/button_manager.rs:118event open/boser/boser/src/button_manager.rs:133event open/boser/boser/src/button_manager.rs:122event open/boser/boser/src/button_manager.rs:135event open/boser/boser/src/button_manager.rs:193event open/boser/boser/src/button_manager.rs:171event open/boser/boser/src/button_manager.rs:173event open/boser/boser/src/button_manager.rs:176event open/boser/boser/src/button_manager.rs:184event open/boser/boser/src/button_manager.rs:228event open/boser/boser/src/button_manager.rs:247event open/boser/boser/src/button_manager.rs:211event open/boser/boser/src/metrics_scraper/metrics_datatypes/utils.rs:41event open/boser/boser/src/metrics_scraper/metrics_datatypes/utils.rs:44 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::button_manageropen/boser/boser/src/button_manager.rsevent open/boser/boser/src/button_manager.rs:118event open/boser/boser/src/button_manager.rs:133event open/boser/boser/src/button_manager.rs:122event open/boser/boser/src/button_manager.rs:135event open/boser/boser/src/button_manager.rs:193event open/boser/boser/src/button_manager.rs:171event open/boser/boser/src/button_manager.rs:173event open/boser/boser/src/button_manager.rs:176event open/boser/boser/src/button_manager.rs:184event open/boser/boser/src/button_manager.rs:228event open/boser/boser/src/button_manager.rs:247event open/boser/boser/src/button_manager.rs:211event open/boser/boser/src/metrics_scraper/metrics_datatypes/utils.rs:41event open/boser/boser/src/metrics_scraper/metrics_datatypes/utils.rs:44 | InvalidParamSegmentInvalidParamInvalidCatchAll

undefined4 FUN_00f3b330(int *param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined3 uVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  bool bVar11;
  undefined3 uStack_84;
  undefined1 local_80;
  undefined3 local_7f;
  undefined1 uStack_7c;
  undefined3 uStack_7b;
  undefined4 ****local_78;
  code *local_74;
  uint *local_70;
  undefined *local_6c;
  undefined4 **local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 ****local_58;
  undefined **local_54;
  uint *local_50;
  undefined4 ***local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 ***local_38;
  undefined4 ****local_34;
  undefined4 ****local_30;
  undefined4 **local_2c;
  undefined1 *local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[2]) {
  case '\0':
    iVar5 = *(int *)(*param_1 + 0x2c);
    *(undefined1 *)(param_1 + 0x11) = 0;
    param_1[3] = iVar5 + 8;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c19514);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c19514);
  case '\x04':
    goto switchD_00f3b34c_caseD_4;
  }
  iVar5 = FUN_00ba6b7c(param_1 + 3,param_2);
  if (iVar5 == 0) {
    uVar7 = 1;
    uVar8 = 3;
  }
  else {
    param_1[1] = iVar5;
    if ((char)param_1[0x11] == '\x03') {
      cVar4 = (char)param_1[0x10];
      bVar11 = cVar4 == '\x03';
      if (bVar11) {
        cVar4 = (char)param_1[7];
      }
      if (bVar11 && cVar4 == '\x04') {
        FUN_0193c3cc(param_1 + 8);
        iVar5 = param_1[1];
      }
    }
    *(undefined2 *)((int)param_1 + 0x79) = 0;
    param_1[0x1d] = iVar5 + 0x14;
switchD_00f3b34c_caseD_4:
    FUN_00f3ba8c(&local_4c,param_1 + 3,param_2);
    uVar8 = local_4c._0_1_;
    uVar9 = (uint)local_4c & 0xff;
    if (uVar9 == 5) {
      uVar7 = 1;
      uVar8 = 4;
    }
    else {
      uVar2 = local_4c._1_3_;
      uVar3 = (undefined1)local_48;
      uStack_84 = (undefined3)((uint)local_48 >> 8);
      if (*(char *)((int)param_1 + 0x7a) == '\x03') {
        FUN_00ba6dc4(param_1 + 4);
      }
      if (uVar9 != 4) {
        local_80 = uVar8;
        _local_7f = CONCAT13(uVar3,uVar2);
        uStack_7b = uStack_84;
        if ((DAT_01d50f88 < 4) &&
           (((DAT_01d4c5d8 - 1 < 2 ||
             ((DAT_01d4c5d8 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4c5d0), cVar4 != '\0')))) &&
            (iVar5 = FUN_01aaa278(DAT_01d4c5d0), iVar5 != 0)))) {
          local_48 = *(int *)(DAT_01d4c5d0 + 0x20);
          if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c19524);
          }
          local_44 = *(undefined4 *)(DAT_01d4c5d0 + 0x24);
          local_40 = *(undefined4 *)(DAT_01d4c5d0 + 0x28);
          local_54 = &local_6c;
          local_70 = (uint *)(DAT_01d4c5d0 + 0x1c);
          local_4c = (undefined4 ***)*local_70;
          local_74 = (code *)0x1;
          local_68 = &local_38;
          local_78 = &local_58;
          local_38 = (undefined4 ***)&local_80;
          local_3c = 0;
          local_50 = (uint *)&DAT_01d2ea4c;
          local_6c = &DAT_005a29c4;
          local_34 = (undefined4 ****)FUN_019a7d7c;
          local_58 = &local_4c;
          FUN_01aaaecc(DAT_01d4c5d0,&local_78);
          iVar5 = DAT_01d4c5d0;
          if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
            local_2c = *(undefined4 ***)(DAT_01d4c5d0 + 0x14);
            local_28 = *(undefined1 **)(DAT_01d4c5d0 + 0x18);
            local_30 = (undefined4 ****)0x2;
            DataMemoryBarrier(0xb);
            puVar10 = DAT_01d4edc8;
            pcVar1 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar10 = &DAT_01cfc5e0;
              pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar6 = (*(code *)puVar10[3])(pcVar1,&local_30);
            if (iVar6 != 0) {
              FUN_01aaa328(iVar5,pcVar1,puVar10[4],&local_30,&local_78);
            }
          }
        }
        else {
          iVar5 = DAT_01d4c5d0;
          if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
            local_60 = *(undefined4 *)(DAT_01d4c5d0 + 0x14);
            local_5c = *(undefined4 *)(DAT_01d4c5d0 + 0x18);
            local_64 = 2;
            DataMemoryBarrier(0xb);
            puVar10 = DAT_01d4edc8;
            pcVar1 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar10 = &DAT_01cfc5e0;
              pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar6 = (*(code *)puVar10[3])(pcVar1,&local_64);
            if (iVar6 != 0) {
              local_50 = (uint *)(DAT_01d4c5d0 + 0x1c);
              local_4c = (undefined4 ***)*local_50;
              local_48 = *(int *)(DAT_01d4c5d0 + 0x20);
              if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c19524);
              }
              local_2c = &local_38;
              local_44 = *(undefined4 *)(DAT_01d4c5d0 + 0x24);
              local_40 = *(undefined4 *)(DAT_01d4c5d0 + 0x28);
              local_58 = &local_30;
              local_3c = 0;
              local_54 = (undefined **)&DAT_00000001;
              local_34 = &local_78;
              local_78 = (undefined4 ****)&local_80;
              local_28 = &DAT_01d2ea4c;
              local_38 = (undefined4 ***)&DAT_005a29c4;
              local_74 = FUN_019a7d7c;
              local_30 = &local_4c;
              FUN_01aaa328(iVar5,pcVar1,puVar10[4],&local_64,&local_58);
            }
          }
        }
        FUN_0183a528(&local_80);
      }
      uVar7 = 0;
      uVar8 = 1;
      FUN_019f8c54(param_1[1],1);
    }
  }
  *(undefined1 *)(param_1 + 2) = uVar8;
  return uVar7;
}

