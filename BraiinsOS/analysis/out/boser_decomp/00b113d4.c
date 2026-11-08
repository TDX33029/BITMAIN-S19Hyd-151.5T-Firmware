// FUN_00b113d4 @ 00b113d4 size=1848 calls_out=13 calls_in=0
// strings: Map must not be polled after it returned `Poll::Ready` | hyper_ut | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | hyper_ut | InvalidParamSegmentInvalidParamInvalidCatchAll

undefined4 FUN_00b113d4(uint *param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  int local_84;
  undefined4 *******local_80;
  int **local_7c;
  undefined4 *local_78;
  int *local_70;
  int **local_6c;
  undefined4 *******local_68;
  int **local_64;
  undefined4 *local_60;
  undefined4 ******local_5c;
  uint local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int *local_48;
  code *local_44;
  undefined4 *******local_40;
  int **local_3c;
  undefined4 *local_38;
  undefined4 *******local_30;
  int **local_2c;
  undefined4 *local_28;
  
  uVar7 = *param_1;
  uVar3 = 0;
  if (uVar7 != 6 || param_1[1] != 0) {
    uVar3 = uVar7 ^ 5;
  }
  if (param_1[1] == 0 && (uVar7 == 6 || uVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("Map must not be polled after it returned `Poll::Ready`",0x36,&DAT_01d2da7c);
  }
  uVar10 = FUN_00a4adac(param_1);
  iVar4 = (int)(uVar10 >> 0x20);
  if ((uVar10 & 1) != 0) {
    return (int)uVar10;
  }
  if (*param_1 == 5 && param_1[1] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2da6c);
  }
  uVar3 = param_1[0x66];
  local_5c = (undefined4 ******)0x0;
  iVar5 = iVar4;
  local_58 = uVar3;
  FUN_009d7384(param_1);
  *param_1 = 5;
  param_1[1] = 0;
  if (iVar4 == 0) {
    FUN_01851fb4(uVar3);
    goto LAB_00b11a48;
  }
  local_84 = iVar4;
  if ((DAT_01d50f88 < 2) &&
     (((DAT_01d4fbe0 - 1 < 2 ||
       ((DAT_01d4fbe0 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4fbd8), cVar2 != '\0')))) &&
      (iVar4 = FUN_01aaa278(DAT_01d4fbd8), iVar4 != 0)))) {
    if (*(uint *)(DAT_01d4fbd8 + 0x20) == 0) {
LAB_00b11aec:
      puVar8 = &DAT_01d21038;
      goto LAB_00b11b00;
    }
    local_68 = &local_5c;
    local_54 = *(undefined4 *)(DAT_01d4fbd8 + 0x24);
    local_64 = &local_70;
    local_50 = *(undefined4 *)(DAT_01d4fbd8 + 0x28);
    local_78 = (undefined4 *)(DAT_01d4fbd8 + 0x1c);
    local_5c = (undefined4 ******)*local_78;
    local_80 = &local_68;
    local_7c = (int **)&DAT_00000001;
    local_6c = &local_48;
    local_4c = 0;
    local_60 = (undefined4 *)&DAT_01d2ea4c;
    local_44 = FUN_01427508;
    local_70 = (int *)&DAT_005a5635;
    local_48 = &local_84;
    local_58 = *(uint *)(DAT_01d4fbd8 + 0x20);
    FUN_01aaaecc(DAT_01d4fbd8,&local_80);
    if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
      local_3c = *(int ***)(DAT_01d4fbd8 + 0x14);
      local_38 = *(undefined4 **)(DAT_01d4fbd8 + 0x18);
      local_40 = (undefined4 *******)&SUB_00000004;
      DataMemoryBarrier(0xb);
      puVar9 = DAT_01d4edc8;
      pcVar1 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar9 = &DAT_01cfc5e0;
        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar4 = DAT_01d4fbd8;
      iVar5 = (*(code *)puVar9[3])(pcVar1,&local_40);
      if (iVar5 != 0) {
        local_30 = local_40;
        local_2c = local_3c;
        local_28 = local_38;
        FUN_01aaa328(iVar4,pcVar1,puVar9[4],&local_30,&local_80);
      }
    }
  }
  else if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
    local_7c = *(int ***)(DAT_01d4fbd8 + 0x14);
    local_78 = *(undefined4 **)(DAT_01d4fbd8 + 0x18);
    local_80 = (undefined4 *******)&SUB_00000004;
    DataMemoryBarrier(0xb);
    puVar9 = DAT_01d4edc8;
    pcVar1 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      puVar9 = &DAT_01cfc5e0;
      pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar4 = DAT_01d4fbd8;
    iVar6 = (*(code *)puVar9[3])(pcVar1,&local_80);
    if (iVar6 != 0) {
      if (*(uint *)(DAT_01d4fbd8 + 0x20) == 0) goto LAB_00b11aec;
      local_40 = &local_5c;
      local_68 = &local_40;
      local_54 = *(undefined4 *)(DAT_01d4fbd8 + 0x24);
      local_50 = *(undefined4 *)(DAT_01d4fbd8 + 0x28);
      local_3c = &local_70;
      local_4c = 0;
      local_64 = (int **)&DAT_00000001;
      local_38 = (undefined4 *)&DAT_01d2ea4c;
      local_6c = &local_48;
      local_70 = (int *)&DAT_005a5635;
      local_44 = FUN_01427508;
      local_48 = &local_84;
      local_30 = local_80;
      local_2c = local_7c;
      local_28 = local_78;
      local_60 = (undefined4 *)(DAT_01d4fbd8 + 0x1c);
      local_5c = *(undefined4 *******)(DAT_01d4fbd8 + 0x1c);
      local_58 = *(uint *)(DAT_01d4fbd8 + 0x20);
      FUN_01aaa328(iVar4,pcVar1,puVar9[4],&local_30,&local_68,iVar4,iVar5);
    }
  }
  if (((DAT_01d50f88 == 0) &&
      ((DAT_01d4fbec - 1 < 2 ||
       ((DAT_01d4fbec != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4fbe4), cVar2 != '\0')))))) &&
     (iVar4 = FUN_01aaa278(DAT_01d4fbe4), iVar4 != 0)) {
    if (*(uint *)(DAT_01d4fbe4 + 0x20) == 0) {
LAB_00b11af8:
      puVar8 = &DAT_01d21048;
LAB_00b11b00:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,puVar8);
    }
    local_3c = &local_48;
    local_54 = *(undefined4 *)(DAT_01d4fbe4 + 0x24);
    local_50 = *(undefined4 *)(DAT_01d4fbe4 + 0x28);
    local_60 = (undefined4 *)(DAT_01d4fbe4 + 0x1c);
    local_5c = (undefined4 ******)*local_60;
    local_40 = &local_5c;
    local_68 = &local_40;
    local_64 = (int **)&DAT_00000001;
    local_4c = 0;
    local_38 = (undefined4 *)&DAT_01d2ea4c;
    local_44 = (code *)0x53;
    local_48 = (int *)&DAT_0051cf18;
    local_58 = *(uint *)(DAT_01d4fbe4 + 0x20);
    FUN_01aaaecc(DAT_01d4fbe4,&local_68);
    iVar4 = DAT_01d4fbe4;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_2c = *(int ***)(DAT_01d4fbe4 + 0x14);
      local_28 = *(undefined4 **)(DAT_01d4fbe4 + 0x18);
      local_30 = (undefined4 *******)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar9 = DAT_01d4edc8;
      pcVar1 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar9 = &DAT_01cfc5e0;
        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar5 = (*(code *)puVar9[3])(pcVar1,&local_30);
      if (iVar5 != 0) {
        FUN_01aaa328(iVar4,pcVar1,puVar9[4],&local_30,&local_68);
      }
    }
  }
  else {
    iVar4 = DAT_01d4fbe4;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_64 = *(int ***)(DAT_01d4fbe4 + 0x14);
      local_60 = *(undefined4 **)(DAT_01d4fbe4 + 0x18);
      local_68 = (undefined4 *******)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar9 = DAT_01d4edc8;
      pcVar1 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar9 = &DAT_01cfc5e0;
        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar5 = (*(code *)puVar9[3])(pcVar1,&local_68);
      if (iVar5 != 0) {
        if (*(uint *)(DAT_01d4fbe4 + 0x20) == 0) goto LAB_00b11af8;
        local_2c = &local_48;
        local_54 = *(undefined4 *)(DAT_01d4fbe4 + 0x24);
        local_50 = *(undefined4 *)(DAT_01d4fbe4 + 0x28);
        local_30 = &local_5c;
        local_40 = &local_30;
        local_3c = (int **)&DAT_00000001;
        local_4c = 0;
        local_28 = (undefined4 *)&DAT_01d2ea4c;
        local_44 = (code *)0x53;
        local_48 = (int *)&DAT_0051cf18;
        local_5c = *(undefined4 *******)(DAT_01d4fbe4 + 0x1c);
        local_58 = *(uint *)(DAT_01d4fbe4 + 0x20);
        local_38 = (undefined4 *)(DAT_01d4fbe4 + 0x1c);
        FUN_01aaa328(iVar4,pcVar1,puVar9[4],&local_68,&local_40);
      }
    }
  }
  iVar4 = FUN_0188d5b0(uVar3,local_84);
  if (iVar4 != 0) {
    FUN_01a69838();
  }
LAB_00b11a48:
  if (*param_1 == 6 && param_1[1] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2da6c);
  }
  FUN_009d7340(param_1);
  *param_1 = 6;
  param_1[1] = 0;
  return (int)uVar10;
}

