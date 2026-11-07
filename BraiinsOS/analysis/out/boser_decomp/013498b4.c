// FUN_013498b4 @ 013498b4 size=28 calls_out=1 calls_in=34
// strings: 

void FUN_013498b4(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = param_1;
  uStack_c = param_2;
  FUN_013498f4(&local_10);
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x13498e4);
  (*pcVar1)();
}

