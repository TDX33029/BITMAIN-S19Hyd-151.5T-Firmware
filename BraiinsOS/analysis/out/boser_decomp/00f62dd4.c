// FUN_00f62dd4 @ 00f62dd4 size=808 calls_out=14 calls_in=0
// strings: internal error: entered unreachable code: unexpected stage | FieldSet corrupted (this is a bug) | boser::webopen/boser/boser/src/web.rsevent open/boser/boser/src/web.rs:330event open/boser/boser/src/web.rs:1017event open/boser/boser/src/web.rs:1033event open/boser/boser/src/web.rs:899event open/boser/boser/src/web.rs:1039event open/boser/boser/src/web.rs:173event open/boser/boser/src/web.rs:1105event open/boser/boser/src/config.rs:64 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | FieldSet corrupted (this is a bug)

void FUN_00f62dd4(int param_1,undefined4 param_2)

{
  code *pcVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 *local_e8;
  undefined **local_e4;
  undefined1 *local_e0;
  undefined4 uStack_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 **local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined *local_2c;
  undefined4 local_28;
  
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("internal error: entered unreachable code: unexpected stage",0x75,&DAT_01d2e13c);
  }
  uVar7 = FUN_019ec558(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  iVar6 = param_1 + 0x18;
  if (*(char *)(param_1 + 0x68) == '\0') {
    FUN_019e6e74(&uStack_98,&DAT_01c19b0c,5,0,0,&DAT_01c19b0c);
    FUN_01bed4e2(&local_e8,&uStack_98,0x50);
    FUN_01bed4e2(iVar6,&local_e8,0x50);
  }
  else if (*(char *)(param_1 + 0x68) != '\x03') {
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c19b1c);
  }
  iVar4 = FUN_019e84a0(iVar6,param_2);
  if (iVar4 != 0) {
    *(undefined1 *)(param_1 + 0x68) = 3;
    FUN_019ec558((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
    return;
  }
  FUN_01431b40(iVar6);
  if ((DAT_01d50f88 < 4) &&
     (((DAT_01d4c68c - 1 < 2 ||
       ((DAT_01d4c68c != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4c684), cVar3 != '\0')))) &&
      (iVar6 = FUN_01aaa278(DAT_01d4c684), iVar6 != 0)))) {
    local_30 = (undefined4 *)(DAT_01d4c684 + 0x1c);
    uStack_98 = *local_30;
    iStack_94 = *(int *)(DAT_01d4c684 + 0x20);
    if (iStack_94 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c19b2c);
    }
    local_e4 = &local_44;
    uStack_90 = *(undefined4 *)(DAT_01d4c684 + 0x24);
    local_8c = *(undefined4 *)(DAT_01d4c684 + 0x28);
    local_e8 = &uStack_98;
    local_38 = &local_e8;
    local_34 = 1;
    local_88 = 0;
    local_e0 = &DAT_01d2ea4c;
    local_40 = 0x45;
    local_44 = &DAT_003f2f88;
    FUN_00f631d4(&local_38);
  }
  else {
    iVar6 = DAT_01d4c684;
    if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
      local_40 = *(undefined4 *)(DAT_01d4c684 + 0x14);
      local_3c = *(undefined4 *)(DAT_01d4c684 + 0x18);
      local_44 = (undefined *)0x2;
      DataMemoryBarrier(0xb);
      puVar5 = DAT_01d4edc8;
      pcVar2 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar5 = &DAT_01cfc5e0;
        pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar4 = (*(code *)puVar5[3])(pcVar2,&local_44);
      if (iVar4 != 0) {
        local_30 = (undefined4 *)(DAT_01d4c684 + 0x1c);
        uStack_98 = *local_30;
        iStack_94 = *(int *)(DAT_01d4c684 + 0x20);
        if (iStack_94 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c19b2c);
        }
        local_e4 = &local_2c;
        uStack_90 = *(undefined4 *)(DAT_01d4c684 + 0x24);
        local_8c = *(undefined4 *)(DAT_01d4c684 + 0x28);
        local_e8 = &uStack_98;
        local_38 = &local_e8;
        local_88 = 0;
        local_34 = 1;
        local_e0 = &DAT_01d2ea4c;
        local_28 = 0x45;
        local_2c = &DAT_003f2f88;
        FUN_01aaa328(iVar6,pcVar2,puVar5[4],&local_44,&local_38);
      }
    }
  }
  FUN_019b44a0(0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0xf630e8);
  (*pcVar1)();
}

