// FUN_00f30558 @ 00f30558 size=92 calls_out=1 calls_in=1
// strings: JoinHandle polled after completion

void FUN_00f30558(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = 2;
  if (iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("JoinHandle polled after completion",0x45,&DAT_01d2e12c);
  }
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  uVar3 = *(undefined4 *)(param_2 + 0x20);
  uVar4 = *(undefined4 *)(param_2 + 0x24);
  uVar5 = *(undefined4 *)(param_2 + 0x28);
  uVar6 = *(undefined4 *)(param_2 + 0x2c);
  *param_1 = *(undefined4 *)(param_2 + 0x18);
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  return;
}

