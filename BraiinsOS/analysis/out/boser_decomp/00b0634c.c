// FUN_00b0634c @ 00b0634c size=152 calls_out=3 calls_in=1
// strings: 

void FUN_00b0634c(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_88 [48];
  int local_58;
  undefined1 *local_54;
  undefined1 auStack_50 [16];
  int local_40;
  undefined1 *local_18;
  undefined1 uStack_11;
  
  FUN_01bed4e2(auStack_88,param_2,0x30);
  local_54 = &uStack_11;
  DataMemoryBarrier(0xb);
  local_58 = param_1;
  if (*(int *)(param_1 + 0x30) == 0) {
    puVar1 = auStack_88;
  }
  else {
    FUN_01bed4e2(auStack_50,auStack_88,0x38);
    local_18 = auStack_50;
    FUN_019a768c(param_1 + 0x30,1,&local_18,&DAT_01c10b60,&DAT_01d293e0);
    if (local_40 == -0x80000000) {
      return;
    }
    puVar1 = auStack_50;
  }
  FUN_01270b08(puVar1);
  return;
}

