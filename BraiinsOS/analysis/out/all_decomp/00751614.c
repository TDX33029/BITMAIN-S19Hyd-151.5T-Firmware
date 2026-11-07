// FUN_00751614 @ 00751614 size=392 calls_out=4 calls_in=1
// strings: manual | a Display implementation returned an error unexpectedly | a Display implementation returned an error unexpectedly

void FUN_00751614(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  int *local_38;
  undefined *local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined1 uStack_25;
  
  local_3c = 0;
  local_40 = 1;
  local_44 = 0;
  local_2c = 0;
  local_30 = &DAT_60000020;
  local_34 = &DAT_0185e270;
  local_38 = &local_44;
  iVar3 = FUN_00faace8(&local_38,&DAT_00568078,4);
  iVar2 = local_3c;
  iVar1 = local_40;
  iVar5 = local_44;
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_25,
                 &DAT_0185e288,&DAT_018af130);
  }
  if (local_44 == -0x80000000) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    return;
  }
  piVar4 = (int *)thunk_FUN_016d4a50(0x30);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,0x30);
  }
  *piVar4 = iVar5;
  piVar4[1] = iVar1;
  piVar4[2] = iVar2;
  local_48 = 1;
  local_44 = 0;
  local_2c = 0;
  local_30 = &DAT_60000020;
  local_34 = &DAT_0185e270;
  local_40 = 1;
  local_3c = 0;
  local_38 = &local_44;
  iVar5 = FUN_00faace8(&local_38,"manual",6);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_25,
                 &DAT_0185e288,&DAT_018af130);
  }
  if (local_44 != -0x80000000) {
    piVar4[3] = local_44;
    piVar4[4] = local_40;
    piVar4[5] = local_3c;
    local_48 = 2;
  }
  *param_1 = 4;
  param_1[1] = piVar4;
  param_1[2] = local_48;
  return;
}

