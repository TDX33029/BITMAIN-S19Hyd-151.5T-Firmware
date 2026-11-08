// FUN_019ed154 @ 019ed154 size=1480 calls_out=11 calls_in=2
// strings: mark_pending called when the timer entry is in an invalid stateThe Tokio context thread-local variable has been destroyed.there is no reactor running; must be called from the context of a Tokio 1.x runtime

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_019ed154(char *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  char *pcVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  uint *puVar5;
  uint extraout_r1;
  undefined4 *puVar6;
  int *piVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  undefined *puVar14;
  uint uVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined4 local_16c;
  uint local_150;
  int aiStack_144 [67];
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  aiStack_144[0x40] = 0;
  if (*param_1 == '\0') {
    bVar8 = (bool)hasExclusiveAccess(param_1);
    if (bVar8) {
      *param_1 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_019ed1a0;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(param_1);
LAB_019ed1a0:
  FUN_0165098c(param_1);
  puVar3 = (uint *)(param_1 + 0x10);
  uVar9 = *(uint *)(param_1 + 0x14);
  uVar13 = *puVar3;
  if (uVar9 <= param_4 && (uint)(param_3 <= *puVar3) <= uVar9 - param_4) {
    uVar9 = param_4;
    uVar13 = param_3;
  }
  pcVar1 = param_1 + 0x18;
  local_150 = 0xfffffffe;
LAB_019ed200:
  do {
    piVar4 = *(int **)(param_1 + 0x1c);
    if (piVar4 == (int *)0x0) {
      FUN_019e1c0c(aiStack_144 + 0x41,puVar3);
      uVar2 = local_34;
      uVar12 = local_38;
      uVar18 = extraout_r1;
      if (((aiStack_144[0x41] & 1U) != 0) &&
         (uVar18 = local_34, !(uVar9 <= local_34 && (uint)(local_38 <= uVar13) <= uVar9 - local_34))
         ) {
        local_16c = 6;
        if (5 < local_30) {
          puVar14 = &DAT_01d2907c;
          local_2c = local_30;
          goto LAB_019ed6dc;
        }
        uVar15 = local_2c & 0x3f;
        iVar10 = *(int *)(param_1 + 0x20) + local_30 * 0x210;
        uVar20 = uVar15 - 0x20;
        uVar18 = 1 << uVar15;
        if (-1 < (int)uVar20) {
          uVar18 = 0;
        }
        uVar15 = 1 >> (0x20 - uVar15 & 0xff);
        if (-1 < (int)uVar20) {
          uVar15 = 1 << (uVar20 & 0xff);
        }
        *(uint *)(iVar10 + 0x200) = *(uint *)(iVar10 + 0x200) & ~uVar18;
        *(uint *)(iVar10 + 0x204) = *(uint *)(iVar10 + 0x204) & ~uVar15;
        if (0x3f < local_2c) {
          local_16c = 0x40;
          puVar14 = &DAT_01d29918;
          goto LAB_019ed6dc;
        }
        puVar11 = (undefined4 *)(iVar10 + local_2c * 8);
        *puVar11 = 0;
        puVar6 = (undefined4 *)puVar11[1];
        puVar11[1] = 0;
LAB_019ed2bc:
        while (puVar6 != (undefined4 *)0x0) {
          puVar11 = (undefined4 *)*puVar6;
          if (puVar11 != (undefined4 *)0x0) {
            puVar11[1] = 0;
          }
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar5 = puVar6 + 4;
          ClearExclusiveLocal();
          uVar18 = *puVar5;
          uVar15 = puVar6[5];
          while( true ) {
            if (uVar15 + 1 < (uint)(0xfffffffd < uVar18)) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb100("mark_pending called when the timer entry is in an invalid stateThe Tokio context thread-local variable has been destroyed.there is no reactor running, must be called from the context of a Tokio 1.x runtime"
                           ,0x7f,&DAT_01d298f8);
            }
            if (uVar2 <= uVar15 && (uint)(uVar18 <= uVar12) <= uVar2 - uVar15) break;
            uVar20 = *puVar5;
            uVar19 = puVar6[5];
            if (uVar20 == uVar18 && uVar19 == uVar15) {
              DataMemoryBarrier(0xb);
              bVar8 = (bool)hasExclusiveAccess(puVar5);
              if (bVar8) {
                *puVar5 = 0xfffffffe;
                puVar6[5] = 0xffffffff;
              }
            }
            else {
              bVar8 = false;
              ClearExclusiveLocal();
            }
            DataMemoryBarrier(0xb);
            uVar18 = uVar20;
            uVar15 = uVar19;
            if (bVar8) goto code_r0x019ed360;
          }
          puVar5 = puVar6 + 2;
          do {
            bVar8 = (bool)hasExclusiveAccess(puVar5);
          } while (!bVar8);
          *puVar5 = uVar18;
          puVar6[3] = uVar15;
          uVar15 = uVar15 ^ uVar2;
          uVar18 = uVar18 ^ uVar12 | 0x3f;
          if (0xf < uVar15 || uVar15 - 0xf < (uint)(0xfffffffd < uVar18)) {
            uVar15 = 0xf;
            uVar18 = local_150;
          }
          uVar18 = LZCOUNT(uVar18) | 0x20;
          if (uVar15 != 0) {
            uVar18 = LZCOUNT(uVar15);
          }
          uVar15 = (uVar18 ^ 0x3e) / 6;
          if (0x23 < (uVar18 ^ 0x3e)) {
            puVar14 = &DAT_01d2908c;
            local_2c = uVar15;
            goto LAB_019ed6dc;
          }
          ClearExclusiveLocal();
          iVar10 = *(int *)(param_1 + 0x20) + (uVar15 | uVar15 << 5) * 0x10;
          uVar15 = *(int *)(iVar10 + 0x208) * 6 & 0x3e;
          uVar18 = *puVar5 >> uVar15 | puVar6[3] << (0x20 - uVar15 & 0xff);
          if (-1 < (int)(uVar15 - 0x20)) {
            uVar18 = (uint)puVar6[3] >> (uVar15 - 0x20 & 0xff);
          }
          uVar18 = uVar18 & 0x3f;
          FUN_019e0740(iVar10 + uVar18 * 8);
          uVar15 = 1 << uVar18;
          uVar20 = uVar18 - 0x20;
          if (-1 < (int)uVar20) {
            uVar15 = 0;
          }
          *(uint *)(iVar10 + 0x200) = uVar15 | *(uint *)(iVar10 + 0x200);
          uVar18 = 1 >> (0x20 - uVar18 & 0xff);
          if (-1 < (int)uVar20) {
            uVar18 = 1 << (uVar20 & 0xff);
          }
          *(uint *)(iVar10 + 0x204) = uVar18 | *(uint *)(iVar10 + 0x204);
          puVar6 = puVar11;
        }
        FUN_019e1e14(puVar3,0,uVar12,uVar2);
        goto LAB_019ed200;
      }
      FUN_019e1e14(puVar3,uVar18,uVar13,uVar9);
      piVar4 = *(int **)(param_1 + 0x1c);
      if (piVar4 == (int *)0x0) {
        FUN_019e1c0c(aiStack_144 + 0x41,puVar3);
        uVar13 = 1;
        if (1 < local_38) {
          uVar13 = local_38;
        }
        if (local_34 != 0) {
          uVar13 = local_38;
        }
        if ((aiStack_144[0x41] & 1U) == 0) {
          uVar13 = 0;
          local_34 = 0;
        }
        *(uint *)(param_1 + 8) = uVar13;
        *(uint *)(param_1 + 0xc) = local_34;
        FUN_01650a90(param_1);
        if (*param_1 != '\x01') goto LAB_019ed6ac;
        DataMemoryBarrier(0xb);
        goto LAB_019ed694;
      }
    }
    iVar10 = *piVar4;
    *(int *)(param_1 + 0x1c) = iVar10;
    if (iVar10 == 0) {
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
    }
    else {
      *(undefined4 *)(iVar10 + 4) = 0;
    }
    piVar7 = piVar4 + 4;
    *piVar4 = 0;
    piVar4[1] = 0;
    ClearExclusiveLocal();
    if (*piVar7 != -1 || piVar4[5] != -1) {
      *(undefined1 *)(piVar4 + 9) = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar8 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar8);
      *piVar7 = -1;
      piVar4[5] = -1;
      puVar5 = (uint *)(piVar4 + 8);
      DataMemoryBarrier(0xb);
      do {
        uVar12 = *puVar5;
        bVar8 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar8);
      *puVar5 = uVar12 | 2;
      DataMemoryBarrier(0xb);
      if (uVar12 == 0) {
        iVar10 = piVar4[6];
        iVar17 = piVar4[7];
        piVar4[6] = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar8 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar8);
        *puVar5 = 0;
        if (iVar10 != 0) {
          if (0x1f < (uint)aiStack_144[0x40]) {
            local_16c = 0x20;
            puVar14 = &DAT_01d28cc4;
            local_2c = aiStack_144[0x40];
LAB_019ed6dc:
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(local_2c,local_16c,puVar14);
          }
          aiStack_144[aiStack_144[0x40] * 2] = iVar10;
          aiStack_144[aiStack_144[0x40] * 2 + 1] = iVar17;
          aiStack_144[0x40] = aiStack_144[0x40] + 1;
          if (0x1f < (uint)aiStack_144[0x40]) {
            FUN_01650a90(param_1);
            if (*param_1 == '\x01') {
              DataMemoryBarrier(0xb);
              do {
                bVar8 = (bool)hasExclusiveAccess(param_1);
                if (bVar8) {
                  *param_1 = '\0';
                  goto LAB_019ed5c0;
                }
              } while (*param_1 == '\x01');
            }
            ClearExclusiveLocal();
            FUN_0164f86c(param_1);
LAB_019ed5c0:
            FUN_019d83c4(aiStack_144);
            if (*param_1 == '\0') {
              bVar8 = (bool)hasExclusiveAccess(param_1);
              if (!bVar8) goto LAB_019ed5ec;
              *param_1 = '\x01';
              DataMemoryBarrier(0xb);
            }
            else {
              ClearExclusiveLocal();
LAB_019ed5ec:
              FUN_0164fba8(param_1);
            }
            FUN_0165098c(param_1);
          }
        }
      }
    }
  } while( true );
code_r0x019ed360:
  do {
    uVar16 = puVar6[3];
    bVar8 = (bool)hasExclusiveAccess(puVar6 + 2);
  } while (!bVar8);
  puVar6[2] = 0xffffffff;
  puVar6[3] = 0xffffffff;
  FUN_019e0740(pcVar1,puVar6,0,uVar16);
  puVar6 = puVar11;
  goto LAB_019ed2bc;
  while (*param_1 == '\x01') {
LAB_019ed694:
    bVar8 = (bool)hasExclusiveAccess(param_1);
    if (bVar8) {
      *param_1 = '\0';
      goto LAB_019ed6b8;
    }
  }
LAB_019ed6ac:
  ClearExclusiveLocal();
  FUN_0164f86c(param_1);
LAB_019ed6b8:
  FUN_019d83c4(aiStack_144);
  FUN_019d8434(aiStack_144,aiStack_144[0x40]);
  return;
}

