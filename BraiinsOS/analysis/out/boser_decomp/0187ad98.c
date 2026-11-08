// FUN_0187ad98 @ 0187ad98 size=1624 calls_out=7 calls_in=1
// strings: InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | FieldSet corrupted (this is a bug)

undefined4 FUN_0187ad98(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *******pppppppuVar7;
  uint *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *******pppppppuVar11;
  undefined4 *******local_78;
  undefined4 local_74;
  undefined4 *local_70;
  undefined4 *******local_6c;
  undefined **local_68;
  undefined4 *local_64;
  undefined *local_60;
  undefined4 *local_5c;
  undefined4 local_58;
  undefined *local_54;
  undefined4 *******local_50;
  undefined **local_4c;
  undefined1 *local_48;
  undefined4 ******local_40;
  int iStack_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  
  if (*(char *)(param_2[9] + 8) == '\0') {
    if (*(char *)(param_2 + 6) != '\x02') {
      DataMemoryBarrier(0xb);
      if (*(int *)(param_2[4] + 8) == 1) goto LAB_0187b0b0;
      goto LAB_0187adb4;
    }
    DataMemoryBarrier(0xb);
    if (*(int *)(param_2[4] + 8) == 3) goto LAB_0187adb4;
LAB_0187b0b0:
    local_50 = (undefined4 *******)*param_2;
    local_4c = (undefined **)param_2[1];
    local_48 = (undefined1 *)param_2[2];
    FUN_019ac248(&local_40,param_1[1],&local_50);
    puVar8 = (uint *)param_1[2];
    uVar10 = puVar8[1];
    if (((uint)local_40 & 1) != 0) {
      local_34 = 0;
      local_38 = 0;
    }
    uVar6 = (uint)(uVar10 <= local_34 && (uint)(local_38 <= *puVar8) <= uVar10 - local_34);
    if (local_38 == *puVar8 && local_34 == uVar10) {
      uVar6 = (uint)(puVar8[2] < local_30) & ~(uint)local_40;
    }
    if (uVar6 == 0) {
      return 1;
    }
    if ((DAT_01d50f88 != 0) ||
       (((1 < DAT_01d4fb14 - 1 &&
         ((DAT_01d4fb14 == 0 || (cVar1 = FUN_01aaafa8(&DAT_01d4fb0c), cVar1 == '\0')))) ||
        (iVar3 = FUN_01aaa278(DAT_01d4fb0c), iVar3 == 0)))) {
      iVar3 = DAT_01d4fb0c;
      if (DAT_01d51ae9 != '\0') {
        return 0;
      }
      if (DAT_01d51b00 < 5) {
        return 0;
      }
      local_74 = *(undefined4 *)(DAT_01d4fb0c + 0x14);
      local_70 = *(undefined4 **)(DAT_01d4fb0c + 0x18);
      local_78 = (undefined4 *******)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar9 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar9 = &DAT_01cfc5e0;
      }
      pcVar4 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar2 = (*(code *)puVar9[3])(pcVar4,&local_78);
      if (iVar2 == 0) {
        return 0;
      }
      local_64 = (undefined4 *)(DAT_01d4fb0c + 0x1c);
      local_40 = (undefined4 ******)*local_64;
      iStack_3c = *(int *)(DAT_01d4fb0c + 0x20);
      if (iStack_3c == 0) {
LAB_0187b3d8:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d20bd8);
      }
      local_38 = *(undefined4 *)(DAT_01d4fb0c + 0x24);
      local_4c = &local_60;
      local_34 = *(undefined4 *)(DAT_01d4fb0c + 0x28);
      local_68 = (undefined **)&DAT_00000001;
      local_5c = &local_58;
      pppppppuVar7 = &local_78;
      local_30 = 0;
      local_48 = &DAT_01d2ea4c;
      local_60 = &DAT_0059a93d;
      local_58 = *param_1;
      pppppppuVar11 = &local_6c;
      local_54 = &DAT_01743c28;
      uVar5 = puVar9[4];
      local_6c = &local_50;
      local_50 = &local_40;
      goto LAB_0187af08;
    }
    iStack_3c = *(int *)(DAT_01d4fb0c + 0x20);
    if (iStack_3c == 0) goto LAB_0187b3d8;
    local_38 = *(undefined4 *)(DAT_01d4fb0c + 0x24);
    local_34 = *(undefined4 *)(DAT_01d4fb0c + 0x28);
    local_70 = (undefined4 *)(DAT_01d4fb0c + 0x1c);
    local_40 = (undefined4 ******)*local_70;
    local_68 = &local_60;
    local_78 = &local_6c;
    local_30 = 0;
    local_64 = (undefined4 *)&DAT_01d2ea4c;
    local_74 = 1;
    local_58 = *param_1;
    local_5c = &local_58;
    local_60 = &DAT_0059a93d;
    local_54 = &DAT_01743c28;
    local_6c = &local_40;
    FUN_01aaaecc(DAT_01d4fb0c,&local_78);
    if (DAT_01d51ae9 != '\0') {
      return 0;
    }
    if (DAT_01d51b00 < 5) {
      return 0;
    }
    iVar3 = DAT_01d4fb0c;
