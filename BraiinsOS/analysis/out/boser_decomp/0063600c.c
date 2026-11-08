// FUN_0063600c @ 0063600c size=1308 calls_out=22 calls_in=0
// strings: state | RUNNINGDORMANTLOWERUP | idlast_updatedlast_ticknext_tickran

void FUN_0063600c(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_2b0 [136];
  undefined4 local_228;
  undefined4 local_224;
  undefined1 local_220 [160];
  undefined1 local_180 [348];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x94)) {
  case 0:
    *(undefined1 *)(param_2 + 0x95) = 1;
    FUN_01bed4e2(auStack_2b0,param_2,0x88);
    local_228 = *(undefined4 *)(param_2 + 0x88);
    local_224 = *(undefined4 *)(param_2 + 0x8c);
    FUN_005d00c0(local_180,auStack_2b0,param_2 + 0x90);
    FUN_01bed4e2(local_220,local_180,0xa0);
    FUN_01bed4e2(param_2 + 0x98,local_220,0xa0);
  case 3:
    piVar2 = (int *)(param_2 + 0x98);
    iVar3 = FUN_005d012c(piVar2);
    if (*(char *)(param_2 + 0x130) == '\x03' || *(char *)(param_2 + 0x130) == '\0') {
      FUN_0096a6b0(piVar2);
    }
    *piVar2 = iVar3;
    *(undefined4 *)(param_2 + 0x9c) = 0;
    *(undefined1 *)(param_2 + 0x95) = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c22510);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c22510);
  case 4:
    if (*(char *)(param_2 + 0x9c) != '\0') {
      if (*(char *)(param_2 + 0x9c) == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c02988);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c02988);
    }
    iVar3 = *(int *)(param_2 + 0x98);
  }
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 8) + 0xc) + 0x1c) + 8);
  FUN_00a98170(iVar1 + 0x98);
  iVar3 = 3;
  if ((uint)(*(uint *)(iVar1 + 0xa0) < 3) <= (uint)-*(int *)(iVar1 + 0xa4)) {
    iVar3 = *(uint *)(iVar1 + 0xa0) - 3;
  }
                    /* WARNING: Could not recover jumptable at 0x00636134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00636138 + *(int *)(&DAT_00636138 + iVar3 * 4)))();
  return;
}

