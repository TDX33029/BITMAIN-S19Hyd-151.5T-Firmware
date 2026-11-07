// FUN_015ef5b4 @ 015ef5b4 size=500 calls_out=11 calls_in=2
// strings: strerror_r failure

undefined4 FUN_015ef5b4(undefined1 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_bc;
  undefined *local_b8;
  int local_b4;
  undefined **local_a8;
  undefined4 *local_a4;
  undefined4 *local_a0;
  code *local_9c;
  undefined *local_28;
  int local_24;
  undefined *local_20;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 1:
    local_24 = *(int *)(&DAT_00424290 + (uint)(byte)param_1[1] * 4);
    local_28 = (&PTR_DAT_018b5514)[(byte)param_1[1]];
    local_a8 = &local_28;
    local_a4 = &DAT_015bee04;
    uVar2 = FUN_00fa948c(*param_2,param_2[1],&DAT_00590e71,&local_a8);
    return uVar2;
  case 2:
    uVar2 = FUN_00faace8(param_2,**(undefined4 **)(param_1 + 4),(*(undefined4 **)(param_1 + 4))[1]);
    return uVar2;
  case 3:
                    /* WARNING: Could not recover jumptable at 0x015ef69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)((*(undefined4 **)(param_1 + 4))[1] + 0x10))(**(undefined4 **)(param_1 + 4))
    ;
    return uVar2;
  }
  uVar2 = *(undefined4 *)(param_1 + 4);
  local_bc = uVar2;
  FUN_016dd606(&local_a8,0,0x80);
  iVar1 = FUN_016dd866(uVar2,&local_a8,0x80);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("strerror_r failure",0x25,&DAT_018aac4c);
  }
  uVar2 = FUN_016dd8a2(&local_a8);
  FUN_006008c8(&local_28,&local_a8,uVar2);
  if (local_28 == (undefined *)0x80000000) {
    if (local_20 == (undefined *)0x0) {
      iVar1 = 1;
    }
    else {
      iVar1 = thunk_FUN_016d4a50(local_20);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,local_20);
      }
    }
    FUN_016dd1aa(iVar1,local_24,local_20);
    local_b8 = local_20;
    local_b4 = iVar1;
  }
  else {
    local_b8 = local_28;
    local_b4 = local_24;
  }
  local_9c = FUN_00fac2b8;
  local_a0 = &local_bc;
  local_a4 = (undefined4 *)&LAB_015ef7fc;
  local_a8 = &local_b8;
  uVar2 = FUN_00fa948c(*param_2,param_2[1],&DAT_005967a1,&local_a8);
  if (local_b8 != (undefined *)0x0) {
    thunk_FUN_016d3fb4(local_b4);
  }
  return uVar2;
}

