// FUN_00fe1e34 @ 00fe1e34 size=296 calls_out=4 calls_in=0
// strings: Map must not be polled after it returned `Poll::Ready` | internal error: entered unreachable code

void FUN_00fe1e34(int *param_1,int *param_2)

{
  int local_c0;
  int local_bc;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int local_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  
  if (*param_2 == 6 && param_2[1] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("Map must not be polled after it returned `Poll::Ready`",0x36,&DAT_01d2da7c);
  }
  FUN_00eba594(&local_70,param_2);
  if (local_70 != 3 || local_6c != 0) {
    FUN_01bed4e2(&local_c0,&local_70,0x50);
    if (*param_2 == 6 && param_2[1] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2da6c);
    }
    FUN_00f80144(param_2);
    *param_2 = 6;
    param_2[1] = 0;
    if (local_c0 != 3 || local_bc != 0) {
      param_1[2] = local_b8;
      param_1[3] = iStack_b4;
      param_1[4] = iStack_b0;
      param_1[5] = iStack_ac;
      param_1[6] = iStack_a8;
      param_1[7] = local_a4;
      param_1[8] = iStack_a0;
      param_1[9] = iStack_9c;
      param_1[10] = iStack_98;
      param_1[0xb] = iStack_94;
      param_1[0xc] = local_90;
      param_1[0xd] = iStack_8c;
      param_1[0xe] = iStack_88;
      param_1[0xf] = iStack_84;
      param_1[0x10] = iStack_80;
      param_1[0x11] = iStack_7c;
      param_1[0x12] = local_78;
      *param_1 = local_c0;
      param_1[1] = local_bc;
      param_1[0x13] = local_74;
      return;
    }
  }
  *param_1 = 3;
  param_1[1] = 0;
  return;
}

