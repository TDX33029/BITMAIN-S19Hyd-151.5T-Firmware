// FUN_01a05784 @ 01a05784 size=928 calls_out=10 calls_in=0
// strings: InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_01a05784(undefined4 *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 ***local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int local_98;
  undefined4 ***local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 ****local_7c;
  code *local_78;
  undefined4 *local_74;
  undefined *local_70;
  undefined4 ****local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 ****local_5c;
  undefined **local_58;
  undefined4 *local_54;
  undefined4 ***local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 ****local_38;
  undefined4 ****local_34;
  undefined4 ****local_30;
  undefined4 ****local_2c;
  undefined1 *local_28;
  
  if (*(char *)(param_1 + 5) != '\0') {
    if (*(char *)(param_1 + 5) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d29e60);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d29e60);
  }
  local_50 = (undefined4 ***)param_1[1];
  iStack_4c = param_1[2];
  uStack_48 = param_1[3];
  uStack_44 = param_1[4];
  local_40 = 2;
  FUN_01a14c7c(&local_a8,*param_1,&local_50);
  if (local_98 != 5) {
    local_90 = local_a8;
    uStack_8c = uStack_a4;
    uStack_88 = uStack_a0;
    uStack_84 = uStack_9c;
    iStack_80 = local_98;
    if ((DAT_01d50f88 < 5) &&
       (((DAT_01d506cc - 1 < 2 ||
         ((DAT_01d506cc != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d506c4), cVar2 != '\0')))) &&
        (iVar3 = FUN_01aaa278(DAT_01d506c4), iVar3 != 0)))) {
      if (*(int *)(DAT_01d506c4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29e50);
      }
      local_58 = &local_70;
      uStack_48 = *(undefined4 *)(DAT_01d506c4 + 0x24);
      uStack_44 = *(undefined4 *)(DAT_01d506c4 + 0x28);
      local_74 = (undefined4 *)(DAT_01d506c4 + 0x1c);
      local_50 = (undefined4 ***)*local_74;
      local_7c = &local_5c;
      local_40 = 0;
      local_78 = (code *)0x1;
      local_6c = &local_38;
      local_54 = (undefined4 *)&DAT_01d2ea4c;
      local_70 = &DAT_005717fa;
      local_34 = (undefined4 ****)FUN_01a05bf8;
      local_5c = &local_50;
      iStack_4c = *(int *)(DAT_01d506c4 + 0x20);
      local_38 = &local_90;
      FUN_01aaaecc(DAT_01d506c4,&local_7c);
      iVar3 = DAT_01d506c4;
      if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
        local_2c = *(undefined4 *****)(DAT_01d506c4 + 0x14);
        local_28 = *(undefined1 **)(DAT_01d506c4 + 0x18);
        local_30 = (undefined4 ****)&DAT_00000001;
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
      iVar3 = DAT_01d506c4;
      if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
        local_64 = *(undefined4 *)(DAT_01d506c4 + 0x14);
        local_60 = *(undefined4 *)(DAT_01d506c4 + 0x18);
        local_68 = 1;
        DataMemoryBarrier(0xb);
        puVar5 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar5 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar4 = (*(code *)puVar5[3])(pcVar1,&local_68);
        if (iVar4 != 0) {
          local_54 = (undefined4 *)(DAT_01d506c4 + 0x1c);
          if (*(int *)(DAT_01d506c4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d29e50);
          }
          local_5c = &local_30;
          uStack_48 = *(undefined4 *)(DAT_01d506c4 + 0x24);
          uStack_44 = *(undefined4 *)(DAT_01d506c4 + 0x28);
          local_2c = &local_38;
          local_40 = 0;
          local_58 = (undefined **)&DAT_00000001;
          local_34 = &local_7c;
          local_28 = &DAT_01d2ea4c;
          local_38 = (undefined4 ****)&DAT_005717fa;
          local_78 = FUN_01a05bf8;
          local_7c = &local_90;
          local_50 = (undefined4 ***)*local_54;
          iStack_4c = *(int *)(DAT_01d506c4 + 0x20);
          local_30 = &local_50;
          FUN_01aaa328(iVar3,pcVar1,puVar5[4],&local_68,&local_5c);
        }
      }
    }
  }
  FUN_0193c71c(param_1);
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}

