// FUN_000506f8 @ 000506f8  size=772  callers=0
// program: bmminer


int FUN_000506f8(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  double *pdVar4;
  bool bVar5;
  uint in_fpscr;
  undefined4 uVar6;
  double dVar7;
  undefined4 extraout_s1;
  double dVar8;
  undefined4 local_838;
  undefined2 local_834;
  undefined4 local_830;
  float local_82c;
  char local_810 [20];
  undefined4 local_7fc;
  char acStack_7f8 [2024];
  
  bVar5 = 0x61 < DAT_0050fac0;
  if (DAT_0050fac0 != 0x62) {
    bVar5 = 1 < DAT_0050fac0 - 100;
  }
  if (bVar5 && (DAT_0050fac0 != 0x62 && DAT_0050fac0 - 100 != 2)) {
    if ((DAT_0050fabc == 0) && (iVar2 = FUN_0004f1d4(), iVar2 < 0)) {
      snprintf(local_810,0x800,"%s: auto exec bitmain_power_open, but open power failed\n",
               "bitmain_get_voltage");
      FUN_00032218(0,local_810,0);
    }
    else {
      local_830 = 0;
      local_82c = 0.0;
      local_838 = 0x304aa55;
      local_834 = 7;
      iVar2 = FUN_0004e110(DAT_0050fab8,&local_838,6,&local_830,8);
      if (iVar2 == 0) {
        uVar6 = FUN_0005063c((uint)local_82c & 0xffff);
        dVar7 = (double)CONCAT44(extraout_s1,uVar6) * 100.0;
        return (uint)(0.0 < dVar7) * (int)(longlong)dVar7;
      }
      builtin_strncpy(local_810,"get AD conversion N ",0x14);
      local_7fc._0_1_ = 'f';
      local_7fc._1_1_ = 'a';
      local_7fc._2_1_ = 'i';
      local_7fc._3_1_ = 'l';
      builtin_strncpy(acStack_7f8,"ed\n",4);
      FUN_00032218(0,local_810,0);
      builtin_strncpy(local_810,"can nont get voltage",0x14);
      local_7fc = CONCAT22(local_7fc._2_2_,10);
      FUN_00032218(0,local_810,0);
      iVar2 = -0x7ffffd00;
    }
    return iVar2;
  }
  local_838 = 0x304aa55;
  local_834 = 0x304;
  memset(&local_830,0,0x20);
  iVar2 = FUN_0004e2c4(DAT_0050fab8,&local_838,6,&local_830,10);
  if (iVar2 == 0) {
    fVar1 = local_82c * 100.0 + 1e-05;
    iVar2 = (uint)(0.0 < fVar1) * (int)(longlong)fVar1;
    if (DAT_0050fac4 == '\0') {
      return iVar2;
    }
    if (DAT_0050fc40 == '\0') {
      return iVar2;
    }
    if (((DAT_0050fac0 == 0x62) ||
        (((0x61 < DAT_0050fac0 && (DAT_0050fac0 - 100 < 3)) &&
         ((DAT_0050fac0 == 0x62 || (0x61 < DAT_0050fac0)))))) &&
       ((dVar7 = (double)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3), dVar7 <= 22.1 &&
        (16.5 <= dVar7)))) {
      if (1 < DAT_0050fadc) {
        pdVar4 = (double *)&DAT_0050fae0;
        iVar2 = 0;
        do {
          dVar8 = *pdVar4;
          pdVar4 = pdVar4 + 1;
          iVar3 = iVar2 + 1;
          if ((dVar8 - 0.001 < dVar7) && (dVar7 < *pdVar4 + 0.001)) {
            dVar7 = (double)(&DAT_0050fb80)[iVar2] +
                    (((double)(&DAT_0050fb88)[iVar2] - (double)(&DAT_0050fb80)[iVar2]) /
                    (*pdVar4 - dVar8)) * (dVar7 - dVar8);
            return (uint)(0.0 < (float)dVar7) * (int)dVar7;
          }
          iVar2 = iVar3;
        } while (iVar3 != DAT_0050fadc + -1);
      }
      return (uint)(0.0 < (float)dVar7) * (int)dVar7;
    }
  }
  else {
    builtin_strncpy(local_810,"Get power set_volt v",0x14);
    local_7fc._0_1_ = 'a';
    local_7fc._1_1_ = 'l';
    local_7fc._2_1_ = 'u';
    local_7fc._3_1_ = 'e';
    builtin_strncpy(acStack_7f8," failed\n",9);
    FUN_00032218(3,local_810,0);
  }
  return 0;
}

