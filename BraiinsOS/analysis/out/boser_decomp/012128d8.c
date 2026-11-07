// FUN_012128d8 @ 012128d8 size=1404 calls_out=20 calls_in=0
// strings: 

void FUN_012128d8(uint *param_1,int *param_2,undefined4 *param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  undefined *puVar12;
  uint ***pppuVar13;
  uint uVar14;
  uint **ppuVar15;
  uint uVar16;
  undefined8 uVar17;
  uint **ppuVar18;
  int local_84;
  uint ***local_68;
  undefined *local_64;
  uint ***local_60;
  undefined *puStack_5c;
  uint ***pppuStack_58;
  uint *local_54;
  uint ***local_50;
  undefined *local_4c;
  uint ***local_48;
  undefined *local_44;
  uint ***local_40;
  undefined *local_3c;
  uint ***local_38;
  undefined *local_34;
  uint ***local_30;
  uint *local_2c;
  
  puVar9 = param_1 + 0x240;
  iVar10 = param_2[1];
  iVar11 = *param_2;
  pppuVar13 = (uint ***)param_1[0x23e];
  puVar12 = (undefined *)param_1[0x23f];
  uVar2 = FUN_012672ac(0,0,puVar9,param_4,iVar11,iVar10,pppuVar13,puVar12);
  puVar7 = param_1 + 0x120;
  if ((uVar2 & 0xfd) == 0) {
LAB_01212aa0:
    uVar14 = param_1[0x11f];
    ppuVar15 = (uint **)param_1[0x11e];
    ppuVar18 = ppuVar15;
    uVar2 = uVar14;
    uVar3 = FUN_0120be0c(0,0,puVar7);
    if ((uVar3 & 0xfd) == 0) {
      return;
    }
    uVar3 = *param_1;
    if (uVar3 < 0x3ffffffe) {
      if (*param_1 != uVar3) {
        ClearExclusiveLocal();
        goto LAB_01212de4;
      }
      bVar1 = (bool)hasExclusiveAccess(param_1);
      if (!bVar1) goto LAB_01212de4;
      *param_1 = uVar3 + 1;
      DataMemoryBarrier(0xb);
    }
    else {
LAB_01212de4:
      FUN_0197a5c8(param_1);
    }
    if ((char)param_1[2] == '\0') {
      if (param_1[7] != 0) {
        iVar10 = *param_2;
        iVar11 = param_2[1];
        uVar3 = FUN_01ab2af4(param_1[8],param_1[9],param_1[10],param_1[0xb],iVar10,iVar11,ppuVar18,
                             uVar2);
        uVar2 = uVar3 >> 0x19;
        uVar8 = param_1[4];
        local_84 = 0;
        while( true ) {
          uVar3 = param_1[5] & uVar3;
          uVar16 = *(uint *)(uVar8 + uVar3);
          uVar5 = uVar16 ^ uVar2 * 0x1010101;
          uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff;
          while (uVar5 != 0) {
            uVar4 = uVar3 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                           (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) &
                    param_1[5];
            piVar6 = (int *)((uVar8 - 0x160) + uVar4 * -0x160);
            uVar5 = uVar5 - 1 & uVar5;
            if (iVar10 == *piVar6 && iVar11 == piVar6[1]) {
              FUN_01ab498c(uVar4 * -0x160 + uVar8 + -0x158,*param_3);
              goto LAB_01212c14;
            }
          }
          if ((uVar16 & 0x80808080 & uVar16 << 1) != 0) break;
          local_84 = local_84 + 4;
          uVar3 = uVar3 + local_84;
        }
      }
LAB_01212c14:
      DataMemoryBarrier(0xb);
      do {
        uVar2 = *param_1;
        bVar1 = (bool)hasExclusiveAccess(param_1);
      } while (!bVar1);
      *param_1 = uVar2 - 1;
      if ((uVar2 - 1 & 0xbfffffff) == 0x80000000) {
        FUN_019a33c4(param_1);
      }
    }
    else {
      if (((DAT_01d51b08 & 0x7fffffff) == 0) || (iVar10 = FUN_0197ac0c(), iVar10 != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_01979f74(&DAT_00531614,0xd,&DAT_01c253b4);
      }
      DataMemoryBarrier(0xb);
      do {
        uVar2 = *param_1;
        bVar1 = (bool)hasExclusiveAccess(param_1);
      } while (!bVar1);
      *param_1 = uVar2 - 1;
      if ((uVar2 - 1 & 0xbfffffff) == 0x80000000) {
        FUN_019a33c4(param_1);
      }
    }
    FUN_01ab440c(&local_68,puVar9,*param_2 + -1);
    pppuStack_58 = local_60;
    pppuVar13 = local_68;
    if (local_68 == (uint ***)0x0) goto LAB_01212e40;
    local_34 = local_64;
    local_30 = local_60;
    local_3c = (undefined *)0x0;
    local_40 = (uint ***)0x0;
    local_38 = local_68;
    local_2c = puVar7;
    if (((uint)*local_68 & (uint)ppuVar15) == 0 && ((uint)local_68[1] & uVar14) == 0) {
      local_50 = local_68;
      local_4c = local_64;
      local_48 = local_60;
      local_60 = local_68;
      puStack_5c = local_64;
      local_68 = (uint ***)ppuVar15;
      local_64 = (undefined *)uVar14;
      local_54 = puVar7;
      uVar17 = FUN_01ab96a8(pppuVar13);
      iVar10 = FUN_01ab8994();
      if (iVar10 == 0) {
        local_4c = (undefined *)0x1;
        local_34 = (undefined *)CONCAT22(local_34._2_2_,1);
        local_48 = (uint ***)0x0;
        local_50 = (uint ***)0x0;
        local_44 = (undefined *)((uint)local_44 & 0xffffff00);
        local_38 = (uint ***)CONCAT31(local_38._1_3_,*(undefined1 *)((int)param_1 + 0x476));
        local_3c = &DAT_01d2f100;
        local_40 = (uint ***)&local_50;
        FUN_01aacd68(*param_3,&local_40,&DAT_01d2f1d8);
        if (((uint)local_34 & 0x100) == 0) {
          local_44 = (undefined *)CONCAT31(local_44._1_3_,*(undefined1 *)((int)param_1 + 0x476));
          local_40 = local_50;
          local_3c = local_4c;
          local_38 = local_48;
          local_34 = local_44;
          FUN_01ab8828((int)uVar17,&local_40);
        }
        else {
          FUN_019bb7e0(local_50,local_4c);
        }
      }
      else {
        FUN_01abcb5c(iVar10,*param_3);
      }
      FUN_01ac2a34((int)uVar17,(uint)((ulonglong)uVar17 >> 0x20) & 1);
      FUN_01ab4580(&local_60);
      return;
    }
  }
  else {
    FUN_01267ec8(puVar7,param_2,param_3);
    FUN_01ab9f1c(&local_68,puVar9,iVar11,iVar10);
    if (local_54 == (uint *)0x0) goto LAB_01212e40;
    local_40 = local_68;
    local_3c = local_64;
    local_38 = local_60;
    local_34 = puStack_5c;
    local_30 = pppuStack_58;
    local_2c = local_54;
    if (((uint)*local_60 & (uint)pppuVar13) == 0 && ((uint)local_60[1] & (uint)puVar12) == 0) {
      local_50 = local_60;
      local_4c = puStack_5c;
      local_48 = pppuStack_58;
      local_68 = pppuVar13;
      local_64 = puVar12;
      uVar17 = FUN_01ab96a8(local_60);
      iVar10 = FUN_01ab8994();
      if (iVar10 == 0) {
        local_3c = &DAT_01d2f100;
        local_48 = (uint ***)0x0;
        local_4c = (undefined *)0x1;
        local_50 = (uint ***)0x0;
        local_44 = (undefined *)((uint)local_44 & 0xffffff00);
        local_34 = (undefined *)CONCAT22(local_34._2_2_,1);
        local_38 = (uint ***)CONCAT31(local_38._1_3_,*(undefined1 *)((int)param_1 + 0x8f6));
        local_40 = (uint ***)&local_50;
        FUN_01aacd68(*param_3,&local_40,&DAT_01d2f1d8);
        if (((uint)local_34 & 0x100) == 0) {
          local_44 = (undefined *)CONCAT31(local_44._1_3_,*(undefined1 *)((int)param_1 + 0x8f6));
          local_40 = local_50;
          local_3c = local_4c;
          local_38 = local_48;
          local_34 = local_44;
          FUN_01ab8828((int)uVar17,&local_40);
        }
        else {
          FUN_019bb7e0(local_50,local_4c);
        }
      }
      else {
        FUN_01abcb5c(iVar10,*param_3);
      }
      FUN_01ac2a34((int)uVar17,(uint)((ulonglong)uVar17 >> 0x20) & 1);
      FUN_01ab4580(&local_60);
      goto LAB_01212aa0;
    }
  }
  FUN_01ab4580();
LAB_01212e40:
                    /* WARNING: Subroutine does not return */
  FUN_0130739c(&DAT_00531972,0x1d,&DAT_01d2f0f0);
}

