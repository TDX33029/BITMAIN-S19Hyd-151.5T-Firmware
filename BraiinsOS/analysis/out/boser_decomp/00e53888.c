// FUN_00e53888 @ 00e53888 size=108 calls_out=2 calls_in=0
// strings: 

void FUN_00e53888(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  
  FUN_00eb8e30();
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01381a18(param_1);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_2;
    bVar1 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar1);
  *param_2 = iVar2 + -1;
  if (iVar2 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  FUN_01a704d8(param_2[5],param_2[6]);
  FUN_0132b958(param_2[4],param_2[5],8,0xc0,unaff_r4,unaff_r5);
  if (param_2 == (int *)&DAT_ffffffff) {
    return;
  }
  piVar3 = param_2 + 1;
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(param_2);
    return;
  }
  return;
}

