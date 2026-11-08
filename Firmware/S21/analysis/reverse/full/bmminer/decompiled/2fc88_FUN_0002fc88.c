// FUN_0002fc88 @ 0002fc88  size=248  callers=0
// program: bmminer


void FUN_0002fc88(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined1 auStack_2030 [32];
  char acStack_2010 [8192];
  
  memset(auStack_2030,0,0x20);
  if (param_1 != 0 && param_2 < 4) {
    FUN_0001c678(param_2,auStack_2030,0x20);
    uVar1 = FUN_00080268(auStack_2030);
    FUN_0007ec50(param_1,"sn",uVar1);
    return;
  }
  if (((DAT_00a5d20d == '\0') && (DAT_008c702d == '\0')) && (DAT_000be644 < 3)) {
    return;
  }
  snprintf(acStack_2010,0x2000,"%s: input bad param\n","api_miner_chain_sn");
  FUN_0004948c(3,acStack_2010,0);
  return;
}

