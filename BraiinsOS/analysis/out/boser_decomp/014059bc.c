// FUN_014059bc @ 014059bc size=144 calls_out=3 calls_in=7
// strings: overflow when adding duration to instant

void FUN_014059bc(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  uint local_30;
  uint uStack_2c;
  int local_28;
  
  FUN_019ac130(&local_30,1);
  uVar1 = uStack_2c + (0xfffeae7f < local_30);
  if ((int)((uStack_2c ^ uVar1) & ~uStack_2c) < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("overflow when adding duration to instant",0x28,&DAT_01d281d4);
  }
  FUN_01bed4e2(param_1 + 6,param_2,0x4c);
  param_1[4] = param_3;
  param_1[5] = param_4;
  *param_1 = local_30 + 0x15180;
  param_1[1] = uVar1;
  param_1[2] = local_28;
  return;
}

