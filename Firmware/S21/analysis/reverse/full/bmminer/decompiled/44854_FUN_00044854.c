// FUN_00044854 @ 00044854  size=680  callers=1
// program: bmminer


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00044854(void *param_1,void *param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  size_t sVar11;
  char local_2028 [8196];
  
  memcpy(param_1,param_2,0x748);
  iVar1 = FUN_000447f0(param_1,param_2);
  if (iVar1 == param_3) {
    sVar11 = *(size_t *)((int)param_1 + 0x634);
    iVar9 = sVar11 + 0x748;
    pvVar2 = calloc(1,sVar11);
    pvVar2 = memcpy(pvVar2,(void *)((int)param_2 + 0x748),sVar11);
    *(void **)((int)param_1 + 0x630) = pvVar2;
    iVar1 = FUN_0004ae70(*(int *)((int)param_1 + 0x6bc) * 4 + 1,"bmminer.c","parse_job_buf",0x955);
    *(int *)((int)param_1 + 0x2b4) = iVar1;
    if (0 < *(int *)((int)param_1 + 0x6bc)) {
      iVar10 = 0;
      puVar7 = (undefined4 *)((int)param_2 + iVar9);
      while( true ) {
        uVar3 = FUN_0004ae70(0x20,"bmminer.c","parse_job_buf",0x958);
        *(undefined4 *)(iVar1 + iVar10 * 4) = uVar3;
        iVar9 = sVar11 + 0x768 + iVar10 * 0x20;
        puVar8 = *(undefined4 **)(*(int *)((int)param_1 + 0x2b4) + iVar10 * 4);
        if (puVar8 == (undefined4 *)0x0) {
          builtin_strncpy(local_2028,"Failed to malloc local merkle_bin",0x22);
          FUN_0004948c(3,local_2028,1);
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
        iVar1 = *(int *)((int)param_1 + 0x2b4);
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
    DAT_000c9438 = *puVar7;
    DAT_000c943c = puVar7[1];
    puVar7 = (undefined4 *)((int)param_2 + iVar9 + 9);
    _DAT_000be4f0 = *puVar7;
    DAT_000be4f4 = puVar7[1];
    if (DAT_008c702e == '\0') {
      uVar3 = 0;
    }
    else if (((DAT_00a5d20d == '\0') && (DAT_008c702d == '\0')) && (DAT_000be644 < 7)) {
      uVar3 = 0;
    }
    else {
      snprintf(local_2028,0x2000,"parse job buf len:%d\n",iVar9 + 0x11);
      FUN_0004948c(7,local_2028,0);
      uVar3 = 0;
    }
  }
  else {
    snprintf(local_2028,0x2000,
             "ERR: data trans/recv unmathced! chk=%d, data_size=%d, coinbase_len=%d",iVar1,param_3,
             *(int *)((int)param_1 + 0x634));
    FUN_0004948c(3,local_2028,1);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

