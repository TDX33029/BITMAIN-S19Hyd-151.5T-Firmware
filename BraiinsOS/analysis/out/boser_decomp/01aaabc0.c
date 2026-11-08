// FUN_01aaabc0 @ 01aaabc0 size=84 calls_out=2 calls_in=7
// strings: 

void FUN_01aaabc0(undefined4 param_1,int *param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = param_2[4];
  if ((uint)param_2[1] <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar2,param_2[1],&DAT_01d2f150);
  }
  puVar1 = (undefined4 *)(*param_2 + uVar2 * 8);
  FUN_01302c38(param_1,*puVar1,puVar1[1],param_3,*(undefined4 *)(param_4 + 0xc));
  return;
}

