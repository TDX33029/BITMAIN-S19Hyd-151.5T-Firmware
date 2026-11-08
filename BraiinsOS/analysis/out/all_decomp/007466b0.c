// FUN_007466b0 @ 007466b0 size=88 calls_out=2 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_007466b0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint local_18;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar3 = param_2[3];
  local_18 = local_18 & 0xffffff00;
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(0x14);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x14);
  }
  *puVar2 = uVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar3;
  puVar2[4] = local_18;
  return;
}

