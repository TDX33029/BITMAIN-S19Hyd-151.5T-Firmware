// FUN_019ecf50 @ 019ecf50 size=68 calls_out=2 calls_in=5
// strings: task was cancelled | task panicked

void FUN_019ecf50(undefined4 param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = "task panicked";
  uVar2 = 0xd;
  if (param_2 == 0) {
    uVar2 = 0x12;
    pcVar1 = "task was cancelled";
  }
  FUN_019a18a8(param_1,0x28,pcVar1,uVar2);
  FUN_00b91e68(param_2,param_3);
  return;
}

