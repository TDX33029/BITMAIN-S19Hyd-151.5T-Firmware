// FUN_019a7d7c @ 019a7d7c size=400 calls_out=9 calls_in=5
// strings: strerror_r failure

undefined4 FUN_019a7d7c(undefined1 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_b8;
  int local_b4;
  undefined4 local_b0;
  undefined **local_a8;
  undefined4 *local_a4;
  undefined1 *local_a0;
  code *local_9c;
  undefined *local_24;
  undefined4 local_20;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 1:
    local_20 = *(undefined4 *)(&DAT_00538f40 + (uint)(byte)param_1[1] * 4);
    local_24 = (&PTR_DAT_01d34278)[(byte)param_1[1]];
    local_a8 = &local_24;
    local_a4 = &DAT_0197a814;
    uVar2 = FUN_012fa178(*param_2,param_2[1],&DAT_00590e5f,&local_a8);
    return uVar2;
  case 2:
    uVar2 = FUN_012fb940(param_2,**(undefined4 **)(param_1 + 4),(*(undefined4 **)(param_1 + 4))[1]);
    return uVar2;
  case 3:
                    /* WARNING: Could not recover jumptable at 0x019a7eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)((*(undefined4 **)(param_1 + 4))[1] + 0x10))(**(undefined4 **)(param_1 + 4))
    ;
    return uVar2;
  }
  uVar2 = *(undefined4 *)(param_1 + 4);
  local_b8 = uVar2;
  FUN_01bed93e(&local_a8,0,0x80);
  iVar1 = FUN_01bedb9e(uVar2,&local_a8,0x80);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("strerror_r failure",0x25,&DAT_01d27890);
  }
  uVar2 = FUN_01bedbda(&local_a8);
  FUN_006643f0(&local_24,&local_a8,uVar2);
  FUN_00666914(&local_b4,&local_24);
  local_9c = FUN_012fce60;
  local_a4 = (undefined4 *)&LAB_019a7f60;
  local_a8 = (undefined **)&local_b4;
  local_a0 = (undefined1 *)&local_b8;
  uVar2 = FUN_012fa178(*param_2,param_2[1],&DAT_0059578e,&local_a8);
  if (local_b4 != 0) {
    thunk_FUN_01be4678(local_b0);
  }
  return uVar2;
}

