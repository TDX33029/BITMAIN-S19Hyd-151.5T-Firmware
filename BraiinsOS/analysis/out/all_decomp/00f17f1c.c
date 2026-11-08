// FUN_00f17f1c @ 00f17f1c size=360 calls_out=8 calls_in=1
// strings: 

void FUN_00f17f1c(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,byte param_5
                 )

{
  int iVar1;
  undefined4 local_228 [3];
  undefined4 local_21c;
  undefined4 local_210;
  byte local_204;
  undefined4 local_1d4;
  int local_1c0;
  undefined1 auStack_1bc [68];
  undefined4 local_178 [2];
  undefined1 auStack_170 [104];
  int local_108 [28];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [112];
  
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
  *(undefined4 *)(param_2 + 0x6c) = 0x80000003;
  *(undefined4 *)(param_2 + 0x60) = 0x80000003;
  *(undefined4 *)(param_2 + 0x54) = 0x80000003;
  *(undefined4 *)(param_2 + 0x48) = 0x80000003;
  *(undefined4 *)(param_2 + 0x30) = param_4;
  *(int *)(param_2 + 0x34) = iVar1;
  *(undefined4 *)(param_2 + 0x38) = param_4;
  *(undefined4 *)(param_2 + 0x3c) = 0x80000003;
  *param_1 = 0x80000005;
  if (param_5 != 2) {
    local_1c0 = *(int *)(param_2 + 0x30);
    *(undefined4 *)(param_2 + 0x30) = 0x80000000;
    local_1d4 = 5;
    local_204 = param_5 & 1;
    local_210 = 0x80000003;
    local_21c = 0x80000003;
    local_228[0] = 0x80000003;
    if (local_1c0 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_0187e500);
    }
    FUN_016dd1aa(auStack_1bc,param_2 + 0x34,0x44);
    FUN_016dd1aa(auStack_170,local_228,0x68);
    local_178[0] = 1;
    FUN_00ea0d40(auStack_98,param_2,&local_1c0,local_178);
    FUN_016dd1aa(local_108,auStack_90,0x70);
    if (local_108[0] != 4) {
      FUN_00f17590(local_108);
    }
  }
  *param_1 = 0x80000005;
  return;
}

