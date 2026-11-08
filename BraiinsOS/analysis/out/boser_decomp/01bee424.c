// FUN_01bee424 @ 01bee424 size=70 calls_out=3 calls_in=1
// strings: 

undefined4 FUN_01bee424(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0xc;
  }
  else {
    FUN_01bedf2c(&DAT_01d53c0c);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = 0;
    puVar1[4] = DAT_01d53c08;
    if (DAT_01d53c08 != (undefined4 *)0x0) {
      DAT_01d53c08[3] = puVar1;
    }
    DAT_01d53c08 = puVar1;
    FUN_01bee02c(&DAT_01d53c0c);
    uVar2 = 0;
  }
  return uVar2;
}

