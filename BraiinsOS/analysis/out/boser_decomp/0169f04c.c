// FUN_0169f04c @ 0169f04c size=384 calls_out=5 calls_in=3
// strings: 

undefined8
FUN_0169f04c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  undefined4 local_44;
  undefined4 local_40;
  int local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar1 = *param_1;
  if (((*(char *)(iVar1 + 0x15a) == '\x01') && (*(char *)(iVar1 + 0x15b) != '\0')) &&
     (iVar2 = *(int *)(*(int *)(iVar1 + 0x13c) + 0x10), param_5 < (uint)(iVar2 << 1))) {
    if (*(int *)(iVar1 + 0x154) == 1) {
      local_34 = 0;
      local_38 = 0;
      FUN_0168fe3c(&local_44,param_1,param_2,param_3,&local_38,2);
      if (2 < param_5) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,param_5,2,&DAT_01d07d0c);
      }
      FUN_01bed4e2(param_4,&local_38,param_5 << 2);
    }
    else {
      FUN_016c1488(&local_38,iVar2 << 1);
      FUN_0168fe3c(&local_2c,param_1,param_2,param_3,local_34,local_30);
      if (local_30 < param_5) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,param_5,local_30,&DAT_01d07d1c);
      }
      FUN_01bed4e2(param_4,local_34,param_5 << 2);
      FUN_0134aee0(local_38,local_34,4,4);
      local_44 = local_2c;
      local_40 = local_28;
    }
  }
  else {
    FUN_0168fe3c(&local_38,param_1,param_2,param_3,param_4,param_5);
    if (local_38 == 0) {
      local_44 = 0;
      local_40 = param_2;
    }
    else {
      local_44 = 1;
      local_40 = local_34;
    }
  }
  return CONCAT44(local_40,local_44);
}

