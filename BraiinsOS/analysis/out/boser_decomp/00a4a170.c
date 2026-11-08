// FUN_00a4a170 @ 00a4a170 size=224 calls_out=2 calls_in=1
// strings: Red LED | Green LEDdevmem

void FUN_00a4a170(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  FUN_00adab5c(&local_3c,"Red LED",7);
  iVar6 = iStack_28;
  iVar5 = iStack_2c;
  iVar4 = local_30;
  iVar3 = iStack_34;
  iVar2 = iStack_38;
  iVar1 = local_3c;
  if (local_3c == -0x80000000) {
    param_1[1] = iStack_38;
    param_1[2] = iStack_34;
    *param_1 = -0x80000000;
  }
  else {
    FUN_00adab5c(&local_3c,"Green LEDdevmem",9);
    if (local_3c == -0x80000000) {
      *param_1 = -0x80000000;
      param_1[1] = iStack_38;
      param_1[2] = iStack_34;
      FUN_019bb7e0(iVar1,iVar2);
      FUN_019bb7e0(iVar4,iVar5);
    }
    else {
      param_1[9] = local_30;
      param_1[10] = iStack_2c;
      param_1[0xb] = iStack_28;
      *param_1 = iVar1;
      param_1[1] = iVar2;
      param_1[2] = iVar3;
      param_1[3] = iVar4;
      param_1[4] = iVar5;
      param_1[5] = iVar6;
      param_1[7] = iStack_38;
      param_1[8] = iStack_34;
      param_1[6] = local_3c;
    }
  }
  return;
}

