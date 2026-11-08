// FUN_0169a9d4 @ 0169a9d4 size=84 calls_out=2 calls_in=0
// strings: 

void FUN_0169a9d4(undefined4 param_1,int *param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = param_2[4];
  if ((uint)param_2[1] <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar2,param_2[1],&DAT_018ae7cc);
  }
  puVar1 = (undefined4 *)(*param_2 + uVar2 * 8);
  FUN_00fb2258(param_1,*puVar1,puVar1[1],param_3,*(undefined4 *)(param_4 + 0xc));
  return;
}

