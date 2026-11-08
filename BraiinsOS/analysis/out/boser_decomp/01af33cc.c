// FUN_01af33cc @ 01af33cc size=176 calls_out=2 calls_in=2
// strings: 

void FUN_01af33cc(int *param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  int local_40;
  char *pcStack_3c;
  int iStack_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  FUN_01af347c(&local_40,param_2,2);
  if (local_40 != -0x7fffffd3) {
    param_1[3] = local_34;
    param_1[4] = iStack_30;
    param_1[5] = iStack_2c;
    param_1[6] = iStack_28;
    param_1[7] = iStack_24;
    *param_1 = local_40;
    param_1[1] = (int)pcStack_3c;
    param_1[2] = iStack_38;
    return;
  }
  if (iStack_38 == 0) {
    *param_1 = -0x80000000;
    return;
  }
  iVar1 = -0x80000000;
  local_40 = -0x80000000;
  FUN_01aeb5f4(&local_40);
  pcVar2 = pcStack_3c;
  if ((int)*pcStack_3c == 0) {
    if ((iStack_38 + -1 != 0) &&
       (pcVar2 = pcStack_3c + 1, iStack_38 = iStack_38 + -1, (uint)(int)pcStack_3c[1] < 0x80000000))
    goto LAB_01af3470;
  }
  else if (0x7fffffff < (uint)(int)*pcStack_3c) goto LAB_01af3470;
  iVar1 = -0x7fffffd3;
  param_1[1] = (int)pcVar2;
  param_1[2] = iStack_38;
LAB_01af3470:
  *param_1 = iVar1;
  return;
}

