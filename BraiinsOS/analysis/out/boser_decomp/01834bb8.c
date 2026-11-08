// FUN_01834bb8 @ 01834bb8 size=68 calls_out=2 calls_in=4
// strings: 

void FUN_01834bb8(undefined1 *param_1)

{
  switch(*param_1) {
  case 0:
    FUN_01a6322c(param_1 + 8);
    return;
  case 1:
  case 3:
    FUN_01834c18(param_1 + 8);
    return;
  case 2:
  case 4:
  case 5:
    return;
  case 6:
                    /* WARNING: Could not recover jumptable at 0x01834c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 4) + 0x10))
              (param_1 + 0x10,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    return;
  default:
    return;
  }
}

