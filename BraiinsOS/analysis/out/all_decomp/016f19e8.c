// FUN_016f19e8 @ 016f19e8 size=348 calls_out=8 calls_in=5
// strings: aws_lc_0_39_0_CRYPTO_free_ex_data | /aws-lc/crypto/ex_data.c | sk_CRYPTO_EX_DATA_FUNCS_num(func_pointers) <= (size_t)(INT_MAX - ex_data_class->num_reserved)

undefined8 FUN_016f19e8(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  if (*param_3 == 0) {
    return CONCAT44(param_2,param_1);
  }
  FUN_01781f34();
  iVar1 = FUN_017818f0(*(undefined4 *)(param_1 + 0x20));
  if (iVar1 == 0) {
    FUN_01781f94(param_1);
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_01781b9c(*(undefined4 *)(param_1 + 0x20));
    FUN_01781f94(param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  uVar2 = FUN_017818f0(iVar1);
  if (0x7fffffff - *(byte *)(param_1 + 0x24) < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c94("sk_CRYPTO_EX_DATA_FUNCS_num(func_pointers) <= (size_t)(INT_MAX - ex_data_class->num_reserved)"
                 ,"/aws-lc/crypto/ex_data.c",0x99,"aws_lc_0_39_0_CRYPTO_free_ex_data");
  }
  for (iVar6 = 0; iVar5 = FUN_017818f0(iVar1), iVar6 < iVar5; iVar6 = iVar6 + 1) {
    puVar3 = (undefined4 *)FUN_0178190c(iVar1,iVar6);
    if (puVar3[2] != 0) {
      uVar4 = FUN_016f1934(param_3,(uint)*(byte *)(param_1 + 0x24) + iVar6);
      (*(code *)puVar3[2])
                (param_2,uVar4,param_3,(uint)*(byte *)(param_1 + 0x24) + iVar6,*puVar3,puVar3[1]);
    }
  }
  FUN_01781944(iVar1);
  FUN_01781944(*param_3);
  *param_3 = 0;
  return 0;
}

