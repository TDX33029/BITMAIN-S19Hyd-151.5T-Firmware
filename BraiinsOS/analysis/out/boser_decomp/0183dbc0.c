// FUN_0183dbc0 @ 0183dbc0 size=320 calls_out=5 calls_in=1
// strings: InvalidParamSegmentInvalidParamInvalidCatchAll

undefined8 FUN_0183dbc0(uint param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined4 local_5d8;
  undefined *local_5d4;
  undefined4 local_5d0;
  undefined4 local_18;
  
  if (((param_1 & 1) != 0) && (4 < DAT_01d51b00)) {
    local_5d0 = 0x19;
    local_5d8 = 5;
    local_5d4 = &DAT_0050d78e;
    DataMemoryBarrier(0xb);
    puVar5 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar5 = &DAT_01cfc5e0;
    }
    pcVar1 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar2 = (*(code *)puVar5[3])(pcVar1,&local_5d8);
    if (iVar2 != 0) {
      uVar3 = FUN_0188dcd4();
      FUN_01bed4e2(&local_5d8,param_2,0x5c0);
      local_18 = uVar3;
      iVar2 = thunk_FUN_01be5118(0x5c8);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x5c8);
      }
      FUN_01bed4e2(iVar2,&local_5d8,0x5c8);
      puVar4 = &UNK_01d1ec98;
      goto LAB_0183dcd8;
    }
  }
  FUN_01bed4e2(&local_5d8,param_2,0x5c0);
  iVar2 = thunk_FUN_01be5118(0x5c0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x5c0);
  }
  FUN_01bed4e2(iVar2,param_2,0x5c0);
  puVar4 = &UNK_01d1ec20;
LAB_0183dcd8:
  return CONCAT44(puVar4,iVar2);
}

