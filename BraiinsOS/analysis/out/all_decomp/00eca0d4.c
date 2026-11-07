// FUN_00eca0d4 @ 00eca0d4 size=308 calls_out=3 calls_in=1
// strings: 

void FUN_00eca0d4(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *extraout_r2;
  int extraout_r3;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int local_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  uVar6 = thunk_FUN_016de0ee();
  iVar2 = (int)((ulonglong)uVar6 >> 0x20);
  iVar5 = (int)uVar6 + extraout_r3;
  cVar3 = '\0';
  local_34 = 0;
  local_38 = 1;
  if (*(char *)(iVar5 + 0x38) != '\x01') {
    cVar4 = '\0';
    if (*(char *)(iVar5 + 0x38) == '\x02') goto LAB_00eca160;
    FUN_015e8e6c(iVar5,FUN_005bc49c);
    *(undefined1 *)(iVar5 + 0x38) = 1;
  }
  cVar4 = *(char *)(iVar5 + 0x31);
  cVar3 = *(char *)(iVar5 + 0x30);
  cVar1 = cVar4;
  if (cVar3 == '\x01') {
    if (cVar4 == '\0') {
      FUN_016455a4(*extraout_r2,extraout_r2[1]);
      *param_1 = 1;
      param_1[1] = 0;
      return;
    }
    cVar1 = cVar4 + -1;
  }
  *(char *)(iVar5 + 0x31) = cVar1;
LAB_00eca160:
  (**(code **)(*(int *)(iVar2 + 8) + 0xc))(iVar2,&local_38);
  if (local_38 == 0 && local_34 == 0) {
    *param_1 = local_38;
    param_1[1] = local_34;
    param_1[2] = iStack_30;
    param_1[3] = iStack_2c;
    param_1[4] = iStack_28;
    param_1[5] = iStack_24;
    return;
  }
  *param_1 = local_38;
  param_1[1] = local_34;
  param_1[2] = iStack_30;
  param_1[3] = iStack_2c;
  param_1[4] = iStack_28;
  param_1[5] = iStack_24;
  if (cVar3 == '\0') {
    return;
  }
  if (*(char *)(iVar5 + 0x38) != '\x01') {
    if (*(char *)(iVar5 + 0x38) == '\x02') {
      return;
    }
    FUN_015e8e6c(iVar5,FUN_01655ec4);
    *(undefined1 *)(iVar5 + 0x38) = 1;
  }
  *(char *)(iVar5 + 0x31) = cVar4;
  *(undefined1 *)(iVar5 + 0x30) = 1;
  return;
}

