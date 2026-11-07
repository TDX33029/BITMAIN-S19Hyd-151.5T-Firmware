// FUN_01093a0c @ 01093a0c size=144 calls_out=3 calls_in=3
// strings: 

void FUN_01093a0c(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  uint local_30;
  uint uStack_2c;
  int local_28;
  
  FUN_015f3b0c(&local_30,1);
  uVar1 = uStack_2c + (0xfffeae7f < local_30);
  if ((int)((uStack_2c ^ uVar1) & ~uStack_2c) < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
  }
  FUN_016dd1aa(param_1 + 6,param_2,0x4c);
  param_1[4] = param_3;
  param_1[5] = param_4;
  *param_1 = local_30 + 0x15180;
  param_1[1] = uVar1;
  param_1[2] = local_28;
  return;
}

