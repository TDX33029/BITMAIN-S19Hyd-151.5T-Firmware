// FUN_0169a5b4 @ 0169a5b4 size=100 calls_out=2 calls_in=0
// strings: 

void FUN_0169a5b4(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar2 = param_2[4];
  uStack_18 = param_5;
  uStack_14 = param_6;
  local_20 = param_3;
  uStack_1c = param_4;
  if ((uint)param_2[1] <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar2,param_2[1],&DAT_018ae7cc);
  }
  puVar1 = (undefined4 *)(*param_2 + uVar2 * 8);
  FUN_00fb2258(param_1,*puVar1,puVar1[1],&local_20,FUN_009f2b38);
  return;
}

