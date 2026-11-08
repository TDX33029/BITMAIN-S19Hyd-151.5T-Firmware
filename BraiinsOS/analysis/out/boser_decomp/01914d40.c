// FUN_01914d40 @ 01914d40 size=208 calls_out=3 calls_in=0
// strings: 

void FUN_01914d40(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,short *param_5)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  int *piVar4;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40 [5];
  int local_2c;
  int iStack_28;
  int iStack_24;
  
  if (*param_5 != 4) {
    FUN_0190e07c(param_1);
    return;
  }
  uVar1 = *(undefined2 *)(param_2 + 0xe);
  uVar2 = *(undefined2 *)(param_2 + 0xc);
  FUN_0190e07c(local_40);
  piVar4 = (int *)((uint)local_40 | 4);
  local_60 = *piVar4;
  iStack_5c = piVar4[1];
  iStack_58 = piVar4[2];
  iStack_54 = piVar4[3];
  if (local_40[0] == -0x7fffffd7) {
    local_50 = local_60;
    iStack_4c = iStack_5c;
    iStack_48 = iStack_58;
    iStack_44 = iStack_54;
    uVar3 = FUN_0190abbc(uVar2,uVar1);
    if ((uVar3 & 0xff00) == 0x100) {
      FUN_0190b348(&local_60);
    }
    param_1[1] = local_60;
    param_1[2] = iStack_5c;
    param_1[3] = iStack_58;
    param_1[4] = iStack_54;
    *param_1 = -0x7fffffd7;
  }
  else {
    param_1[5] = local_2c;
    param_1[6] = iStack_28;
    param_1[7] = iStack_24;
    param_1[1] = local_60;
    param_1[2] = iStack_5c;
    param_1[3] = iStack_58;
    param_1[4] = iStack_54;
    *param_1 = local_40[0];
  }
  return;
}

