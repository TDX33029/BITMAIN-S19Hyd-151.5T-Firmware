// FUN_00a6a108 @ 00a6a108 size=256 calls_out=5 calls_in=1
// strings: 

void FUN_00a6a108(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  double in_d0;
  undefined8 uVar4;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined *local_20;
  undefined4 local_1c;
  
  FUN_00a69d80(&local_34,param_2,param_1,0);
  local_1c = 7;
  local_20 = &DAT_0034ce78;
  local_24 = local_2c;
  local_28 = local_30;
  piVar2 = (int *)FUN_00a63b14(DAT_018d7d34,&local_28,2);
  uVar4 = FUN_01845ca8();
  if (in_d0 < -9.223372036854776e+18) {
    uVar4 = 0x8000000000000000;
  }
  if (9.223372036854775e+18 < in_d0) {
    uVar4 = 0x7fffffffffffffff;
  }
  if (NAN(in_d0)) {
    uVar4 = 0;
  }
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar2 + 2);
  } while (!bVar1);
  *(undefined8 *)(piVar2 + 2) = uVar4;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_012c0df4(piVar2);
  }
  if (local_34 != 0) {
    thunk_FUN_016d3fb4(local_30);
  }
  return;
}

