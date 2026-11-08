// FUN_01afbc08 @ 01afbc08 size=88 calls_out=3 calls_in=2
// strings: 

void FUN_01afbc08(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0xc);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xc);
  }
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  *puVar1 = *param_3;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  FUN_019a6b0c(param_1,param_2,puVar1,&DAT_01d30888);
  return;
}

