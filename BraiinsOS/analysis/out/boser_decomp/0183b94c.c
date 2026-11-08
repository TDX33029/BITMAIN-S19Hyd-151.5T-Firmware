// FUN_0183b94c @ 0183b94c size=104 calls_out=5 calls_in=1
// strings: 

void FUN_0183b94c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_01298504(param_2,1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,param_2);
  }
  FUN_01bed4e2(iVar1,param_1,param_2);
  puVar2 = (undefined4 *)thunk_FUN_01be5118(0xc);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xc);
  }
  *puVar2 = param_2;
  puVar2[1] = iVar1;
  puVar2[2] = param_2;
  return;
}

