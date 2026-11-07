// FUN_000226c4 @ 000226c4  size=208  callers=0
// program: bmminer


void FUN_000226c4(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  char acStack_808 [2048];
  
  if (param_1 != 0 && param_2 < 4) {
    iVar1 = FUN_0001c1dc(param_2);
    if (iVar1 == 0) {
      uVar2 = FUN_000562f4();
    }
    else {
      uVar2 = FUN_000562e8();
    }
    FUN_00056774(param_1,"eeprom",uVar2);
    return;
  }
  if (((DAT_0071e84c != '\0') || (DAT_0048d36d != '\0')) || (2 < DAT_00087bc4)) {
    snprintf(acStack_808,0x800,"%s: input bad param\n","api_miner_chain_eeprom");
    FUN_00032218(3,acStack_808,0);
  }
  return;
}

