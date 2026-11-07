// FUN_0009505c @ 0009505c  size=440  callers=1
// program: bmminer


undefined4 FUN_0009505c(int param_1)

{
  size_t __nmemb;
  void *pvVar1;
  int *piVar2;
  int extraout_r1;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *local_10;
  uint local_c;
  
  __nmemb = *(int *)(param_1 + 8) << 1;
  pvVar1 = calloc(__nmemb,4);
  if (pvVar1 == (void *)0x0) {
    piVar2 = __errno_location();
    FUN_00095b4c(2,"src/zc_hashtable.c",0x7e,"calloc fail, errno[%d]",*piVar2);
    uVar3 = 0xffffffff;
  }
  else {
    for (local_c = 0; local_c < *(uint *)(param_1 + 8); local_c = local_c + 1) {
      local_10 = *(undefined4 **)(*(int *)(param_1 + 4) + local_c * 4);
      while (local_10 != (undefined4 *)0x0) {
        puVar4 = (undefined4 *)local_10[4];
        local_10[4] = 0;
        local_10[3] = 0;
        FUN_0009863c(*local_10,__nmemb);
        if (*(int *)((int)pvVar1 + extraout_r1 * 4) != 0) {
          *(undefined4 **)(*(int *)((int)pvVar1 + extraout_r1 * 4) + 0xc) = local_10;
          local_10[4] = *(undefined4 *)((int)pvVar1 + extraout_r1 * 4);
        }
        *(undefined4 **)((int)pvVar1 + extraout_r1 * 4) = local_10;
        local_10 = puVar4;
      }
    }
    free(*(void **)(param_1 + 4));
    *(void **)(param_1 + 4) = pvVar1;
    *(size_t *)(param_1 + 8) = __nmemb;
    uVar3 = 0;
  }
  return uVar3;
}

