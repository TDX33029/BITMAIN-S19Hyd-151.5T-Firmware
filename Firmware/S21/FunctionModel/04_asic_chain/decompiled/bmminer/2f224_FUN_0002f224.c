// FUN_0002f224 @ 0002f224  size=240  callers=0
// program: bmminer


void FUN_0002f224(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined1 auStack_2210 [512];
  char acStack_2010 [8196];
  
  memset(auStack_2210,0,0x200);
  if (param_1 != 0 && param_2 < 4) {
    FUN_0002ace4(param_2,auStack_2210);
    uVar1 = FUN_00080268(auStack_2210);
    FUN_0007ec50(param_1,&DAT_0009be24,uVar1);
    return;
  }
  if (((DAT_00a5d20d == '\0') && (DAT_008c702d == '\0')) && (DAT_000be644 < 3)) {
    return;
  }
  snprintf(acStack_2010,0x2000,"%s: input bad param\n","api_miner_chain_asic_status");
  FUN_0004948c(3,acStack_2010,0);
  return;
}

