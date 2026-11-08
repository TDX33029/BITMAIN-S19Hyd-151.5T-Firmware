// FUN_01271fb4 @ 01271fb4 size=312 calls_out=8 calls_in=1
// strings: x-dependsOnstruct SettingSchema with 13 elementsstruct SchemaDependsOn with 2 elementsu64 value was too largestruct TunerConfig with 2 elementsstruct SessionConfig with 4 elementsstruct ApiUsageConfig with 4 elementsstruct TelemetryConfig with 5 elementsstruct RawDevfeeHealthConfig with 1 elementstruct RawDevfeeDiagnosticsConfig with 1 elementstruct RawPoolReconnectBackoffConfig with 4 elementsa map | internal error: entered unreachable code | serialize_value called before serialize_key

int FUN_01271fb4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint local_58 [7];
  int local_3c;
  int local_38;
  int local_34;
  char local_30 [4];
  int local_2c;
  
  if (*param_1 == 0) {
    iVar1 = FUN_007025b0(param_1,
                         "x-dependsOnstruct SettingSchema with 13 elementsstruct SchemaDependsOn with 2 elementsu64 value was too largestruct TunerConfig with 2 elementsstruct SessionConfig with 4 elementsstruct ApiUsageConfig with 4 elementsstruct TelemetryConfig with 5 elementsstruct RawDevfeeHealthConfig with 1 elementstruct RawDevfeeDiagnosticsConfig with 1 elementstruct RawPoolReconnectBackoffConfig with 4 elementsa map"
                         ,0xb);
    if (iVar1 == 0) {
      if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9574);
      }
      iVar1 = param_1[4];
      iVar2 = param_1[5];
      local_34 = param_1[6];
      param_1[4] = -0x80000000;
      if (iVar1 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("serialize_value called before serialize_key",0x2b,&DAT_01cf9564);
      }
      local_3c = iVar1;
      local_38 = iVar2;
      if (*(int *)(param_2 + 0x18) == -0x80000000) {
        local_30[0] = '\0';
      }
      else {
        FUN_0126eea0(local_30,param_2);
        if (local_30[0] == '\x06') {
          FUN_019bb7e0(iVar1,iVar2);
          return local_2c;
        }
      }
      FUN_0196b484(local_58,param_1 + 1,&local_3c,local_30);
      iVar1 = 0;
      if ((local_58[0] & 0xff) != 6) {
        FUN_00db4764(local_58);
      }
    }
  }
  else {
    local_58[0] = 10;
    iVar1 = FUN_01966fbc(local_58,0,0);
  }
  return iVar1;
}

