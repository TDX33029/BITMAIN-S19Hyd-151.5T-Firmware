// FUN_000246cc @ 000246cc  size=260
// callers: [FUN_00055518, FUN_0003da58, FUN_000247d8, FUN_00057a28, FUN_0003ffbc, FUN_000541d0, FUN_000531d0, FUN_0003fcec, FUN_000261a8, FUN_00027460, FUN_000534b8]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000246cc(int param_1,uint param_2)

{
  int iVar1;
  uint in_fpscr;
  double dVar2;
  char local_2010 [4];
  char acStack_200c [4];
  char acStack_2008 [4];
  char acStack_2004 [4];
  char local_2000 [4];
  char acStack_1ffc [4];
  undefined2 uStack_1ff8;
  undefined1 local_1ff6;
  
  if (param_2 < DAT_000be63c) {
    snprintf(local_2010,0x2000,"%s to %d.\n","set_voltage_by_steps",param_1);
    FUN_0004948c(param_2,local_2010,0);
  }
  dVar2 = (double)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
  iVar1 = FUN_00075bb0(SUB84(dVar2 / DAT_000247d0,0));
  if (-1 < iVar1) {
    usleep(500000);
    DAT_000c0420 = param_1;
    DAT_000c0424 = param_1;
    return 0;
  }
  if (DAT_000be63c < 4) {
    return 0xffffffff;
  }
  local_2010[0] = s_bitmain_set_voltage_failed_0009b360[0];
  local_2010[1] = s_bitmain_set_voltage_failed_0009b360[1];
  local_2010[2] = s_bitmain_set_voltage_failed_0009b360[2];
  local_2010[3] = s_bitmain_set_voltage_failed_0009b360[3];
  acStack_200c[0] = s_bitmain_set_voltage_failed_0009b360[4];
  acStack_200c[1] = s_bitmain_set_voltage_failed_0009b360[5];
  acStack_200c[2] = s_bitmain_set_voltage_failed_0009b360[6];
  acStack_200c[3] = s_bitmain_set_voltage_failed_0009b360[7];
  acStack_2008[0] = s_bitmain_set_voltage_failed_0009b360[8];
  acStack_2008[1] = s_bitmain_set_voltage_failed_0009b360[9];
  acStack_2008[2] = s_bitmain_set_voltage_failed_0009b360[10];
  acStack_2008[3] = s_bitmain_set_voltage_failed_0009b360[0xb];
  acStack_2004[0] = s_bitmain_set_voltage_failed_0009b360[0xc];
  acStack_2004[1] = s_bitmain_set_voltage_failed_0009b360[0xd];
  acStack_2004[2] = s_bitmain_set_voltage_failed_0009b360[0xe];
  acStack_2004[3] = s_bitmain_set_voltage_failed_0009b360[0xf];
  local_2000[0] = s_bitmain_set_voltage_failed_0009b360[0x10];
  local_2000[1] = s_bitmain_set_voltage_failed_0009b360[0x11];
  local_2000[2] = s_bitmain_set_voltage_failed_0009b360[0x12];
  local_2000[3] = s_bitmain_set_voltage_failed_0009b360[0x13];
  acStack_1ffc[0] = s_bitmain_set_voltage_failed_0009b360[0x14];
  acStack_1ffc[1] = s_bitmain_set_voltage_failed_0009b360[0x15];
  acStack_1ffc[2] = s_bitmain_set_voltage_failed_0009b360[0x16];
  acStack_1ffc[3] = s_bitmain_set_voltage_failed_0009b360[0x17];
  uStack_1ff8 = (undefined2)ram0x0009b378;
  local_1ff6 = (undefined1)((uint)ram0x0009b378 >> 0x10);
  FUN_0004948c(3,local_2010,0);
  return 0xffffffff;
}


