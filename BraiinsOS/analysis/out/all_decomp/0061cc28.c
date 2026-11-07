// FUN_0061cc28 @ 0061cc28 size=104 calls_out=2 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0061cc28(void)

{
  int iVar1;
  int local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar1 = 4;
  if (4 < (uint)(DAT_018cc64c * 2)) {
    iVar1 = DAT_018cc64c << 1;
  }
  FUN_0061ca68(&local_1c,DAT_018cc64c,DAT_018cc650,iVar1,8,0x158);
  if (local_1c == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(local_18,uStack_14);
  }
  DAT_018cc64c = iVar1;
  DAT_018cc650 = local_18;
  return;
}

