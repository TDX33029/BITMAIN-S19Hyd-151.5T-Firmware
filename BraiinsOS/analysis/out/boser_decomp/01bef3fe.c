// FUN_01bef3fe @ 01bef3fe size=374 calls_out=2 calls_in=3
// strings: 

undefined4 FUN_01bef3fe(uint *param_1,uint *param_2)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int unaff_r9;
  int iVar10;
  undefined4 in_cr0;
  undefined4 in_cr13;
  
  uVar5 = *param_1;
  uVar3 = param_1[2];
  uVar9 = uVar5 & 0xf;
  uVar8 = ~uVar5 & 0x80;
  if (uVar9 == 0) {
    uVar7 = 0;
    if ((uVar5 & 8) == 0) {
LAB_01bef420:
      puVar2 = param_1 + 1;
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar2);
        uVar5 = *puVar2;
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = uVar7;
      DataMemoryBarrier(0x1b);
      if (uVar8 == 0 && uVar9 != 0) {
        *(undefined4 *)(unaff_r9 + 0x4c) = 0;
        FUN_01befeb8();
      }
      if (uVar3 == 0 && -1 < (int)uVar5) {
        return 0;
      }
      software_interrupt(0);
      if (param_1 == (uint *)0xffffffd6) {
        software_interrupt(0);
        return 0;
      }
      return 0;
    }
    uVar6 = 0;
    uVar7 = 0;
LAB_01bef4d6:
    puVar2 = param_1 + 1;
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar2);
      uVar3 = *puVar2;
      if (uVar3 != uVar6) break;
      bVar1 = (bool)hasExclusiveAccess(puVar2);
      if (bVar1) {
        *puVar2 = uVar7;
      }
      param_2 = (uint *)(uint)!bVar1;
    } while (param_2 != (uint *)0x0);
    DataMemoryBarrier(0x1b);
    puVar2 = param_1;
    if (uVar3 == uVar6) goto LAB_01bef514;
  }
  else {
    iVar10 = coprocessor_movefromRt(0xf,0,3,in_cr13,in_cr0);
    uVar6 = param_1[1];
    unaff_r9 = iVar10 + -0x70;
    if (*(uint *)(iVar10 + -0x60) != (uVar6 & 0x3fffffff)) {
      return 1;
    }
    if (((uVar5 & 3) == 1) && (param_1[5] != 0)) {
      param_1[5] = param_1[5] - 1;
      return 0;
    }
    uVar7 = 0;
    if (((uVar5 & 4) != 0) && (uVar7 = 0, (uVar6 & 0x40000000) != 0)) {
      uVar7 = 0x7fffffff;
    }
    if (uVar8 == 0) {
      *(uint **)(iVar10 + -0x24) = param_1 + 4;
      FUN_01befe98();
    }
    param_2 = (uint *)param_1[3];
    uVar4 = param_1[4];
    *param_2 = uVar4;
    if (uVar4 != iVar10 - 0x2cU) {
      *(uint **)(uVar4 - 4) = param_2;
    }
    if (-1 < (int)(uVar5 << 0x1c)) goto LAB_01bef420;
    if (-1 < (int)uVar6) goto LAB_01bef4d6;
  }
  puVar2 = param_1 + 1;
  if (uVar7 != 0) {
    DataMemoryBarrier(0x1b);
    param_1[2] = 0xffffffff;
    DataMemoryBarrier(0x1b);
  }
  param_2 = (uint *)(uVar8 | 7);
  software_interrupt(0);
LAB_01bef514:
  if (uVar8 == 0 && uVar9 != 0) {
    *(undefined4 *)(unaff_r9 + 0x4c) = 0;
    FUN_01befeb8(puVar2,param_2);
    return 0;
  }
  return 0;
}

