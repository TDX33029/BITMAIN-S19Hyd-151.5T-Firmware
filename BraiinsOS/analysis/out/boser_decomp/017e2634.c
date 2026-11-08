// FUN_017e2634 @ 017e2634 size=216 calls_out=4 calls_in=2
// strings: 

void FUN_017e2634(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_01811500(param_1 + 2);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar3 + -1;
  if (iVar3 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  if (*(char *)((int)param_1 + 0x21) != '\x02') {
    FUN_014323b0(param_1 + 5);
    FUN_0177749c(param_1 + 2);
  }
  if (param_1[10] != 0) {
    (**(code **)(param_1[10] + 0xc))(param_1[0xb]);
  }
  if (param_1[0xd] != 0) {
    (**(code **)(param_1[0xd] + 0xc))(param_1[0xe]);
  }
  if (param_1 == (int *)&DAT_ffffffff) {
    return;
  }
  piVar2 = param_1 + 1;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(param_1);
    return;
  }
  return;
}

