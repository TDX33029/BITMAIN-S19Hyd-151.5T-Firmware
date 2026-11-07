// FUN_01264600 @ 01264600 size=128 calls_out=6 calls_in=2
// strings: 

void FUN_01264600(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_01298504(param_3,1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,param_3);
  }
  FUN_01bed4e2(iVar1,param_2,param_3);
  puVar2 = (undefined4 *)thunk_FUN_01be5118(0xc);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xc);
  }
  *puVar2 = param_3;
  puVar2[1] = iVar1;
  puVar2[2] = param_3;
  FUN_019a6b0c(param_1,0x28,puVar2,&DAT_01c2523c);
  return;
}

