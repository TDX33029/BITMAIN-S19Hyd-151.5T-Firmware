// FUN_011d9954 @ 011d9954 size=140 calls_out=3 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_011d9954(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = thunk_FUN_01be5118(0x58);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x58);
  }
  FUN_01bed4e2(iVar1,param_3,0x58);
  puVar2 = (undefined4 *)thunk_FUN_01be5118(0x10);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x10);
  }
  *puVar2 = param_1;
  puVar2[1] = param_2;
  puVar2[2] = iVar1;
  puVar2[3] = &DAT_01c220e0;
  return;
}

