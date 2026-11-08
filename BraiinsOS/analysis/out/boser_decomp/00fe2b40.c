// FUN_00fe2b40 @ 00fe2b40 size=260 calls_out=3 calls_in=0
// strings: Map must not be polled after it returned `Poll::Ready`

void FUN_00fe2b40(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int local_c8;
  int local_c4;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int local_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  
  iVar1 = *param_2;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("Map must not be polled after it returned `Poll::Ready`",0x36,&DAT_01d2da7c);
  }
  iVar2 = param_2[1];
  (**(code **)(iVar2 + 0xc))(&local_78,iVar1);
  if (local_78 != 3 || local_74 != 0) {
    FUN_01bed4e2(&local_c8,&local_78,0x50);
    FUN_01139b38(iVar1,iVar2);
    *param_2 = 0;
    if (local_c8 != 3 || local_c4 != 0) {
      param_1[2] = local_c0;
      param_1[3] = iStack_bc;
      param_1[4] = iStack_b8;
      param_1[5] = iStack_b4;
      param_1[6] = iStack_b0;
      param_1[7] = local_ac;
      param_1[8] = iStack_a8;
      param_1[9] = iStack_a4;
      param_1[10] = iStack_a0;
      param_1[0xb] = iStack_9c;
      param_1[0xc] = local_98;
      param_1[0xd] = iStack_94;
      param_1[0xe] = iStack_90;
      param_1[0xf] = iStack_8c;
      param_1[0x10] = iStack_88;
      param_1[0x11] = iStack_84;
      param_1[0x12] = local_80;
      *param_1 = local_c8;
      param_1[1] = local_c4;
      param_1[0x13] = local_7c;
      return;
    }
  }
  *param_1 = 3;
  param_1[1] = 0;
  return;
}

