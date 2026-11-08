// FUN_01267a74 @ 01267a74 size=264 calls_out=7 calls_in=0
// strings: 

void FUN_01267a74(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 local_180;
  undefined4 uStack_17c;
  int local_178 [86];
  
  local_180 = param_3;
  uStack_17c = param_4;
  iVar2 = FUN_01ab6a58(param_1,&local_180);
  if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x01267b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if (*param_1 == 0) {
    bVar1 = (bool)hasExclusiveAccess(param_1);
    if (bVar1) {
      *param_1 = 0x3fffffff;
      DataMemoryBarrier(0xb);
      goto LAB_01267abc;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_019ae2e0(param_1);
LAB_01267abc:
  uVar3 = 0;
  if ((DAT_01d51b08 & 0x7fffffff) != 0) {
    uVar3 = FUN_0197ac0c();
    uVar3 = uVar3 ^ 1;
  }
  if ((char)param_1[2] == '\0') {
    FUN_01ab93e4(local_178,param_1 + 4,param_3,param_4);
    if (local_178[0] != 2) {
      FUN_01ab1fe0(local_178);
    }
  }
  else if (((DAT_01d51b08 & 0x7fffffff) == 0) || (iVar2 = FUN_0197ac0c(), iVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01979f74(&DAT_00531614,0xd,&DAT_01c25384);
  }
  FUN_01ac2a34(param_1,uVar3);
  return;
}

