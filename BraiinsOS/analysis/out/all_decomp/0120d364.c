// FUN_0120d364 @ 0120d364 size=100 calls_out=1 calls_in=1
// strings: 

void FUN_0120d364(int param_1)

{
  undefined1 auStackY_a8 [128];
  
  DataMemoryBarrier(0xb);
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  FUN_015eedc4(param_1 + 8,1,auStackY_a8 + 0x98,&DAT_0188a524,&DAT_018ac9b8);
  return;
}

