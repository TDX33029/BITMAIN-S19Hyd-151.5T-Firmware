// FUN_01208934 @ 01208934 size=864 calls_out=7 calls_in=1
// strings: boser::led_manageropen/boser/boser/src/led_manager.rsevent open/boser/boser/src/led_manager.rs:152event open/boser/boser/src/led_manager.rs:63 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::led_manageropen/boser/boser/src/led_manager.rsevent open/boser/boser/src/led_manager.rs:152event open/boser/boser/src/led_manager.rs:63 | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_01208934(int *param_1,undefined4 param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint local_78;
  undefined4 local_74;
  uint local_70;
  undefined4 local_6c;
  undefined4 ***local_68;
  undefined4 local_64;
  undefined4 *local_60;
  undefined4 ***local_5c;
  undefined **local_58;
  undefined4 *local_54;
  undefined4 **local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined *local_3c;
  uint **local_38;
  uint *local_34;
  code *local_30;
  undefined4 **local_2c;
  undefined **local_28;
  undefined1 *local_24;
  
  (**(code **)(param_1[1] + 0x10))
            (&local_78,*param_1 + (*(int *)(param_1[1] + 8) - 1U & 0xfffffff8) + 8,(char)param_1[2],
             param_2);
  if ((char)local_78 != '\x04') {
    local_6c = local_74;
    local_70 = local_78;
    if ((DAT_01d50f88 < 5) &&
       (((DAT_01d4ca90 - 1 < 2 ||
         ((DAT_01d4ca90 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4ca88), cVar2 != '\0')))) &&
        (iVar3 = FUN_01aaa278(DAT_01d4ca88), iVar3 != 0)))) {
      iStack_4c = *(int *)(DAT_01d4ca88 + 0x20);
      if (iStack_4c == 0) {
LAB_01208c7c:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c237ec);
      }
      local_58 = &local_3c;
      uStack_48 = *(undefined4 *)(DAT_01d4ca88 + 0x24);
      uStack_44 = *(undefined4 *)(DAT_01d4ca88 + 0x28);
      local_60 = (undefined4 *)(DAT_01d4ca88 + 0x1c);
      local_50 = (undefined4 **)*local_60;
      local_5c = &local_50;
      local_68 = &local_5c;
      local_40 = 0;
      local_64 = 1;
      local_38 = &local_34;
      local_34 = &local_70;
      local_54 = (undefined4 *)&DAT_01d2ea4c;
      local_3c = &DAT_0059e34a;
      local_30 = FUN_019a7d7c;
      FUN_01aaaecc(DAT_01d4ca88,&local_68);
      iVar3 = DAT_01d4ca88;
      if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
        local_28 = *(undefined ***)(DAT_01d4ca88 + 0x14);
        local_24 = *(undefined1 **)(DAT_01d4ca88 + 0x18);
        local_2c = (undefined4 **)&DAT_00000001;
        DataMemoryBarrier(0xb);
        puVar5 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar5 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar4 = (*(code *)puVar5[3])(pcVar1,&local_2c);
        if (iVar4 != 0) {
          FUN_01aaa328(iVar3,pcVar1,puVar5[4],&local_2c,&local_68);
        }
      }
    }
    else {
      iVar3 = DAT_01d4ca88;
      if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
        local_64 = *(undefined4 *)(DAT_01d4ca88 + 0x14);
        local_60 = *(undefined4 **)(DAT_01d4ca88 + 0x18);
        local_68 = (undefined4 ***)&DAT_00000001;
        DataMemoryBarrier(0xb);
        puVar5 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar5 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar4 = (*(code *)puVar5[3])(pcVar1,&local_68);
        if (iVar4 != 0) {
          local_54 = (undefined4 *)(DAT_01d4ca88 + 0x1c);
          local_50 = (undefined4 **)*local_54;
          iStack_4c = *(int *)(DAT_01d4ca88 + 0x20);
          if (iStack_4c == 0) goto LAB_01208c7c;
          local_28 = &local_3c;
          uStack_48 = *(undefined4 *)(DAT_01d4ca88 + 0x24);
          uStack_44 = *(undefined4 *)(DAT_01d4ca88 + 0x28);
          local_2c = &local_50;
          local_5c = &local_2c;
          local_40 = 0;
          local_58 = (undefined **)&DAT_00000001;
          local_38 = &local_34;
          local_34 = &local_70;
          local_24 = &DAT_01d2ea4c;
          local_3c = &DAT_0059e34a;
          local_30 = FUN_019a7d7c;
          FUN_01aaa328(iVar3,pcVar1,puVar5[4],&local_68,&local_5c);
        }
      }
    }
    FUN_0069d8a4(local_70 & 0xff,local_6c);
  }
  return;
}

