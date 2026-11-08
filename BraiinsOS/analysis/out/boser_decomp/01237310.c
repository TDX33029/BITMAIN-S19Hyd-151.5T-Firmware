// FUN_01237310 @ 01237310 size=168 calls_out=2 calls_in=1
// strings: telemetry_enabled | telemetry_submit_period_secsstruct Autotuningstruct Managementstruct PerformanceScalingstruct PlusConfigDescriptor

void FUN_01237310(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  if (param_3 == 0x11) {
    iVar2 = thunk_FUN_01bed842(param_2,"telemetry_enabled",0x11);
    if (iVar2 != 0) {
LAB_01237394:
      FUN_0123bfbc(param_1,param_2,param_3,&DAT_01c24c0c,2);
      return;
    }
    *param_1 = 2;
    uVar1 = 0;
  }
  else {
    if ((param_3 != 0x1c) ||
       (iVar2 = thunk_FUN_01bed842(param_2,
                                   "telemetry_submit_period_secsstruct Autotuningstruct Managementstruct PerformanceScalingstruct PlusConfigDescriptor"
                                   ,0x1c), iVar2 != 0)) goto LAB_01237394;
    *param_1 = 2;
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}

