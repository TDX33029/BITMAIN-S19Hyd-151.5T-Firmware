// FUN_011e1508 @ 011e1508 size=152 calls_out=4 calls_in=160
// strings: 

undefined8 FUN_011e1508(undefined4 param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined1 uStack_11;
  
  if (0x7ffffff4 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&uStack_11,&DAT_018574d8,&DAT_01857540);
  }
  uVar2 = param_2 + 0xb & 0xfffffffc;
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(uVar2);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,uVar2);
  }
  *puVar1 = 1;
  puVar1[1] = 1;
  FUN_016dd1aa(puVar1 + 2,param_1,param_2);
  return CONCAT44(param_2,puVar1);
}

