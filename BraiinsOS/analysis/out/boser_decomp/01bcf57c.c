// FUN_01bcf57c @ 01bcf57c size=252 calls_out=6 calls_in=5
// strings: 

undefined8 FUN_01bcf57c(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 local_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 local_21c;
  undefined4 uStack_218;
  undefined4 local_214;
  undefined4 uStack_210;
  undefined4 local_20c;
  undefined4 uStack_208;
  undefined4 local_204;
  undefined4 uStack_200;
  undefined1 auStack_1fc [480];
  int local_1c;
  
  local_1c = DAT_01d53560;
  FUN_01bcedd4(auStack_1fc,param_3,&PTR_01d3b2b0,0);
  FUN_01bcf1d8(&local_23c,param_1,1);
  FUN_01bce9e8(auStack_1fc,*(undefined4 *)(param_3 + 0xf0),&local_23c);
  local_21c = local_23c;
  uStack_218 = uStack_238;
  local_214 = uStack_234;
  uStack_210 = uStack_230;
  local_20c = local_22c;
  uStack_208 = uStack_228;
  local_204 = uStack_224;
  uStack_200 = uStack_220;
  FUN_01bcec60(&local_21c);
  local_24c = local_21c;
  local_248 = local_214;
  local_244 = local_20c;
  local_240 = local_204;
  FUN_01bcef2c(param_2,&local_24c);
  if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

