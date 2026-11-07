// FUN_000368b4 @ 000368b4  size=492  callers=3
// program: bmminer


void FUN_000368b4(int param_1,int param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int param6;
  uint uVar4;
  char local_820 [2052];
  
  if (((param_1 == 0) || (iVar2 = FUN_0002009c(), iVar2 == 0)) ||
     (iVar2 = FUN_0002005c(), iVar2 == 0)) {
    if (3 < DAT_00087bbc) {
      builtin_strncpy(local_820,"Note: addrInterval or corenum is not initialized.\n",0x33);
      FUN_00032218(3,local_820,0);
    }
    DAT_00b2d228 = 0x1ffff;
    return;
  }
  iVar2 = FUN_0002009c();
  uVar3 = FUN_0002006c();
  if (uVar3 != 0) {
    iVar2 = iVar2 << 0x18;
    if (uVar3 != 1) {
      uVar4 = 1;
      do {
        uVar4 = uVar4 * 2;
      } while (uVar4 < uVar3);
      iVar2 = FUN_00067408();
    }
    iVar2 = param_3 * iVar2 * param_2;
    param6 = FUN_00067408(iVar2 / 100,param_1,iVar2 * 0x51eb851f);
    DAT_00b2d228 = param6;
    iVar2 = FUN_0002009c();
    uVar3 = FUN_0002006c();
    if (uVar3 != 0) {
      iVar2 = iVar2 << 0x18;
      if (uVar3 != 1) {
        uVar4 = 1;
        do {
          uVar4 = uVar4 * 2;
        } while (uVar4 < uVar3);
        iVar2 = FUN_00067408(iVar2);
      }
      if ((((byte)DAT_00b2d204 & 4) != 0) && (DAT_00b2d212 != 0)) {
        DAT_00b2d228 = (uint)(byte)DAT_00b2d212 * 1000 + (uint)DAT_00b2d212._1_1_;
      }
      FUN_0004a5d4(param6);
      if (DAT_00087bbc < 4) {
        return;
      }
      iVar2 = FUN_00067408(iVar2 * 0x19,param_1);
      snprintf(local_820,0x800,"freq = %d, percent = %d, hcn = %d, timeout = %d\n",param_1,param_3,
               param_2 * iVar2,param6);
      FUN_00032218(3,local_820,0);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x36a9c);
  (*pcVar1)();
}

