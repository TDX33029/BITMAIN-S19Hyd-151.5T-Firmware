// FUN_0001cc60 @ 0001cc60  size=232
// callers: [FUN_0001cd50, FUN_00039f4c, FUN_0003b524, FUN_0002a808, FUN_00039544]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0001cc60(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;
  double dVar3;
  char local_810 [4];
  char acStack_80c [4];
  char acStack_808 [4];
  char acStack_804 [4];
  char local_800 [4];
  char acStack_7fc [4];
  undefined2 uStack_7f8;
  undefined1 local_7f6;
  
  if (3 < DAT_00087bbc) {
    snprintf(local_810,0x800,"%s to %d.\n","set_voltage_by_steps",param_1);
    FUN_00032218(3,local_810,0);
  }
  dVar3 = (double)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
  iVar1 = FUN_00050390(SUB84(dVar3 / DAT_0001cd48,0));
  if (iVar1 < 0) {
    if (3 < DAT_00087bbc) {
      local_810[0] = s_bitmain_set_voltage_failed_00069040[0];
      local_810[1] = s_bitmain_set_voltage_failed_00069040[1];
      local_810[2] = s_bitmain_set_voltage_failed_00069040[2];
      local_810[3] = s_bitmain_set_voltage_failed_00069040[3];
      acStack_80c[0] = s_bitmain_set_voltage_failed_00069040[4];
      acStack_80c[1] = s_bitmain_set_voltage_failed_00069040[5];
      acStack_80c[2] = s_bitmain_set_voltage_failed_00069040[6];
      acStack_80c[3] = s_bitmain_set_voltage_failed_00069040[7];
      acStack_808[0] = s_bitmain_set_voltage_failed_00069040[8];
      acStack_808[1] = s_bitmain_set_voltage_failed_00069040[9];
      acStack_808[2] = s_bitmain_set_voltage_failed_00069040[10];
      acStack_808[3] = s_bitmain_set_voltage_failed_00069040[0xb];
      acStack_804[0] = s_bitmain_set_voltage_failed_00069040[0xc];
      acStack_804[1] = s_bitmain_set_voltage_failed_00069040[0xd];
      acStack_804[2] = s_bitmain_set_voltage_failed_00069040[0xe];
      acStack_804[3] = s_bitmain_set_voltage_failed_00069040[0xf];
      local_800[0] = s_bitmain_set_voltage_failed_00069040[0x10];
      local_800[1] = s_bitmain_set_voltage_failed_00069040[0x11];
      local_800[2] = s_bitmain_set_voltage_failed_00069040[0x12];
      local_800[3] = s_bitmain_set_voltage_failed_00069040[0x13];
      acStack_7fc[0] = s_bitmain_set_voltage_failed_00069040[0x14];
      acStack_7fc[1] = s_bitmain_set_voltage_failed_00069040[0x15];
      acStack_7fc[2] = s_bitmain_set_voltage_failed_00069040[0x16];
      acStack_7fc[3] = s_bitmain_set_voltage_failed_00069040[0x17];
      uStack_7f8 = (undefined2)ram0x00069058;
      local_7f6 = (undefined1)((uint)ram0x00069058 >> 0x10);
      FUN_00032218(3,local_810,0);
      return 0xffffffff;
    }
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
    DAT_000891d0 = param_1;
    DAT_000891d4 = param_1;
  }
  return uVar2;
}


