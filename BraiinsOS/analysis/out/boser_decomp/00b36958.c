// FUN_00b36958 @ 00b36958 size=528 calls_out=9 calls_in=5
// strings: BUG: missing work solver statistics

void FUN_00b36958(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r1;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined *local_328;
  int iStack_324;
  undefined *local_320;
  int local_1e8 [96];
  
  puVar6 = *(undefined **)(param_2 + 0x2b0);
  uVar5 = 0;
  iVar2 = (int)puVar6 * 0x180;
  if (&UNK_00555555 < puVar6) {
LAB_00b3698c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar5,iVar2);
  }
  iVar3 = *(int *)(param_2 + 0x2ac);
  if (iVar2 == 0) {
    iVar1 = 8;
    local_328 = (undefined *)0x0;
  }
  else {
    uVar5 = 8;
    iVar1 = FUN_01298504(iVar2,8);
    local_328 = puVar6;
    if (iVar1 == 0) goto LAB_00b3698c;
  }
  local_320 = (undefined *)0x0;
  puVar4 = (undefined *)0x0;
  iStack_324 = iVar1;
  if (puVar6 != (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
    do {
      FUN_00b36958(local_1e8,iVar3);
      FUN_01bed4e2(iVar1,local_1e8,0x180);
      puVar4 = puVar4 + 1;
      iVar1 = iVar1 + 0x180;
      iVar3 = iVar3 + 0x2e0;
    } while (puVar6 != puVar4);
    puVar4 = puVar6;
  }
  local_320 = puVar4;
  if (*(int *)(param_2 + 0x118) == 2 && *(int *)(param_2 + 0x11c) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("BUG: missing work solver statistics",0x23,&DAT_01c1f160);
  }
  uVar5 = *(undefined4 *)(param_2 + 0x2a4);
  if (*(int *)(param_2 + 0x2a0) == 0) {
    uVar5 = 0;
  }
  iVar2 = FUN_012fc81c(uVar5,local_1e8);
  iVar3 = 10 - iVar2;
  if (iVar2 == 10) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_01298504(iVar3,1);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,iVar3);
    }
  }
  FUN_01bed4e2(iVar1,(int)local_1e8 + iVar2,iVar3);
  if (*(int *)(param_2 + 0x220) == 5 && *(int *)(param_2 + 0x224) == 0) {
    FUN_00b621e8(&local_328,(int *)(param_2 + 0x118));
    uVar5 = FUN_01221f24(param_2 + 0x1d8,extraout_r1,900,0);
    FUN_00a5d500(local_1e8,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00b36b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&LAB_00b36b8c + *(int *)(&LAB_00b36b8c + local_1e8[0] * 4)))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b36aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00b36af0 + *(int *)(&DAT_00b36af0 + *(int *)(param_2 + 0x220) * 4)))
            (*(undefined4 *)(param_2 + 0x228),*(undefined4 *)(param_2 + 0x22c),
             *(undefined4 *)(param_2 + 0x230),*(undefined4 *)(param_2 + 0x234));
  return;
}

