// FUN_01533edc @ 01533edc size=156 calls_out=2 calls_in=4
// strings: 

void FUN_01533edc(undefined4 param_1,int param_2)

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
    FUN_00faa4a4(0,0,&DAT_018a7a14);
  }
  **(undefined1 **)(param_2 + 4) = uVar2;
  if (uVar1 < 3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(1,3,uVar1,&DAT_018a7a24);
  }
                    /* WARNING: Could not recover jumptable at 0x01533f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01533f64 + *(int *)(&DAT_01533f64 + (uint)*(ushort *)(param_2 + 0xc) * 4)))();
  return;
}

