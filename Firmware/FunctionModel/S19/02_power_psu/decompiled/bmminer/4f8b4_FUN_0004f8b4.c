// FUN_0004f8b4 @ 0004f8b4  size=372  callers=0
// program: bmminer


undefined4 FUN_0004f8b4(void)

{
  int iVar1;
  uint in_fpscr;
  undefined4 uVar2;
  double dVar3;
  undefined8 uVar4;
  undefined4 local_820;
  undefined2 local_81c;
  undefined4 local_818;
  uint local_814;
  char local_810 [20];
  undefined2 local_7fc;
  
  if ((DAT_0050fabc == 0) && (iVar1 = FUN_0004f1d4(), iVar1 < 0)) {
    snprintf(local_810,0x800,"%s: auto exec bitmain_power_open, but open power failed\n",
             "bitmain_get_sample_voltage");
    FUN_00032218(0,local_810,0);
    uVar4 = VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
    uVar2 = (undefined4)uVar4;
  }
  else {
    local_814 = 0;
    local_818 = 0;
    local_820 = 0x404aa55;
    local_81c = 8;
    iVar1 = FUN_0004e110(DAT_0050fab8,&local_820,6,&local_818,8);
    if (iVar1 != 0) {
      builtin_strncpy(local_810,"get sample N failed\n",0x14);
      local_7fc = (ushort)local_7fc._1_1_ << 8;
      FUN_00032218(0,local_810,0);
      builtin_strncpy(local_810,"can nont get voltage",0x14);
      local_7fc = 10;
      FUN_00032218(0,local_810,0);
      return 0x40000000;
    }
    switch(DAT_0050fac0) {
    case 0x71:
    case 0x75:
    case 0x76:
    case 0x77:
      dVar3 = (double)VectorSignedToFloat(local_814 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
      return SUB84(dVar3 * 0.015876,0);
    default:
      return 0;
    case 0x73:
    case 0x78:
      dVar3 = (double)VectorSignedToFloat(local_814 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
      uVar2 = SUB84(dVar3 * 0.018957,0);
    }
  }
  return uVar2;
}

