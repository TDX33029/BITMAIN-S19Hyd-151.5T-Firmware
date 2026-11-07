// FUN_019f6018 @ 019f6018 size=140 calls_out=3 calls_in=2
// strings: 

void FUN_019f6018(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int local_28;
  int iStack_24;
  int iStack_20;
  
  uVar2 = thunk_FUN_01bee35a(param_1,0x20);
  iVar1 = (int)uVar2 + (int)((ulonglong)uVar2 >> 0x20);
  if (*(char *)(iVar1 + 0x38) != '\x01') {
    if (*(char *)(iVar1 + 0x38) == '\x02') goto LAB_019f6088;
    FUN_019a2bcc(iVar1,&LAB_019efb68);
    *(undefined1 *)(iVar1 + 0x38) = 1;
  }
  FUN_019ec774(&local_28,iVar1,param_2,param_3);
  if (local_28 != 3) {
    *param_1 = local_28;
    param_1[1] = iStack_24;
    param_1[2] = iStack_20;
    return;
  }
LAB_019f6088:
  *param_1 = 3;
  return;
}

