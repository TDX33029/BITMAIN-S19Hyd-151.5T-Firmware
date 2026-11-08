// FUN_01211dc0 @ 01211dc0 size=2256 calls_out=24 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01211dc0(uint *param_1,int *param_2)

{
  code *pcVar1;
  longlong lVar2;
  uint *******pppppppuVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  undefined4 uVar13;
  uint *******pppppppuVar14;
  uint *******pppppppuVar15;
  uint *******pppppppuVar16;
  uint *puVar17;
  undefined4 ******ppppppuVar18;
  uint *******pppppppuVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  bool bVar24;
  undefined8 uVar25;
  uint *******pppppppuVar26;
  uint *******pppppppuVar27;
  undefined4 ******ppppppuVar28;
  int local_d4;
  uint *******local_b0;
  uint uStack_ac;
  uint *******pppppppuStack_a8;
  uint *******local_a4;
  undefined4 *local_9c;
  undefined4 local_98;
  uint *******local_94;
  uint ******local_90;
  undefined4 *******local_8c;
  undefined *local_88;
  undefined *local_84;
  uint *******local_80;
  uint local_7c;
  uint *******local_78;
  uint ******local_74;
  undefined4 local_70;
  uint *******local_6c;
  undefined4 local_68;
  undefined4 **local_64;
  uint *******local_60;
  uint local_5c;
  uint *******local_58;
  uint local_54;
  uint *******local_50;
  uint *******local_4c;
  uint ******local_48;
  undefined4 *******local_44;
  uint *******local_40;
  uint local_3c;
  uint *******local_38;
  uint local_34;
  uint *******local_30;
  uint *******local_2c;
  
  pppppppuVar14 = (uint *******)(param_1 + 0x240);
  FUN_01ab9c10(pppppppuVar14);
  pppppppuVar19 = (uint *******)*param_2;
  uVar20 = param_2[1];
  pppppppuVar16 = (uint *******)param_1[0x23e];
  uVar21 = param_1[0x23f];
  pppppppuVar26 = pppppppuVar19;
  uVar8 = uVar20;
  pppppppuVar27 = pppppppuVar16;
  uVar6 = uVar21;
  uVar4 = FUN_012672ac(0,0,pppppppuVar14);
  pppppppuVar15 = (uint *******)(param_1 + 0x120);
  if ((uVar4 & 0xfd) == 0) {
LAB_01212100:
    uVar6 = param_1[0x11f];
    ppppppuVar18 = (undefined4 ******)param_1[0x11e];
    ppppppuVar28 = ppppppuVar18;
    uVar8 = uVar6;
    uVar4 = FUN_0120be0c(0,0,pppppppuVar15);
    if ((uVar4 & 0xfd) == 0) {
      return;
    }
    uVar4 = *param_1;
    if (uVar4 < 0x3ffffffe) {
      if (*param_1 != uVar4) {
        ClearExclusiveLocal();
        goto LAB_0121260c;
      }
      bVar24 = (bool)hasExclusiveAccess(param_1);
      if (!bVar24) goto LAB_0121260c;
      *param_1 = uVar4 + 1;
      DataMemoryBarrier(0xb);
    }
    else {
LAB_0121260c:
      FUN_0197a5c8(param_1);
    }
    if ((char)param_1[2] == '\0') {
      if (param_1[7] != 0) {
        iVar22 = *param_2;
        iVar9 = param_2[1];
        uVar4 = FUN_01ab2af4(param_1[8],param_1[9],param_1[10],param_1[0xb],iVar22,iVar9,
                             ppppppuVar28,uVar8);
        uVar8 = uVar4 >> 0x19;
        uVar20 = param_1[4];
        local_d4 = 0;
        while( true ) {
          uVar4 = param_1[5] & uVar4;
          uVar23 = *(uint *)(uVar20 + uVar4);
          uVar21 = uVar23 ^ uVar8 * 0x1010101;
          uVar21 = ~uVar21 & 0x80808080 & uVar21 + 0xfefefeff;
          while (uVar21 != 0) {
            uVar10 = uVar4 + ((uint)LZCOUNT(uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 |
                                            (uVar21 >> 0x10 & 0xff) << 8 | uVar21 >> 0x18) >> 3) &
                     param_1[5];
            piVar12 = (int *)((uVar20 - 0x160) + uVar10 * -0x160);
            uVar21 = uVar21 - 1 & uVar21;
            if (iVar22 == *piVar12 && iVar9 == piVar12[1]) {
              piVar12 = (int *)FUN_01ac25d8(param_1 + 0x18);
              if (*piVar12 != 0) {
                FUN_01306fc8(&DAT_01c25394);
                    /* WARNING: Does not return */
                pcVar1 = (code *)software_udf(0xfdee,0x1212624);
                (*pcVar1)();
              }
              *piVar12 = -1;
              uVar7 = FUN_01ab49f0(uVar10 * -0x160 + uVar20 + -0x158);
              iVar9 = piVar12[3];
              if (iVar9 == piVar12[1]) {
                FUN_01a54b48();
              }
              *(undefined4 *)(piVar12[2] + iVar9 * 4) = uVar7;
              piVar12[3] = iVar9 + 1;
              *piVar12 = *piVar12 + 1;
              goto LAB_012122c8;
            }
          }
          if ((uVar23 & 0x80808080 & uVar23 << 1) != 0) break;
          local_d4 = local_d4 + 4;
          uVar4 = uVar4 + local_d4;
        }
      }
LAB_012122c8:
      DataMemoryBarrier(0xb);
      do {
        uVar8 = *param_1;
        bVar24 = (bool)hasExclusiveAccess(param_1);
      } while (!bVar24);
      *param_1 = uVar8 - 1;
      if ((uVar8 - 1 & 0xbfffffff) == 0x80000000) {
        FUN_019a33c4(param_1);
      }
    }
    else {
      if (((DAT_01d51b08 & 0x7fffffff) == 0) || (iVar9 = FUN_0197ac0c(), iVar9 != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_01979f74(&DAT_00531614,0xd,&DAT_01c253a4);
      }
      DataMemoryBarrier(0xb);
      do {
        uVar8 = *param_1;
        bVar24 = (bool)hasExclusiveAccess(param_1);
      } while (!bVar24);
      *param_1 = uVar8 - 1;
      if ((uVar8 - 1 & 0xbfffffff) == 0x80000000) {
        FUN_019a33c4(param_1);
      }
    }
    iVar9 = *param_2;
    iVar22 = param_2[1];
    if (((*(byte *)((int)param_1 + 0x475) & 2) == 0) &&
       (((*(byte *)((int)param_1 + 0x475) & 8) == 0 || ((char)param_1[0x11d] != '\x01')))) {
      return;
    }
    FUN_01ab440c(&local_60,pppppppuVar14,iVar9 + -1);
    pppppppuVar26 = local_60;
    if (local_60 == (uint *******)0x0) goto LAB_0121267c;
    local_34 = local_5c;
    local_3c = 0;
    local_40 = (uint *******)0x0;
    local_38 = local_60;
    local_30 = local_58;
    local_2c = pppppppuVar15;
    if (((uint)*local_60 & (uint)ppppppuVar18) == 0 && ((uint)local_60[1] & uVar6) == 0) {
      local_b0 = local_60;
      uStack_ac = local_5c;
      pppppppuStack_a8 = local_58;
      local_a4 = pppppppuVar15;
      uVar25 = FUN_01ab96a8(local_60);
      uVar8 = (uint)((ulonglong)uVar25 >> 0x20) & 1;
      plVar5 = (longlong *)FUN_01ab8a24();
      if (plVar5 != (longlong *)0x0) {
        puVar17 = (uint *)(plVar5 + 2);
        uVar4 = *puVar17;
        iVar11 = *(int *)((int)plVar5 + 0x14);
        if (uVar4 == 0 && iVar11 == 0) {
          FUN_019ac130(&local_40,1);
          pppppppuVar14 = local_38;
          uVar4 = local_3c;
          pppppppuVar27 = local_40;
          local_60 = *(uint ********)(plVar5 + 3);
          local_5c = *(uint *)((int)plVar5 + 0x1c);
          local_58 = *(uint ********)(plVar5 + 4);
          local_7c = local_3c;
          local_80 = local_40;
          local_78 = local_38;
          FUN_019ac248(&local_40,&local_80,&local_60);
          *(uint ********)(plVar5 + 3) = pppppppuVar27;
          *(uint *)((int)plVar5 + 0x1c) = uVar4;
          lVar2 = ZEXT48(local_38) * 1000000000 + CONCAT44(local_34 * 1000000000,local_30) + *plVar5
          ;
          bVar24 = ((uint)local_40 & 1) != 0;
          *(uint ********)(plVar5 + 4) = pppppppuVar14;
          uVar7 = (int)((ulonglong)lVar2 >> 0x20);
          if (bVar24) {
            uVar7 = *(undefined4 *)((int)plVar5 + 4);
          }
          uVar4 = *puVar17;
          iVar11 = *(int *)((int)plVar5 + 0x14);
          uVar13 = (int)lVar2;
          if (bVar24) {
            uVar13 = (int)*plVar5;
          }
          *(undefined4 *)plVar5 = uVar13;
          *(undefined4 *)((int)plVar5 + 4) = uVar7;
        }
        *puVar17 = uVar4 + 1;
        *(uint *)((int)plVar5 + 0x14) = iVar11 + (uint)(0xfffffffe < uVar4);
      }
      if ((*(byte *)((int)param_1 + 0x475) & 2) == 0) {
        FUN_01ac2a34((int)uVar25,uVar8);
        FUN_01ab4580(&local_b0);
        return;
      }
      local_4c = (uint *******)pppppppuVar26[0xc];
      local_94 = (uint *******)local_4c[9];
      local_90 = local_4c[10];
      local_84 = &DAT_01c24094;
      local_88 = &DAT_01d2f0e8;
      local_8c = &local_80;
      local_98 = 1;
      local_7c = 1;
      local_70 = 0;
      local_68 = 1;
      local_6c = (uint *******)&local_8c;
      local_50 = (uint *******)&local_6c;
      local_64 = &local_9c;
      local_9c = &DAT_01d2f7e0;
      local_80 = (uint *******)&DAT_01d2f7e0;
      local_5c = 0;
      local_60 = (uint *******)0x2;
      local_78 = local_94;
      local_74 = local_90;
      local_58 = (uint *******)iVar9;
      local_54 = iVar22;
      FUN_01ac2a34((int)uVar25,uVar8);
      local_38 = local_b0;
      local_34 = uStack_ac;
      local_30 = pppppppuStack_a8;
      local_2c = local_a4;
      local_40 = (uint *******)ppppppuVar18;
      local_3c = uVar6;
      FUN_01ab4580(&local_38);
      local_2c = (uint *******)&local_44;
      local_30 = &local_48;
      local_48 = (uint ******)(param_1 + 0x104);
      local_44 = &local_60;
      local_40 = (uint *******)ppppppuVar18;
      local_3c = uVar6;
      local_38 = pppppppuVar15;
      FUN_01206e14(&local_40);
      return;
    }
  }
  else {
    FUN_01267bbc(pppppppuVar15,param_2);
    if (((*(byte *)((int)param_1 + 0x8f5) & 2) == 0) &&
       (((*(byte *)((int)param_1 + 0x8f5) & 8) == 0 || ((char)param_1[0x23d] != '\x01'))))
    goto LAB_01212100;
    FUN_01ab9f1c(&local_60,pppppppuVar14,pppppppuVar19,uVar20,pppppppuVar26,uVar8,pppppppuVar27,
                 uVar6);
    pppppppuVar26 = local_58;
    if (local_4c == (uint *******)0x0) goto LAB_0121267c;
    local_40 = local_60;
    local_3c = local_5c;
    local_38 = local_58;
    local_34 = local_54;
    local_30 = local_50;
    local_2c = local_4c;
    if (((uint)*local_58 & (uint)pppppppuVar16) == 0 && ((uint)local_58[1] & uVar21) == 0) {
      local_60 = local_58;
      local_5c = local_54;
      local_58 = local_50;
      local_b0 = pppppppuVar26;
      uStack_ac = local_54;
      pppppppuStack_a8 = local_50;
      local_a4 = local_4c;
      uVar25 = FUN_01ab96a8();
      uVar8 = (uint)((ulonglong)uVar25 >> 0x20) & 1;
      plVar5 = (longlong *)FUN_01ab8a24();
      if (plVar5 != (longlong *)0x0) {
        puVar17 = (uint *)(plVar5 + 2);
        uVar6 = *puVar17;
        iVar9 = *(int *)((int)plVar5 + 0x14);
        if (uVar6 == 0 && iVar9 == 0) {
          FUN_019ac130(&local_40,1);
          pppppppuVar3 = local_38;
          uVar6 = local_3c;
          pppppppuVar27 = local_40;
          local_60 = *(uint ********)(plVar5 + 3);
          local_5c = *(uint *)((int)plVar5 + 0x1c);
          local_58 = *(uint ********)(plVar5 + 4);
          local_7c = local_3c;
          local_80 = local_40;
          local_78 = local_38;
          FUN_019ac248(&local_40,&local_80,&local_60);
          *(uint ********)(plVar5 + 3) = pppppppuVar27;
          *(uint *)((int)plVar5 + 0x1c) = uVar6;
          *(uint ********)(plVar5 + 4) = pppppppuVar3;
          uVar6 = *puVar17;
          iVar9 = *(int *)((int)plVar5 + 0x14);
          lVar2 = ZEXT48(local_38) * 1000000000 + CONCAT44(local_34 * 1000000000,local_30) + *plVar5
          ;
          if (((uint)local_40 & 1) != 0) {
            lVar2 = *plVar5;
          }
          *plVar5 = lVar2;
        }
        *puVar17 = uVar6 + 1;
        *(uint *)((int)plVar5 + 0x14) = iVar9 + (uint)(0xfffffffe < uVar6);
      }
      if ((*(byte *)((int)param_1 + 0x8f5) & 2) == 0) {
        FUN_01ac2a34((int)uVar25,uVar8);
        FUN_01ab4580(&local_b0);
      }
      else {
        local_4c = (uint *******)pppppppuVar26[0xc];
        local_94 = (uint *******)local_4c[9];
        local_90 = local_4c[10];
        local_64 = &local_9c;
        local_84 = &DAT_01c24094;
        local_8c = &local_80;
        local_6c = (uint *******)&local_8c;
        local_50 = (uint *******)&local_6c;
        local_70 = 0;
        local_5c = 0;
        local_98 = 1;
        local_9c = &DAT_01d2f7e0;
        local_88 = &DAT_01d2f0e8;
        local_7c = 1;
        local_80 = (uint *******)&DAT_01d2f7e0;
        local_68 = 1;
        local_60 = (uint *******)0x2;
        local_78 = local_94;
        local_74 = local_90;
        local_58 = pppppppuVar19;
        local_54 = uVar20;
        FUN_01ac2a34((int)uVar25,uVar8);
        local_38 = local_b0;
        local_34 = uStack_ac;
        local_30 = pppppppuStack_a8;
        local_2c = local_a4;
        local_40 = pppppppuVar16;
        local_3c = uVar21;
        FUN_01ab4580(&local_38);
        local_44 = &local_60;
        local_2c = (uint *******)&local_44;
        local_30 = &local_48;
        local_48 = (uint ******)(param_1 + 0x224);
        local_40 = pppppppuVar16;
        local_3c = uVar21;
        local_38 = pppppppuVar14;
        FUN_01208308(&local_40);
      }
      goto LAB_01212100;
    }
  }
  FUN_01ab4580();
LAB_0121267c:
                    /* WARNING: Subroutine does not return */
  FUN_0130739c(&DAT_00531972,0x1d,&DAT_01d2f0d8);
}

