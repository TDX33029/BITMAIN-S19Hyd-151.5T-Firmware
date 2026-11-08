// FUN_0002f624 @ 0002f624  size=292  callers=0
// program: bmminer


void FUN_0002f624(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char acStack_2010 [8196];
  
  if (param_1 != 0 && param_2 < 4) {
    uVar1 = FUN_0007f548();
    uVar2 = FUN_00080784(0,0);
    FUN_0007f9e4(uVar1,uVar2);
    uVar2 = FUN_00080784(0,0);
    FUN_0007f9e4(uVar1,uVar2);
    uVar2 = FUN_00080784(0,0);
    FUN_0007f9e4(uVar1,uVar2);
    uVar2 = FUN_00080784(0,0);
    FUN_0007f9e4(uVar1,uVar2);
    FUN_0007ec50(param_1,"temp_chip",uVar1);
    return;
  }
  if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (2 < DAT_000be644)) {
    snprintf(acStack_2010,0x2000,"%s: input bad param\n","api_miner_chain_temp_chip");
    FUN_0004948c(3,acStack_2010,0);
  }
  return;
}

