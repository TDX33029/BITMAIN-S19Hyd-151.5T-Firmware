// FUN_00f57f8c @ 00f57f8c size=2368 calls_out=27 calls_in=0
// strings: internal error: entered unreachable code: unexpected stage | all branches are disabled and there is no else branch | boser::web::graphql::bosminer::infoopen/boser/boser/src/web/graphql/bosminer/info.rsevent open/boser/boser/src/web/graphql/bosminer/info.rs:745 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::web::graphql::bosminer::infoopen/boser/boser/src/web/graphql/bosminer/info.rsevent open/boser/boser/src/web/graphql/bosminer/info.rs:745

undefined4 FUN_00f57f8c(int param_1,undefined4 *param_2)

{
  bool bVar1;
  char *pcVar2;
  byte bVar3;
  bool bVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  bool bVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  uint *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  byte *pbVar17;
  undefined8 uVar18;
  undefined4 *local_190;
  undefined4 local_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 local_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 **local_b0;
  undefined4 local_ac;
  undefined4 *local_a8;
  undefined4 **local_a4;
  undefined4 local_a0;
  undefined4 **local_9c;
  undefined4 **local_98;
  undefined4 local_94;
  undefined4 *local_90;
  undefined4 *local_88;
  undefined4 ***local_84;
  undefined1 *local_80;
  undefined4 *local_7c;
  undefined4 ***local_78;
  undefined *local_74;
  undefined4 local_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 **local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 **ppuStack_30;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("internal error: entered unreachable code: unexpected stage",0x75,&DAT_01d2e13c);
  }
  uVar18 = FUN_019ec558(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  uVar7 = (undefined4)((ulonglong)uVar18 >> 0x20);
  puVar6 = (undefined4 *)(param_1 + 0x18);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0xc1)) {
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c19bac);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c19bac);
  case 3:
    pbVar17 = *(byte **)(param_1 + 0xa8);
    puVar11 = *(undefined4 **)(param_1 + 0xac);
    goto LAB_00f58520;
  }
  do {
    iVar8 = *(int *)(param_1 + 0xb0);
    FUN_019606b4(iVar8 + 0x98);
    DataMemoryBarrier(0xb);
    uVar16 = *(uint *)(iVar8 + 0xcc) & 0xfffffffe;
    *(uint *)(param_1 + 0xb4) = uVar16;
    if (*(int *)(iVar8 + 0x9c) != 4) {
                    /* WARNING: Could not recover jumptable at 0x00f5806c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (*(code *)(&LAB_00f58070 + *(int *)(&LAB_00f58070 + *(int *)(iVar8 + 0x9c) * 4)))();
      return uVar7;
    }
    uVar14 = *(undefined4 *)(iVar8 + 0xc4);
    uVar15 = *(undefined4 *)(iVar8 + 200);
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(iVar8 + 0xc0);
    *(undefined4 *)(param_1 + 0xa0) = uVar14;
    *(undefined4 *)(param_1 + 0xa4) = uVar15;
    *(uint *)(param_1 + 0x7c) = uVar16;
    *(undefined4 *)(param_1 + 0x78) = 4;
    *(undefined4 **)(param_1 + 0x80) = local_88;
    *(undefined4 ****)(param_1 + 0x84) = local_84;
    *(undefined1 **)(param_1 + 0x88) = local_80;
    *(undefined4 **)(param_1 + 0x8c) = local_7c;
    *(undefined4 *)(param_1 + 0x90) = local_58;
    *(int *)(param_1 + 0x94) = iStack_54;
    *(undefined4 *)(param_1 + 0x98) = uStack_50;
    FUN_00b92330(iVar8 + 0x98);
    if (*(int *)(param_1 + 0x78) != 4) {
                    /* WARNING: Could not recover jumptable at 0x00f582cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (*(code *)(&DAT_00f582d0 + *(int *)(&DAT_00f582d0 + *(int *)(param_1 + 0x78) * 4)))();
      return uVar7;
    }
    local_d8 = 0;
    local_d4 = CONCAT31(local_d4._1_3_,1);
    uVar16 = *(uint *)(*(int *)(param_1 + 0xb8) + 0x80);
    DataMemoryBarrier(0xb);
    do {
      if ((uVar16 & 1) != 0) {
        local_190 = (undefined4 *)0x0;
        puVar6 = (undefined4 *)((uint)&local_d8 | 4);
        local_18c = *puVar6;
        uStack_188 = puVar6[1];
        uStack_184 = puVar6[2];
        uStack_180 = puVar6[3];
        local_17c = puVar6[4];
        uStack_178 = puVar6[5];
        uStack_174 = puVar6[6];
        uStack_170 = puVar6[7];
        uStack_16c = puVar6[8];
        if ((DAT_01d50f88 < 4) &&
           (((DAT_01d4c698 - 1 < 2 ||
             ((DAT_01d4c698 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4c690), cVar5 != '\0')))) &&
            (iVar8 = FUN_01aaa278(DAT_01d4c690), iVar8 != 0)))) {
          iStack_68 = *(int *)(DAT_01d4c690 + 0x20);
          if (iStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c19bbc);
          }
          uStack_64 = *(undefined4 *)(DAT_01d4c690 + 0x24);
          local_60 = *(undefined4 *)(DAT_01d4c690 + 0x28);
          local_a8 = (undefined4 *)(DAT_01d4c690 + 0x1c);
          local_6c = *local_a8;
          local_5c = 0;
          local_a0 = 0x37;
          local_a4 = (undefined4 **)&DAT_003f2fdb;
          if (iStack_68 == 1) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c19bbc);
          }
          local_78 = &local_9c;
          local_84 = &local_a4;
          local_88 = &local_6c;
          local_b0 = &local_88;
          local_48 = 1;
          local_ac = 2;
          local_74 = &DAT_01c19bcc;
          local_80 = &DAT_01d2ea4c;
          local_9c = &local_190;
          local_7c = &local_58;
          local_58 = local_6c;
          iStack_54 = iStack_68;
          uStack_50 = uStack_64;
          local_4c = local_60;
          FUN_01aaaecc(DAT_01d4c690,&local_b0);
          iVar8 = DAT_01d4c690;
          if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
            local_3c = *(undefined4 *)(DAT_01d4c690 + 0x14);
            local_38 = *(undefined4 **)(DAT_01d4c690 + 0x18);
            local_40 = (undefined4 **)0x2;
            DataMemoryBarrier(0xb);
            puVar6 = DAT_01d4edc8;
            pcVar2 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar6 = &DAT_01cfc5e0;
              pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar12 = (*(code *)puVar6[3])(pcVar2,&local_40);
            if (iVar12 != 0) {
              ppuStack_30 = local_40;
              uStack_2c = local_3c;
              puStack_28 = local_38;
              FUN_01aaa328(iVar8,pcVar2,puVar6[4],&ppuStack_30,&local_b0);
            }
          }
        }
        else {
          iVar8 = DAT_01d4c690;
          if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
            local_94 = *(undefined4 *)(DAT_01d4c690 + 0x14);
            local_90 = *(undefined4 **)(DAT_01d4c690 + 0x18);
            local_98 = (undefined4 **)0x2;
            DataMemoryBarrier(0xb);
            puVar6 = DAT_01d4edc8;
            pcVar2 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar6 = &DAT_01cfc5e0;
              pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar12 = (*(code *)puVar6[3])(pcVar2,&local_98);
            if (iVar12 != 0) {
              local_38 = (undefined4 *)(DAT_01d4c690 + 0x1c);
              local_6c = *local_38;
              iStack_68 = *(int *)(DAT_01d4c690 + 0x20);
              if (iStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c19bbc);
              }
              uStack_64 = *(undefined4 *)(DAT_01d4c690 + 0x24);
              local_60 = *(undefined4 *)(DAT_01d4c690 + 0x28);
              local_5c = 0;
              local_ac = 0x37;
              local_b0 = (undefined4 **)&DAT_003f2fdb;
              if (iStack_68 == 1) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c19bbc);
              }
              local_78 = &local_a4;
              local_84 = &local_b0;
              local_88 = &local_6c;
              local_40 = &local_88;
              local_48 = 1;
              local_3c = 2;
              local_80 = &DAT_01d2ea4c;
              local_74 = &DAT_01c19bcc;
              ppuStack_30 = local_98;
              uStack_2c = local_94;
              puStack_28 = local_90;
              local_a4 = &local_190;
              local_7c = &local_58;
              local_58 = local_6c;
              iStack_54 = iStack_68;
              uStack_50 = uStack_64;
              local_4c = local_60;
              FUN_01aaa328(iVar8,pcVar2,puVar6[4],&ppuStack_30,&local_40);
            }
          }
        }
        if (1 < (int)local_190 - 1U) {
          FUN_00f58dd0(&local_18c);
        }
        goto LAB_00f58a74;
      }
      if (uVar16 + 2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0197a954();
      }
      puVar13 = (uint *)(*(int *)(param_1 + 0xb8) + 0x80);
      uVar10 = *puVar13;
      if (uVar10 == uVar16) {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar13);
          if (bVar1) {
            *puVar13 = uVar16 + 2;
            bVar1 = true;
            uVar16 = uVar10;
            goto LAB_00f583d4;
          }
          uVar10 = *puVar13;
        } while (uVar10 == uVar16);
      }
      bVar1 = false;
      ClearExclusiveLocal();
      uVar16 = uVar10;
LAB_00f583d4:
      DataMemoryBarrier(0xb);
    } while (!bVar1);
    iVar8 = *(int *)(param_1 + 0xb8);
    puVar13 = (uint *)(iVar8 + 0x24);
    do {
      uVar16 = *puVar13;
      bVar1 = (bool)hasExclusiveAccess(puVar13);
    } while (!bVar1);
    *puVar13 = uVar16 + 1;
    DataMemoryBarrier(0xb);
    iVar12 = FUN_011dfa30(iVar8 + 0x20,uVar16);
    puVar11 = (undefined4 *)(iVar12 + (uVar16 & 0xf) * 0x28);
    *puVar11 = local_d8;
    puVar11[1] = local_d4;
    puVar11[2] = uStack_d0;
    puVar11[3] = uStack_cc;
    puVar11[4] = uStack_c8;
    puVar13 = (uint *)(iVar12 + 0x288);
    puVar11[5] = local_c4;
    puVar11[6] = uStack_c0;
    puVar11[7] = uStack_bc;
    puVar11[8] = uStack_b8;
    puVar11[9] = uStack_b4;
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar13);
    } while (!bVar1);
    *puVar13 = *puVar13 | 1 << (uVar16 & 0xf);
    puVar13 = (uint *)(iVar8 + 0x48);
    DataMemoryBarrier(0xb);
    do {
      uVar16 = *puVar13;
      bVar1 = (bool)hasExclusiveAccess(puVar13);
    } while (!bVar1);
    *puVar13 = uVar16 | 2;
    DataMemoryBarrier(0xb);
    if (uVar16 == 0) {
      iVar12 = *(int *)(iVar8 + 0x40);
      *(undefined4 *)(iVar8 + 0x40) = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar13);
      } while (!bVar1);
      *puVar13 = 0;
      if (iVar12 != 0) {
        (**(code **)(iVar12 + 4))(*(undefined4 *)(iVar8 + 0x44));
      }
    }
    pbVar17 = (byte *)(param_1 + 0xc0);
    *pbVar17 = 0;
    iVar8 = *(int *)(param_1 + 0xbc);
    uVar16 = *(uint *)(iVar8 + 8);
    DataMemoryBarrier(0xb);
    *(int **)(param_1 + 0x18) = (int *)(param_1 + 0xb0);
    *(undefined4 **)(param_1 + 0xac) = puVar6;
    *(undefined1 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined1 *)(param_1 + 0x50) = 0;
    *(int **)(param_1 + 0x54) = (int *)(param_1 + 0xbc);
    *(int *)(param_1 + 0x58) = iVar8 + 8;
    *(uint *)(param_1 + 0x5c) = uVar16 >> 2;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(byte **)(param_1 + 0xa8) = pbVar17;
    puVar11 = puVar6;
LAB_00f58520:
    bVar3 = FUN_019ec70c();
    if ((bVar3 != 2) && ((bVar3 & 1) == 0)) {
      FUN_019ece98(*param_2,param_2[1]);
LAB_00f586ac:
      *(undefined1 *)(param_1 + 0xc1) = 3;
      FUN_019ec558((int)uVar18,uVar7);
      return 1;
    }
    iVar8 = FUN_019f8914(2);
    bVar9 = false;
    iVar12 = 0;
    bVar1 = true;
    do {
      bVar4 = bVar1;
      if ((iVar12 + iVar8 & 1U) == 0) {
        if ((*pbVar17 & 1) == 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(*(undefined1 *)(puVar11 + 0xe)) {
          case 0:
            iVar12 = *(int *)*puVar11;
            *(undefined1 *)((int)puVar11 + 0x15) = 0;
            puVar11[3] = iVar12 + 8;
            puVar11[4] = (int *)*puVar11 + 1;
            break;
          case 1:
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01d28cb4);
          case 2:
                    /* WARNING: Subroutine does not return */
            FUN_01307a10(&DAT_01d28cb4);
          }
          uVar16 = FUN_00f7f3a0(puVar11 + 1,param_2);
          uVar16 = uVar16 & 0xff;
          if (uVar16 != 2) {
            if (*(char *)((int)puVar11 + 0x15) == '\x04') {
              FUN_019ede44(puVar11 + 6);
              *(undefined1 *)(puVar11 + 5) = 0;
            }
            bVar3 = 1;
            *(undefined1 *)(puVar11 + 0xe) = 1;
            goto LAB_00f58644;
          }
          *(undefined1 *)(puVar11 + 0xe) = 3;
          bVar9 = true;
        }
      }
      else if ((*pbVar17 & 2) == 0) {
        iVar12 = FUN_01a3be00(puVar11 + 0xf,param_2);
        bVar9 = true;
        if (iVar12 == 0) {
          bVar3 = 2;
          uVar16 = 2;
LAB_00f58644:
          *pbVar17 = *pbVar17 | bVar3;
          goto LAB_00f58650;
        }
      }
      iVar12 = 1;
      bVar1 = false;
    } while (bVar4);
    uVar16 = 3;
    if (bVar9) goto LAB_00f586ac;
