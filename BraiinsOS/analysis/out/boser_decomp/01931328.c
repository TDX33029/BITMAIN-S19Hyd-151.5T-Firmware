// FUN_01931328 @ 01931328 size=156 calls_out=2 calls_in=2
// strings: 

void FUN_01931328(undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined1 uVar2;
  
  uVar2 = 0x14;
  uVar1 = *(uint *)(param_2 + 8);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x10)) {
  case 1:
    uVar2 = 0x15;
    break;
  case 2:
    uVar2 = 0x16;
    break;
  case 3:
    uVar2 = 0x17;
    break;
  case 4:
    uVar2 = 0x18;
    break;
  case 5:
    uVar2 = *(undefined1 *)(param_2 + 0x11);
  }
  if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(0,0,&DAT_01d2565c);
  }
  **(undefined1 **)(param_2 + 4) = uVar2;
  if (uVar1 < 3) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(1,3,uVar1,&DAT_01d2566c);
  }
                    /* WARNING: Could not recover jumptable at 0x019313ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_019313b0 + *(int *)(&DAT_019313b0 + (uint)*(ushort *)(param_2 + 0xc) * 4)))();
  return;
}

