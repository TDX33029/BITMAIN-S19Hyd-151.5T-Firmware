// FUN_0141c310 @ 0141c310 size=196 calls_out=5 calls_in=1
// strings: 

void FUN_0141c310(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  if (*param_1 == 2) {
    return;
  }
  piVar5 = param_1 + 3;
  FUN_0102c440(piVar5);
  piVar2 = (int *)*piVar5;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0102a7d0(*piVar5);
  }
  FUN_0141b310(param_1 + 7);
  if (param_1[0xb] == 0) {
    iVar3 = param_1[0xc];
    puVar6 = (undefined4 *)param_1[0xd];
    pcVar4 = (code *)*puVar6;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(iVar3);
    }
    if (puVar6[1] != 0) {
      thunk_FUN_016d3fb4(iVar3);
      FUN_014060c0(param_1);
      return;
    }
  }
  else {
    (**(code **)(param_1[0xb] + 0x10))(param_1 + 0xe,param_1[0xc],param_1[0xd]);
  }
  FUN_014060c0(param_1);
  return;
}

