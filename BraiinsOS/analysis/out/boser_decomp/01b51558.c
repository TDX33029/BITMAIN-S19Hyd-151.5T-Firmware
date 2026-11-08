// FUN_01b51558 @ 01b51558 size=260 calls_out=3 calls_in=3
// strings: 

void FUN_01b51558(int param_1,byte *param_2,byte *param_3,uint param_4)

{
  undefined4 uVar1;
  byte *extraout_r1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte local_54 [48];
  uint local_24;
  
  local_24 = DAT_01d53560;
  if ((param_3 < param_2 + 0x30) && (param_2 < param_3 + param_4)) {
LAB_01b5163c:
    uVar1 = 0;
  }
  else {
    if (param_4 != 0) {
      if (0x30 < param_4) goto LAB_01b5163c;
      FUN_01b26974(local_54,param_2,0x30);
      pbVar2 = local_54;
      pbVar3 = param_3;
      do {
        pbVar4 = pbVar3 + 1;
        *pbVar2 = *pbVar2 ^ *pbVar3;
        pbVar2 = pbVar2 + 1;
        pbVar3 = pbVar4;
      } while (pbVar4 != param_3 + param_4);
      param_2 = local_54;
    }
    FUN_01b4ff84(param_1,param_2,0x30);
    uVar1 = 1;
    *(undefined4 *)(param_1 + 0x110) = 1;
    *(undefined4 *)(param_1 + 0x114) = 0;
    param_2 = extraout_r1;
  }
  if ((local_24 ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar1,param_2,local_24 ^ DAT_01d53560,0);
  }
  return;
}

