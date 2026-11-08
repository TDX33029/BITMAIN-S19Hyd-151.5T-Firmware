// FUN_01206d44 @ 01206d44 size=156 calls_out=2 calls_in=1
// strings: TimeAnchorstruct variant TelemetryNotification::TimeAnchor with 1 element | ConfigEOI

void FUN_01206d44(undefined1 *param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_3 == 10) {
    iVar2 = thunk_FUN_01bed842(param_2,
                               "TimeAnchorstruct variant TelemetryNotification::TimeAnchor with 1 element"
                               ,10);
    if (iVar2 == 0) {
      uVar1 = 0;
      param_1[1] = 0;
      goto LAB_01206db4;
    }
  }
  else if ((param_3 == 6) && (iVar2 = thunk_FUN_01bed842(param_2,"ConfigEOI",6), iVar2 == 0)) {
    param_1[1] = 1;
    uVar1 = 0;
    goto LAB_01206db4;
  }
  uVar3 = FUN_01265080(param_2,param_3,&DAT_01c237c4,2);
  *(undefined4 *)(param_1 + 4) = uVar3;
  uVar1 = 1;
LAB_01206db4:
  *param_1 = uVar1;
  return;
}

