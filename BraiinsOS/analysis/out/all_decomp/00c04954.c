// FUN_00c04954 @ 00c04954 size=392 calls_out=1 calls_in=1
// strings: fan_pwm | estimated_power | tuning_duration | measured_hashrate | inlet_outlet_pcb_temperature

void FUN_00c04954(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  switch(param_3) {
  case 7:
    iVar1 = thunk_FUN_016dd50a(param_2,"fan_pwm",7);
    if (iVar1 == 0) {
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
    break;
  case 0xe:
    iVar1 = thunk_FUN_016dd50a(param_2,&DAT_0035459b,0xe);
    if (iVar1 == 0) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    break;
  case 0xf:
    iVar1 = thunk_FUN_016dd50a(param_2,"estimated_power",0xf);
    if (iVar1 == 0) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    iVar1 = thunk_FUN_016dd50a(param_2,"tuning_duration",0xf);
    if (iVar1 == 0) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    break;
  case 0x11:
    iVar1 = thunk_FUN_016dd50a(param_2,"measured_hashrate",0x11);
    if (iVar1 == 0) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    iVar1 = thunk_FUN_016dd50a(param_2,&DAT_003545a9,0x11);
    if (iVar1 == 0) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    break;
  case 0x1c:
    iVar1 = thunk_FUN_016dd50a(param_2,"inlet_outlet_pcb_temperature",0x1c);
    if (iVar1 == 0) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 7;
  *param_1 = 0;
  return;
}

