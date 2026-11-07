// FUN_010e9978 @ 010e9978 size=92 calls_out=2 calls_in=5
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_010e9978(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar1 = param_1[2];
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(0x18);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x18);
  }
  *puVar2 = 0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = uVar3;
  puVar2[4] = uVar4;
  puVar2[5] = uVar1;
  return;
}

