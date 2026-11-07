// FUN_009d0990 @ 009d0990 size=64 calls_out=1 calls_in=2
// strings: 

void FUN_009d0990(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  FUN_01811500(param_1 + 2);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 + -1;
  if (iVar2 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  if (*(char *)((int)param_1 + 0x21) != '\x02') {
    FUN_009d65c0(param_1 + 2);
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
  piVar3 = param_1 + 1;
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(param_1);
    return;
  }
  return;
}

