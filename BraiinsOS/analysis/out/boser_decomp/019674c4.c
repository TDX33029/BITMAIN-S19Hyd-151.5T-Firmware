// FUN_019674c4 @ 019674c4 size=104 calls_out=2 calls_in=3
// strings: 

void FUN_019674c4(int param_1,undefined4 *param_2)

{
  int iStack_28;
  code *pcStack_24;
  int *local_20;
  code *local_1c;
  int local_18;
  code *local_14;
  
  local_20 = (int *)(param_1 + 0xc);
  if (*local_20 == 0) {
    FUN_019671a8();
    return;
  }
  local_18 = param_1 + 0x10;
  pcStack_24 = FUN_019671a8;
  local_14 = FUN_012fd02c;
  local_1c = FUN_012fd02c;
  iStack_28 = param_1;
  FUN_012fa178(*param_2,param_2[1],&DAT_005a4c67,&iStack_28);
  return;
}

