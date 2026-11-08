// FUN_011952f0 @ 011952f0 size=320 calls_out=6 calls_in=1
// strings: pattern

void FUN_011952f0(undefined4 *param_1,int param_2,undefined4 param_3,char *param_4)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int local_b8 [4];
  undefined4 local_a8;
  undefined8 local_a4;
  undefined1 *local_88;
  undefined2 local_84;
  undefined1 local_50;
  char *local_4c;
  int *local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  if (*param_4 == '\x03') {
    FUN_0123ae94(local_b8,*(undefined4 *)(param_4 + 8),*(undefined4 *)(param_4 + 0xc));
                    /* WARNING: Could not recover jumptable at 0x01195338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&LAB_0119533c + *(int *)(&LAB_0119533c + local_b8[0] * 4)))();
    return;
  }
  uStack_30 = FUN_0123ab30(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),"pattern"
                           ,7);
  piVar3 = (int *)uStack_30;
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + 1;
  if (-1 < iVar4) {
    DataMemoryBarrier(0xb);
    if (DAT_018da8bc != 0) {
      FUN_0120d52c();
    }
    do {
      iVar4 = *DAT_018da8b4;
      bVar2 = (bool)hasExclusiveAccess(DAT_018da8b4);
    } while (!bVar2);
    *DAT_018da8b4 = iVar4 + 1;
    if (-1 < iVar4) {
      local_38 = DAT_018da8b4;
      uStack_34 = DAT_018da8b8;
      local_50 = 6;
      local_84 = 0x4000;
      local_88 = &DAT_80000028;
      local_a8 = 1;
      local_4c = param_4;
      local_a4 = uStack_30;
      iVar4 = thunk_FUN_016d4a50(0x80);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x80);
      }
      FUN_016dd1aa(iVar4,&local_a8,0x80);
      *param_1 = 1;
      param_1[1] = 0;
      param_1[2] = iVar4;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x11958d0);
  (*pcVar1)();
}

