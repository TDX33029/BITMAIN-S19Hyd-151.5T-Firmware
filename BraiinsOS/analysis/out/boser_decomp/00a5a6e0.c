// FUN_00a5a6e0 @ 00a5a6e0 size=732 calls_out=6 calls_in=2
// strings: MetricsScraper task exited | boser::metrics_scraperopen/boser/boser/src/metrics_scraper.rsevent open/boser/boser/src/metrics_scraper.rs:167 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::metrics_scraperopen/boser/boser/src/metrics_scraper.rsevent open/boser/boser/src/metrics_scraper.rs:167 | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_00a5a6e0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 ****ppppuVar6;
  undefined4 *puVar7;
  undefined4 *****pppppuVar8;
  undefined4 ****local_6c;
  undefined4 local_68;
  undefined4 *local_64;
  char *local_60;
  undefined4 local_5c;
  undefined4 ***local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 ****local_4c;
  char **local_48;
  undefined4 *local_44;
  undefined4 ***local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 ***local_2c;
  undefined4 *****local_28;
  undefined1 *local_24;
  
  if ((DAT_01d50f88 < 4) &&
     (((DAT_01d4b9a8 - 1 < 2 ||
       ((DAT_01d4b9a8 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4b9a0), cVar1 != '\0')))) &&
      (iVar2 = FUN_01aaa278(DAT_01d4b9a0), iVar2 != 0)))) {
    iStack_3c = *(int *)(DAT_01d4b9a0 + 0x20);
    if (iStack_3c == 0) {
LAB_00a5a9a4:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c0f48c);
    }
    local_48 = &local_60;
    uStack_38 = *(undefined4 *)(DAT_01d4b9a0 + 0x24);
    uStack_34 = *(undefined4 *)(DAT_01d4b9a0 + 0x28);
    local_64 = (undefined4 *)(DAT_01d4b9a0 + 0x1c);
    local_40 = (undefined4 ***)*local_64;
    local_4c = &local_40;
    local_6c = &local_4c;
    local_30 = 0;
    pppppuVar8 = &local_6c;
    local_68 = 1;
    local_5c = 0x35;
    local_44 = (undefined4 *)&DAT_01d2ea4c;
    local_60 = "MetricsScraper task exited";
    FUN_01aaaecc(DAT_01d4b9a0,pppppuVar8);
    iVar2 = DAT_01d4b9a0;
    if (DAT_01d51ae9 != '\0') {
      return;
    }
    if (DAT_01d51b00 < 2) {
      return;
    }
    local_28 = *(undefined4 ******)(DAT_01d4b9a0 + 0x14);
    local_24 = *(undefined1 **)(DAT_01d4b9a0 + 0x18);
    local_2c = (undefined4 ***)0x2;
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
    if (iVar3 == 0) {
      return;
    }
    uVar5 = puVar7[4];
    ppppuVar6 = &local_2c;
  }
  else {
    iVar2 = DAT_01d4b9a0;
    if (DAT_01d51ae9 != '\0') {
      return;
    }
    if (DAT_01d51b00 < 2) {
      return;
    }
    local_54 = *(undefined4 *)(DAT_01d4b9a0 + 0x14);
    local_50 = *(undefined4 *)(DAT_01d4b9a0 + 0x18);
    local_58 = (undefined4 ***)0x2;
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
    if (iVar3 == 0) {
      return;
    }
    local_44 = (undefined4 *)(DAT_01d4b9a0 + 0x1c);
    local_40 = (undefined4 ***)*local_44;
    iStack_3c = *(int *)(DAT_01d4b9a0 + 0x20);
    if (iStack_3c == 0) goto LAB_00a5a9a4;
    local_28 = &local_6c;
    uStack_38 = *(undefined4 *)(DAT_01d4b9a0 + 0x24);
    uStack_34 = *(undefined4 *)(DAT_01d4b9a0 + 0x28);
    local_2c = &local_40;
    local_4c = &local_2c;
    local_48 = (char **)&DAT_00000001;
    local_24 = &DAT_01d2ea4c;
    local_68 = 0x35;
    pppppuVar8 = &local_4c;
    local_30 = 0;
    ppppuVar6 = &local_58;
    local_6c = (undefined4 ****)0x3e71aa;
    uVar5 = puVar7[4];
  }
  FUN_01aaa328(iVar2,pcVar4,uVar5,ppppuVar6,pppppuVar8);
  return;
}

