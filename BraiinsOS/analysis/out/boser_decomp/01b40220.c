// FUN_01b40220 @ 01b40220 size=432 calls_out=7 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/ec/oct.c | aws_lc_0_39_0_ec_point_to_bytes | /aws-lc/crypto/fipsmodule/ec/oct.c | field_len == BN_num_bytes(&group->field.N) | aws_lc_0_39_0_ec_point_to_bytes | /aws-lc/crypto/fipsmodule/ec/oct.c

uint FUN_01b40220(int param_1,int param_2,int param_3,char *param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_74;
  undefined1 auStack_70 [68];
  int local_2c;
  
  local_2c = DAT_01d53560;
  uVar1 = FUN_01b40190(param_1,param_3,&PTR_01d3b2b0,0);
  if (param_5 < uVar1) {
    uVar1 = 0;
    FUN_01b053d4(0xf,0,100,"/aws-lc/crypto/fipsmodule/ec/oct.c",0x33);
  }
  else {
    FUN_01b3e834(param_1,param_4 + 1,&local_74,param_2);
    iVar2 = FUN_01b2b938(param_1 + 0x118);
    if (iVar2 != local_74) {
      uVar3 = 0x39;
LAB_01b4030c:
                    /* WARNING: Subroutine does not return */
      FUN_01be3310("field_len == BN_num_bytes(&group->field.N)","/aws-lc/crypto/fipsmodule/ec/oct.c"
                   ,uVar3,"aws_lc_0_39_0_ec_point_to_bytes");
    }
    if (param_3 == 4) {
      FUN_01b3e834(param_1,param_4 + iVar2 + 1,&local_74,param_2 + 0x44);
      iVar2 = FUN_01b2b938(param_1 + 0x118);
      if (iVar2 != local_74) {
        uVar3 = 0x3d;
        goto LAB_01b4030c;
      }
      *param_4 = '\x04';
    }
    else {
      FUN_01b3e834(param_1,auStack_70,&local_74,param_2 + 0x44);
      *param_4 = (auStack_70[local_74 + -1] & 1) + (char)param_3;
      if (param_3 == 6) {
        FUN_01b26974(param_4 + local_74 + 1,auStack_70);
      }
    }
  }
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return uVar1;
}

