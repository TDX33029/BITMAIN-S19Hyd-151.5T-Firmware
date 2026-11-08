// FUN_0179b178 @ 0179b178 size=804 calls_out=8 calls_in=1
// strings: hyper::proto::h2 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | hyper::proto::h2 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

undefined4 FUN_0179b178(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 **ppuVar6;
  undefined4 *puVar7;
  undefined4 ****ppppuVar8;
  undefined4 ***local_70;
  undefined4 local_6c;
  undefined4 *local_68;
  undefined *local_64;
  undefined4 local_60;
  undefined4 *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 ***local_50;
  undefined **local_4c;
  undefined4 *local_48;
  undefined4 **local_44;
  undefined4 ****local_40;
  undefined1 *local_3c;
  undefined4 local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d4f1e4 - 1 < 2 ||
       ((DAT_01d4f1e4 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4f1dc), cVar1 != '\0')))) &&
      (iVar3 = FUN_01aaa278(DAT_01d4f1dc), iVar3 != 0)))) {
    iStack_34 = *(int *)(DAT_01d4f1dc + 0x20);
    if (iStack_34 == 0) {
LAB_0179b484:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d1b864);
    }
    local_4c = &local_64;
    uStack_30 = *(undefined4 *)(DAT_01d4f1dc + 0x24);
    uStack_2c = *(undefined4 *)(DAT_01d4f1dc + 0x28);
    local_68 = (undefined4 *)(DAT_01d4f1dc + 0x1c);
    local_38 = (undefined4 **)*local_68;
    local_50 = (undefined4 ***)&local_38;
    local_70 = &local_50;
    local_28 = 0;
    ppppuVar8 = &local_70;
    local_6c = 1;
    local_60 = 0x1b;
    local_48 = (undefined4 *)&DAT_01d2ea4c;
    local_64 = &DAT_0050bea5;
    FUN_01aaaecc(DAT_01d4f1dc,ppppuVar8);
    iVar3 = DAT_01d4f1dc;
    if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 5)) goto LAB_0179b41c;
    local_40 = *(undefined4 *****)(DAT_01d4f1dc + 0x14);
    local_3c = *(undefined1 **)(DAT_01d4f1dc + 0x18);
    local_44 = (undefined4 **)&DAT_00000005;
    DataMemoryBarrier(0xb);
    puVar7 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar7 = &DAT_01cfc5e0;
    }
    pcVar4 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar2 = (*(code *)puVar7[3])(pcVar4,&local_44);
    if (iVar2 == 0) goto LAB_0179b41c;
    uVar5 = puVar7[4];
    ppuVar6 = &local_44;
  }
  else {
    iVar3 = DAT_01d4f1dc;
    if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 5)) goto LAB_0179b41c;
    local_58 = *(undefined4 *)(DAT_01d4f1dc + 0x14);
    local_54 = *(undefined4 *)(DAT_01d4f1dc + 0x18);
    local_5c = (undefined4 *)0x5;
    DataMemoryBarrier(0xb);
    puVar7 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar7 = &DAT_01cfc5e0;
    }
    pcVar4 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar2 = (*(code *)puVar7[3])(pcVar4,&local_5c);
    if (iVar2 == 0) goto LAB_0179b41c;
    local_48 = (undefined4 *)(DAT_01d4f1dc + 0x1c);
    local_38 = (undefined4 **)*local_48;
    iStack_34 = *(int *)(DAT_01d4f1dc + 0x20);
    if (iStack_34 == 0) goto LAB_0179b484;
    local_40 = &local_70;
    uStack_30 = *(undefined4 *)(DAT_01d4f1dc + 0x24);
    uStack_2c = *(undefined4 *)(DAT_01d4f1dc + 0x28);
    local_44 = (undefined4 **)&local_38;
    local_50 = &local_44;
    local_28 = 0;
    local_4c = (undefined **)&DAT_00000001;
    local_6c = 0x1b;
    ppppuVar8 = &local_50;
    local_3c = &DAT_01d2ea4c;
    ppuVar6 = &local_5c;
    local_70 = (undefined4 ***)&DAT_0050bea5;
    uVar5 = puVar7[4];
  }
  FUN_01aaa328(iVar3,pcVar4,uVar5,ppuVar6,ppppuVar8);
LAB_0179b41c:
  local_38 = (undefined4 **)0x2;
  cVar1 = FUN_017f65ac(param_1,&local_38,1);
  uVar5 = 0;
  if (cVar1 != '\f') {
    local_38 = (undefined4 **)CONCAT31(CONCAT21(local_38._2_2_,cVar1),3);
    uVar5 = FUN_017c47c0(&local_38);
  }
  return uVar5;
}

