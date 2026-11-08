// FUN_00605010 @ 00605010 size=160 calls_out=4 calls_in=2
// strings: 

void FUN_00605010(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined1 uStack_21;
  
  if (0x7ffffff4 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&uStack_21,&DAT_018574d8,&DAT_01857540);
  }
  uVar2 = param_4 + 0xb & 0xfffffffc;
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(uVar2);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,uVar2);
  }
  *puVar1 = 1;
  puVar1[1] = 1;
  FUN_016dd1aa(puVar1 + 2,param_3,param_4);
  *param_1 = param_2;
  param_1[1] = puVar1;
  param_1[2] = param_4;
  return;
}

