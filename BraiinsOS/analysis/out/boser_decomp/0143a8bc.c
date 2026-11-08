// FUN_0143a8bc @ 0143a8bc size=872 calls_out=6 calls_in=2
// strings: hyper::body::length/nix/store/ee | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | hyper::body::length/nix/store/ee | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_0143a8bc(undefined1 *param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 ***pppuVar8;
  undefined4 *puVar9;
  undefined4 ****ppppuVar10;
  uint local_88;
  int local_84;
  undefined4 ***local_80;
  uint **local_7c;
  undefined4 *local_78;
  undefined *local_74;
  uint **local_70;
  undefined4 **local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 ***local_60;
  undefined **local_5c;
  undefined4 *local_58;
  undefined4 **local_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  uint *local_40;
  code *local_3c;
  undefined *local_38;
  code *local_34;
  undefined4 **local_30;
  undefined4 ****local_2c;
  undefined1 *local_28;
  
  if (param_4 != -1 || -param_4 - 1U < (uint)(param_3 < 0xfffffffe)) {
    *(uint *)(param_1 + 8) = param_3;
    uVar1 = 0;
    *(int *)(param_1 + 0xc) = param_4;
    goto LAB_0143abe4;
  }
  local_88 = param_3;
  local_84 = param_4;
  if ((DAT_01d50f88 < 4) &&
     (((uVar5 = (uint)DAT_01d4eaec, uVar5 - 1 < 2 ||
       ((uVar5 != 0 &&
        (cVar2 = FUN_01aaafa8(&DAT_01d4eae4,uVar5,param_3,-3 - param_3), cVar2 != '\0')))) &&
      (iVar3 = FUN_01aaa278(DAT_01d4eae4), iVar3 != 0)))) {
    iStack_50 = *(int *)(DAT_01d4eae4 + 0x20);
    if (iStack_50 == 0) {
LAB_0143ac0c:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cf77d8);
    }
    local_5c = &local_74;
    uStack_4c = *(undefined4 *)(DAT_01d4eae4 + 0x24);
    uStack_48 = *(undefined4 *)(DAT_01d4eae4 + 0x28);
    local_78 = (undefined4 *)(DAT_01d4eae4 + 0x1c);
    local_54 = (undefined4 **)*local_78;
    local_60 = &local_54;
    local_80 = &local_60;
    local_44 = 0;
    ppppuVar10 = &local_80;
    local_7c = (uint **)&DAT_00000001;
    local_70 = &local_40;
    local_40 = &local_88;
    local_58 = (undefined4 *)&DAT_01d2ea4c;
    local_74 = &DAT_005aeb65;
    local_34 = FUN_012fd074;
    local_38 = &DAT_0056fb70;
    local_3c = FUN_012fd074;
    FUN_01aaaecc(DAT_01d4eae4,ppppuVar10);
    iVar3 = DAT_01d4eae4;
    if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
      local_2c = *(undefined4 *****)(DAT_01d4eae4 + 0x14);
      local_28 = *(undefined1 **)(DAT_01d4eae4 + 0x18);
      local_30 = (undefined4 **)0x2;
      DataMemoryBarrier(0xb);
      puVar9 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar9 = &DAT_01cfc5e0;
      }
      pcVar6 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar6 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar4 = (*(code *)puVar9[3])(pcVar6,&local_30);
      if (iVar4 != 0) {
        uVar7 = puVar9[4];
        pppuVar8 = &local_30;
        goto LAB_0143abd4;
      }
    }
  }
  else {
    iVar3 = DAT_01d4eae4;
    if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
      local_68 = *(undefined4 *)(DAT_01d4eae4 + 0x14);
      local_64 = *(undefined4 *)(DAT_01d4eae4 + 0x18);
      local_6c = (undefined4 **)0x2;
      DataMemoryBarrier(0xb);
      puVar9 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar9 = &DAT_01cfc5e0;
      }
      pcVar6 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar6 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar4 = (*(code *)puVar9[3])(pcVar6,&local_6c);
      if (iVar4 != 0) {
        local_58 = (undefined4 *)(DAT_01d4eae4 + 0x1c);
        local_54 = (undefined4 **)*local_58;
        iStack_50 = *(int *)(DAT_01d4eae4 + 0x20);
        if (iStack_50 == 0) goto LAB_0143ac0c;
        local_2c = &local_80;
        uStack_4c = *(undefined4 *)(DAT_01d4eae4 + 0x24);
        uStack_48 = *(undefined4 *)(DAT_01d4eae4 + 0x28);
        local_30 = &local_54;
        local_60 = &local_30;
        local_44 = 0;
        local_5c = (undefined **)&DAT_00000001;
        local_7c = &local_40;
        local_40 = &local_88;
        local_28 = &DAT_01d2ea4c;
        ppppuVar10 = &local_60;
        local_80 = (undefined4 ***)&DAT_005aeb65;
        pppuVar8 = &local_6c;
        local_34 = FUN_012fd074;
        local_38 = &DAT_0056fb70;
        local_3c = FUN_012fd074;
        uVar7 = puVar9[4];
LAB_0143abd4:
        FUN_01aaa328(iVar3,pcVar6,uVar7,pppuVar8,ppppuVar10);
      }
    }
  }
  param_1[1] = 9;
  uVar1 = 1;
LAB_0143abe4:
  *param_1 = uVar1;
  return;
}

