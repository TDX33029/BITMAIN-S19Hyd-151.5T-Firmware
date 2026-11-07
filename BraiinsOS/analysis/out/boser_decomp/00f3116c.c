// FUN_00f3116c @ 00f3116c size=100 calls_out=2 calls_in=1
// strings: JoinHandle polled after completion

void FUN_00f3116c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_598 [354];
  
  FUN_01bed4e2(local_598,param_2 + 0x10,0x588);
  *(undefined4 *)(param_2 + 0x10) = 2;
  if (local_598[0] != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("JoinHandle polled after completion",0x45,&DAT_01d2e12c);
  }
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  *param_1 = *(undefined4 *)(param_2 + 0x18);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return;
}

