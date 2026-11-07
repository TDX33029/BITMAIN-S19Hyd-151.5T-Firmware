// FUN_0002ea24 @ 0002ea24  size=652  callers=1
// program: bmminer


void FUN_0002ea24(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  size_t sVar11;
  char local_828 [2052];
  
  memcpy(param_1,param_2,0x748);
  sVar11 = *(size_t *)((int)param_1 + 0x634);
  iVar9 = sVar11 + 0x748;
  pvVar1 = calloc(1,sVar11);
  pvVar1 = memcpy(pvVar1,(void *)((int)param_2 + 0x748),sVar11);
  *(void **)((int)param_1 + 0x630) = pvVar1;
  iVar2 = FUN_00033990(*(int *)((int)param_1 + 0x6bc) * 4 + 1,"bmminer.c","parse_job_buf",0x8b1);
  *(int *)((int)param_1 + 0x2b4) = iVar2;
  if (0 < *(int *)((int)param_1 + 0x6bc)) {
    iVar10 = 0;
    puVar7 = (undefined4 *)((int)param_2 + iVar9);
    while( true ) {
      uVar3 = FUN_00033990(0x20,"bmminer.c","parse_job_buf",0x8b4);
      *(undefined4 *)(iVar2 + iVar10 * 4) = uVar3;
      iVar9 = sVar11 + 0x768 + iVar10 * 0x20;
      puVar8 = *(undefined4 **)(*(int *)((int)param_1 + 0x2b4) + iVar10 * 4);
      if (puVar8 == (undefined4 *)0x0) {
        builtin_strncpy(local_828,"Failed to malloc local merkle_bin",0x22);
        FUN_00032218(3,local_828,1);
        puVar8 = *(undefined4 **)(*(int *)((int)param_1 + 0x2b4) + iVar10 * 4);
      }
      iVar10 = iVar10 + 1;
      uVar3 = puVar7[1];
      uVar5 = puVar7[2];
      uVar6 = puVar7[3];
      *puVar8 = *puVar7;
      puVar8[1] = uVar3;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
      uVar3 = puVar7[5];
      uVar5 = puVar7[6];
      uVar6 = puVar7[7];
      puVar8[4] = puVar7[4];
      puVar8[5] = uVar3;
      puVar8[6] = uVar5;
      puVar8[7] = uVar6;
      if (*(int *)((int)param_1 + 0x6bc) <= iVar10) break;
      iVar2 = *(int *)((int)param_1 + 0x2b4);
      puVar7 = puVar7 + 8;
    }
  }
  pcVar4 = (char *)__strdup((int)param_2 + iVar9);
  sVar11 = strlen(pcVar4);
  *(char **)((int)param_1 + 0x2b0) = pcVar4;
  iVar9 = sVar11 + 1 + iVar9;
  pcVar4 = (char *)__strdup((int)param_2 + iVar9);
  sVar11 = strlen(pcVar4);
  iVar9 = iVar9 + sVar11;
  *(char **)((int)param_1 + 0x274) = pcVar4;
  puVar7 = (undefined4 *)((int)param_2 + iVar9 + 1);
  DAT_0008a7a0 = *puVar7;
  DAT_0008a7a4 = puVar7[1];
  puVar7 = (undefined4 *)((int)param_2 + iVar9 + 9);
  DAT_00087ac0._0_4_ = *puVar7;
  DAT_00087ac0._4_4_ = puVar7[1];
  if ((DAT_0048d36e != '\0') &&
     (((DAT_0071e84c != '\0' || (DAT_0048d36d != '\0')) || (6 < DAT_00087bc4)))) {
    snprintf(local_828,0x800,"parse job buf len:%d\n",iVar9 + 0x11);
    FUN_00032218(7,local_828,0);
  }
  if (iVar9 + 0x11 != param_3) {
    builtin_strncpy(local_828,"ERR: data trans/recv unmathced!",0x20);
    FUN_00032218(3,local_828,1);
  }
  return;
}

