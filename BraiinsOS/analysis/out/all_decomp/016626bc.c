// FUN_016626bc @ 016626bc size=308 calls_out=3 calls_in=3
// strings: 

void FUN_016626bc(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *extraout_r2;
  int extraout_r3;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  uVar5 = thunk_FUN_016de0ee();
  iVar2 = (int)((ulonglong)uVar5 >> 0x20);
  iVar3 = (int)uVar5 + extraout_r3;
  local_40 = 5;
  if (*(char *)(iVar3 + 0x38) != '\x01') {
    uVar1 = 0;
    if (*(char *)(iVar3 + 0x38) == '\x02') goto LAB_0166274c;
    FUN_015e8e6c(iVar3,FUN_01655ec4);
    *(undefined1 *)(iVar3 + 0x38) = 1;
  }
  cVar4 = *(char *)(iVar3 + 0x31);
  if (*(char *)(iVar3 + 0x30) == '\x01') {
    if (cVar4 == '\0') {
      FUN_016455a4(*extraout_r2,extraout_r2[1]);
      *param_1 = 5;
      return;
    }
    cVar4 = cVar4 + -1;
  }
  *(char *)(iVar3 + 0x31) = cVar4;
  uVar1 = (uint)*(ushort *)(iVar3 + 0x30) << 8;
LAB_0166274c:
  (**(code **)(*(int *)(iVar2 + 8) + 0xc))(iVar2,&local_40);
  *param_1 = local_40;
  param_1[1] = iStack_3c;
  param_1[2] = iStack_38;
  param_1[3] = iStack_34;
  param_1[4] = local_30;
  param_1[5] = iStack_2c;
  param_1[6] = iStack_28;
  param_1[7] = iStack_24;
  if ((local_40 != 5) || ((uVar1 >> 8 & 1) == 0)) {
    return;
  }
  if (*(char *)(iVar3 + 0x38) != '\x01') {
    if (*(char *)(iVar3 + 0x38) == '\x02') {
      return;
    }
    FUN_015e8e6c(iVar3,FUN_01655ec4);
    *(undefined1 *)(iVar3 + 0x38) = 1;
  }
  *(char *)(iVar3 + 0x31) = (char)(uVar1 >> 0x10);
  *(undefined1 *)(iVar3 + 0x30) = 1;
  return;
}

