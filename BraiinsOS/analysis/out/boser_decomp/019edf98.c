// FUN_019edf98 @ 019edf98 size=224 calls_out=4 calls_in=3
// strings: 

void FUN_019edf98(int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  local_40 = 5;
  uVar1 = FUN_019ec670(param_3);
  uVar2 = 0;
  if ((uVar1 & 0xff) != 2) {
    uVar2 = uVar1;
  }
  if ((uVar2 & 1) == 0) {
    uVar2 = uVar2 & 0xffffff;
    (**(code **)(*(int *)(param_2 + 8) + 0xc))(param_2,&local_40,param_3);
    *param_1 = local_40;
    param_1[1] = iStack_3c;
    param_1[2] = iStack_38;
    param_1[3] = iStack_34;
    param_1[4] = local_30;
    param_1[5] = iStack_2c;
    param_1[6] = iStack_28;
    param_1[7] = iStack_24;
    if ((local_40 == 5) && ((uVar2 >> 8 & 1) != 0)) {
      uVar4 = thunk_FUN_01bee35a(5,0x20);
      iVar3 = (int)uVar4 + (int)((ulonglong)uVar4 >> 0x20);
      if (*(char *)(iVar3 + 0x38) != '\x01') {
        if (*(char *)(iVar3 + 0x38) == '\x02') {
          return;
        }
        FUN_019a2bcc(iVar3,&LAB_019efb68);
        *(undefined1 *)(iVar3 + 0x38) = 1;
      }
      *(char *)(iVar3 + 0x31) = (char)(uVar2 >> 0x10);
      *(char *)(iVar3 + 0x30) = (char)(uVar2 >> 8);
    }
  }
  else {
    *param_1 = 5;
    FUN_019ee0b4(&local_40);
  }
  return;
}

