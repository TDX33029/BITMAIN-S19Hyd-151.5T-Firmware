// FUN_00a5cf20 @ 00a5cf20 size=440 calls_out=5 calls_in=1
// strings: BUG: missing work solver statistics

void FUN_00a5cf20(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int local_90 [6];
  undefined4 local_78;
  undefined4 local_74;
  undefined1 *local_70;
  
  if (*(int *)(param_3 + 0x118) == 2 && *(int *)(param_3 + 0x11c) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("BUG: missing work solver statistics",0x23,&DAT_01c1f160);
  }
  puVar2 = *(undefined1 **)(param_3 + 0x158);
  if (*(undefined1 **)(param_3 + 0x218) != &DAT_3b9aca00) {
    local_78 = *(undefined4 *)(param_3 + 0x210);
    local_74 = *(undefined4 *)(param_3 + 0x214);
    local_70 = *(undefined1 **)(param_3 + 0x218);
    FUN_014aeff4(local_90,&local_78);
  }
  if (puVar2 != &DAT_3b9aca00) {
    FUN_014aeff4(local_90,param_3 + 0x150);
    FUN_01bf09c8(*(undefined4 *)(param_3 + 0x140),*(undefined4 *)(param_3 + 0x144),
                 *(undefined4 *)(param_3 + 0x148),*(undefined4 *)(param_3 + 0x14c));
  }
  uVar1 = FUN_01221f24(param_3 + 0x1b0,param_3 + 0x1b0,5,0);
  FUN_00a5d500(local_90,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00a5d0bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_00a5d0c8 + *(int *)(&LAB_00a5d0c8 + local_90[0] * 4)))();
  return;
}

