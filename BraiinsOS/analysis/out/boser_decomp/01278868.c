// FUN_01278868 @ 01278868 size=248 calls_out=3 calls_in=2
// strings: 

void FUN_01278868(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int extraout_r3;
  uint uStack_2c;
  int *piStack_28;
  int local_24;
  undefined4 local_20;
  int *local_1c;
  int local_18;
  int local_14;
  
  FUN_01278730(&local_20);
  if ((char)local_20 == '\x01') {
    piVar1 = local_1c;
LAB_01278894:
    *param_1 = -0x7fffffe9;
    param_1[1] = (int)piVar1;
    return;
  }
  if (local_20._1_1_ == '\0') {
    *param_1 = (int)&DAT_80000016;
    return;
  }
  iVar2 = *param_2;
  *(undefined4 *)(iVar2 + 8) = 0;
  *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
  FUN_01968828(&uStack_2c,iVar2 + 0xc);
  piVar1 = piStack_28;
  if (uStack_2c == 2) goto LAB_01278894;
  if ((uStack_2c & 1) == 0) {
    local_20 = -0x7ffffff3;
    local_1c = piStack_28;
    local_18 = local_24;
    local_14 = extraout_r3;
    if (local_24 != 4) goto LAB_01278954;
    local_14 = *param_3;
    iVar2 = local_14;
    if (*piStack_28 != local_14) goto LAB_01278954;
  }
  else if ((local_24 != 4) || (iVar2 = *piStack_28, *piStack_28 != *param_3)) {
    FUN_0127f57c(&local_20);
    piVar1 = local_1c;
    if (local_20 == -0x7fffffeb) goto LAB_01278894;
    goto LAB_01278954;
  }
  local_14 = iVar2;
  local_20 = -0x7fffffeb;
  local_1c = piStack_28;
  local_18 = local_24;
LAB_01278954:
  *param_1 = local_20;
  param_1[1] = (int)local_1c;
  param_1[2] = local_18;
  param_1[3] = local_14;
  return;
}