LAB_0187b024:
    pppppppuVar11 = &local_78;
    local_4c = *(undefined ***)(iVar3 + 0x14);
    local_48 = *(undefined1 **)(iVar3 + 0x18);
    local_50 = (undefined4 *******)&DAT_00000005;
    DataMemoryBarrier(0xb);
    puVar9 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar9 = &DAT_01cfc5e0;
    }
    pcVar4 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar2 = (*(code *)puVar9[3])(pcVar4,&local_50);
    if (iVar2 == 0) {
      return 0;
    }
    uVar5 = puVar9[4];
    pppppppuVar7 = &local_50;
  }
  else {
LAB_0187adb4:
    if (((DAT_01d50f88 == 0) &&
        ((DAT_01d4fb08 - 1 < 2 ||
         ((DAT_01d4fb08 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4fb00), cVar1 != '\0')))))) &&
       (iVar3 = FUN_01aaa278(DAT_01d4fb00), iVar3 != 0)) {
      iStack_3c = *(int *)(DAT_01d4fb00 + 0x20);
      if (iStack_3c == 0) {
LAB_0187b3c0:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d20bc8);
      }
      local_38 = *(undefined4 *)(DAT_01d4fb00 + 0x24);
      local_34 = *(undefined4 *)(DAT_01d4fb00 + 0x28);
      local_70 = (undefined4 *)(DAT_01d4fb00 + 0x1c);
      local_40 = (undefined4 ******)*local_70;
      local_68 = &local_60;
      local_6c = &local_40;
      local_78 = &local_6c;
      local_30 = 0;
      local_64 = (undefined4 *)&DAT_01d2ea4c;
      local_74 = 1;
      local_58 = *param_1;
      local_5c = &local_58;
      local_60 = &DAT_00577224;
      local_54 = &DAT_01743c28;
      FUN_01aaaecc(DAT_01d4fb00,&local_78);
      if (DAT_01d51ae9 != '\0') {
        return 0;
      }
      if (DAT_01d51b00 < 5) {
        return 0;
      }
      iVar3 = DAT_01d4fb00;
      goto LAB_0187b024;
    }
    iVar3 = DAT_01d4fb00;
    if (DAT_01d51ae9 != '\0') {
      return 0;
    }
    if (DAT_01d51b00 < 5) {
      return 0;
    }
    local_74 = *(undefined4 *)(DAT_01d4fb00 + 0x14);
    local_70 = *(undefined4 **)(DAT_01d4fb00 + 0x18);
    local_78 = (undefined4 *******)&DAT_00000005;
    DataMemoryBarrier(0xb);
    puVar9 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar9 = &DAT_01cfc5e0;
    }
    pcVar4 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar2 = (*(code *)puVar9[3])(pcVar4,&local_78);
    if (iVar2 == 0) {
      return 0;
    }
    local_64 = (undefined4 *)(DAT_01d4fb00 + 0x1c);
    local_40 = (undefined4 ******)*local_64;
    iStack_3c = *(int *)(DAT_01d4fb00 + 0x20);
    if (iStack_3c == 0) goto LAB_0187b3c0;
    local_4c = &local_60;
    local_38 = *(undefined4 *)(DAT_01d4fb00 + 0x24);
    local_34 = *(undefined4 *)(DAT_01d4fb00 + 0x28);
    local_50 = &local_40;
    local_6c = &local_50;
    local_68 = (undefined **)&DAT_00000001;
    local_58 = *param_1;
    local_5c = &local_58;
    pppppppuVar7 = &local_78;
    pppppppuVar11 = &local_6c;
    local_30 = 0;
    local_48 = &DAT_01d2ea4c;
    local_60 = &DAT_00577224;
    local_54 = &DAT_01743c28;
    uVar5 = puVar9[4];
  }
LAB_0187af08:
  FUN_01aaa328(iVar3,pcVar4,uVar5,pppppppuVar7,pppppppuVar11);
  return 0;
}

