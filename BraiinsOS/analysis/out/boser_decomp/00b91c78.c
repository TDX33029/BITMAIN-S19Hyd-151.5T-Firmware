// FUN_00b91c78 @ 00b91c78 size=204 calls_out=6 calls_in=1
// strings: 

undefined1 FUN_00b91c78(undefined4 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined1 uVar4;
  int local_28;
  undefined4 local_24;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 3)) {
  case 0:
    uVar2 = FUN_007411c4(*param_1);
    puVar3 = &DAT_01c07ee8;
    param_1[1] = uVar2;
    param_1[2] = &DAT_01c07ee8;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c13e2c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c13e2c);
  case 3:
    uVar2 = param_1[1];
    puVar3 = (undefined *)param_1[2];
  }
  (**(code **)(puVar3 + 0xc))(&local_28,uVar2,param_2);
  if (local_28 == -0x7ffffffe) {
    uVar1 = 3;
    uVar4 = 3;
  }
  else {
    FUN_01139b38(param_1[1],param_1[2]);
    if (-0x7fffffff < local_28) {
      FUN_0134aee0(local_28,local_24,1,4);
    }
    uVar4 = local_28 != -0x80000000;
    uVar1 = 1;
    if (local_28 == -0x7fffffff) {
      uVar4 = 2;
    }
  }
  *(undefined1 *)(param_1 + 3) = uVar1;
  return uVar4;
}

