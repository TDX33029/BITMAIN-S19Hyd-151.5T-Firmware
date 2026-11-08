// FUN_0102c440 @ 0102c440 size=1716 calls_out=11 calls_in=14
// strings: assertion failed: self.ref_count > 0

void FUN_0102c440(int *param_1)

{
  int *piVar1;
  undefined4 ***pppuVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined *puVar8;
  int *piVar9;
  int iVar10;
  undefined4 ***pppuVar11;
  undefined4 ***pppuVar12;
  uint uVar13;
  undefined4 ***pppuVar14;
  bool bVar15;
  undefined4 ****local_f4;
  undefined4 ***local_d8;
  undefined4 ***local_d4;
  undefined4 ***local_d0;
  int local_cc;
  uint local_c8;
  undefined4 **local_c4;
  int ***local_c0;
  int *local_bc;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  undefined1 auStack_ac [120];
  uint local_34;
  undefined4 **local_30;
  undefined4 ***local_2c;
  undefined4 ***local_28;
  
  iVar10 = *param_1;
  pppuVar11 = (undefined4 ***)param_1[1];
  pppuVar12 = (undefined4 ***)param_1[2];
  piVar9 = (int *)(iVar10 + 8);
  do {
    if (*piVar9 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar9);
      goto LAB_0102c470;
    }
    bVar15 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar15);
  *piVar9 = 1;
  DataMemoryBarrier(0xb);
