// FUN_00ecb6a8 @ 00ecb6a8 size=476 calls_out=8 calls_in=1
// strings: 

void FUN_00ecb6a8(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5
                 )

{
  int iVar1;
  int iVar2;
  double in_d0;
  undefined4 local_230 [3];
  undefined4 local_224;
  double local_218;
  undefined4 local_210;
  undefined4 local_1dc;
  int local_1c8;
  undefined1 auStack_1c4 [68];
  undefined4 local_180 [2];
  undefined1 auStack_178 [104];
  int local_110 [28];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [112];
  
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
  if (*(int *)(param_2 + 0x30) == -0x80000000) {
    *(undefined4 *)(param_2 + 0x30) = param_4;
    *(undefined4 *)(param_2 + 0x6c) = 0x80000003;
    *(undefined4 *)(param_2 + 0x60) = 0x80000003;
    *(undefined4 *)(param_2 + 0x54) = 0x80000003;
    *(undefined4 *)(param_2 + 0x48) = 0x80000003;
    *(undefined4 *)(param_2 + 0x3c) = 0x80000003;
    *(int *)(param_2 + 0x34) = iVar1;
    *(undefined4 *)(param_2 + 0x38) = param_4;
    *param_1 = 0x80000005;
  }
  else {
    FUN_00f174cc();
    iVar2 = *(int *)(param_2 + 0x10);
    *(undefined4 *)(param_2 + 0x6c) = 0x80000003;
    *(undefined4 *)(param_2 + 0x60) = 0x80000003;
    *(undefined4 *)(param_2 + 0x54) = 0x80000003;
    *(undefined4 *)(param_2 + 0x48) = 0x80000003;
    *(undefined4 *)(param_2 + 0x3c) = 0x80000003;
    *(undefined4 *)(param_2 + 0x30) = param_4;
    *(int *)(param_2 + 0x34) = iVar1;
    *(undefined4 *)(param_2 + 0x38) = param_4;
    *param_1 = 0x80000005;
    if (iVar2 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00414516,0xc5,&DAT_0187e4e0);
    }
  }
  if ((param_5 & 1) != 0) {
    local_1c8 = *(int *)(param_2 + 0x30);
    *(undefined4 *)(param_2 + 0x30) = 0x80000000;
    local_1dc = 4;
    local_210 = 0x80000003;
    local_224 = 0x80000003;
    local_230[0] = 0x80000003;
    local_218 = in_d0;
    if (NAN(in_d0)) {
      local_218 = ABS(in_d0);
    }
    if (local_1c8 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_0187e500);
    }
    FUN_016dd1aa(auStack_1c4,param_2 + 0x34,0x44);
    FUN_016dd1aa(auStack_178,local_230,0x68);
    local_180[0] = 1;
    FUN_00ea0d40(auStack_a0,param_2,&local_1c8,local_180);
    FUN_016dd1aa(local_110,auStack_98,0x70);
    if (local_110[0] != 4) {
      FUN_00f17590(local_110);
    }
  }
  *param_1 = 0x80000005;
  return;
}

