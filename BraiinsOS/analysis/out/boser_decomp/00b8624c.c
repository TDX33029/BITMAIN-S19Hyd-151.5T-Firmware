// FUN_00b8624c @ 00b8624c size=1088 calls_out=12 calls_in=1
// strings: boser_buildroot::sessionopen/boser/boser-buildroot/src/session.rsevent open/boser/boser-buildroot/src/session.rs:130event open/boser/boser-buildroot/src/session.rs:113 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | boser_buildroot::sessionopen/boser/boser-buildroot/src/session.rsevent open/boser/boser-buildroot/src/session.rs:130event open/boser/boser-buildroot/src/session.rs:113 | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_00b8624c(undefined4 *param_1,undefined4 *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 **local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 ***local_7c;
  code *local_78;
  undefined4 *local_74;
  undefined *local_70;
  undefined4 ****local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 ***local_5c;
  undefined **local_58;
  undefined4 *local_54;
  undefined4 ***local_50;
  undefined4 ****local_4c;
  undefined4 **local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 **local_30;
  undefined4 ****local_2c;
  undefined1 *local_28;
  
  if (*(char *)(param_2 + 5) != '\0') {
    if (*(char *)(param_2 + 5) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c13ca8);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c13ca8);
  }
  uVar6 = param_2[4];
  local_90 = (undefined4 **)*param_2;
  local_8c = param_2[1];
  local_88 = param_2[2];
  uStack_84 = param_2[3];
  if ((DAT_01d50f88 < 2) &&
     (((DAT_01d4c3bc - 1 < 2 ||
       ((DAT_01d4c3bc != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4c3b4), cVar2 != '\0')))) &&
      (iVar3 = FUN_01aaa278(DAT_01d4c3b4), iVar3 != 0)))) {
    local_44 = *(int *)(DAT_01d4c3b4 + 0x20);
    if (local_44 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c13c98);
    }
    local_58 = &local_70;
    local_40 = *(int *)(DAT_01d4c3b4 + 0x24);
    local_3c = *(undefined4 *)(DAT_01d4c3b4 + 0x28);
    local_74 = (undefined4 *)(DAT_01d4c3b4 + 0x1c);
    local_48 = (undefined4 **)*local_74;
    local_5c = &local_48;
    local_7c = &local_5c;
    local_78 = (code *)0x1;
    local_6c = &local_50;
    local_38 = 0;
    local_54 = (undefined4 *)&DAT_01d2ea4c;
    local_70 = &DAT_005aeebd;
    local_4c = (undefined4 ****)FUN_00b861cc;
    local_50 = &local_90;
    FUN_01aaaecc(DAT_01d4c3b4,&local_7c);
    iVar3 = DAT_01d4c3b4;
    if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
      local_2c = *(undefined4 *****)(DAT_01d4c3b4 + 0x14);
      local_28 = *(undefined1 **)(DAT_01d4c3b4 + 0x18);
      local_30 = (undefined4 **)&SUB_00000004;
      DataMemoryBarrier(0xb);
      puVar5 = DAT_01d4edc8;
      pcVar1 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar5 = &DAT_01cfc5e0;
        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar4 = (*(code *)puVar5[3])(pcVar1,&local_30);
      if (iVar4 != 0) {
        FUN_01aaa328(iVar3,pcVar1,puVar5[4],&local_30,&local_7c);
      }
    }
  }
  else {
    iVar3 = DAT_01d4c3b4;
    if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
      local_64 = *(undefined4 *)(DAT_01d4c3b4 + 0x14);
      local_60 = *(undefined4 *)(DAT_01d4c3b4 + 0x18);
      local_68 = 4;
      DataMemoryBarrier(0xb);
      puVar5 = DAT_01d4edc8;
      pcVar1 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar5 = &DAT_01cfc5e0;
        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar4 = (*(code *)puVar5[3])(pcVar1,&local_68);
      if (iVar4 != 0) {
        local_54 = (undefined4 *)(DAT_01d4c3b4 + 0x1c);
        local_48 = (undefined4 **)*local_54;
        local_44 = *(int *)(DAT_01d4c3b4 + 0x20);
        if (local_44 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c13c98);
        }
        local_30 = &local_48;
        local_5c = &local_30;
        local_40 = *(int *)(DAT_01d4c3b4 + 0x24);
        local_3c = *(undefined4 *)(DAT_01d4c3b4 + 0x28);
        local_2c = &local_50;
        local_38 = 0;
        local_58 = (undefined **)&DAT_00000001;
        local_28 = &DAT_01d2ea4c;
        local_4c = &local_7c;
        local_50 = (undefined4 ***)&DAT_005aeebd;
        local_78 = FUN_00b861cc;
        local_7c = &local_90;
        FUN_01aaa328(iVar3,pcVar1,puVar5[4],&local_68,&local_5c);
      }
    }
  }
  uVar7 = FUN_00b81df8(uVar6);
  FUN_00b8ca34(&local_48,(int)uVar7 + 8,local_8c,local_88);
  if (local_40 != -0x80000000) {
    FUN_019bb7e0(local_40,local_3c);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_00a97e8c((int)uVar7,(uint)((ulonglong)uVar7 >> 0x20) & 1);
  FUN_019bb7e0(local_90,local_8c);
  param_1[0x17] = 0x3020202;
  param_1[0xc] = &DAT_0051da27;
  param_1[0xd] = 10;
  param_1[0xe] = 0x80000000;
  param_1[0x15] = &DAT_005327c4;
  param_1[8] = 0x80000001;
  param_1[0x14] = 0x80000000;
  param_1[0x16] = 1;
  param_1[0xb] = 0x80000000;
  param_1[0xf] = 1;
  param_1[0x10] = 0;
  param_1[0x11] = 0x80000002;
  *(undefined1 *)((int)param_1 + 0x17) = 2;
  param_1[3] = 0;
  *(undefined1 *)(param_2 + 5) = 1;
  return;
}

