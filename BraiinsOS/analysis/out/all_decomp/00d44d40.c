// FUN_00d44d40 @ 00d44d40 size=168 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_00d44d40(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int local_78;
  int iStack_74;
  undefined1 auStack_34 [20];
  
  if (*param_1 != 5 || param_1[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00d44dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&LAB_00d44dd0 + *(int *)(&LAB_00d44dd0 + *param_1 * 4)))
                      (param_1[2],param_1[3]);
    return uVar1;
  }
  FUN_016dd1aa(&local_78,param_1,0x58);
  FUN_016dd1aa(param_1,param_2,0x58);
  if (local_78 == 5 && iStack_74 == 0) {
    return 1;
  }
  FUN_00c48708(auStack_34);
  return 1;
}

