// FUN_01638a70 @ 01638a70 size=192 calls_out=4 calls_in=1
// strings: failed to create UnixStream

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01638a70(void)

{
  int iVar1;
  undefined4 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  int local_18;
  int local_14;
  
  local_14 = -1;
  local_18 = -1;
  iVar1 = FUN_016d99fe(1,0x80801,0,&local_18);
  if (iVar1 < 0) {
    puVar2 = (undefined4 *)FUN_016d2bc8();
    local_14 = *puVar2;
    local_18 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("failed to create UnixStream",0x1b,&local_18,&DAT_018ac43c,&DAT_018ac50c);
  }
  if (local_18 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_0056a6c8,8,&DAT_0188b48c);
  }
  if (local_14 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_0056a6c8,8,&DAT_0188b48c);
  }
                    /* WARNING: Could not recover jumptable at 0x01638ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

