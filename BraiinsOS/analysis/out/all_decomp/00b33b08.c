// FUN_00b33b08 @ 00b33b08 size=188 calls_out=3 calls_in=1
// strings: 

void FUN_00b33b08(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  switch(*(undefined1 *)((int)param_1 + 0x12)) {
  case 3:
    if (param_1[6] == 0) {
      return;
    }
    FUN_00c8204c(param_1[6],param_1[7],1);
    return;
  case 4:
    if (param_1[6] != 0) {
      FUN_00c8204c(param_1[6],param_1[7],1);
    }
    goto LAB_00b33bc8;
  case 5:
    uVar1 = param_1[6];
    puVar2 = (undefined4 *)param_1[7];
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(uVar1);
    }
    break;
  case 6:
    uVar1 = param_1[6];
    puVar2 = (undefined4 *)param_1[7];
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(uVar1);
    }
    break;
  default:
    return;
  }
  if (puVar2[1] != 0) {
    thunk_FUN_016d3fb4(uVar1);
  }
  FUN_00c822ec(param_1[2]);
LAB_00b33bc8:
  FUN_00c822ec(*param_1);
  return;
}

