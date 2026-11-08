// FUN_01609ae4 @ 01609ae4 size=272 calls_out=0 calls_in=0
// strings: READABLEDecember

undefined4 FUN_01609ae4(byte *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar3;
  undefined4 uVar4;
  
  bVar1 = *param_1;
  if ((bVar1 & 1) == 0) {
    if ((bVar1 & 2) == 0) {
      if ((bVar1 & 0x10) == 0) {
        return 0;
      }
      uVar4 = *param_2;
      UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
      goto LAB_01609bb4;
    }
    uVar4 = *param_2;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
LAB_01609b58:
    iVar2 = (*UNRECOVERED_JUMPTABLE)(uVar4,&DAT_0056fc78,8);
    if (iVar2 != 0) {
      return 1;
    }
  }
  else {
    uVar4 = *param_2;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    iVar2 = (*UNRECOVERED_JUMPTABLE)(uVar4,"READABLEDecember",8);
    if (iVar2 != 0) {
      return 1;
    }
    if ((bVar1 & 2) != 0) {
      iVar2 = (*UNRECOVERED_JUMPTABLE)(uVar4,&DAT_0053147c,3);
      if (iVar2 != 0) {
        return 1;
      }
      goto LAB_01609b58;
    }
  }
  uVar3 = 0;
  if ((bVar1 & 0x10) != 0) {
    iVar2 = (*UNRECOVERED_JUMPTABLE)(uVar4,&DAT_0053147c,3);
    uVar3 = 1;
    if (iVar2 == 0) {
LAB_01609bb4:
                    /* WARNING: Could not recover jumptable at 0x01609bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*UNRECOVERED_JUMPTABLE)(uVar4,&DAT_00570648,8);
      return uVar4;
    }
  }
  return uVar3;
}

