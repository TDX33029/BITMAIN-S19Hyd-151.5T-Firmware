// FUN_01643224 @ 01643224 size=100 calls_out=2 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01643224(void)

{
  int iVar1;
  int local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar1 = 4;
  if (4 < (uint)(DAT_018d90f0 * 2)) {
    iVar1 = DAT_018d90f0 << 1;
  }
  FUN_01642f38(&local_1c,DAT_018d90f0,DAT_018d90f4,iVar1,4,0x1c);
  if (local_1c == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(local_18,uStack_14);
  }
  DAT_018d90f0 = iVar1;
  DAT_018d90f4 = local_18;
  return;
}

