// FUN_00709f70 @ 00709f70 size=100 calls_out=3 calls_in=1
// strings: stratum_connection

void FUN_00709f70(int *param_1)

{
  undefined1 auStack_120 [272];
  
  DataMemoryBarrier(0xb);
  if (DAT_018d7c7c == 0) {
    FUN_007901fc(auStack_120,*param_1 + 0x10);
    FUN_0077e408(DAT_018d7ccc,auStack_120,"stratum_connection",0x12);
  }
  FUN_0072f9b8(&DAT_00340079,0x12);
  return;
}

