// FUN_00050180 @ 00050180  size=656  callers=1
// program: bmminer


size_t FUN_00050180(undefined4 *param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  void *__s;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  size_t __n;
  size_t __size;
  void *pvVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  int *piVar12;
  int *piVar11;
  bool bVar13;
  undefined4 local_2090;
  undefined4 uStack_208c;
  undefined2 local_2088 [2];
  int local_2084;
  undefined1 local_2080;
  byte local_207f;
  undefined1 local_207e;
  int local_207c;
  undefined1 auStack_2078 [4];
  undefined1 auStack_2074 [32];
  undefined1 auStack_2054 [4];
  undefined1 auStack_2050 [4];
  undefined2 local_204c;
  undefined2 local_204a;
  undefined2 local_2048;
  undefined2 local_2046;
  undefined4 local_2040;
  undefined4 uStack_203c;
  undefined1 local_2038;
  undefined4 local_2034;
  undefined4 uStack_2030;
  char local_2028 [8196];
  
  local_207f = local_207f & 0xfe | DAT_000be8f8 != param_3 | 2;
  local_2088[0] = 0x52;
  local_2080 = (undefined1)DAT_008c70a8;
  local_207e = 0xf;
  local_2090 = 0;
  uStack_208c = 0;
  if (DAT_008c70b0 != '\0') {
    local_2038 = *(undefined1 *)(param_2 + 0x294);
    local_2034 = *(undefined4 *)(param_2 + 0x298);
    uStack_2030 = *(undefined4 *)(param_2 + 0x29c);
  }
  DAT_000be8f8 = param_3;
  local_207c = param_3;
  FUN_0004b1b4(auStack_2078,param_2 + 0x704);
  FUN_0004b1b4(auStack_2074,param_2 + 0x6c0,0x20);
  FUN_0004b1b4(auStack_2050,param_2 + 0x710,4);
  FUN_0004b1b4(auStack_2054,param_2 + 0x71c,4);
  pvVar6 = *(void **)(param_2 + 0x630);
  __n = *(size_t *)(param_2 + 0x634);
  puVar3 = (undefined4 *)((int)pvVar6 + *(int *)(param_2 + 0x638));
  local_204a = (undefined2)*(int *)(param_2 + 0x638);
  local_204c = (undefined2)__n;
  local_2048 = (undefined2)*(size_t *)(param_2 + 0x288);
  local_2040 = *puVar3;
  uStack_203c = puVar3[1];
  local_2090 = *(undefined4 *)(param_2 + 0x280);
  uStack_208c = *(undefined4 *)(param_2 + 0x284);
  memcpy(&local_2040,&local_2090,*(size_t *)(param_2 + 0x288));
  iVar7 = *(int *)(param_2 + 0x6bc);
  local_2046 = (undefined2)iVar7;
  iVar8 = __n + iVar7 * 0x20;
  __size = iVar8 + 0x62;
  __s = malloc(__size);
  if (__s == (void *)0x0) {
    builtin_strncpy(local_2028,"Failed to malloc tmp_buf",0x19);
    FUN_0004948c(3,local_2028,1);
    FUN_00043adc(1);
    iVar7 = *(int *)(param_2 + 0x6bc);
    pvVar6 = *(void **)(param_2 + 0x630);
    __n = *(size_t *)(param_2 + 0x634);
  }
  local_2084 = iVar8 + 0x5a;
  memset(__s,0,__size);
  memcpy(__s,local_2088,0x60);
  memcpy((void *)((int)__s + 0x60),pvVar6,__n);
  if (0 < iVar7) {
    piVar10 = *(int **)(param_2 + 0x2b4);
    puVar3 = (undefined4 *)((int)__s + __n + 0x60);
    piVar11 = piVar10;
    do {
      piVar12 = piVar11 + 1;
      puVar5 = (undefined4 *)*piVar11;
      uVar9 = puVar5[1];
      uVar2 = puVar5[2];
      uVar4 = puVar5[3];
      *puVar3 = *puVar5;
      puVar3[1] = uVar9;
      puVar3[2] = uVar2;
      puVar3[3] = uVar4;
      uVar9 = puVar5[5];
      uVar2 = puVar5[6];
      uVar4 = puVar5[7];
      puVar3[4] = puVar5[4];
      puVar3[5] = uVar9;
      puVar3[6] = uVar2;
      puVar3[7] = uVar4;
      puVar3 = puVar3 + 8;
      piVar11 = piVar12;
    } while (piVar12 != piVar10 + iVar7);
  }
  uVar1 = FUN_0004d044(__s,iVar8 + 0x60U & 0xffff);
  *(undefined2 *)((int)__s + iVar8 + 0x60) = uVar1;
  bVar13 = 0xfffffffe < DAT_008c70a8;
  DAT_008c70a8 = DAT_008c70a8 + 1;
  DAT_008c70ac = DAT_008c70ac + (uint)bVar13;
  pvVar6 = malloc(__size);
  *param_1 = pvVar6;
  memcpy(pvVar6,__s,__size);
  free(__s);
  return __size;
}

