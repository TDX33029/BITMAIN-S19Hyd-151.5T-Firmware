// FUN_01a4dcbc @ 01a4dcbc size=248 calls_out=5 calls_in=3
// strings: 

void FUN_01a4dcbc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined1 param_5)

{
  int *piVar1;
  int local_148;
  int local_144;
  uint local_140;
  undefined4 local_f8 [2];
  undefined1 auStack_f0 [104];
  undefined1 auStack_88 [92];
  undefined1 local_2c;
  undefined1 local_2b;
  
  if (param_4 == 0) {
    *param_1 = 0x80000003;
    param_1[1] = param_2;
    return;
  }
  FUN_01a54fec(&local_148,param_2,param_3);
  if (local_148 == -0x80000000) {
    if (*(uint *)(local_144 + 8) <= local_140) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(local_140,*(uint *)(local_144 + 8),&DAT_01d2c114);
    }
    piVar1 = (int *)(*(int *)(local_144 + 4) + local_140 * 0xc0);
  }
  else {
    FUN_01a55b70(auStack_88);
    local_2b = param_5;
    local_2c = 1;
    FUN_01bed4e2(auStack_f0,auStack_88,0x60);
    local_f8[0] = 2;
    piVar1 = (int *)FUN_01a4be0c(&local_148,local_f8);
  }
                    /* WARNING: Could not recover jumptable at 0x01a4dd8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01a4dd90 + *(int *)(&DAT_01a4dd90 + *piVar1 * 4)))();
  return;
}

