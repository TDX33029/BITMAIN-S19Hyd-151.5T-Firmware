// FUN_0131bdb4 @ 0131bdb4 size=988 calls_out=12 calls_in=2
// strings: 

void FUN_0131bdb4(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  uint local_94;
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
  
  uVar10 = ((uint)param_1 | 1) * -0x61c88647;
  uVar12 = thunk_FUN_01bee35a(0x9e3779b9,0x184);
  piVar8 = (int *)((int)uVar12 + (int)((ulonglong)uVar12 >> 0x20));
  uVar2 = 0;
LAB_0131bdfc:
  do {
    uVar6 = *param_1;
    while( true ) {
      if (uVar6 < 0xfffffffc) {
        uVar7 = 0;
        do {
          local_94 = uVar6 + 4 & 0xfffffffc;
          if (0xfffffff7 < uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_01304210(1,&local_94,&DAT_0056d568,&DAT_004317ae,0x2f,&DAT_01ce4d3c);
          }
          if (*param_1 == uVar6) {
            bVar1 = (bool)hasExclusiveAccess(param_1);
            if (bVar1) {
              *param_1 = uVar6 + 4;
              DataMemoryBarrier(0xb);
              return;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          if (8 < uVar7) {
            uVar7 = 9;
          }
          iVar11 = 2 << (uVar7 & 0xff);
          do {
            iVar11 = iVar11 + -1;
            HintYield();
          } while (iVar11 != 0);
          uVar6 = *param_1;
          uVar7 = uVar7 + 1;
        } while (uVar6 < 0xfffffffc);
      }
      if ((uVar6 & 1) != 0) goto LAB_0131beb8;
      if (uVar2 < 10) break;
      uVar7 = *param_1;
      if (uVar7 == uVar6) {
        bVar5 = hasExclusiveAccess(param_1);
        if ((bool)bVar5) {
          *param_1 = uVar6 | 1;
        }
      }
      else {
        bVar5 = 0;
        ClearExclusiveLocal();
      }
      uVar6 = uVar7;
      if ((bool)(bVar5 & 1)) goto LAB_0131beb8;
    }
    if (uVar2 < 3) {
      iVar11 = 2 << (uVar2 & 0xff);
      do {
        iVar11 = iVar11 + -1;
        HintYield();
      } while (iVar11 != 0);
    }
    else {
      FUN_01bea67c();
    }
    uVar2 = uVar2 + 1;
  } while( true );
LAB_0131beb8:
  local_90 = 0;
  piVar4 = piVar8;
  if ((char)piVar8[0xd] != '\x01') {
    piVar4 = (int *)FUN_01652ae4(piVar8);
    if ((piVar4 == (int *)0x0) && (piVar4 = &local_8c, local_90 == 0)) {
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
LAB_0131bed0:
  DataMemoryBarrier(0xb);
  piVar3 = DAT_01d519e4;
  if (DAT_01d519e4 == (int *)0x0) {
    piVar3 = (int *)FUN_016518b8();
  }
  uVar2 = uVar10 >> (-piVar3[2] & 0x1fU);
  if ((uint)piVar3[1] <= uVar10 >> (-piVar3[2] & 0x1fU)) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar2,piVar3[1],&DAT_01d068e8);
  }
  iVar11 = *piVar3 + uVar2 * 0x40;
  puVar9 = (uint *)(iVar11 + 0x18);
  if (*puVar9 == 0) {
    bVar1 = (bool)hasExclusiveAccess(puVar9);
    if (!bVar1) goto LAB_0131bf70;
    *puVar9 = 1;
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0131bf70:
    FUN_01652ed8(puVar9);
  }
  if (DAT_01d519e4 != piVar3) {
    DataMemoryBarrier(0xb);
    do {
      uVar2 = *puVar9;
      bVar1 = (bool)hasExclusiveAccess(puVar9);
    } while (!bVar1);
    *puVar9 = uVar2 - 1;
    if ((3 < uVar2) && ((uVar2 & 2) == 0)) {
      FUN_01652d70(puVar9);
    }
    goto LAB_0131bed0;
  }
  if ((~*param_1 & 0xfffffffd) == 0) {
    piVar4[2] = 0;
    *(undefined1 *)(piVar4 + 0xc) = 0;
    piVar4[1] = (uint)param_1 | 1;
    piVar4[4] = 0;
    *piVar4 = 1;
    if (*(int *)(iVar11 + 0x1c) == 0) {
      *(int **)(iVar11 + 0x1c) = piVar4;
    }
    else {
      *(int **)(*(int *)(iVar11 + 0x20) + 8) = piVar4;
    }
    *(int **)(iVar11 + 0x20) = piVar4;
    DataMemoryBarrier(0xb);
    do {
      uVar2 = *puVar9;
      bVar1 = (bool)hasExclusiveAccess(puVar9);
    } while (!bVar1);
    *puVar9 = uVar2 - 1;
    if ((3 < uVar2) && ((uVar2 & 2) == 0)) {
      FUN_01652d70(puVar9);
    }
    while (DataMemoryBarrier(0xb), *piVar4 != 0) {
      FUN_01be6c3c(0xf0,piVar4,0x80,1,0);
    }
    FUN_01650ba0(piVar4);
  }
  else {
    DataMemoryBarrier(0xb);
    do {
      uVar2 = *puVar9;
      bVar1 = (bool)hasExclusiveAccess(puVar9);
    } while (!bVar1);
    *puVar9 = uVar2 - 1;
    if ((3 < uVar2) && ((uVar2 & 2) == 0)) {
      FUN_01652d70(puVar9);
    }
  }
  FUN_0164cc04(&local_90);
  uVar2 = 0;
  goto LAB_0131bdfc;
}

