// FUN_0002fbb4 @ 0002fbb4  size=208  callers=0
// program: bmminer


void FUN_0002fbb4(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  char acStack_2008 [8192];
  
  if (param_1 != 0 && param_2 < 4) {
    iVar1 = FUN_0001e0e0(param_2);
    if (iVar1 == 0) {
      uVar2 = FUN_00080c4c();
    }
    else {
      uVar2 = FUN_00080c2c();
    }
    FUN_0007ec50(param_1,"eeprom",uVar2);
    return;
  }
  if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (2 < DAT_000be644)) {
    snprintf(acStack_2008,0x2000,"%s: input bad param\n","api_miner_chain_eeprom");
    FUN_0004948c(3,acStack_2008,0);
  }
  return;
}

