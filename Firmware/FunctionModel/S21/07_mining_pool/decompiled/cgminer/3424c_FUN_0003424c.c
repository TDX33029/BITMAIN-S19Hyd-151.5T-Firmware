// FUN_0003424c @ 0003424c  size=828  callers=3
// program: cgminer


int FUN_0003424c(int param_1,int param_2)

{
  time_t tVar1;
  time_t tVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  int local_824;
  char local_820 [2048];
  
  local_824 = 0;
  iVar5 = *(int *)(param_1 + 0x24);
  FUN_000287cc();
  if ((DAT_000686f1 != '\0') &&
     (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
    builtin_strncpy(local_820,"Popping work from get queue to get work",0x28);
    FUN_0001dd98(7,local_820,0);
  }
  tVar1 = time((time_t *)0x0);
  while (local_824 == 0) {
    local_824 = FUN_00032c58(1);
    iVar6 = FUN_00033d64(local_824,0);
    if (iVar6 != 0) {
      FUN_0002aa68(&local_824,"cgminer.c","get_work",0x2217);
      FUN_0002d5a8();
    }
  }
  tVar2 = time((time_t *)0x0);
  iVar6 = tVar2 - tVar1;
  cVar4 = DAT_000686f1;
  if (iVar6 < 1) {
LAB_000343dc:
    if (cVar4 != '\0') {
LAB_000343ec:
      if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)) {
        snprintf(local_820,0x800,"Got work from get queue to get work for thread %d",param_2);
        FUN_0001dd98(7,local_820,0);
      }
    }
  }
  else {
    if (DAT_000686f1 != '\0') {
      if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)) {
        snprintf(local_820,0x800,"Get work blocked for %ld seconds",iVar6);
        FUN_0001dd98(7,local_820,0);
        cVar4 = DAT_000686f1;
        *(int *)(iVar5 + 0xe8) = *(int *)(iVar5 + 0xe8) + iVar6;
        goto LAB_000343dc;
      }
      *(int *)(iVar5 + 0xe8) = *(int *)(iVar5 + 0xe8) + iVar6;
      goto LAB_000343ec;
    }
    *(int *)(iVar5 + 0xe8) = *(int *)(iVar5 + 0xe8) + iVar6;
  }
  cVar4 = DAT_00068c60;
  *(int *)(local_824 + 0x100) = param_2;
  if (cVar4 != '\0') {
    iVar6 = *(int *)(iVar5 + 0x17c) + *(int *)(iVar5 + 0x180);
    *(int *)(iVar5 + 0x17c) = iVar6;
    if (iVar6 < 1) {
      *(undefined4 *)(iVar5 + 0x180) = 1;
    }
    else if (0xf < iVar6) {
      puVar3 = &DAT_00068cb0;
      *(undefined4 *)(iVar5 + 0x180) = 0xffffffff;
      iVar6 = *(int *)(iVar5 + 0x178) + 1;
      if (iVar6 < 0x10) {
        *(int *)(iVar5 + 0x178) = iVar6;
        puVar3 = &DAT_00068cb0 + iVar6 * 0xa0;
      }
      else {
        *(undefined4 *)(iVar5 + 0x178) = 0;
      }
      FUN_00023324(local_824,puVar3,0xa0,"cgminer.c","set_benchmark_work",0x2200);
      goto LAB_00034450;
    }
    FUN_00023324(local_824,&DAT_000696b0 + iVar6 * 0xa0,0xa0,"cgminer.c","set_benchmark_work",0x2204
                );
  }
LAB_00034450:
  FUN_00028804(param_1);
  *(undefined1 *)(local_824 + 0x110) = 1;
  dVar8 = *(double *)(*(int *)(iVar5 + 4) + 0x68);
  if (*(double *)(local_824 + 0x178) < dVar8) {
    dVar8 = *(double *)(local_824 + 0x178);
  }
  *(double *)(local_824 + 0xe0) = dVar8;
  dVar7 = *(double *)(*(int *)(iVar5 + 4) + 0x70);
  if (dVar8 < dVar7) {
    dVar8 = dVar7;
  }
  *(double *)(local_824 + 0xe0) = dVar8;
  return local_824;
}

