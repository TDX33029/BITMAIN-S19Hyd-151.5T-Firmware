// FUN_01ab46bc @ 01ab46bc size=100 calls_out=3 calls_in=1
// strings: 

void FUN_01ab46bc(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  uVar1 = param_1[2];
  DataMemoryBarrier(0xb);
  if ((uint)param_1[1] <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar1,param_1[1],&DAT_01d2eca0);
  }
  piVar3 = (int *)*param_1;
  iVar4 = uVar1 * 4 + 4;
  do {
    iVar2 = *piVar3;
    DataMemoryBarrier(0xb);
    if (iVar2 != 0) {
      FUN_01ab42ec(iVar2);
      thunk_FUN_01be4678(iVar2);
    }
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + -4;
  } while (iVar4 != 0);
  return;
}

