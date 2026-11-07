// FUN_016dedec @ 016dedec size=570 calls_out=2 calls_in=1
// strings: 

uint FUN_016dedec(uint *param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 in_cr0;
  undefined4 in_cr13;
  uint local_38;
  uint uStack_34;
  uint local_30;
  int local_2c;
  
  uVar7 = *param_1;
  if ((uVar7 & 0xf) == 0) {
    puVar3 = param_1 + 1;
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar3);
      uVar7 = *puVar3;
      if (uVar7 != 0) break;
      bVar1 = (bool)hasExclusiveAccess(puVar3);
      if (bVar1) {
        *puVar3 = 0x10;
      }
      uVar7 = 0;
    } while (!bVar1);
    DataMemoryBarrier(0x1b);
    if (uVar7 == 0) {
      return 0;
    }
    uVar7 = *param_1;
  }
  uVar2 = FUN_016df164(param_1);
  if (uVar2 != 0x10) {
    return uVar2;
  }
  if ((uVar7 & 8) == 0) {
    iVar4 = 100;
    do {
      if ((param_1[1] == 0) || (param_1[2] != 0)) break;
      DataMemoryBarrier(0x1b);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    puVar3 = param_1 + 1;
    do {
      do {
        uVar2 = FUN_016df164(param_1);
        if (uVar2 != 0x10) {
          return uVar2;
        }
        uVar2 = param_1[1];
      } while (((uVar2 & 0x3fffffff) == 0) && ((uVar2 == 0 || ((uVar7 & 4) != 0))));
      if (((uVar7 & 3) == 2) &&
         (iVar4 = coprocessor_movefromRt(0xf,0,3,in_cr13,in_cr0),
         *(uint *)(iVar4 + -0x60) == (uVar2 & 0x3fffffff))) {
        return 0x23;
      }
      puVar5 = param_1 + 2;
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar5);
        bVar1 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar1);
      *puVar5 = *puVar5 + 1;
      DataMemoryBarrier(0x1b);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar3);
        if (uVar2 != *puVar3) goto LAB_016defc6;
        bVar1 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar1);
      *puVar3 = uVar2 | 0x80000000;
LAB_016defc6:
      DataMemoryBarrier(0x1b);
      uVar2 = FUN_016ddf78(puVar3,uVar2 | 0x80000000,0,param_2,~uVar7 & 0x80);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar5);
        bVar1 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar1);
      *puVar5 = *puVar5 - 1;
      DataMemoryBarrier(0x1b);
      if ((uVar2 & 0xfffffffb) != 0) {
        return uVar2;
      }
    } while( true );
  }
  uVar7 = *param_1;
  puVar3 = param_1 + 1;
  iVar4 = coprocessor_movefromRt(0xf,0,3,in_cr13,in_cr0);
  if ((~uVar7 & 0x80) == 0) {
    *(uint **)(iVar4 + -0x24) = param_1 + 4;
  }
  do {
    if (param_2 == (uint *)0x0) {
LAB_016deea8:
      software_interrupt(0);
    }
    else {
      uVar2 = *param_2;
      uVar8 = param_2[1];
      uVar6 = param_2[2];
      if (uVar8 + (0x7fffffff < uVar2) == 0) goto LAB_016deea8;
      local_2c = (int)uVar6 >> 0x1f;
      software_interrupt(0);
      local_38 = uVar2;
      uStack_34 = uVar8;
      local_30 = uVar6;
      if (param_1 == (uint *)0xffffffd6) goto LAB_016deea8;
    }
  } while (param_1 == (uint *)&DAT_fffffff8);
  if (param_1 != (uint *)0xfffffffc) {
    *(undefined4 *)(iVar4 + -0x24) = 0;
    if (puVar3 == (uint *)0xffffff92) {
      return 0x6e;
    }
    if ((int)puVar3 < -0x6e) goto LAB_016def24;
    if (param_1 != (uint *)0xfffffffc) {
      if ((puVar3 == (uint *)&DAT_ffffffdd) && ((uVar7 & 3) == 2)) {
        return 0x23;
      }
      goto LAB_016def24;
    }
  }
  if (((int)(uVar7 << 0x1d) < 0) || ((-1 < (int)(param_1[1] << 1) && (param_1[2] == 0)))) {
    param_1[5] = 0xffffffff;
    uVar7 = FUN_016df164(param_1);
    return uVar7;
  }
  DataMemoryBarrier(0x1b);
  param_1[2] = 0xffffffff;
  DataMemoryBarrier(0x1b);
  software_interrupt(0);
  *(undefined4 *)(iVar4 + -0x24) = 0;
LAB_016def24:
  do {
    local_38 = 0;
    iVar4 = FUN_016ddf78(&local_38,0,0,param_2,1);
  } while (iVar4 != 0x6e);
  return 0x6e;
}

