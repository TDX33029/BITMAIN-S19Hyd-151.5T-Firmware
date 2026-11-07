// FUN_008f89e4 @ 008f89e4 size=188 calls_out=1 calls_in=1
// strings: 

void FUN_008f89e4(int *param_1,undefined4 *param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  puVar2 = (uint *)*param_2;
  if (puVar2 == (uint *)param_2[1]) {
    *param_1 = 2;
    param_1[1] = 2;
    return;
  }
  *param_2 = puVar2 + 4;
  uVar4 = 0x15;
  iVar3 = param_2[2] + 1;
  param_2[2] = iVar3;
  if ((int)*puVar2 < 0) {
    uVar4 = *puVar2 ^ 0x80000000;
  }
  iVar1 = 0;
  if ((uVar4 != 0x10) && (uVar4 != 0x12)) {
    if (uVar4 == 0x11) {
      puVar2 = (uint *)puVar2[1];
    }
    FUN_008f84c0(&local_48,puVar2);
    if (local_48 != 2) {
      *param_1 = local_48;
      param_1[1] = iStack_44;
      param_1[2] = iStack_40;
      param_1[3] = iStack_3c;
      param_1[4] = iStack_38;
      param_1[5] = iStack_34;
      param_1[6] = local_30;
      param_1[7] = iStack_2c;
      param_1[8] = iStack_28;
      param_1[9] = iStack_24;
      param_1[10] = iStack_20;
      param_1[0xb] = iStack_1c;
      return;
    }
    iVar1 = iStack_44;
    iVar3 = iStack_40;
  }
  param_1[1] = iVar1;
  param_1[2] = iVar3;
  *param_1 = 2;
  return;
}