LAB_00f58650:
    FUN_00f2a48c(puVar6);
    iVar8 = uVar16 - 1;
    if (uVar16 == 0 || iVar8 == 0) {
      iVar8 = 0;
    }
    if (iVar8 != 0) {
      if (iVar8 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100("all branches are disabled and there is no else branch",0x6b,&DAT_01c19bdc);
      }
LAB_00f58a74:
      if ((4 < *(uint *)(param_1 + 0x78)) ||
         ((1 << (*(uint *)(param_1 + 0x78) & 0xff) & 0x16U) == 0)) {
        FUN_00963164(param_1 + 0x7c);
      }
      FUN_00d315e0(param_1 + 0xb0);
      FUN_00d31680(param_1 + 0xb8);
      FUN_005faf6c(param_1 + 0xbc);
      *(undefined1 *)(param_1 + 0xc1) = 1;
      FUN_019ec558((int)uVar18,uVar7);
      local_190 = (undefined4 *)0x2;
      FUN_00f31bdc(param_1,&local_190);
      return 0;
    }
    if ((uVar16 & 1) != 0) goto LAB_00f58a74;
    if ((4 < *(uint *)(param_1 + 0x78)) || ((1 << (*(uint *)(param_1 + 0x78) & 0xff) & 0x16U) == 0))
    {
      FUN_00963164(param_1 + 0x7c);
    }
  } while( true );
}

