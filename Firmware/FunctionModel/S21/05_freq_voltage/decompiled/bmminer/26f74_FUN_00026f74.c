// FUN_00026f74 @ 00026f74  size=220  callers=1
// program: bmminer


void FUN_00026f74(uint param_1,undefined4 param_2,int param_3)

{
  uint in_fpscr;
  undefined4 uVar1;
  undefined1 local_201c [4];
  undefined4 local_2018;
  undefined4 local_2014;
  
  if (3 < DAT_000be63c) {
    snprintf((char *)&local_2018,0x2000,"chain = %d, freq = %d\n",param_1,param_3);
    FUN_0004948c(3,&local_2018,0);
  }
  uVar1 = VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
  local_2018 = 0;
  local_2014 = 0;
  FUN_00081ee8(uVar1,&local_2018,local_201c,0);
  local_2014._0_3_ = CONCAT12(local_201c[0],(undefined2)local_2014);
  FUN_0002d6b0(param_1,1,0,param_2,local_2018,local_2014);
  (&DAT_000c0430)[param_1] = param_3;
  (&DAT_000c044c)[param_1] = param_3;
  usleep(50000);
  FUN_000822e0(param_1 & 0xff,0,param_2);
  return;
}

