// FUN_00d02c8c @ 00d02c8c size=156 calls_out=1 calls_in=1
// strings: 

void FUN_00d02c8c(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = param_1[6];
  if ((uVar4 & 1) != 0) {
    (**(code **)(param_1[4] + 0xc))(param_1[5]);
  }
  if ((uVar4 & 8) != 0) {
    (**(code **)(param_1[2] + 0xc))(param_1[3]);
  }
  if (*param_1 == 2) {
    return;
  }
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00d02cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined4 **)param_1[1])();
    return;
  }
  piVar2 = (int *)param_1[1];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f1030(param_1[1]);
    return;
  }
  return;
}

