// FUN_00a625d4 @ 00a625d4 size=284 calls_out=9 calls_in=2
// strings: 

void FUN_00a625d4(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  if (*param_1 == 0) {
    if (param_1[2] == 2) {
      return;
    }
    FUN_00b76614(param_1 + 2);
    FUN_014a887c(param_1 + 0xf);
    FUN_00929728(param_1[0x40]);
    FUN_009297a0(param_1[0x41]);
    FUN_00929818(param_1 + 0x3a);
    FUN_0132b958(param_1[0x29],param_1[0x2a],8,0x28,unaff_r4,unaff_r5,unaff_r11,unaff_lr);
    iVar1 = param_1[0x21];
    if ((iVar1 != 0) && (iVar2 = iVar1 * 8 + 8, iVar1 + iVar2 != -5)) {
      thunk_FUN_01be4678(param_1[0x20] - iVar2);
    }
    if (param_1[0x31] != 0) {
      thunk_FUN_01be4678(param_1[0x30]);
    }
    if (param_1[0x38] != 0) {
      FUN_00668c84();
    }
    if (param_1[0x36] == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00a625a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[0x36] + 0xc))(param_1[0x37]);
    return;
  }
  if (*param_1 != 1) {
    return;
  }
  if (param_1[2] == 0 && param_1[3] == 0) {
    return;
  }
  FUN_00b91e68(param_1[4],param_1[5]);
  return;
}

