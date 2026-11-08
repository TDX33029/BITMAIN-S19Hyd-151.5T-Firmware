// FUN_000956a8 @ 000956a8  size=560  callers=1
// program: bmminer


void FUN_000956a8(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_r1;
  int extraout_r1_00;
  undefined4 *local_c;
  
  if ((param_1 == (int *)0x0) || (param_2 == 0)) {
    FUN_00095b4c(2,"src/zc_hashtable.c",0xf0,"a_table[%p] or a_key[%p] is NULL, just do nothing",
                 param_1,param_2);
  }
  else {
    uVar1 = (*(code *)param_1[3])(param_2);
    FUN_0009863c(uVar1,param_1[2]);
    local_c = *(undefined4 **)(param_1[1] + extraout_r1 * 4);
    while ((local_c != (undefined4 *)0x0 &&
           (iVar2 = (*(code *)param_1[4])(param_2,local_c[1]), iVar2 == 0))) {
      local_c = (undefined4 *)local_c[4];
    }
    if (local_c == (undefined4 *)0x0) {
      FUN_00095b4c(2,"src/zc_hashtable.c",0xfb,"p[%p] not found in hashtable",0);
    }
    else {
      if (param_1[5] != 0) {
        (*(code *)param_1[5])(local_c[1]);
      }
      if (param_1[6] != 0) {
        (*(code *)param_1[6])(local_c[2]);
      }
      if (local_c[4] != 0) {
        *(undefined4 *)(local_c[4] + 0xc) = local_c[3];
      }
      if (local_c[3] == 0) {
        FUN_0009863c(*local_c,param_1[2]);
        *(undefined4 *)(param_1[1] + extraout_r1_00 * 4) = local_c[4];
      }
      else {
        *(undefined4 *)(local_c[3] + 0x10) = local_c[4];
      }
      free(local_c);
      *param_1 = *param_1 + -1;
    }
  }
  return;
}

