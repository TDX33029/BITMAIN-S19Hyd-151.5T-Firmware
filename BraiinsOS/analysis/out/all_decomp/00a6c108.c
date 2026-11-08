// FUN_00a6c108 @ 00a6c108 size=220 calls_out=5 calls_in=2
// strings: inner has gone away

void FUN_00a6c108(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint local_48;
  uint uStack_44;
  undefined4 *local_40;
  int local_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  if (*param_1 == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("inner has gone away",0x13,&DAT_018aca20);
  }
  FUN_016525a4(&local_48,param_1);
  if ((local_48 != 0) && ((uStack_44 & 0xff) == 3)) {
    uVar2 = *local_40;
    puVar3 = (undefined4 *)local_40[1];
    pcVar1 = (code *)*puVar3;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(uVar2);
    }
    if (puVar3[1] != 0) {
      thunk_FUN_016d3fb4(uVar2);
    }
    thunk_FUN_016d3fb4(local_40);
  }
  if (((local_48 ^ 1) & uStack_44) == 0) {
    local_3c = *param_1;
    *param_1 = 2;
    if (local_3c == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_0187b31c);
    }
    local_38 = param_1[1];
    iStack_34 = param_1[2];
    iStack_30 = param_1[3];
    iStack_2c = param_1[4];
    iStack_28 = param_1[5];
    iStack_24 = param_1[6];
    FUN_01644520();
  }
  return;
}

