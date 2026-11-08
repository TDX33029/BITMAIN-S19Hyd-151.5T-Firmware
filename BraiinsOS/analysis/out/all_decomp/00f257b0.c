// FUN_00f257b0 @ 00f257b0 size=368 calls_out=6 calls_in=1
// strings: $__toml_private_datetimestruct TunerConfig with 2 elementsstruct SessionConfig with 4 elementsstruct ApiUsageConfig with 4 elementsstruct TelemetryConfig with 5 elementsstruct RawDevfeeHealthConfig with 1 elementstruct RawDevfeeDiagnosticsConfig with 1 elementstruct RawPoolReconnectBackoffConfig with 4 elements

void FUN_00f257b0(undefined4 *param_1,int param_2,undefined4 param_3,int param_4,uint param_5,
                 undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 local_1c0 [2];
  undefined4 local_1b8;
  undefined4 local_1ac;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_164;
  int local_150 [28];
  int local_e0;
  int local_dc;
  int local_d8;
  undefined4 local_d4;
  undefined4 local_c8;
  undefined4 local_bc;
  undefined4 local_b0;
  undefined4 local_a4;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [112];
  
  if (*(int *)(param_2 + 0x10) == -0x80000000) {
    puVar3 = (undefined1 *)0x80000005;
    if (param_4 == 0x18) {
      iVar1 = thunk_FUN_016dd50a(param_3,
                                 "$__toml_private_datetimestruct TunerConfig with 2 elementsstruct SessionConfig with 4 elementsstruct ApiUsageConfig with 4 elementsstruct TelemetryConfig with 5 elementsstruct RawDevfeeHealthConfig with 1 elementstruct RawDevfeeDiagnosticsConfig with 1 elementstruct RawPoolReconnectBackoffConfig with 4 elements"
                                 ,0x18);
      puVar3 = (undefined1 *)0x80000005;
      if (iVar1 == 0) {
        puVar3 = &DAT_80000004;
      }
    }
  }
  else {
    puVar3 = (undefined1 *)0x80000005;
    if ((param_5 & 1) != 0) {
      uVar2 = 0;
      local_1a0 = param_6;
      local_164 = 3;
      iVar1 = 1;
      local_19c = 0;
      local_198 = 0x80000003;
      local_1ac = 0x80000003;
      local_1b8 = 0x80000003;
      local_1c0[0] = 1;
      if (param_4 < 0) {
LAB_00f25850:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar2,param_4);
      }
      if (param_4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar1 = thunk_FUN_016d4a50(param_4);
        if (iVar1 == 0) {
          uVar2 = 1;
          goto LAB_00f25850;
        }
        iVar4 = param_4;
      }
      FUN_016dd1aa(iVar1,param_3,param_4);
      local_a4 = 0x80000003;
      local_b0 = 0x80000003;
      local_bc = 0x80000003;
      local_c8 = 0x80000003;
      local_d4 = 0x80000003;
      local_e0 = iVar4;
      local_dc = iVar1;
      local_d8 = param_4;
      FUN_00ea0d40(auStack_98,param_2,&local_e0,local_1c0);
      FUN_016dd1aa(local_150,auStack_90,0x70);
      if (local_150[0] != 4) {
        FUN_00f17590(local_150);
      }
      *param_1 = 0x80000005;
      return;
    }
  }
  *param_1 = puVar3;
  return;
}

