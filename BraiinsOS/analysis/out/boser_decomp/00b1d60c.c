// FUN_00b1d60c @ 00b1d60c size=76 calls_out=2 calls_in=4
// strings: 

undefined4 FUN_00b1d60c(int param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = *(uint *)(param_1 + 8);
  if (uVar2 <= param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_0066651c(param_2,uVar2);
  }
  puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4);
  uVar3 = *puVar1;
  FUN_01bed864(puVar1,puVar1 + 1,(uVar2 + ~param_2) * 4);
  *(uint *)(param_1 + 8) = uVar2 - 1;
  return uVar3;
}

