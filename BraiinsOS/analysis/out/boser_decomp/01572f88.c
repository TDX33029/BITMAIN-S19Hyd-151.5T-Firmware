// FUN_01572f88 @ 01572f88 size=796 calls_out=6 calls_in=2
// strings: 

void FUN_01572f88(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint local_98;
  int local_90;
  int local_80;
  int *local_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  int local_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  piVar8 = *(int **)(param_2 + 0x54);
  do {
    iVar4 = *piVar8;
    bVar3 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar3);
  *piVar8 = iVar4 + 1;
  if (-1 < iVar4) {
    local_48 = piVar8[3];
    local_44 = piVar8[4];
    local_40 = piVar8[5];
    iStack_3c = piVar8[6];
    iStack_38 = piVar8[7];
    local_34 = piVar8[8];
    iStack_30 = piVar8[9];
    iStack_2c = piVar8[10];
    iStack_28 = piVar8[0xb];
    FUN_0166bf5c(&local_80,*(undefined4 *)(param_2 + 0x50),&local_48,param_3,param_4);
    if (local_80 != -0x7ffffff6) {
      param_1[2] = local_78;
      param_1[3] = iStack_74;
      param_1[4] = iStack_70;
      param_1[5] = iStack_6c;
      param_1[6] = iStack_68;
      param_1[7] = iStack_64;
      param_1[8] = local_60;
      param_1[9] = iStack_5c;
      param_1[10] = iStack_58;
      param_1[0xb] = iStack_54;
      param_1[0xc] = iStack_50;
      param_1[0xd] = iStack_4c;
      *param_1 = local_80;
      param_1[1] = (int)local_7c;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar8;
        bVar3 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar3);
      *piVar8 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01670d04(piVar8);
        return;
      }
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar8;
      bVar3 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar3);
    *piVar8 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01670d04(piVar8);
    }
    iVar4 = *(int *)(param_2 + 0x5c);
    if (*(int *)(iVar4 + 8) == 0) {
      *(undefined4 *)(iVar4 + 8) = 0xffffffff;
      uVar5 = FUN_01676068(iVar4 + 0x20,local_7c[3],local_7c[4]);
      if (*(int *)(iVar4 + 0x18) == 0) {
        FUN_0152c2ec(iVar4 + 0x10,iVar4 + 0x20);
      }
      puVar11 = *(uint **)(iVar4 + 0x10);
      uVar12 = *(uint *)(iVar4 + 0x14);
      bVar3 = false;
      local_90 = 0;
      uVar9 = uVar5;
      do {
        uVar9 = uVar12 & uVar9;
        uVar10 = *(uint *)((int)puVar11 + uVar9);
        uVar6 = uVar10 ^ (uVar5 >> 0x19) * 0x1010101;
        uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff;
        while (uVar6 != 0) {
          iVar7 = FUN_01670d54(local_7c,puVar11[-1 - (uVar9 + ((uint)LZCOUNT(uVar6 << 0x18 |
                                                                             (uVar6 >> 8 & 0xff) <<
                                                                             0x10 | (uVar6 >> 0x10 &
                                                                                    0xff) << 8 |
                                                                             uVar6 >> 0x18) >> 3) &
                                                     uVar12)]);
          uVar6 = uVar6 - 1 & uVar6;
          if (iVar7 != 0) {
            DataMemoryBarrier(0xb);
            do {
              iVar7 = *local_7c;
              bVar3 = (bool)hasExclusiveAccess(local_7c);
            } while (!bVar3);
            *local_7c = iVar7 + -1;
            if (iVar7 == 1) {
              DataMemoryBarrier(0xb);
              FUN_01670d04(local_7c);
            }
            goto LAB_015731fc;
          }
        }
        uVar6 = uVar10 & 0x80808080;
        if (bVar3) {
LAB_01573140:
          if ((uVar6 & uVar10 << 1) != 0) {
            uVar9 = (uint)*(char *)((int)puVar11 + local_98);
            if (-1 < (int)uVar9) {
              uVar9 = *puVar11 & 0x80808080;
              uVar6 = LZCOUNT((*puVar11 & 0x80) << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                              (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18);
              uVar9 = (uint)*(byte *)((int)puVar11 + (uVar6 >> 3));
              local_98 = uVar6 >> 3;
            }
            *(uint *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) - (uVar9 & 1);
            *(int *)(iVar4 + 0x1c) = *(int *)(iVar4 + 0x1c) + 1;
            bVar2 = (byte)(uVar5 >> 0x19);
            *(byte *)((int)puVar11 + local_98) = bVar2;
            *(byte *)((int)puVar11 + (uVar12 & local_98 - 4) + 4) = bVar2;
            puVar11[-1 - local_98] = (uint)local_7c;
LAB_015731fc:
            iVar7 = *(int *)(iVar4 + 8);
            *param_1 = -0x7ffffff6;
            *(int *)(iVar4 + 8) = iVar7 + 1;
            return;
          }
          bVar3 = true;
        }
        else {
          if (uVar6 != 0) {
            local_98 = uVar9 + ((uint)LZCOUNT((uVar10 & 0x80) << 0x18 | (uVar6 >> 8 & 0xff) << 0x10
                                              | (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) &
                       uVar12;
            goto LAB_01573140;
          }
          bVar3 = false;
        }
        local_90 = local_90 + 4;
        uVar9 = local_90 + uVar9;
      } while( true );
    }
    FUN_01306fc8(&DAT_01cfbed0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1573274);
  (*pcVar1)();
}

