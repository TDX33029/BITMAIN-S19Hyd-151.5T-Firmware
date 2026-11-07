// FUN_013e1214 @ 013e1214 size=1520 calls_out=8 calls_in=2
// strings: InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_013e1214(int *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined4 ****appppuStack_100 [29];
  char local_8c;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 *****local_78;
  code *local_74;
  undefined4 *local_70;
  undefined4 ****local_6c;
  undefined4 *****local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 ****local_58;
  undefined4 *****local_54;
  undefined4 *local_50;
  undefined4 ***local_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 *****local_38;
  undefined4 *****local_34;
  undefined4 ****local_30;
  undefined4 *****local_2c;
  undefined1 *local_28;
  
  if (*param_1 == -0x7fffffff) {
    return;
  }
  FUN_01bed4e2(appppuStack_100,param_1,0x78);
  if (local_8c == '\0') {
    if ((DAT_01d50f88 < 4) &&
       (((DAT_01d4e590 - 1 < 2 ||
         ((DAT_01d4e590 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4e588), cVar2 != '\0')))) &&
        (iVar3 = FUN_01aaa278(DAT_01d4e588), iVar3 != 0)))) {
      iStack_48 = *(int *)(DAT_01d4e588 + 0x20);
      if (iStack_48 != 0) {
        local_54 = &local_6c;
        uStack_44 = *(undefined4 *)(DAT_01d4e588 + 0x24);
        uStack_40 = *(undefined4 *)(DAT_01d4e588 + 0x28);
        local_70 = (undefined4 *)(DAT_01d4e588 + 0x1c);
        local_4c = (undefined4 ***)*local_70;
        local_58 = &local_4c;
        local_78 = &local_58;
        local_3c = 0;
        local_74 = (code *)0x1;
        local_68 = &local_38;
        local_50 = (undefined4 *)&DAT_01d2ea4c;
        local_6c = (undefined4 ****)&DAT_00579abc;
        local_34 = (undefined4 *****)FUN_013e1900;
        local_38 = appppuStack_100;
        FUN_01aaaecc(DAT_01d4e588,&local_78);
        iVar3 = DAT_01d4e588;
        if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
          local_2c = *(undefined4 ******)(DAT_01d4e588 + 0x14);
          local_28 = *(undefined1 **)(DAT_01d4e588 + 0x18);
          local_30 = (undefined4 ****)0x2;
          DataMemoryBarrier(0xb);
          puVar6 = DAT_01d4edc8;
          pcVar1 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar6 = &DAT_01cfc5e0;
            pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar4 = (*(code *)puVar6[3])(pcVar1,&local_30);
          if (iVar4 != 0) {
            FUN_01aaa328(iVar3,pcVar1,puVar6[4],&local_30,&local_78);
          }
        }
        goto LAB_013e1798;
      }
    }
    else {
      iVar3 = DAT_01d4e588;
      if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 2)) goto LAB_013e1798;
      local_60 = *(undefined4 *)(DAT_01d4e588 + 0x14);
      local_5c = *(undefined4 *)(DAT_01d4e588 + 0x18);
      local_64 = 2;
      DataMemoryBarrier(0xb);
      puVar6 = DAT_01d4edc8;
      pcVar1 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar6 = &DAT_01cfc5e0;
        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar4 = (*(code *)puVar6[3])(pcVar1,&local_64);
      if (iVar4 == 0) goto LAB_013e1798;
      local_50 = (undefined4 *)(DAT_01d4e588 + 0x1c);
      local_4c = (undefined4 ***)*local_50;
      iStack_48 = *(int *)(DAT_01d4e588 + 0x20);
      if (iStack_48 != 0) {
        local_2c = &local_38;
        uStack_44 = *(undefined4 *)(DAT_01d4e588 + 0x24);
        uStack_40 = *(undefined4 *)(DAT_01d4e588 + 0x28);
        local_30 = &local_4c;
        local_58 = &local_30;
        local_3c = 0;
        local_54 = (undefined4 *****)&DAT_00000001;
        local_34 = &local_78;
        local_28 = &DAT_01d2ea4c;
        local_38 = (undefined4 *****)&DAT_00579abc;
        local_74 = FUN_013e1900;
        local_78 = appppuStack_100;
        FUN_01aaa328(iVar3,pcVar1,puVar6[4],&local_64,&local_58);
        goto LAB_013e1798;
      }
    }
    puVar5 = &DAT_01cf2ee8;
  }
  else {
    if (((DAT_01d50f88 < 2) &&
        ((DAT_01d4e584 - 1 < 2 ||
         ((DAT_01d4e584 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4e57c), cVar2 != '\0')))))) &&
       (iVar3 = FUN_01aaa278(DAT_01d4e57c), iVar3 != 0)) {
      iStack_48 = *(int *)(DAT_01d4e57c + 0x20);
      if (iStack_48 != 0) {
        local_54 = &local_38;
        uStack_44 = *(undefined4 *)(DAT_01d4e57c + 0x24);
        uStack_40 = *(undefined4 *)(DAT_01d4e57c + 0x28);
        local_70 = (undefined4 *)(DAT_01d4e57c + 0x1c);
        local_4c = (undefined4 ***)*local_70;
        local_58 = &local_4c;
        local_78 = &local_58;
        local_3c = 0;
        local_74 = (code *)0x1;
        local_50 = (undefined4 *)&DAT_01d2ea4c;
        local_34 = (undefined4 *****)&DAT_00000055;
        local_38 = (undefined4 *****)&DAT_00474980;
        FUN_01aaaecc(DAT_01d4e57c,&local_78);
        iVar3 = DAT_01d4e57c;
        if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
          local_2c = *(undefined4 ******)(DAT_01d4e57c + 0x14);
          local_28 = *(undefined1 **)(DAT_01d4e57c + 0x18);
          local_30 = (undefined4 ****)&SUB_00000004;
          DataMemoryBarrier(0xb);
          puVar6 = DAT_01d4edc8;
          pcVar1 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar6 = &DAT_01cfc5e0;
            pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar4 = (*(code *)puVar6[3])(pcVar1,&local_30);
          if (iVar4 != 0) {
            FUN_01aaa328(iVar3,pcVar1,puVar6[4],&local_30,&local_78);
          }
        }
        goto LAB_013e1798;
      }
    }
    else {
      iVar3 = DAT_01d4e57c;
      if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 4)) {
LAB_013e1798:
        FUN_013e1100(appppuStack_100);
        return;
      }
      local_80 = *(undefined4 *)(DAT_01d4e57c + 0x14);
      local_7c = *(undefined4 *)(DAT_01d4e57c + 0x18);
      local_84 = 4;
      DataMemoryBarrier(0xb);
      puVar6 = DAT_01d4edc8;
      pcVar1 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar6 = &DAT_01cfc5e0;
        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar4 = (*(code *)puVar6[3])(pcVar1,&local_84);
      if (iVar4 == 0) goto LAB_013e1798;
      local_50 = (undefined4 *)(DAT_01d4e57c + 0x1c);
      local_4c = (undefined4 ***)*local_50;
      iStack_48 = *(int *)(DAT_01d4e57c + 0x20);
      if (iStack_48 != 0) {
        local_2c = &local_78;
        uStack_44 = *(undefined4 *)(DAT_01d4e57c + 0x24);
        uStack_40 = *(undefined4 *)(DAT_01d4e57c + 0x28);
        local_30 = &local_4c;
        local_58 = &local_30;
        local_54 = (undefined4 *****)&DAT_00000001;
        local_3c = 0;
        local_28 = &DAT_01d2ea4c;
        local_74 = (code *)0x55;
        local_78 = (undefined4 *****)&DAT_00474980;
        FUN_01aaa328(iVar3,pcVar1,puVar6[4],&local_84,&local_58);
        goto LAB_013e1798;
      }
    }
    puVar5 = &DAT_01cf2ef8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,puVar5);
}

