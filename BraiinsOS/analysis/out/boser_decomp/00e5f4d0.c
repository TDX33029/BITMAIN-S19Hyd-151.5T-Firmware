// FUN_00e5f4d0 @ 00e5f4d0 size=140 calls_out=4 calls_in=0
// strings: 

void FUN_00e5f4d0(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_78 [64];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28 [2];
  
  FUN_0160aaa4(auStack_78,0);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_28[0] = 0;
  piVar2 = (int *)FUN_00a5284c(local_28,param_3);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a934a0();
    }
  }
  FUN_01bed4e2(param_1,auStack_78,0x58);
  return;
}

