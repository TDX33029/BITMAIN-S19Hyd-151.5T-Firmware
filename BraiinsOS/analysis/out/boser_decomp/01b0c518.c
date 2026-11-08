// FUN_01b0c518 @ 01b0c518 size=356 calls_out=8 calls_in=5
// strings: aws_lc_0_39_0_CRYPTO_free_ex_data | /aws-lc/crypto/ex_data.c | sk_CRYPTO_EX_DATA_FUNCS_num(func_pointers) <= (size_t)(INT_MAX - ex_data_class->num_reserved)

undefined8 FUN_01b0c518(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (*param_3 == 0) {
    return CONCAT44(param_2,param_1);
  }
  FUN_01b7076c();
  iVar1 = FUN_01b701f4(*(undefined4 *)(param_1 + 0x20));
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_01b70420(*(undefined4 *)(param_1 + 0x20));
  }
  FUN_01b707cc(param_1);
  if (iVar1 == 0 || iVar2 != 0) {
    uVar3 = FUN_01b701f4(iVar2);
    iVar1 = 0;
    if (0x7fffffff - *(byte *)(param_1 + 0x24) < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_01be3310("sk_CRYPTO_EX_DATA_FUNCS_num(func_pointers) <= (size_t)(INT_MAX - ex_data_class->num_reserved)"
                   ,"/aws-lc/crypto/ex_data.c",0x99,"aws_lc_0_39_0_CRYPTO_free_ex_data");
    }
    for (; iVar6 = FUN_01b701f4(iVar2), iVar1 < iVar6; iVar1 = iVar1 + 1) {
      puVar4 = (undefined4 *)FUN_01b70208(iVar2,iVar1);
      if (puVar4[2] != 0) {
        uVar5 = FUN_01b0c474(param_3,(uint)*(byte *)(param_1 + 0x24) + iVar1);
        (*(code *)puVar4[2])
                  (param_2,uVar5,param_3,(uint)*(byte *)(param_1 + 0x24) + iVar1,*puVar4,puVar4[1]);
      }
    }
    FUN_01b7023c(iVar2);
    FUN_01b7023c(*param_3);
    *param_3 = 0;
  }
  return 0;
}

