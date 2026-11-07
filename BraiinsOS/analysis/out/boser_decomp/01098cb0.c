// FUN_01098cb0 @ 01098cb0 size=96 calls_out=2 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01098cb0(undefined4 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_18;
  uint3 uStack_c;
  undefined1 local_9;
  
  uStack_c = (uint3)(ushort)uStack_c;
  _uStack_c = CONCAT13(param_2,uStack_c);
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x20);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x20);
  }
  *puVar1 = local_28;
  puVar1[1] = uStack_24;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  puVar1[4] = local_18;
  puVar1[5] = param_1;
  puVar1[6] = param_5;
  puVar1[7] = _uStack_c;
  return;
}

