// FUN_012cd21c @ 012cd21c size=2960 calls_out=25 calls_in=2
// strings: 

void FUN_012cd21c(uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  int **ppiVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  int **ppiVar8;
  int extraout_r2;
  int *piVar9;
  undefined1 uVar10;
  int **ppiVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  bool bVar17;
  int *local_694;
  uint local_688;
  int local_684;
  undefined1 auStack_680 [232];
  int **local_598;
  uint local_594;
  undefined1 local_590;
  uint *local_588;
  undefined1 *local_584;
  undefined1 auStack_580 [256];
  int **local_480;
  uint *local_47c;
  int **local_478;
  undefined4 *local_388;
  int **local_380;
  uint *local_37c;
  int **local_378;
  uint local_374;
  int **local_370;
  int *local_368;
  undefined4 local_358;
  undefined1 auStack_354 [252];
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  int *local_248;
  uint local_244;
  uint local_228 [64];
  int *local_128 [64];
  undefined1 uStack_25;
  
  puVar3 = (uint *)thunk_FUN_01be5118(0xa000);
  if (puVar3 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(8,0xa000);
  }
  puVar6 = (undefined4 *)((uint)&local_380 | 0x10);
  iVar13 = 0;
  local_478 = (int **)0x0;
  local_480 = (int **)0x400;
  local_47c = puVar3;
  do {
    ppiVar8 = local_478;
    bVar17 = local_478 < (int **)0x400;
    ppiVar4 = local_478 + -0x100;
    if (local_478 == local_480) {
      FUN_007193b0(&local_480);
      puVar3 = local_47c;
    }
    local_478 = (int **)((int)ppiVar8 + 1);
    puVar7 = (undefined1 *)((int)puVar3 + iVar13);
    *puVar7 = 0;
    iVar13 = iVar13 + 0x28;
    *(uint *)(puVar7 + 0xc) = -(uint)bVar17;
    *(int ***)(puVar7 + 8) = ppiVar4;
    puVar7[0x27] = 3;
    *(undefined4 *)(puVar7 + 0x10) = 0;
  } while (local_478 != (int **)0x400);
  local_380 = local_480;
  local_37c = local_47c;
  local_378 = local_478;
  if (((int **)0x400 < local_480) &&
     (iVar13 = FUN_01609230(&local_380,0x400,8,0x28), iVar13 != -0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620();
  }
  ppiVar8 = local_378;
  puVar3 = local_37c;
  ppiVar4 = (int **)thunk_FUN_01be5118(0x50);
  if (ppiVar4 == (int **)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x50);
  }
  ppiVar4[3] = (int *)ppiVar8;
  ppiVar8 = ppiVar4 + 0x11;
  *ppiVar8 = (int *)0x1;
  *(char *)(ppiVar4 + 4) = '\0';
  *ppiVar4 = (int *)0x1;
  ppiVar4[1] = (int *)0x1;
  ppiVar4[2] = (int *)puVar3;
  ppiVar4[6] = (int *)0x0;
  ppiVar4[7] = (int *)0x0;
  ppiVar4[8] = (int *)0x0;
  ppiVar4[9] = (int *)0x0;
  ppiVar4[0x12] = (int *)0x0;
  ppiVar4[0xe] = (int *)0x0;
  ppiVar4[0xf] = (int *)0x0;
  ppiVar4[0x10] = (int *)0x3ff;
  *(char *)(ppiVar4 + 0xd) = '\0';
  ppiVar4[0xc] = (int *)0x0;
  *(char *)(ppiVar4 + 0xb) = '\0';
  ppiVar4[10] = (int *)0x1;
  do {
    piVar5 = *ppiVar4;
    bVar17 = (bool)hasExclusiveAccess(ppiVar4);
  } while (!bVar17);
  *ppiVar4 = (int *)((int)piVar5 + 1);
  if ((int)piVar5 < 0) goto LAB_012cddac;
  local_374 = 0;
  local_378 = (int **)0x0;
  local_380 = ppiVar4;
  local_370 = ppiVar4;
  FUN_012cb72c(&local_378);
  DataMemoryBarrier(0xb);
  do {
    piVar5 = *local_370;
    bVar17 = (bool)hasExclusiveAccess(local_370);
  } while (!bVar17);
  *local_370 = (int *)((int)piVar5 + -1);
  if (piVar5 == (int *)0x1) {
    DataMemoryBarrier(0xb);
    FUN_01a384d0(local_370);
  }
  FUN_01a3c2e0(param_1);
  do {
    piVar5 = *ppiVar4;
    bVar17 = (bool)hasExclusiveAccess(ppiVar4);
  } while (!bVar17);
  *ppiVar4 = (int *)((int)piVar5 + 1);
  if ((int)piVar5 < 0) goto LAB_012cddac;
  do {
    bVar17 = (bool)hasExclusiveAccess(ppiVar8);
  } while (!bVar17);
  *ppiVar8 = (int *)((int)*ppiVar8 + 1);
  do {
    do {
      iVar13 = DAT_01d50474;
      local_688 = DAT_01d50470;
      local_684 = DAT_01d50474;
      uVar12 = DAT_01d50470 + 1;
      iVar14 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
      bVar17 = (bool)hasExclusiveAccess(0x1d50470);
    } while (!bVar17);
    bVar17 = DAT_01d50470 == 0;
    bVar2 = DAT_01d50474 == 0;
    DAT_01d50470 = uVar12;
    DAT_01d50474 = iVar14;
  } while (bVar17 && bVar2);
  local_584 = &uStack_25;
  local_588 = &local_688;
  local_590 = 0;
  iVar13 = thunk_FUN_01bee35a(0,iVar13,0x20);
  puVar3 = (uint *)(iVar13 + extraout_r2);
  local_598 = ppiVar4;
  local_594 = param_1;
  if ((char)puVar3[0xe] == '\x01') {
LAB_012cd4dc:
    FUN_01bed4e2(auStack_580,auStack_680,0x100);
    if (0x7ffffffe < *puVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_0130701c(&DAT_01d2e14c);
    }
    *puVar3 = *puVar3 + 1;
    uVar12 = puVar3[1];
    FUN_01bed4e2(&local_480,auStack_680,0x100);
    if (uVar12 != 2) {
      ppiVar8 = (int **)*local_388;
      piVar5 = (int *)local_388[1];
      if ((uVar12 & 1) == 0) {
        piVar16 = (int *)puVar3[2];
        do {
          iVar13 = *piVar16;
          bVar17 = (bool)hasExclusiveAccess(piVar16);
        } while (!bVar17);
        *piVar16 = iVar13 + 1;
        if (iVar13 < 0) goto LAB_012cddac;
        piVar15 = (int *)piVar16[0x82];
        uVar12 = param_1;
        if (piVar15 != (int *)0x0) {
          do {
            iVar13 = *piVar15;
            bVar17 = (bool)hasExclusiveAccess(piVar15);
          } while (!bVar17);
          *piVar15 = iVar13 + 1;
          if (iVar13 < 0) goto LAB_012cddac;
          uVar12 = piVar16[0x83];
        }
        FUN_01bed4e2((uint)local_128 | 4,auStack_680,0xf8);
        FUN_01bed4e2(local_228,local_128,0xfc);
        local_358 = 0;
        FUN_01bed4e2(auStack_354,local_228,0xfc);
        local_378 = (int **)&PTR_LAB_01ce2d2c;
        local_380 = (int **)0xcc;
        puVar6[4] = ppiVar8;
        puVar6[5] = piVar5;
        *puVar6 = 0;
        puVar6[1] = 0;
        local_37c = (uint *)0x0;
        local_250 = 0;
        local_254 = 0;
        local_258 = 0;
        local_128[0] = (int *)0x0;
        local_368 = piVar16;
        local_248 = piVar15;
        local_244 = uVar12;
        iVar13 = FUN_01be5878(local_128,0x20,0x140);
        piVar15 = local_128[0];
        local_694 = (int *)0x0;
        if (iVar13 == 0) {
          local_694 = local_128[0];
        }
        if (local_694 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(0x20,0x140);
        }
        FUN_01bed4e2(local_128[0],&local_380,0x140);
        iVar13 = piVar16[0x47];
        piVar15[4] = piVar16[0x46];
        piVar15[5] = iVar13;
        uVar12 = *(uint *)((int)piVar15 + *(int *)(piVar15[2] + 0x24));
        ppiVar11 = (int **)(piVar16[0x40] + (piVar16[0x45] & uVar12) * 0xc);
        if (*(char *)ppiVar11 == '\0') {
          bVar17 = (bool)hasExclusiveAccess(ppiVar11);
          if (!bVar17) goto LAB_012cd8e4;
          *(char *)ppiVar11 = '\x01';
          DataMemoryBarrier(0xb);
        }
        else {
          ClearExclusiveLocal();
LAB_012cd8e4:
          FUN_0164fba8(ppiVar11);
        }
        FUN_0165098c(ppiVar11);
        DataMemoryBarrier(0xb);
        if ((char)piVar16[0x48] == '\0') {
          local_378 = (int **)(piVar16 + 0x44);
          local_37c = (uint *)(piVar16 + 0x42);
          local_228[0] = *(uint *)((int)piVar15 + *(int *)(piVar15[2] + 0x24));
          local_380 = ppiVar11;
          local_374 = uVar12;
          if (uVar12 != local_228[0]) {
                    /* WARNING: Subroutine does not return */
            FUN_01304210(0,local_228,&local_374,0);
          }
          piVar9 = ppiVar11[1];
          local_128[0] = local_694;
          if (local_694 == piVar9) {
            FUN_012ccb88(ppiVar11 + 1,local_128);
            goto LAB_012cddac;
          }
          *(int **)((int)piVar15 + *(int *)(piVar15[2] + 0x1c) + 4) = piVar9;
          *(undefined4 *)((int)piVar15 + *(int *)(piVar15[2] + 0x1c)) = 0;
          if (piVar9 != (int *)0x0) {
            *(int **)((int)piVar9 + *(int *)(piVar9[2] + 0x1c)) = local_694;
          }
          ppiVar11[1] = local_694;
          if (ppiVar11[2] == (int *)0x0) {
            ppiVar11[2] = local_694;
          }
          do {
            uVar12 = *local_37c;
            bVar17 = (bool)hasExclusiveAccess(local_37c);
          } while (!bVar17);
          *local_37c = uVar12 + 1;
          piVar16[0x43] = piVar16[0x43] + (uint)(0xfffffffe < uVar12);
          do {
            bVar17 = (bool)hasExclusiveAccess(local_378);
          } while (!bVar17);
          *local_378 = (int *)((int)*local_378 + 1);
          FUN_01650a90(ppiVar11);
          piVar15 = local_694;
          if (*(char *)ppiVar11 == '\x01') {
            DataMemoryBarrier(0xb);
            do {
              bVar17 = (bool)hasExclusiveAccess(ppiVar11);
              if (bVar17) {
                *(char *)ppiVar11 = '\0';
                goto LAB_012cdbfc;
              }
            } while (*(char *)ppiVar11 == '\x01');
          }
          ClearExclusiveLocal();
          FUN_0164f86c(ppiVar11);
        }
        else {
          FUN_01650a90(ppiVar11);
          if (*(char *)ppiVar11 == '\x01') {
            DataMemoryBarrier(0xb);
            do {
              bVar17 = (bool)hasExclusiveAccess(ppiVar11);
              if (bVar17) {
                *(char *)ppiVar11 = '\0';
                goto LAB_012cd94c;
              }
            } while (*(char *)ppiVar11 == '\x01');
          }
          ClearExclusiveLocal();
          FUN_0164f86c(ppiVar11);
LAB_012cd94c:
          (**(code **)(piVar15[2] + 0x18))();
          FUN_019d8858(piVar15);
          piVar15 = (int *)0x0;
        }
LAB_012cdbfc:
        local_380 = ppiVar8;
        local_37c = (uint *)piVar5;
        if (piVar16[0x80] != 0) {
          (**(code **)(piVar16[0x81] + 0x14))
                    (piVar16[0x80] + (*(int *)(piVar16[0x81] + 8) - 1U & 0xfffffff8) + 8,&local_380)
          ;
        }
        if (piVar15 != (int *)0x0) {
          FUN_019dc904(puVar3[2],piVar15);
        }
      }
      else {
        piVar16 = (int *)puVar3[2];
        do {
          iVar13 = *piVar16;
          bVar17 = (bool)hasExclusiveAccess(piVar16);
        } while (!bVar17);
        *piVar16 = iVar13 + 1;
        if (iVar13 < 0) goto LAB_012cddac;
        piVar15 = (int *)piVar16[0x50];
        uVar12 = param_1;
        if (piVar15 != (int *)0x0) {
          do {
            iVar13 = *piVar15;
            bVar17 = (bool)hasExclusiveAccess(piVar15);
          } while (!bVar17);
          *piVar15 = iVar13 + 1;
          if (iVar13 < 0) goto LAB_012cddac;
          uVar12 = piVar16[0x51];
        }
        FUN_01bed4e2((uint)local_128 | 4,auStack_680,0xf8);
        FUN_01bed4e2(local_228,local_128,0xfc);
        local_358 = 0;
        FUN_01bed4e2(auStack_354,local_228,0xfc);
        local_378 = (int **)&PTR_LAB_01ce2d54;
        local_380 = (int **)0xcc;
        puVar6[4] = ppiVar8;
        puVar6[5] = piVar5;
        *puVar6 = 0;
        puVar6[1] = 0;
        local_37c = (uint *)0x0;
        local_250 = 0;
        local_254 = 0;
        local_258 = 0;
        local_128[0] = (int *)0x0;
        local_368 = piVar16;
        local_248 = piVar15;
        local_244 = uVar12;
        iVar13 = FUN_01be5878(local_128,0x20,0x140);
        piVar15 = local_128[0];
        local_694 = (int *)0x0;
        if (iVar13 == 0) {
          local_694 = local_128[0];
        }
        if (local_694 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(0x20,0x140);
        }
        FUN_01bed4e2(local_128[0],&local_380,0x140);
        iVar13 = piVar16[0x1b];
        piVar15[4] = piVar16[0x1a];
        piVar15[5] = iVar13;
        uVar12 = *(uint *)((int)piVar15 + *(int *)(piVar15[2] + 0x24));
        ppiVar11 = (int **)(piVar16[0x14] + (piVar16[0x19] & uVar12) * 0xc);
        if (*(char *)ppiVar11 == '\0') {
          bVar17 = (bool)hasExclusiveAccess(ppiVar11);
          if (!bVar17) goto LAB_012cd844;
          *(char *)ppiVar11 = '\x01';
          DataMemoryBarrier(0xb);
        }
        else {
          ClearExclusiveLocal();
LAB_012cd844:
          FUN_0164fba8(ppiVar11);
        }
        FUN_0165098c(ppiVar11);
        DataMemoryBarrier(0xb);
        if ((char)piVar16[0x1c] == '\0') {
          local_378 = (int **)(piVar16 + 0x18);
          local_37c = (uint *)(piVar16 + 0x16);
          local_228[0] = *(uint *)((int)piVar15 + *(int *)(piVar15[2] + 0x24));
          local_380 = ppiVar11;
          local_374 = uVar12;
          if (uVar12 != local_228[0]) {
                    /* WARNING: Subroutine does not return */
            FUN_01304210(0,local_228,&local_374,0);
          }
          piVar9 = ppiVar11[1];
          local_128[0] = local_694;
          if (local_694 == piVar9) {
            FUN_012ccb88(ppiVar11 + 1,local_128);
            goto LAB_012cddac;
          }
          *(int **)((int)piVar15 + *(int *)(piVar15[2] + 0x1c) + 4) = piVar9;
          *(undefined4 *)((int)piVar15 + *(int *)(piVar15[2] + 0x1c)) = 0;
          if (piVar9 != (int *)0x0) {
            *(int **)((int)piVar9 + *(int *)(piVar9[2] + 0x1c)) = local_694;
          }
          ppiVar11[1] = local_694;
          if (ppiVar11[2] == (int *)0x0) {
            ppiVar11[2] = local_694;
          }
          do {
            uVar12 = *local_37c;
            bVar17 = (bool)hasExclusiveAccess(local_37c);
          } while (!bVar17);
          *local_37c = uVar12 + 1;
          piVar16[0x17] = piVar16[0x17] + (uint)(0xfffffffe < uVar12);
          do {
            bVar17 = (bool)hasExclusiveAccess(local_378);
          } while (!bVar17);
          *local_378 = (int *)((int)*local_378 + 1);
          FUN_01650a90(ppiVar11);
          piVar15 = local_694;
          if (*(char *)ppiVar11 == '\x01') {
            DataMemoryBarrier(0xb);
            do {
              bVar17 = (bool)hasExclusiveAccess(ppiVar11);
              if (bVar17) {
                *(char *)ppiVar11 = '\0';
                goto LAB_012cda7c;
              }
            } while (*(char *)ppiVar11 == '\x01');
          }
          ClearExclusiveLocal();
          FUN_0164f86c(ppiVar11);
        }
        else {
          FUN_01650a90(ppiVar11);
          if (*(char *)ppiVar11 == '\x01') {
            DataMemoryBarrier(0xb);
            do {
              bVar17 = (bool)hasExclusiveAccess(ppiVar11);
              if (bVar17) {
                *(char *)ppiVar11 = '\0';
                goto LAB_012cd8a8;
              }
            } while (*(char *)ppiVar11 == '\x01');
          }
          ClearExclusiveLocal();
          FUN_0164f86c(ppiVar11);
LAB_012cd8a8:
          (**(code **)(piVar15[2] + 0x18))();
          FUN_019d8d64(piVar15);
          piVar15 = (int *)0x0;
        }
LAB_012cda7c:
        local_380 = ppiVar8;
        local_37c = (uint *)piVar5;
        if (piVar16[0x4e] != 0) {
          (**(code **)(piVar16[0x4f] + 0x14))
                    (piVar16[0x4e] + (*(int *)(piVar16[0x4f] + 8) - 1U & 0xfffffff8) + 8,&local_380)
          ;
        }
        if (piVar15 != (int *)0x0) {
          local_128[0] = (int *)((uint)local_128[0] & 0xffffff00);
          local_378 = local_128;
          local_380 = (int **)(piVar16 + 2);
          local_37c = (uint *)piVar15;
          FUN_019ee860(&local_380);
        }
      }
      *puVar3 = *puVar3 - 1;
      if (*local_694 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar17 = (bool)hasExclusiveAccess(local_694);
        if (bVar17) {
          *local_694 = 0x84;
          goto LAB_012cdca0;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      (**(code **)(local_694[2] + 0x10))();
LAB_012cdca0:
      local_37c = (uint *)0x1;
      local_380 = (int **)0x1;
      local_378 = ppiVar4;
      local_374 = param_1;
      puVar6 = (undefined4 *)thunk_FUN_01be5118(0x10);
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x10);
      }
      *puVar6 = local_380;
      puVar6[1] = local_37c;
      puVar6[2] = local_378;
      puVar6[3] = local_374;
      return;
    }
    FUN_012ccc54(&local_480);
    uVar10 = 0;
    *puVar3 = *puVar3 - 1;
  }
  else {
    if ((char)puVar3[0xe] != '\x02') {
      FUN_019a2bcc(puVar3,&LAB_019efb68);
      *(undefined1 *)(puVar3 + 0xe) = 1;
      goto LAB_012cd4dc;
    }
    uVar10 = 1;
    FUN_012ccc54(auStack_680);
  }
  local_380 = (int **)CONCAT31(local_380._1_3_,uVar10);
  FUN_012cc284(&local_380);
LAB_012cddac:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x12cddac);
  (*pcVar1)();
}

