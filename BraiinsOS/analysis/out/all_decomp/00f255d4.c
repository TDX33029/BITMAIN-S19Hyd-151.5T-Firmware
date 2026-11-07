// FUN_00f255d4 @ 00f255d4 size=164 calls_out=5 calls_in=1
// strings: 

void FUN_00f255d4(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*(int *)(param_2 + 0x10) == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00414516,0xc5,&DAT_0187e4d0);
  }
  iVar1 = thunk_FUN_016d4a50(param_4);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,param_4);
  }
  FUN_016dd1aa(iVar1,param_3,param_4);
  if (*(int *)(param_2 + 0x30) != -0x80000000) {
    FUN_00f174cc();
  }
  *(undefined4 *)(param_2 + 0x30) = param_4;
  *(undefined4 *)(param_2 + 0x6c) = 0x80000003;
  *(undefined4 *)(param_2 + 0x60) = 0x80000003;
  *(undefined4 *)(param_2 + 0x54) = 0x80000003;
  *(undefined4 *)(param_2 + 0x48) = 0x80000003;
  *(undefined4 *)(param_2 + 0x3c) = 0x80000003;
  *(int *)(param_2 + 0x34) = iVar1;
  *(undefined4 *)(param_2 + 0x38) = param_4;
  *param_1 = 0x80000005;
  return;
}

