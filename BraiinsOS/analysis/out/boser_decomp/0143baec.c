// FUN_0143baec @ 0143baec size=160 calls_out=6 calls_in=7
// strings: 

int * FUN_0143baec(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
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
  iVar3 = *param_1;
  *puVar2 = param_3;
  puVar2[1] = iVar1;
  puVar2[2] = param_3;
  if (iVar3 != 0) {
    FUN_00f80320(iVar3,param_1[1]);
  }
  *param_1 = (int)puVar2;
  param_1[1] = (int)&DAT_01cf776c;
  return param_1;
}

