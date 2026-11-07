// FUN_00933e20 @ 00933e20 size=584 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_00933e20(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 auStack_1a [10];
  
  if ((param_2[2] & 0x2000000) == 0) {
    if ((param_2[2] & 0x4000000) != 0) {
      uVar2 = *param_1;
      iVar1 = 7;
      do {
        iVar3 = iVar1;
        uVar4 = uVar2 & 0xf;
        uVar2 = uVar2 >> 4;
        auStack_1a[iVar3] = (&DAT_005642f0)[uVar4];
        iVar1 = iVar3 + -1;
      } while (uVar2 != 0);
      goto LAB_00933ee8;
    }
    iVar1 = FUN_00fabc64(*param_1,auStack_1a);
    iVar1 = FUN_00fa9698(param_2,1,1,0,auStack_1a + iVar1,10 - iVar1);
  }
  else {
    uVar2 = *param_1;
    iVar1 = 7;
    do {
      iVar3 = iVar1;
      uVar4 = uVar2 & 0xf;
      uVar2 = uVar2 >> 4;
      auStack_1a[iVar3] = (&DAT_00563e90)[uVar4];
      iVar1 = iVar3 + -1;
    } while (uVar2 != 0);
LAB_00933ee8:
    iVar1 = FUN_00fa9698(param_2,1,"0x",2,auStack_1a + iVar3,9 - (iVar3 + 1));
  }
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,"..=",3);
  if (iVar1 != 0) {
    return 1;
  }
  if ((param_2[2] & 0x2000000) == 0) {
    if ((param_2[2] & 0x4000000) == 0) {
      iVar1 = FUN_00fabc64(param_1[1],auStack_1a);
      iVar1 = FUN_00fa9698(param_2,1,1,0,auStack_1a + iVar1,10 - iVar1);
      goto joined_r0x00934028;
    }
    uVar2 = param_1[1];
    iVar1 = 7;
    do {
      iVar3 = iVar1;
      uVar4 = uVar2 & 0xf;
      uVar2 = uVar2 >> 4;
      auStack_1a[iVar3] = (&DAT_005642f0)[uVar4];
      iVar1 = iVar3 + -1;
    } while (uVar2 != 0);
  }
  else {
    uVar2 = param_1[1];
    iVar1 = 7;
    do {
      iVar3 = iVar1;
      uVar4 = uVar2 & 0xf;
      uVar2 = uVar2 >> 4;
      auStack_1a[iVar3] = (&DAT_00563e90)[uVar4];
      iVar1 = iVar3 + -1;
    } while (uVar2 != 0);
  }
  iVar1 = FUN_00fa9698(param_2,1,"0x",2,auStack_1a + iVar3,9 - (iVar3 + 1));
joined_r0x00934028:
  uVar5 = 1;
  if ((iVar1 == 0) && (uVar5 = 0, (char)param_1[2] == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00934058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(param_2[1] + 0xc))(*param_2," (exhausted)Scriptcfsclc",0xc);
    return uVar5;
  }
  return uVar5;
}