LAB_0102c470:
  uVar13 = 0;
  if ((DAT_018dd988 & 0x7fffffff) != 0) {
    uVar13 = FUN_015bf3f8();
    uVar13 = uVar13 ^ 1;
  }
  local_c0 = (int ***)(uint)*(byte *)(iVar10 + 0xc);
  local_b8 = CONCAT31(local_b8._1_3_,(char)uVar13);
  local_bc = piVar9;
  if (local_c0 != (int ***)0x0) {
    local_c0 = (int ***)&DAT_00000001;
    if (((DAT_018dd988 & 0x7fffffff) == 0) || (iVar4 = FUN_015bf3f8(), iVar4 != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00383126,0x3f,&DAT_01882ed4);
    }
    if (((uVar13 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar4 = FUN_015bf3f8(), iVar4 == 0)) {
      *(undefined1 *)(iVar10 + 0xc) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar10 = *piVar9;
      bVar15 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar15);
    *piVar9 = 0;
    goto LAB_0102c94c;
  }
  *(int *)(iVar10 + 0x1a8) = *(int *)(iVar10 + 0x1a8) + -1;
  local_d8 = pppuVar11;
  local_d4 = pppuVar12;
  if (((pppuVar11 < *(undefined4 ****)(iVar10 + 0x198)) &&
      (piVar1 = (int *)(*(int *)(iVar10 + 0x194) + (int)pppuVar11 * 0xf8),
      *piVar1 != 3 || piVar1[1] != 0)) && ((undefined4 ***)piVar1[0x35] == pppuVar12)) {
    if (piVar1[0x36] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: self.ref_count > 0",0x24,&DAT_01882c70);
    }
    piVar1[0x36] = piVar1[0x36] + -1;
    pppuVar2 = *(undefined4 ****)(iVar10 + 0x198);
    if (((pppuVar11 < pppuVar2) &&
        (piVar1 = (int *)(*(int *)(iVar10 + 0x194) + (int)pppuVar11 * 0xf8),
        *piVar1 != 3 || piVar1[1] != 0)) && ((undefined4 ***)piVar1[0x35] == pppuVar12)) {
      if ((piVar1[0x36] == 0) && (*(byte *)(piVar1 + 8) < 6)) {
        iVar4 = piVar1[0x1b];
        bVar15 = iVar4 == 0;
        if (bVar15) {
          iVar4 = piVar1[0x38];
        }
        if (bVar15 && iVar4 == 0) {
          iVar4 = *(int *)(iVar10 + 0xe8);
          *(undefined4 *)(iVar10 + 0xe8) = 0;
          if (iVar4 != 0) {
            (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar10 + 0xec));
            pppuVar2 = *(undefined4 ****)(iVar10 + 0x198);
          }
        }
      }
      pppuVar14 = (undefined4 ***)(iVar10 + 0x160);
      local_f4 = &local_2c;
      local_d8 = pppuVar14;
      local_d4 = pppuVar11;
      local_d0 = pppuVar12;
      if (((pppuVar11 < pppuVar2) &&
          (piVar1 = (int *)(*(int *)(iVar10 + 0x194) + (int)pppuVar11 * 0xf8),
          *piVar1 != 3 || piVar1[1] != 0)) && ((undefined4 ***)piVar1[0x35] == pppuVar12)) {
        puVar3 = (undefined1 *)piVar1[6];
        iVar4 = iVar10 + 0x10;
        local_2c = pppuVar11;
        local_28 = pppuVar12;
        FUN_0102a6b4(&local_d8,iVar10 + 0x40,iVar4);
        pppuVar2 = *(undefined4 ****)(iVar10 + 0x198);
        if (((pppuVar2 <= pppuVar11) ||
            (piVar1 = (int *)(*(int *)(iVar10 + 0x194) + (int)pppuVar11 * 0xf8),
            *piVar1 == 3 && piVar1[1] == 0)) || ((undefined4 ***)piVar1[0x35] != pppuVar12))
        goto LAB_0102ca90;
        local_2c = pppuVar11;
        local_28 = pppuVar12;
        if (piVar1[0x36] != 0) {
LAB_0102c904:
          FUN_0102e068(iVar4,&local_d8,puVar3 != &DAT_3b9aca00);
          if (((uVar13 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
             (iVar4 = FUN_015bf3f8(), iVar4 == 0)) {
            *(undefined1 *)(iVar10 + 0xc) = 1;
          }
          DataMemoryBarrier(0xb);
          do {
            iVar10 = *piVar9;
            bVar15 = (bool)hasExclusiveAccess(piVar9);
          } while (!bVar15);
          *piVar9 = 0;
LAB_0102c94c:
          if (iVar10 == 2) {
            FUN_016d6968(0xf0,piVar9,0x81,1);
            return;
          }
          return;
        }
        iVar7 = piVar1[0x39];
        if (iVar7 == 0) {
LAB_0102c7f0:
          if (((pppuVar11 < pppuVar2) &&
              (piVar1 = (int *)(*(int *)(iVar10 + 0x194) + (int)pppuVar11 * 0xf8),
              *piVar1 != 3 || piVar1[1] != 0)) && ((undefined4 ***)piVar1[0x35] == pppuVar12)) {
            local_c0 = (int ***)piVar1[0x30];
            local_bc = (int *)piVar1[0x31];
            local_b8 = piVar1[0x32];
            iStack_b4 = piVar1[0x33];
            iStack_b0 = piVar1[0x34];
            piVar1[0x30] = 0;
            local_2c = pppuVar11;
            local_28 = pppuVar12;
            while (FUN_0101adf0(&local_cc,&local_c0,pppuVar14), local_cc != 0) {
              local_30 = local_c4;
              local_34 = local_c8;
              if (((*(uint *)(local_cc + 0x38) <= local_c8) ||
                  (piVar1 = (int *)(*(int *)(local_cc + 0x34) + local_c8 * 0xf8),
                  *piVar1 == 3 && piVar1[1] == 0)) || ((undefined4 **)piVar1[0x35] != local_c4)) {
                puVar8 = &DAT_01882550;
                local_2c = &local_30;
                goto LAB_0102cadc;
              }
              puVar6 = (undefined1 *)piVar1[6];
              FUN_0102a6b4(&local_cc,iVar10 + 0x40,iVar4);
              FUN_0102e068(iVar4,&local_cc,puVar6 != &DAT_3b9aca00);
            }
            goto LAB_0102c904;
          }
        }
        else {
          iVar5 = *(int *)(iVar10 + 100);
          *(int *)(iVar10 + 0xbc) = *(int *)(iVar10 + 0xbc) - iVar7;
          if (!SCARRY4(iVar5,iVar7)) {
            *(int *)(iVar10 + 100) = iVar5 + iVar7;
            iVar5 = iVar5 + iVar7;
          }
          iVar7 = *(int *)(iVar10 + 0x60);
          if ((iVar7 < iVar5) && (iVar7 / 2 <= iVar5 - iVar7)) {
            iVar7 = *(int *)(iVar10 + 0xe8);
            *(undefined4 *)(iVar10 + 0xe8) = 0;
            if (iVar7 != 0) {
              (**(code **)(iVar7 + 4))(*(undefined4 *)(iVar10 + 0xec));
              pppuVar2 = *(undefined4 ****)(iVar10 + 0x198);
            }
          }
          if (((((pppuVar11 < pppuVar2) &&
                (piVar1 = (int *)(*(int *)(iVar10 + 0x194) + (int)pppuVar11 * 0xf8),
                *piVar1 != 3 || piVar1[1] != 0)) && ((undefined4 ***)piVar1[0x35] == pppuVar12)) &&
              ((piVar1[0x39] = 0, pppuVar11 < *(undefined4 ****)(iVar10 + 0x198) &&
               (piVar1 = (int *)(*(int *)(iVar10 + 0x194) + (int)pppuVar11 * 0xf8),
               *piVar1 != 3 || piVar1[1] != 0)))) && ((undefined4 ***)piVar1[0x35] == pppuVar12)) {
            local_2c = pppuVar11;
            local_28 = pppuVar12;
            while (FUN_0102fb64(&local_c0,piVar1 + 0x2d,iVar10 + 0xa4),
                  local_c0 != (int ***)&DAT_00000006 || local_bc != (int *)0x0) {
              puVar6 = (undefined1 *)0x0;
              if ((uint)(local_c0 < &DAT_00000004) <= (uint)-(int)local_bc) {
                puVar6 = (undefined1 *)((int)local_c0 + -3);
              }
              if (puVar6 == (undefined1 *)0x0) {
                FUN_01015a80(&local_c0,0,3 - (int)local_c0);
              }
              else if (puVar6 == (undefined1 *)0x1) {
                (**(code **)(local_b8 + 0x10))(auStack_ac,iStack_b4,iStack_b0);
              }
              else {
                FUN_01015c1c(&local_b8);
              }
            }
            pppuVar2 = *(undefined4 ****)(iVar10 + 0x198);
            goto LAB_0102c7f0;
          }
        }
        puVar8 = &DAT_01882560;
      }
      else {
LAB_0102ca90:
        puVar8 = &DAT_01882550;
      }
      local_c0 = (int ***)&local_28;
      local_2c = pppuVar11;
      local_28 = pppuVar12;
      goto LAB_0102cad4;
    }
    puVar8 = &DAT_01882550;
  }
  else {
    puVar8 = &DAT_01882560;
  }
  local_c0 = (int ***)&local_d4;
LAB_0102cad4:
  local_f4 = &local_c0;
LAB_0102cadc:
  local_f4[1] = (undefined4 ***)FUN_0101a4ac;
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_00599806,local_f4,puVar8);
}

