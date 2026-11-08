// FUN_00d33f88 @ 00d33f88 size=120 calls_out=1 calls_in=4
// strings: 

void FUN_00d33f88(uint *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)param_1[6];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01181c68(param_1[6]);
  }
  if (*param_1 == 5) {
    return;
  }
  if ((*param_1 < 4) || (param_1[1] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00d33ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[1] + 0x10))(param_1 + 4,param_1[2],param_1[3]);
    return;
  }
  return;
}

