// FUN_00f734d4 @ 00f734d4 size=160 calls_out=3 calls_in=0
// strings: internal error: entered unreachable code: unexpected stage

void FUN_00f734d4(int *param_1,int param_2,undefined4 param_3)

{
  undefined8 uVar1;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 local_40 [8];
  
  if (*(int *)(param_2 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("internal error: entered unreachable code: unexpected stage",0x75,&DAT_01d2e13c);
  }
  uVar1 = FUN_019ec558(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
  (**(code **)(*(int *)(param_2 + 0x1c) + 0xc))(&local_58,*(undefined4 *)(param_2 + 0x18),param_3);
  FUN_019ec558((int)uVar1,(int)((ulonglong)uVar1 >> 0x20));
  if (local_58 != 8) {
    local_40[0] = 2;
    FUN_00f31938(param_2,local_40);
  }
  *param_1 = local_58;
  param_1[1] = iStack_54;
  param_1[2] = iStack_50;
  param_1[3] = iStack_4c;
  param_1[4] = iStack_48;
  param_1[5] = iStack_44;
  return;
}

