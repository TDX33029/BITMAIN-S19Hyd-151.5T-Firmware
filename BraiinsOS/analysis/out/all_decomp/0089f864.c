// FUN_0089f864 @ 0089f864 size=96 calls_out=2 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0089f864(undefined4 param_1,undefined1 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_18;
  
  uVar3 = *param_3;
  uVar4 = param_3[1];
  uVar2 = param_3[2];
  local_18 = (uint)CONCAT21((short)((uint)local_18 >> 0x10),param_2) << 8;
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x14);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x14);
  }
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar2;
  puVar1[3] = param_1;
  puVar1[4] = local_18;
  return;
}

