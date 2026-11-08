// FUN_0167da58 @ 0167da58 size=360 calls_out=4 calls_in=3
// strings: 

void FUN_0167da58(undefined4 *param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 local_110 [20];
  int local_c0 [21];
  undefined1 auStack_6c [72];
  
  if (param_4 == 0) {
    *param_1 = 0x80000003;
    param_1[1] = param_2;
    return;
  }
  puVar5 = (undefined4 *)((uint)local_110 | 4);
  if (param_5 == 0) {
    puVar1 = (undefined4 *)((uint)local_c0 | 4);
    FUN_01676758(auStack_6c,param_3);
    FUN_01681fc0(local_c0,param_2 + 8,auStack_6c);
    if (local_c0[0] == -0x80000000) {
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      *puVar5 = *puVar1;
      puVar5[1] = uVar3;
      puVar5[2] = uVar4;
      local_110[0] = 0x80000000;
    }
    else {
      FUN_016dd1aa(local_110,local_c0,0x50);
    }
    piVar2 = (int *)FUN_0168b848(local_110,0);
                    /* WARNING: Could not recover jumptable at 0x0167dc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_0167dc14 + *(int *)(&DAT_0167dc14 + *piVar2 * 4)))();
    return;
  }
  puVar1 = (undefined4 *)((uint)local_c0 | 4);
  FUN_01676758(auStack_6c,param_3);
  FUN_01681fc0(local_c0,param_2 + 8,auStack_6c);
  if (local_c0[0] == -0x80000000) {
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    *puVar5 = *puVar1;
    puVar5[1] = uVar3;
    puVar5[2] = uVar4;
    local_110[0] = 0x80000000;
  }
  else {
    FUN_016dd1aa(local_110,local_c0,0x50);
  }
  piVar2 = (int *)FUN_0168b848(local_110,param_5);
                    /* WARNING: Could not recover jumptable at 0x0167db20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0167db24 + *(int *)(&DAT_0167db24 + *piVar2 * 4)))();
  return;
}

