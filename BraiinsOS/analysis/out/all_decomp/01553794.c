// FUN_01553794 @ 01553794 size=384 calls_out=6 calls_in=0
// strings: 

void FUN_01553794(int *param_1,undefined1 *param_2,int *param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 uStack_19;
  
  uVar2 = *(uint *)(param_2 + 0x20);
  if (0x20 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar2,0x20,&DAT_018a7f24);
  }
  FUN_00605548(&local_38,*(undefined1 *)(*param_1 + 0x10),0,param_2,uVar2);
  if (local_38 == 0xc) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&uStack_19,&DAT_018a8014,&DAT_018a7f44);
  }
  local_24 = local_2c;
  local_28 = local_30;
  if (param_4 != 4) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb7204(4,param_4,&DAT_018a7f54);
  }
  iVar3 = *param_3;
  piVar1 = (int *)thunk_FUN_016d4a50(0x14);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x14);
  }
  piVar1[2] = local_28;
  piVar1[3] = local_24;
  piVar1[4] = iVar3;
  *piVar1 = local_38;
  piVar1[1] = local_34;
  *param_2 = 0;
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

