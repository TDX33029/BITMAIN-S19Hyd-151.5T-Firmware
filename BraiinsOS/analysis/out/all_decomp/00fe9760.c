// FUN_00fe9760 @ 00fe9760 size=232 calls_out=5 calls_in=2
// strings: 

void FUN_00fe9760(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int local_30;
  uint uStack_2c;
  int local_28;
  int iStack_24;
  int iStack_20;
  
  FUN_00fe7e50(&local_30);
  if (local_30 != 0x12) {
    *param_1 = local_30;
    param_1[1] = uStack_2c;
    param_1[2] = local_28;
    param_1[3] = iStack_24;
    param_1[4] = iStack_20;
    return;
  }
  uVar2 = *(uint *)(param_2 + 0x14);
  if (uStack_2c == uVar2) {
    param_1[4] = uStack_2c;
    *param_1 = 1;
    return;
  }
  if (uVar2 <= uStack_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uStack_2c,uVar2,&DAT_018819a8);
  }
  if (*(char *)(*(int *)(param_2 + 0x10) + uStack_2c) == ')') {
    *param_1 = 0x12;
    param_1[1] = uStack_2c + 1;
    return;
  }
  iVar1 = thunk_FUN_016d4a50(0x14);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x14);
  }
  FUN_016dd1aa(iVar1,&DAT_00377a40,0x14);
  param_1[2] = iVar1;
  *param_1 = 0;
  param_1[1] = 0x14;
  param_1[3] = 0x14;
  param_1[4] = uStack_2c;
  return;
}

