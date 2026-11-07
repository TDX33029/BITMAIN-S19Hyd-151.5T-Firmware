// FUN_00037cb4 @ 00037cb4  size=1040  callers=1
// program: bmminer


void FUN_00037cb4(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  size_t __nmemb;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char local_828 [44];
  ushort local_7fc;
  undefined1 local_7fa;
  
  if (param_2[0xac] == 0) {
    return;
  }
  iVar9 = param_2[0x1af];
  __nmemb = param_2[0x18d];
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x35));
  if (iVar2 != 0) {
    piVar5 = __errno_location();
    snprintf(local_828,0x800,"WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",*piVar5,
             "driver-btm-api.c","copy_pool_stratum",0x5c4);
    FUN_00032218(3,local_828,1);
    FUN_0002df3c(1);
  }
  iVar2 = pthread_rwlock_wrlock((pthread_rwlock_t *)(param_1 + 0x3b));
  if (iVar2 != 0) {
    piVar5 = __errno_location();
    snprintf(local_828,0x800,"WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",*piVar5,
             "driver-btm-api.c","copy_pool_stratum",0x5c4);
    FUN_00032218(3,local_828,1);
    FUN_0002df3c(1);
  }
  free((void *)param_1[0xac]);
  free((void *)param_1[0x9d]);
  free((void *)param_1[0x18c]);
  if ((__nmemb & 3) != 0) {
    __nmemb = (__nmemb & 0xfffffffc) + 4;
  }
  pvVar3 = calloc(__nmemb,1);
  param_1[0x18c] = pvVar3;
  if (pvVar3 == (void *)0x0) {
    builtin_strncpy(local_828,"Failed to calloc pool_stratum coinbase in c5",0x2c);
    local_7fc = local_7fc & 0xff00;
    FUN_00032218(3,local_828,1);
    FUN_0002df3c(1);
    pvVar3 = (void *)param_1[0x18c];
  }
  memcpy(pvVar3,(void *)param_2[0x18c],__nmemb);
  if (0 < (int)param_1[0x1af]) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 * 4;
      iVar2 = iVar2 + 1;
      free(*(void **)(param_1[0xad] + iVar1));
    } while (iVar2 < (int)param_1[0x1af]);
  }
  if (iVar9 != 0) {
    pvVar3 = realloc((void *)param_1[0xad],iVar9 * 4 + 1);
    param_1[0xad] = pvVar3;
    if (0 < iVar9) {
      iVar2 = 0;
      while( true ) {
        iVar1 = iVar2 * 4;
        pvVar4 = malloc(0x20);
        *(void **)((int)pvVar3 + iVar2 * 4) = pvVar4;
        puVar8 = *(undefined4 **)(param_1[0xad] + iVar2 * 4);
        if (puVar8 == (undefined4 *)0x0) {
          builtin_strncpy(local_828,"Failed to malloc pool_stratum swork merkle_b",0x2c);
          local_7fc = 0x6e69;
          local_7fa = 0;
          FUN_00032218(3,local_828,1);
          FUN_0002df3c(1);
          puVar8 = *(undefined4 **)(param_1[0xad] + iVar2 * 4);
        }
        iVar2 = iVar2 + 1;
        puVar7 = *(undefined4 **)(param_2[0xad] + iVar1);
        uVar10 = puVar7[1];
        uVar6 = puVar7[2];
        uVar11 = puVar7[3];
        *puVar8 = *puVar7;
        puVar8[1] = uVar10;
        puVar8[2] = uVar6;
        puVar8[3] = uVar11;
        uVar10 = puVar7[5];
        uVar6 = puVar7[6];
        uVar11 = puVar7[7];
        puVar8[4] = puVar7[4];
        puVar8[5] = uVar10;
        puVar8[6] = uVar6;
        puVar8[7] = uVar11;
        if (iVar9 == iVar2) break;
        pvVar3 = (void *)param_1[0xad];
      }
    }
  }
  *param_1 = *param_2;
  uVar6 = param_2[0x1cd];
  param_1[0x1cc] = param_2[0x1cc];
  param_1[0x1cd] = uVar6;
  param_1[0x18d] = param_2[0x18d];
  param_1[0x18e] = param_2[0x18e];
  param_1[0xa2] = param_2[0xa2];
  param_1[0x1af] = param_2[0x1af];
  uVar6 = __strdup(param_2[0xac]);
  param_1[0xac] = uVar6;
  uVar6 = __strdup(param_2[0x9d]);
  param_1[0x9d] = uVar6;
  uVar11 = param_2[0x1c8];
  uVar6 = param_2[0x1c9];
  param_1[0x1c7] = param_2[0x1c7];
  param_1[0x1c8] = uVar11;
  param_1[0x1c9] = uVar6;
  memcpy(param_1 + 399,param_2 + 399,0x80);
  iVar2 = pthread_rwlock_unlock((pthread_rwlock_t *)(param_1 + 0x3b));
  if (iVar2 != 0) {
    piVar5 = __errno_location();
    snprintf(local_828,0x800,"WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar5,
             "driver-btm-api.c","copy_pool_stratum",0x5ea);
    FUN_00032218(3,local_828,1);
    FUN_0002df3c(1);
  }
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x35));
  if (iVar2 != 0) {
    piVar5 = __errno_location();
    snprintf(local_828,0x800,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar5,
             "driver-btm-api.c","copy_pool_stratum",0x5ea);
    FUN_00032218(3,local_828,1);
    FUN_0002df3c(1);
  }
  (*DAT_00087ce8)();
  return;
}

