// FUN_018856ac @ 018856ac size=100 calls_out=3 calls_in=0
// strings: 

void FUN_018856ac(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)param_1[4];
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01421174(param_1[4]);
    }
  }
  FUN_01885750(param_1 + 8);
  FUN_01a69874(param_1 + 5);
                    /* WARNING: Could not recover jumptable at 0x0188570c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1 + 3,param_1[1],param_1[2]);
  return;
}

