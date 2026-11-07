// FUN_00f804e8 @ 00f804e8 size=236 calls_out=3 calls_in=2
// strings: a Display implementation returned an error unexpectedly

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00f804e8(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  undefined *local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined1 uStack_21;
  
  iVar3 = *(int *)(param_2 + 0x48);
  iVar2 = *(int *)(param_2 + 0x4c) * 0x134;
  while( true ) {
    if (iVar2 == 0) {
      *param_1 = 0x80000000;
      return;
    }
    if ((*(int *)(iVar3 + 0x118) == param_4) &&
       (iVar1 = thunk_FUN_016dd50a(*(undefined4 *)(iVar3 + 0x114),param_3,param_4), iVar1 == 0))
    break;
    iVar3 = iVar3 + 0x134;
    iVar2 = iVar2 + -0x134;
  }
  local_38 = 0;
  local_30 = &DAT_01880404;
  local_34 = &local_40;
  local_40 = 0;
  local_28 = 0;
  local_3c = 1;
  local_2c = &DAT_60000020;
  iVar2 = FUN_00f9d654(iVar3,&local_34);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_21,
                 &DAT_0188041c);
  }
  *param_1 = local_40;
  param_1[1] = local_3c;
  param_1[2] = local_38;
  return;
}

