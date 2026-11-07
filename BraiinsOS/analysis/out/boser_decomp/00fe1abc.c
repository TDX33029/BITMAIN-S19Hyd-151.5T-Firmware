// FUN_00fe1abc @ 00fe1abc size=272 calls_out=3 calls_in=0
// strings: Map must not be polled after it returned `Poll::Ready`

void FUN_00fe1abc(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int local_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int local_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int local_c8;
  int local_c4;
  undefined1 auStack_c0 [72];
  int local_78;
  int local_74;
  undefined1 auStack_70 [76];
  
  iVar1 = *param_2;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("Map must not be polled after it returned `Poll::Ready`",0x36,&DAT_01d2da7c);
  }
  iVar2 = param_2[1];
  (**(code **)(iVar2 + 0xc))(&local_78,iVar1);
  if (local_78 == 3 && local_74 == 0) {
    *param_1 = 3;
    param_1[1] = 0;
  }
  else {
    FUN_01bed4e2(auStack_c0,auStack_70,0x48);
    FUN_01bed4e2(&local_108,auStack_c0,0x48);
    FUN_017ce5f0(iVar1,iVar2);
    *param_2 = 0;
    param_1[2] = local_108;
    param_1[3] = iStack_104;
    param_1[4] = iStack_100;
    param_1[5] = iStack_fc;
    param_1[6] = iStack_f8;
    param_1[7] = local_f4;
    param_1[8] = iStack_f0;
    param_1[9] = iStack_ec;
    param_1[10] = iStack_e8;
    param_1[0xb] = iStack_e4;
    param_1[0xc] = local_e0;
    param_1[0xd] = iStack_dc;
    param_1[0xe] = iStack_d8;
    param_1[0xf] = iStack_d4;
    param_1[0x10] = iStack_d0;
    param_1[0x11] = iStack_cc;
    param_1[0x12] = local_c8;
    *param_1 = local_78;
    param_1[1] = local_74;
    param_1[0x13] = local_c4;
  }
  return;
}

