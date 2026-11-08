// FUN_011e050c @ 011e050c size=180 calls_out=5 calls_in=0
// strings: 

undefined8 FUN_011e050c(undefined4 param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 uStack_19;
  
  if (0xaaaaaa9 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&uStack_19,&DAT_018574d8,&DAT_01857540);
  }
  iVar2 = param_2 * 0xc + 8;
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(iVar2);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,iVar2);
  }
  *puVar1 = 1;
  puVar1[1] = 1;
  FUN_016dd1aa(puVar1 + 2,param_1,param_2 * 0xc);
  if (param_2 != 0) {
    thunk_FUN_016d3fb4(param_1);
  }
  return CONCAT44(param_2,puVar1);
}

