// FUN_000374fc @ 000374fc  size=636  callers=1
// program: bmminer


size_t FUN_000374fc(undefined4 *param_1,int param_2,undefined4 param_3)

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
  undefined4 local_890;
  undefined4 uStack_88c;
  undefined2 local_888 [2];
  int local_884;
  undefined1 local_880;
  byte local_87f;
  undefined1 local_87e;
  undefined4 local_87c;
  undefined1 auStack_878 [4];
  undefined1 auStack_874 [32];
  undefined1 auStack_854 [4];
  undefined1 auStack_850 [4];
  undefined2 local_84c;
  undefined2 local_84a;
  undefined2 local_848;
  undefined2 local_846;
  undefined4 local_840;
  undefined4 uStack_83c;
  undefined1 local_838;
  undefined4 local_834;
  undefined4 uStack_830;
  char local_828 [2052];
  
  local_87f = local_87f & 0xfe | *(byte *)(param_2 + 0x2b8) & 1 | 2;
  local_880 = (undefined1)DAT_0048d3a8;
  local_888[0] = 0x52;
  local_890 = 0;
  uStack_88c = 0;
  local_87e = 0xf;
  if (DAT_0048d3b0 != '\0') {
    local_838 = *(undefined1 *)(param_2 + 0x294);
    local_834 = *(undefined4 *)(param_2 + 0x298);
    uStack_830 = *(undefined4 *)(param_2 + 0x29c);
  }
  local_87c = param_3;
  FUN_00033cac(auStack_878,param_2 + 0x704);
  FUN_00033cac(auStack_874,param_2 + 0x6c0,0x20);
  FUN_00033cac(auStack_850,param_2 + 0x710,4);
  FUN_00033cac(auStack_854,param_2 + 0x71c,4);
  pvVar6 = *(void **)(param_2 + 0x630);
  __n = *(size_t *)(param_2 + 0x634);
  puVar3 = (undefined4 *)((int)pvVar6 + *(int *)(param_2 + 0x638));
  local_84a = (undefined2)*(int *)(param_2 + 0x638);
  local_84c = (undefined2)__n;
  local_848 = (undefined2)*(size_t *)(param_2 + 0x288);
  local_840 = *puVar3;
  uStack_83c = puVar3[1];
  local_890 = *(undefined4 *)(param_2 + 0x280);
  uStack_88c = *(undefined4 *)(param_2 + 0x284);
  memcpy(&local_840,&local_890,*(size_t *)(param_2 + 0x288));
  iVar7 = *(int *)(param_2 + 0x6bc);
  local_846 = (undefined2)iVar7;
  iVar8 = __n + iVar7 * 0x20;
  __size = iVar8 + 0x62;
  __s = malloc(__size);
  if (__s == (void *)0x0) {
    builtin_strncpy(local_828,"Failed to malloc tmp_buf",0x19);
    FUN_00032218(3,local_828,1);
    FUN_0002df3c(1);
    iVar7 = *(int *)(param_2 + 0x6bc);
    pvVar6 = *(void **)(param_2 + 0x630);
    __n = *(size_t *)(param_2 + 0x634);
  }
  local_884 = iVar8 + 0x5a;
  memset(__s,0,__size);
  memcpy(__s,local_888,0x60);
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
  uVar1 = FUN_00035b18(__s,iVar8 + 0x60U & 0xffff);
  *(undefined2 *)((int)__s + iVar8 + 0x60) = uVar1;
  bVar13 = 0xfffffffe < DAT_0048d3a8;
  DAT_0048d3a8 = DAT_0048d3a8 + 1;
  DAT_0048d3ac = DAT_0048d3ac + (uint)bVar13;
  pvVar6 = malloc(__size);
  *param_1 = pvVar6;
  memcpy(pvVar6,__s,__size);
  free(__s);
  return __size;
}

