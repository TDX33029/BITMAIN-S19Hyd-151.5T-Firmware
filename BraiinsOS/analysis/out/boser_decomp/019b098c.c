// FUN_019b098c @ 019b098c size=108 calls_out=0 calls_in=5
// strings: 

void FUN_019b098c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_1 + 1;
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 2) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  piVar2 = (int *)(*param_1 + 0x18);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = 1;
  if (iVar3 == -1) {
    software_interrupt(0);
    FUN_01be3b5a(piVar2,0x81,1,param_5);
    return;
  }
  return;
}

