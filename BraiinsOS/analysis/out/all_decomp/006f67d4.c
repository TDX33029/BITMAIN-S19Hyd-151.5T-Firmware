// FUN_006f67d4 @ 006f67d4 size=268 calls_out=4 calls_in=1
// strings: 

void FUN_006f67d4(undefined4 *param_1,uint *param_2)

{
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined1 *puStack_e8;
  undefined1 auStack_e4 [92];
  undefined1 auStack_88 [8];
  int local_80;
  
  if ((*param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00409033,0x36,&DAT_018a5c6c);
  }
  FUN_00716040(auStack_88,param_2 + 2);
  if (local_80 == 0x3b9aca01) {
    param_1[2] = 0x3b9aca01;
    return;
  }
  FUN_016dd1aa(&local_f0,auStack_88,0x68);
  if ((*param_2 & 1) != 0) {
    *param_2 = 1;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a5c5c);
  }
  FUN_0071ba7c(param_2 + 2);
  *param_2 = 1;
  param_2[1] = 0;
  if (puStack_e8 == &DAT_3b9aca00) {
    param_1[2] = &DAT_3b9aca00;
    param_1[3] = 0x80000002;
    param_1[4] = local_f0;
    return;
  }
  *param_1 = local_f0;
  param_1[1] = uStack_ec;
  param_1[2] = puStack_e8;
  FUN_016dd1aa(param_1 + 3,auStack_e4,0x5c);
  return;
}

