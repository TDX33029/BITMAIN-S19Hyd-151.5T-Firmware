// FUN_019dd164 @ 019dd164 size=164 calls_out=5 calls_in=2
// strings: inner has gone away

void FUN_019dd164(int *param_1)

{
  int local_38;
  uint local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  if (*param_1 == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("inner has gone away",0x13,&DAT_01d28e44);
  }
  FUN_019ea8f8(&local_38,param_1);
  if ((local_38 != 0) || ((local_34 & 1) == 0)) {
    if (local_38 != 0) {
      FUN_0069d8a4(local_34,local_30);
    }
    local_2c = *param_1;
    *param_1 = 2;
    if (local_2c == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d28e54);
    }
    local_28 = param_1[1];
    iStack_24 = param_1[2];
    iStack_20 = param_1[3];
    iStack_1c = param_1[4];
    iStack_18 = param_1[5];
    iStack_14 = param_1[6];
    FUN_019e8f10();
  }
  return;
}

