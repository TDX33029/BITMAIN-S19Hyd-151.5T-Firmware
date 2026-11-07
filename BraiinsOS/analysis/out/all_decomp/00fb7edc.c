// FUN_00fb7edc @ 00fb7edc size=52 calls_out=1 calls_in=2
// strings: 

void FUN_00fb7edc(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 *local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined1 local_b;
  
  local_c = 0;
  local_14 = &uStack_1c;
  uStack_1c = param_1;
  uStack_18 = param_2;
  local_10 = param_4;
  local_b = param_3;
  FUN_015ea4e8(&local_14);
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0xfb7f0c);
  (*pcVar1)();
}

