// FUN_0104de34 @ 0104de34 size=144 calls_out=3 calls_in=0
// strings: 

void FUN_0104de34(int param_1)

{
  short local_50 [2];
  undefined4 local_4c;
  undefined4 local_c;
  
  FUN_0103a4b0(local_50,&DAT_0056a100,8);
  if (local_50[0] == 2) {
    local_c = local_4c;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_c,&DAT_01883718,&DAT_018836c8);
  }
  FUN_016dd1aa(param_1,local_50,0x44);
  *(undefined1 *)(param_1 + 0x4a) = 1;
  *(undefined4 *)(param_1 + 0x46) = 0x1030303;
  *(undefined2 *)(param_1 + 0x44) = 0x201;
  return;
}

