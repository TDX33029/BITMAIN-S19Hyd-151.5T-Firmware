// FUN_00025b38 @ 00025b38  size=612
// callers: [FUN_0004ebd0]

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
FUN_00025b38(int param_1,int *param_2,uint *param_3,void *param_4,int param_5,size_t *param_6,
            uint *param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int param3;
  uint param4;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  undefined4 local_202c;
  char acStack_2028 [8196];
  
  piVar8 = (int *)(param_1 + -4);
  param3 = 0;
  local_202c = 0;
  do {
    iVar1 = FUN_0002a6f0(param3);
    if (iVar1 != 0) {
      FUN_00024f98(piVar8 + 1,param_2,param_3,&local_202c);
      *(int *)((int)param_4 + *param_6 * 4) = *param_2;
      *param_6 = *param_6 + 1;
      if (*param_7 < *param_3) {
        *param_7 = *param_3;
      }
      if (3 < DAT_000be63c) {
        snprintf(acStack_2028,0x2000,"chain[%d] min = %d max =%d\n",param3,*param_2,*param_3);
        FUN_0004948c(3,acStack_2028,0);
      }
      iVar1 = FUN_0002a514();
      uVar3 = local_202c;
      if (iVar1 != 0) {
        iVar6 = 0;
        piVar4 = (int *)(param_5 + -4 + param3 * 0x400);
        piVar9 = piVar8;
        do {
          piVar9 = piVar9 + 1;
          iVar6 = iVar6 + 1;
          piVar4 = piVar4 + 1;
          *piVar4 = *piVar9 - *param_2;
        } while (iVar1 != iVar6);
      }
      if (DAT_000be8e8 == 2) {
        (&DAT_000c0430)[param3] = DAT_008c7040;
      }
      uVar2 = FUN_0002a514();
      uVar3 = FUN_000983e0(uVar3,uVar2);
      *(undefined4 *)(DAT_00025d9c + param3 * 4) = uVar3;
    }
    param3 = param3 + 1;
    piVar8 = piVar8 + 0x100;
    param_2 = param_2 + 1;
    param_3 = param_3 + 1;
  } while (param3 != 4);
  qsort(param_4,*param_6,4,FUN_00024f88);
  uVar5 = *param_6;
  if (uVar5 != 0) {
    param4 = 0;
    do {
      while (3 < DAT_000be63c) {
        uVar7 = param4 + 1;
        snprintf(acStack_2028,0x2000,"%s min_sorted[%d]=%d,*max_global=%d","inc_mixed_freq_prepare",
                 param4,*(int *)((int)param_4 + param4 * 4),*param_7);
        FUN_0004948c(3,acStack_2028,0);
        uVar5 = *param_6;
        param4 = uVar7;
        if (uVar5 <= uVar7) {
          return 0;
        }
      }
      param4 = param4 + 1;
    } while (param4 < uVar5);
  }
  return 0;
}


