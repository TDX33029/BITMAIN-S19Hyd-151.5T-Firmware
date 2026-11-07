// FUN_00768b9c @ 00768b9c size=80 calls_out=3 calls_in=9
// strings: 

void FUN_00768b9c(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0xc);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xc);
  }
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  FUN_019a6b0c(param_1,0x28,puVar1,&DAT_01c0861c);
  return;
}

