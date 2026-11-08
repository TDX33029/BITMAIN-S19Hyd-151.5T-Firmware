// FUN_00a12740 @ 00a12740 size=92 calls_out=2 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a12740(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint local_20;
  
  uVar2 = *param_4;
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  local_20 = local_20 & 0xffffff00;
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x24);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x24);
  }
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = param_1;
  puVar1[4] = param_2;
  puVar1[5] = param_3;
  puVar1[6] = uStack_28;
  puVar1[7] = uStack_24;
  puVar1[8] = local_20;
  return;
}

