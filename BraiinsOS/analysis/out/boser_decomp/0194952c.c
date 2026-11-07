// FUN_0194952c @ 0194952c size=936 calls_out=11 calls_in=0
// strings: InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_0194952c(undefined4 *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  char local_a4 [20];
  undefined4 ***apppuStack_90 [5];
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
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 ****local_38;
  undefined4 ****local_34;
  undefined4 ****local_30;
  undefined4 ****local_2c;
  undefined1 *local_28;
  
  if (*(char *)(param_1 + 5) != '\0') {
    if (*(char *)(param_1 + 5) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d25f94);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d25f94);
  }
  local_50 = (undefined4 ***)param_1[1];
  local_4c = param_1[2];
  local_48 = param_1[3];
  local_44 = param_1[4];
  FUN_0195fd94(local_a4,*param_1,&local_50);
  if (local_a4[0] == '\x01') {
    FUN_01bed4e2(apppuStack_90,(uint)local_a4 | 1,0x10);
    if ((DAT_01d50f88 < 5) &&
       (((DAT_01d5066c - 1 < 2 ||
         ((DAT_01d5066c != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d50664), cVar2 != '\0')))) &&
        (iVar3 = FUN_01aaa278(DAT_01d50664), iVar3 != 0)))) {
      if (*(int *)(DAT_01d50664 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d25f84);
      }
      local_48 = *(undefined4 *)(DAT_01d50664 + 0x24);
      local_44 = *(undefined4 *)(DAT_01d50664 + 0x28);
      local_58 = &local_70;
      local_74 = (undefined4 *)(DAT_01d50664 + 0x1c);
      local_50 = (undefined4 ***)*local_74;
      local_7c = &local_5c;
      local_78 = (code *)0x1;
      local_6c = &local_38;
      local_40 = 0;
      local_54 = (undefined4 *)&DAT_01d2ea4c;
      local_70 = &DAT_005bb18f;
      local_34 = (undefined4 ****)FUN_01941628;
      local_5c = &local_50;
      local_4c = *(int *)(DAT_01d50664 + 0x20);
      local_38 = apppuStack_90;
      FUN_01aaaecc(DAT_01d50664,&local_7c);
      iVar3 = DAT_01d50664;
      if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
        local_2c = *(undefined4 *****)(DAT_01d50664 + 0x14);
        local_28 = *(undefined1 **)(DAT_01d50664 + 0x18);
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
      iVar3 = DAT_01d50664;
      if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
        local_64 = *(undefined4 *)(DAT_01d50664 + 0x14);
        local_60 = *(undefined4 *)(DAT_01d50664 + 0x18);
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
          local_54 = (undefined4 *)(DAT_01d50664 + 0x1c);
          if (*(int *)(DAT_01d50664 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d25f84);
          }
          local_2c = &local_38;
          local_48 = *(undefined4 *)(DAT_01d50664 + 0x24);
          local_44 = *(undefined4 *)(DAT_01d50664 + 0x28);
          local_5c = &local_30;
          local_58 = (undefined **)&DAT_00000001;
          local_34 = &local_7c;
          local_40 = 0;
          local_28 = &DAT_01d2ea4c;
          local_78 = FUN_01941628;
          local_38 = (undefined4 ****)&DAT_005bb18f;
          local_7c = apppuStack_90;
          local_50 = (undefined4 ***)*local_54;
          local_4c = *(int *)(DAT_01d50664 + 0x20);
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

