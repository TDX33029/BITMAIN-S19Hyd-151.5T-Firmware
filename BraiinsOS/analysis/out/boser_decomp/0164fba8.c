// FUN_0164fba8 @ 0164fba8 size=888 calls_out=11 calls_in=149
// strings: 

void FUN_0164fba8(byte *param_1)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  byte bVar9;
  byte bVar10;
  uint *puVar11;
  int iVar12;
  undefined8 uVar13;
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
  
  uVar13 = thunk_FUN_01bee35a(0x9e3779b9,0x184);
  piVar4 = (int *)((int)uVar13 + (int)((ulonglong)uVar13 >> 0x20));
  bVar9 = *param_1;
  uVar5 = 0;
  do {
    while ((bVar9 & 1) == 0) {
      bVar1 = *param_1;
      if (bVar1 == bVar9) {
        bVar3 = (bool)hasExclusiveAccess(param_1);
        if (bVar3) {
          *param_1 = bVar9 | 1;
        }
        bVar2 = false;
        if (bVar3) {
          DataMemoryBarrier(0xb);
          bVar2 = true;
        }
      }
      else {
        bVar2 = false;
        ClearExclusiveLocal();
      }
      bVar9 = bVar1;
      if (bVar2) {
        return;
      }
LAB_0164fc88:
    }
    if ((bVar9 & 2) == 0) {
      if (9 < uVar5) {
        bVar1 = *param_1;
        if (bVar1 == bVar9) {
          bVar10 = hasExclusiveAccess(param_1);
          if ((bool)bVar10) {
            *param_1 = bVar9 | 2;
          }
        }
        else {
          bVar10 = 0;
          ClearExclusiveLocal();
        }
        bVar9 = bVar1;
        if (!(bool)(bVar10 & 1)) goto LAB_0164fc88;
        goto LAB_0164fc90;
      }
      uVar7 = uVar5 + 1;
      if (uVar5 < 3) {
        iVar12 = 2 << (uVar5 & 0xff);
        do {
          iVar12 = iVar12 + -1;
          HintYield();
        } while (iVar12 != 0);
      }
      else {
        FUN_01bea67c();
      }
    }
    else {
LAB_0164fc90:
      local_90 = 0;
      piVar8 = piVar4;
      if ((char)piVar4[0xd] != '\x01') {
        piVar8 = (int *)FUN_01652ae4(piVar4);
        if ((piVar8 == (int *)0x0) && (piVar8 = &local_8c, local_90 == 0)) {
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
LAB_0164fca4:
      DataMemoryBarrier(0xb);
      piVar6 = DAT_01d519e4;
      if (DAT_01d519e4 == (int *)0x0) {
        piVar6 = (int *)FUN_016518b8();
      }
      uVar5 = (uint)((int)param_1 * -0x61c88647) >> (-piVar6[2] & 0x1fU);
      if ((uint)piVar6[1] <= (uint)((int)param_1 * -0x61c88647) >> (-piVar6[2] & 0x1fU)) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar5,piVar6[1],&DAT_01d068e8);
      }
      iVar12 = *piVar6 + uVar5 * 0x40;
      puVar11 = (uint *)(iVar12 + 0x18);
      if (*puVar11 == 0) {
        bVar2 = (bool)hasExclusiveAccess(puVar11);
        if (!bVar2) goto LAB_0164fd40;
        *puVar11 = 1;
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_0164fd40:
        FUN_01652ed8(puVar11);
      }
      if (DAT_01d519e4 != piVar6) {
        DataMemoryBarrier(0xb);
        do {
          uVar5 = *puVar11;
          bVar2 = (bool)hasExclusiveAccess(puVar11);
        } while (!bVar2);
        *puVar11 = uVar5 - 1;
        if ((3 < uVar5) && ((uVar5 & 2) == 0)) {
          FUN_01652d70(puVar11);
        }
        goto LAB_0164fca4;
      }
      if (*param_1 == 3) {
        piVar8[2] = 0;
        *(undefined1 *)(piVar8 + 0xc) = 0;
        piVar8[1] = (int)param_1;
        piVar8[4] = 0;
        *piVar8 = 1;
        if (*(int *)(iVar12 + 0x1c) == 0) {
          *(int **)(iVar12 + 0x1c) = piVar8;
        }
        else {
          *(int **)(*(int *)(iVar12 + 0x20) + 8) = piVar8;
        }
        *(int **)(iVar12 + 0x20) = piVar8;
        DataMemoryBarrier(0xb);
        do {
          uVar5 = *puVar11;
          bVar2 = (bool)hasExclusiveAccess(puVar11);
        } while (!bVar2);
        *puVar11 = uVar5 - 1;
        if ((3 < uVar5) && ((uVar5 & 2) == 0)) {
          FUN_01652d70(puVar11);
        }
        iVar12 = *piVar8;
        DataMemoryBarrier(0xb);
        while (iVar12 != 0) {
          FUN_01be6c3c(0xf0,piVar8,0x80,1,0);
          iVar12 = *piVar8;
          DataMemoryBarrier(0xb);
        }
        FUN_01650ba0(piVar8);
        iVar12 = piVar8[3];
        FUN_0164cc04(&local_90);
        uVar7 = 0;
        if (iVar12 == 1) {
          return;
        }
      }
      else {
        DataMemoryBarrier(0xb);
        do {
          uVar5 = *puVar11;
          bVar2 = (bool)hasExclusiveAccess(puVar11);
        } while (!bVar2);
        *puVar11 = uVar5 - 1;
        if ((3 < uVar5) && ((uVar5 & 2) == 0)) {
          FUN_01652d70(puVar11);
        }
        FUN_0164cc04(&local_90);
        uVar7 = 0;
      }
    }
    bVar9 = *param_1;
    uVar5 = uVar7;
  } while( true );
}

