// FUN_015346c0 @ 015346c0 size=344 calls_out=5 calls_in=0
// strings: 

void FUN_015346c0(int param_1,undefined1 *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined1 uStack_21;
  
  if (0x20 < *(uint *)(param_2 + 0x20)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,*(uint *)(param_2 + 0x20),0x20,&DAT_018a7f24);
  }
  FUN_006057a8(&local_34,*(undefined1 *)(param_1 + 0x10),param_2);
  if (local_34 == 0xc) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&uStack_21,&DAT_018a7c24,&DAT_018a7c64);
  }
  piVar1 = (int *)thunk_FUN_016d4a50(0x1c);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x1c);
  }
  iVar2 = *param_3;
  iVar4 = param_3[1];
  iVar3 = param_3[2];
  *param_2 = 0;
  *piVar1 = local_34;
  piVar1[1] = local_30;
  piVar1[2] = local_2c;
  piVar1[3] = local_28;
  piVar1[4] = iVar2;
  piVar1[5] = iVar4;
  piVar1[6] = iVar3;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  return;
}

