// FUN_01730668 @ 01730668 size=504 calls_out=7 calls_in=1
// strings: aws_lc_0_39_0_ec_point_to_bytes | /aws-lc/crypto/fipsmodule/ec/oct.c | field_len == BN_num_bytes(&group->field.N) | /aws-lc/crypto/fipsmodule/ec/oct.c | aws_lc_0_39_0_ec_point_to_bytes | /aws-lc/crypto/fipsmodule/ec/oct.c

uint FUN_01730668(int param_1,int param_2,int param_3,char *param_4,uint param_5)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_6c;
  char acStack_68 [68];
  int local_24;
  
  local_24 = DAT_018ddaf8;
  uVar2 = FUN_0173058c(param_1,param_3,&PTR_018bc3f4,0);
  if (param_5 < uVar2) {
    uVar2 = 0;
    FUN_016e9cd0(0xf,0,100,"/aws-lc/crypto/fipsmodule/ec/oct.c",0x33);
  }
  else {
    FUN_0172e7b0(param_1,param_4 + 1,&local_6c,param_2);
    uVar3 = FUN_01714f1c(param_1 + 0x118);
    if (uVar3 != local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2c94("field_len == BN_num_bytes(&group->field.N)","/aws-lc/crypto/fipsmodule/ec/oct.c"
                   ,0x39,"aws_lc_0_39_0_ec_point_to_bytes");
    }
    if (param_3 == 4) {
      FUN_0172e7b0(param_1,param_4 + uVar3 + 1,&local_6c,param_2 + 0x44);
      uVar3 = FUN_01714f1c(param_1 + 0x118);
      if (uVar3 != local_6c) {
                    /* WARNING: Subroutine does not return */
        FUN_016d2c94("field_len == BN_num_bytes(&group->field.N)",
                     "/aws-lc/crypto/fipsmodule/ec/oct.c",0x3d,"aws_lc_0_39_0_ec_point_to_bytes");
      }
      *param_4 = '\x04';
    }
    else {
      FUN_0172e7b0(param_1,acStack_68,&local_6c,param_2 + 0x44);
      *param_4 = (acStack_68[local_6c - 1] & 1U) + (char)param_3;
      if ((param_3 == 6) && (local_6c != 0)) {
        param_4 = param_4 + local_6c + 1;
        if (((param_4 < acStack_68) && (acStack_68 < param_4 + local_6c)) ||
           (((acStack_68 < param_4 && (param_4 < acStack_68 + local_6c)) || (0x42 < local_6c)))) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0,0x1730838);
          (*pcVar1)();
        }
        FUN_016dd1aa(param_4,acStack_68);
      }
    }
  }
  if (local_24 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return uVar2;
}

