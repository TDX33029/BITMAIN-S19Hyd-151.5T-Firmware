// FUN_0157c50c @ 0157c50c size=76 calls_out=2 calls_in=153
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0157c50c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar1 = param_1[2];
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(0x14);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x14);
  }
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  puVar2[2] = uVar1;
  puVar2[3] = param_2;
  puVar2[4] = param_3;
  return;
}

