// FUN_01206678 @ 01206678 size=744 calls_out=7 calls_in=2
// strings: ClientControl dropped; cancelling client tasks | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | ClientControl dropped; cancelling client tasks | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_01206678(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 ***pppuVar6;
  undefined4 *puVar7;
  undefined4 ****ppppuVar8;
  undefined4 ***local_6c;
  undefined4 local_68;
  undefined4 *local_64;
  char *local_60;
  undefined4 local_5c;
  undefined4 **local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 ***local_4c;
  char **local_48;
  undefined4 *local_44;
  undefined4 **local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 **local_2c;
  undefined4 ****local_28;
  undefined1 *local_24;
  
  if ((DAT_01d50f88 < 3) &&
     (((DAT_01d50fd0 - 1 < 2 ||
       ((DAT_01d50fd0 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d50fc8), cVar1 != '\0')))) &&
      (iVar2 = FUN_01aaa278(DAT_01d50fc8), iVar2 != 0)))) {
    iStack_3c = *(int *)(DAT_01d50fc8 + 0x20);
    if (iStack_3c == 0) {
LAB_01206948:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c2373c);
    }
    local_48 = &local_60;
    uStack_38 = *(undefined4 *)(DAT_01d50fc8 + 0x24);
    uStack_34 = *(undefined4 *)(DAT_01d50fc8 + 0x28);
    local_64 = (undefined4 *)(DAT_01d50fc8 + 0x1c);
    local_40 = (undefined4 **)*local_64;
    local_4c = &local_40;
    local_6c = &local_4c;
    local_30 = 0;
    ppppuVar8 = &local_6c;
    local_68 = 1;
    local_5c = 0x5d;
    local_44 = (undefined4 *)&DAT_01d2ea4c;
    local_60 = "ClientControl dropped, cancelling client tasks";
    FUN_01aaaecc(DAT_01d50fc8,ppppuVar8);
    iVar2 = DAT_01d50fc8;
    if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 3)) goto LAB_0120691c;
    local_28 = *(undefined4 *****)(DAT_01d50fc8 + 0x14);
    local_24 = *(undefined1 **)(DAT_01d50fc8 + 0x18);
    local_2c = (undefined4 **)&DAT_00000003;
    DataMemoryBarrier(0xb);
    puVar7 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar7 = &DAT_01cfc5e0;
    }
    pcVar4 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar3 = (*(code *)puVar7[3])(pcVar4,&local_2c);
    if (iVar3 == 0) goto LAB_0120691c;
    uVar5 = puVar7[4];
    pppuVar6 = &local_2c;
  }
  else {
    iVar2 = DAT_01d50fc8;
    if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 3)) goto LAB_0120691c;
    local_54 = *(undefined4 *)(DAT_01d50fc8 + 0x14);
    local_50 = *(undefined4 *)(DAT_01d50fc8 + 0x18);
    local_58 = (undefined4 **)0x3;
    DataMemoryBarrier(0xb);
    puVar7 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar7 = &DAT_01cfc5e0;
    }
    pcVar4 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar3 = (*(code *)puVar7[3])(pcVar4,&local_58);
    if (iVar3 == 0) goto LAB_0120691c;
    local_44 = (undefined4 *)(DAT_01d50fc8 + 0x1c);
    local_40 = (undefined4 **)*local_44;
    iStack_3c = *(int *)(DAT_01d50fc8 + 0x20);
    if (iStack_3c == 0) goto LAB_01206948;
    local_28 = &local_6c;
    uStack_38 = *(undefined4 *)(DAT_01d50fc8 + 0x24);
    uStack_34 = *(undefined4 *)(DAT_01d50fc8 + 0x28);
    local_2c = &local_40;
    local_4c = &local_2c;
    local_30 = 0;
    local_48 = (char **)&DAT_00000001;
    local_68 = 0x5d;
    local_24 = &DAT_01d2ea4c;
    ppppuVar8 = &local_4c;
    local_6c = (undefined4 ***)0x402248;
    pppuVar6 = &local_58;
    uVar5 = puVar7[4];
  }
  FUN_01aaa328(iVar2,pcVar4,uVar5,pppuVar6,ppppuVar8);
LAB_0120691c:
  FUN_01a3b7c0(*(undefined4 *)(param_1 + 4));
  return;
}

