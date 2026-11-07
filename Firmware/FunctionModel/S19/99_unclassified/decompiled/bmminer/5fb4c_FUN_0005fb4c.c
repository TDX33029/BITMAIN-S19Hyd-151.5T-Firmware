// FUN_0005fb4c @ 0005fb4c  size=320  callers=1
// program: bmminer


void FUN_0005fb4c(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_r1;
  int extraout_r1_00;
  undefined4 *__ptr;
  int iVar3;
  
  param_1 = (int *)*param_1;
  if (param_2 == 0 || param_1 == (int *)0x0) {
    FUN_000658a8(2,"src/zc_hashtable.c",0xf0,"a_table[%p] or a_key[%p] is NULL, just do nothing",
                 param_1,param_2);
  }
  else {
    uVar1 = (*(code *)param_1[3])(param_2);
    FUN_000673ec(uVar1,param_1[2]);
    __ptr = *(undefined4 **)(param_1[1] + extraout_r1 * 4);
    while( true ) {
      if (__ptr == (undefined4 *)0x0) {
        FUN_000658a8(2,"src/zc_hashtable.c",0xfb,"p[%p] not found in hashtable",0);
        return;
      }
      iVar2 = (*(code *)param_1[4])(param_2,__ptr[1]);
      if (iVar2 != 0) break;
      __ptr = (undefined4 *)__ptr[4];
    }
    if ((code *)param_1[5] != (code *)0x0) {
      (*(code *)param_1[5])(__ptr[1]);
    }
    if ((code *)param_1[6] != (code *)0x0) {
      (*(code *)param_1[6])(__ptr[2]);
    }
    iVar3 = __ptr[4];
    iVar2 = __ptr[3];
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0xc) = iVar2;
      iVar2 = __ptr[3];
    }
    if (iVar2 == 0) {
      FUN_000673ec(*__ptr,param_1[2]);
      *(int *)(param_1[1] + extraout_r1_00 * 4) = iVar3;
    }
    else {
      *(int *)(iVar2 + 0x10) = iVar3;
    }
    free(__ptr);
    *param_1 = *param_1 + -1;
  }
  return;
}

