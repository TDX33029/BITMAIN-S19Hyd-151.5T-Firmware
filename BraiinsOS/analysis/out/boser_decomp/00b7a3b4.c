// FUN_00b7a3b4 @ 00b7a3b4 size=568 calls_out=12 calls_in=1
// strings: 

void FUN_00b7a3b4(int *param_1,ulonglong *param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  ulonglong uVar9;
  undefined1 auStack_3d0 [192];
  int local_310;
  int *local_30c;
  int *local_308;
  undefined1 auStack_304 [12];
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined2 local_2d8;
  undefined1 auStack_2d0 [72];
  undefined4 local_288;
  undefined1 local_274;
  undefined2 local_273;
  undefined1 local_271;
  undefined1 auStack_270 [20];
  undefined1 local_25c;
  undefined1 auStack_c0 [80];
  undefined1 auStack_70 [76];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0x19)) {
  case 0:
    iVar6 = *(int *)((int)param_2 + 0x14);
    *(undefined1 *)(param_2 + 3) = 1;
    FUN_0185c5c8(&local_310);
    uVar9 = FUN_01857d10(&local_310);
    piVar8 = (int *)(uVar9 >> 0x20);
    *param_2 = uVar9;
    if ((uVar9 & 1) == 0) {
      *(int **)(param_2 + 2) = piVar8;
      *(undefined1 *)(param_2 + 3) = 0;
      FUN_018611a4(&local_310,*(undefined4 *)(iVar6 + 4),*(undefined4 *)(iVar6 + 8));
      if (local_310 == 2) {
        local_310 = 3;
        local_308 = local_30c;
      }
      else {
        local_308 = (int *)FUN_01bed4e2(auStack_70,&local_310,0x48);
        local_310 = 0;
      }
      do {
        iVar6 = *piVar8;
        bVar2 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar2);
      *piVar8 = iVar6 + 1;
      if (iVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0xb7a5f8);
        (*pcVar1)();
      }
      local_30c = (int *)0x0;
      local_2e0 = 4;
      local_2ec = 4;
      local_2d8 = 0;
      local_2dc = 0;
      local_2e4 = 0;
      local_2e8 = 0;
      local_2f0 = 0;
      local_2f4 = 0;
      local_2f8 = 2;
      FUN_01bed4e2(auStack_2d0,auStack_70,0x48);
      local_274 = 1;
      local_273 = 0;
      local_288 = 0;
      local_271 = 0;
      FUN_01bed93e(auStack_270,0,0x14);
      local_25c = 2;
      FUN_0183061c(auStack_3d0,piVar8,&local_310);
      uVar9 = FUN_01830c38(auStack_3d0);
      param_2[1] = uVar9;
      goto switchD_00b7a3d8_caseD_3;
    }
    piVar7 = (int *)0x0;
    iVar6 = 3;
    *(undefined1 *)(param_2 + 3) = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c2065c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c2065c);
  case 3:
switchD_00b7a3d8_caseD_3:
    FUN_0185ca04(&local_310,param_2 + 1,param_3);
    piVar8 = local_308;
    piVar7 = local_30c;
    iVar6 = local_310;
    if (local_310 == 4 && local_30c == (int *)0x0) {
      *param_1 = 4;
      param_1[1] = 0;
      uVar3 = 3;
      goto LAB_00b7a5d4;
    }
    FUN_01bed4e2(auStack_c0,auStack_304,0x4c);
    FUN_00b7ab0c((int)param_2[1],*(undefined4 *)((int)param_2 + 0xc));
    piVar4 = *(int **)(param_2 + 2);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018537bc((int)param_2[2]);
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  *param_1 = iVar6;
  param_1[1] = (int)piVar7;
  param_1[2] = (int)piVar8;
  FUN_01bed4e2(param_1 + 3,auStack_c0,0x4c);
  uVar3 = 1;
LAB_00b7a5d4:
  *(undefined1 *)((int)param_2 + 0x19) = uVar3;
  return;
}

