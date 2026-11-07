// FUN_00021ec4 @ 00021ec4  size=240  callers=0
// program: bmminer


void FUN_00021ec4(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined1 auStack_a10 [512];
  char acStack_810 [2052];
  
  memset(auStack_a10,0,0x200);
  if (param_1 != 0 && param_2 < 4) {
    FUN_000207cc(param_2,auStack_a10);
    uVar1 = FUN_00055ee4(auStack_a10);
    FUN_00056774(param_1,&DAT_00069974,uVar1);
    return;
  }
  if (((DAT_0071e84c == '\0') && (DAT_0048d36d == '\0')) && (DAT_00087bc4 < 3)) {
    return;
  }
  snprintf(acStack_810,0x800,"%s: input bad param\n","api_miner_chain_asic_status");
  FUN_00032218(3,acStack_810,0);
  return;
}

