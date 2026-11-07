// FUN_00a71908 @ 00a71908 size=228 calls_out=5 calls_in=0
// strings: 

void FUN_00a71908(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  piVar3 = (int *)thunk_FUN_016d4a50(0xac);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xac);
  }
  piVar3[0x28] = 0;
  *piVar3 = 1;
  piVar3[1] = 1;
  FUN_016dd606(piVar3 + 2,0,0x96);
  piVar4 = piVar3 + 0x29;
  *piVar4 = 1;
  piVar3[0x2a] = 1;
  do {
    iVar5 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar5 + 1;
  if (iVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xa719e8);
    (*pcVar1)();
  }
  do {
    iVar5 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar5 + -1;
  if (iVar5 == 1) {
    FUN_0163b708(piVar3 + 0x22);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(piVar3);
  }
  *(undefined2 *)(param_1 + 3) = param_4;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = piVar3;
  return;
}

