// FUN_01209888 @ 01209888 size=64 calls_out=1 calls_in=1
// strings: 

void FUN_01209888(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = *param_1;
  local_14 = param_1[1];
  FUN_0197a1ac(&local_18,&DAT_01c23998,param_1[2],1,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x12098c4);
  (*pcVar1)();
}

