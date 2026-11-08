// FUN_00a57970 @ 00a57970 size=44 calls_out=2 calls_in=0
// strings: 

void FUN_00a57970(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 8);
  FUN_00a579c4(piVar1);
  if (*piVar1 == 0x1e && *(int *)(param_1 + 0xc) == 0) {
    return;
  }
  FUN_00a57840(piVar1);
  return;
}

