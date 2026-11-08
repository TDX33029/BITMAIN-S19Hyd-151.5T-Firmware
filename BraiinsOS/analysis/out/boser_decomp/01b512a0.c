// FUN_01b512a0 @ 01b512a0 size=332 calls_out=3 calls_in=3
// strings: 

void FUN_01b512a0(int param_1,byte *param_2,byte *param_3,uint param_4)

{
  byte *pbVar1;
  undefined4 uVar2;
  byte *extraout_r1;
  int iVar3;
  byte *pbVar4;
  byte local_54 [32];
  undefined1 auStack_34 [16];
  uint local_24;
  
  local_24 = DAT_01d53560;
  if (((param_3 < param_2 + 0x30) && (param_2 < param_3 + param_4)) || (0x30 < param_4)) {
    uVar2 = 0;
  }
  else {
    FUN_01b26974(local_54,param_2,0x30);
    pbVar4 = param_3 + param_4;
    pbVar1 = local_54;
    for (; param_3 != pbVar4; param_3 = param_3 + 1) {
      *pbVar1 = *pbVar1 ^ *param_3;
      pbVar1 = pbVar1 + 1;
    }
    iVar3 = 0;
    pbVar1 = &DAT_00539f78;
    pbVar4 = local_54;
    do {
      iVar3 = iVar3 + 1;
      *pbVar4 = *pbVar4 ^ *pbVar1;
      pbVar1 = pbVar1 + 1;
      pbVar4 = pbVar4 + 1;
    } while (iVar3 != 0x30);
    uVar2 = FUN_01b4fa58(param_1,0,param_1 + 0xf4,local_54,0x20);
    *(undefined4 *)(param_1 + 0xf8) = uVar2;
    FUN_01b26974(param_1 + 0xfc,auStack_34,0x10);
    uVar2 = 1;
    *(undefined4 *)(param_1 + 0x110) = 1;
    *(undefined4 *)(param_1 + 0x114) = 0;
    param_2 = extraout_r1;
  }
  if ((local_24 ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar2,param_2,local_24 ^ DAT_01d53560,0);
  }
  return;
}

