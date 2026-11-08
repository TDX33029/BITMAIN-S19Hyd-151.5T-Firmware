// FUN_019f5fcc @ 019f5fcc size=76 calls_out=2 calls_in=6
// strings: 

void FUN_019f5fcc(int *param_1)

{
  int *piVar1;
  undefined4 extraout_r2;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int *piStack_38;
  undefined1 *puStack_34;
  int local_20;
  int iStack_1c;
  int iStack_18;
  
  FUN_019f6018(&local_20);
  if (local_20 != 3) {
    *param_1 = local_20;
    param_1[1] = iStack_1c;
    param_1[2] = iStack_18;
    return;
  }
  uVar3 = FUN_019f5958(&DAT_01d29928,&DAT_01d29930);
  piVar1 = (int *)uVar3;
  piStack_38 = param_1;
  puStack_34 = (undefined1 *)&local_20;
  uVar4 = thunk_FUN_01bee35a(piVar1,0x20);
  iVar2 = (int)uVar4 + (int)((ulonglong)uVar4 >> 0x20);
  if (*(char *)(iVar2 + 0x38) != '\x01') {
    if (*(char *)(iVar2 + 0x38) == '\x02') goto LAB_019f6088;
    FUN_019a2bcc(iVar2,&LAB_019efb68);
    *(undefined1 *)(iVar2 + 0x38) = 1;
  }
  FUN_019ec774(&iStack_48,iVar2,(int)((ulonglong)uVar3 >> 0x20),extraout_r2);
  if (iStack_48 != 3) {
    *piVar1 = iStack_48;
    piVar1[1] = iStack_44;
    piVar1[2] = iStack_40;
    return;
  }
LAB_019f6088:
  *piVar1 = 3;
  return;
}

