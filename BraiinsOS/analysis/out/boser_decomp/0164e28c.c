// FUN_0164e28c @ 0164e28c size=964 calls_out=12 calls_in=1
// strings: 

void FUN_0164e28c(uint *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  bool bVar7;
  int extraout_r2;
  int *piVar8;
  uint *puVar9;
  int local_90;
  int local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = thunk_FUN_01bee35a(0x9e3779b9,param_2,0x184);
  uVar6 = *param_1;
  piVar8 = (int *)(iVar1 + extraout_r2);
  uVar2 = 0;
LAB_0164e2d0:
  uVar4 = uVar6;
  if ((uVar6 & 0xc) == 0) {
    uVar6 = 0;
    do {
      if (0xffffffeb < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c(&DAT_004c13f3,0x1c,&DAT_01d06868);
      }
      if (*param_1 == uVar4) {
        bVar7 = (bool)hasExclusiveAccess(param_1);
        if (bVar7) {
          *param_1 = uVar4 + 0x14;
          DataMemoryBarrier(0xb);
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      if (8 < uVar6) {
        uVar6 = 9;
      }
      iVar1 = 2 << (uVar6 & 0xff);
      do {
        iVar1 = iVar1 + -1;
        HintYield();
      } while (iVar1 != 0);
      uVar4 = *param_1;
      uVar6 = uVar6 + 1;
    } while ((uVar4 & 0xc) == 0);
  }
  if (((uVar4 & 3) != 0) || (9 < uVar2)) {
    if ((uVar4 & 1) == 0) goto code_r0x0164e354;
    goto LAB_0164e388;
  }
  uVar4 = uVar2 + 1;
  if (uVar2 < 3) {
    iVar1 = 2 << (uVar2 & 0xff);
    do {
      iVar1 = iVar1 + -1;
      HintYield();
    } while (iVar1 != 0);
  }
  else {
    FUN_01bea67c();
  }
  goto LAB_0164e59c;
code_r0x0164e354:
  uVar6 = *param_1;
  if (uVar6 == uVar4) {
    bVar7 = (bool)hasExclusiveAccess(param_1);
    if (bVar7) {
      *param_1 = uVar4 | 1;
    }
  }
  else {
    bVar7 = false;
    ClearExclusiveLocal();
  }
  if (bVar7) {
LAB_0164e388:
    local_90 = 0;
    piVar5 = piVar8;
    if ((char)piVar8[0xd] != '\x01') {
      piVar5 = (int *)FUN_01652ae4(piVar8);
      if ((piVar5 == (int *)0x0) && (piVar5 = &local_8c, local_90 == 0)) {
        FUN_01651608(&local_58);
        FUN_0164cc04(&local_90);
        local_90 = 1;
        local_8c = local_58;
        uStack_88 = uStack_54;
        uStack_84 = uStack_50;
        uStack_80 = uStack_4c;
        local_7c = local_48;
        uStack_78 = uStack_44;
        uStack_74 = uStack_40;
        uStack_70 = uStack_3c;
        local_6c = local_38;
        uStack_68 = uStack_34;
        uStack_64 = uStack_30;
        uStack_60 = uStack_2c;
        uStack_5c = uStack_28;
      }
    }
LAB_0164e3a0:
    DataMemoryBarrier(0xb);
    piVar3 = DAT_01d519e4;
    if (DAT_01d519e4 == (int *)0x0) {
      piVar3 = (int *)FUN_016518b8();
    }
    uVar2 = (uint)((int)param_1 * -0x61c88647) >> (-piVar3[2] & 0x1fU);
    if ((uint)piVar3[1] <= (uint)((int)param_1 * -0x61c88647) >> (-piVar3[2] & 0x1fU)) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar2,piVar3[1],&DAT_01d068e8);
    }
    iVar1 = *piVar3 + uVar2 * 0x40;
    puVar9 = (uint *)(iVar1 + 0x18);
    if (*puVar9 == 0) {
      bVar7 = (bool)hasExclusiveAccess(puVar9);
      if (!bVar7) goto LAB_0164e440;
      *puVar9 = 1;
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_0164e440:
      FUN_01652ed8(puVar9);
    }
    if (DAT_01d519e4 != piVar3) {
      DataMemoryBarrier(0xb);
      do {
        uVar2 = *puVar9;
        bVar7 = (bool)hasExclusiveAccess(puVar9);
      } while (!bVar7);
      *puVar9 = uVar2 - 1;
      if ((3 < uVar2) && ((uVar2 & 2) == 0)) {
        FUN_01652d70(puVar9);
      }
      goto LAB_0164e3a0;
    }
    if ((*param_1 & 1) == 0 || (*param_1 & 0xc) == 0) {
      DataMemoryBarrier(0xb);
      do {
        uVar2 = *puVar9;
        bVar7 = (bool)hasExclusiveAccess(puVar9);
      } while (!bVar7);
      *puVar9 = uVar2 - 1;
      if ((3 < uVar2) && ((uVar2 & 2) == 0)) {
        FUN_01652d70(puVar9);
      }
      FUN_0164cc04(&local_90);
      uVar4 = 0;
    }
    else {
      piVar5[2] = 0;
      *(undefined1 *)(piVar5 + 0xc) = 0;
      piVar5[1] = (int)param_1;
      piVar5[4] = 0x14;
      *piVar5 = 1;
      if (*(int *)(iVar1 + 0x1c) == 0) {
        *(int **)(iVar1 + 0x1c) = piVar5;
      }
      else {
        *(int **)(*(int *)(iVar1 + 0x20) + 8) = piVar5;
      }
      *(int **)(iVar1 + 0x20) = piVar5;
      DataMemoryBarrier(0xb);
      do {
        uVar2 = *puVar9;
        bVar7 = (bool)hasExclusiveAccess(puVar9);
      } while (!bVar7);
      *puVar9 = uVar2 - 1;
      if ((3 < uVar2) && ((uVar2 & 2) == 0)) {
        FUN_01652d70(puVar9);
      }
      while (DataMemoryBarrier(0xb), *piVar5 != 0) {
        FUN_01be6c3c(0xf0,piVar5,0x80,1,0);
      }
      FUN_01650ba0(piVar5);
      iVar1 = piVar5[3];
      FUN_0164cc04(&local_90);
      uVar4 = 0;
      if (iVar1 == 1) {
        return;
      }
    }
LAB_0164e59c:
    uVar6 = *param_1;
    uVar2 = uVar4;
  }
  goto LAB_0164e2d0;
}

