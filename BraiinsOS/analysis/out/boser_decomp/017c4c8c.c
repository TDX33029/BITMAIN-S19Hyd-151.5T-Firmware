// FUN_017c4c8c @ 017c4c8c size=660 calls_out=4 calls_in=3
// strings: internal error: entered unreachable code

undefined4 FUN_017c4c8c(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  undefined4 uVar7;
  uint unaff_r8;
  bool bVar8;
  undefined8 uVar9;
  
  if (*param_1 == 1) {
    if (param_1[1] == 0) {
LAB_017c4ef0:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d1c5b4);
    }
    iVar5 = param_1[2];
    uVar1 = FUN_019ec670(param_2);
    if ((uVar1 & 0xff) == 2) {
      uVar1 = 0;
    }
    else {
      if ((uVar1 & 1) != 0) {
        return 1;
      }
      unaff_r8 = (uVar1 & 0xffffff) >> 0x10;
      uVar1 = (uVar1 & 0xffffff) >> 8;
    }
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d2cdf8);
    }
    uVar2 = *(uint *)(iVar5 + 0x88);
    DataMemoryBarrier(0xb);
    if ((uVar2 & 4) == 0) {
      puVar6 = (uint *)(iVar5 + 0x88);
      if ((uVar2 & 8) == 0) {
LAB_017c4e14:
        uVar7 = 1;
        if ((uVar2 & 8) != 0) goto LAB_017c4edc;
      }
      else {
        iVar3 = param_2[1];
        iVar4 = *(int *)(iVar5 + 0x7c);
        bVar8 = iVar4 == iVar3;
        if (bVar8) {
          iVar3 = *param_2;
          iVar4 = *(int *)(iVar5 + 0x78);
        }
        if (bVar8 && iVar4 == iVar3) goto LAB_017c4e14;
        DataMemoryBarrier(0xb);
        do {
          uVar2 = *puVar6;
          bVar8 = (bool)hasExclusiveAccess(puVar6);
        } while (!bVar8);
        *puVar6 = uVar2 & 0xfffffff7;
        DataMemoryBarrier(0xb);
        if ((uVar2 & 4) != 0) {
          DataMemoryBarrier(0xb);
          do {
            bVar8 = (bool)hasExclusiveAccess(puVar6);
          } while (!bVar8);
          *puVar6 = *puVar6 | 8;
LAB_017c4ed0:
          DataMemoryBarrier(0xb);
          goto LAB_017c4ed4;
        }
        (**(code **)(*(int *)(iVar5 + 0x78) + 0xc))(*(undefined4 *)(iVar5 + 0x7c));
      }
      uVar9 = (**(code **)*param_2)(param_2[1]);
      *(undefined8 *)(iVar5 + 0x78) = uVar9;
      DataMemoryBarrier(0xb);
      do {
        uVar2 = *puVar6;
        bVar8 = (bool)hasExclusiveAccess(puVar6);
      } while (!bVar8);
      *puVar6 = uVar2 | 8;
      goto LAB_017c4e88;
    }
  }
  else {
    if (param_1[1] == 0) goto LAB_017c4ef0;
    iVar5 = param_1[2];
    uVar1 = FUN_019ec670(param_2);
    if ((uVar1 & 0xff) == 2) {
      uVar1 = 0;
    }
    else {
      if ((uVar1 & 1) != 0) {
        return 1;
      }
      unaff_r8 = (uVar1 & 0xffffff) >> 0x10;
      uVar1 = (uVar1 & 0xffffff) >> 8;
    }
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d2cdf8);
    }
    uVar2 = *(uint *)(iVar5 + 0xb8);
    DataMemoryBarrier(0xb);
    if ((uVar2 & 4) != 0) goto LAB_017c4ed4;
    puVar6 = (uint *)(iVar5 + 0xb8);
    if ((uVar2 & 8) == 0) {
LAB_017c4e50:
      uVar7 = 1;
      if ((uVar2 & 8) != 0) goto LAB_017c4edc;
    }
    else {
      iVar3 = param_2[1];
      iVar4 = *(int *)(iVar5 + 0xac);
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        iVar3 = *param_2;
        iVar4 = *(int *)(iVar5 + 0xa8);
      }
      if (bVar8 && iVar4 == iVar3) goto LAB_017c4e50;
      DataMemoryBarrier(0xb);
      do {
        uVar2 = *puVar6;
        bVar8 = (bool)hasExclusiveAccess(puVar6);
      } while (!bVar8);
      *puVar6 = uVar2 & 0xfffffff7;
      DataMemoryBarrier(0xb);
      if ((uVar2 & 4) != 0) {
        DataMemoryBarrier(0xb);
        do {
          bVar8 = (bool)hasExclusiveAccess(puVar6);
        } while (!bVar8);
        *puVar6 = *puVar6 | 8;
        goto LAB_017c4ed0;
      }
      (**(code **)(*(int *)(iVar5 + 0xa8) + 0xc))(*(undefined4 *)(iVar5 + 0xac));
    }
    uVar9 = (**(code **)*param_2)(param_2[1]);
    *(undefined8 *)(iVar5 + 0xa8) = uVar9;
    DataMemoryBarrier(0xb);
    do {
      uVar2 = *puVar6;
      bVar8 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar8);
    *puVar6 = uVar2 | 8;
LAB_017c4e88:
    uVar7 = 1;
    DataMemoryBarrier(0xb);
    if ((uVar2 & 4) == 0) goto LAB_017c4edc;
  }
LAB_017c4ed4:
  uVar1 = 0;
  uVar7 = 0;
LAB_017c4edc:
  FUN_019edbc4(uVar1,unaff_r8);
  return uVar7;
}

