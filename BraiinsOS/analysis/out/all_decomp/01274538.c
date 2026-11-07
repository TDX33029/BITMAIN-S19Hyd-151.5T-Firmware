// FUN_01274538 @ 01274538 size=1164 calls_out=8 calls_in=1
// strings: Tried to shrink to a larger capacitymax line length exceeded

void FUN_01274538(uint *param_1,char *param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  byte *pbVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  char cVar7;
  undefined1 uVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  uint in_fpscr;
  undefined4 uVar18;
  undefined4 extraout_s1;
  double dVar19;
  uint local_3c;
  byte *local_38;
  uint local_34;
  uint local_30;
  uint *local_2c;
  uint local_28;
  
  if (param_3 == 0) {
LAB_0127457c:
    *param_1 = 0x80000000;
    uVar8 = 0;
LAB_012745b4:
    *(undefined1 *)(param_1 + 1) = uVar8;
  }
  else {
    cVar7 = *param_2;
    if (cVar7 == '+') {
      if (param_3 - 1 == 0) goto LAB_0127457c;
      cVar7 = param_2[1];
      uVar13 = param_3 - 1;
      pcVar12 = param_2 + 1;
      if (cVar7 != '+') goto LAB_01274594;
    }
    else {
      uVar13 = param_3;
      pcVar12 = param_2;
LAB_01274594:
      param_3 = uVar13;
      param_2 = pcVar12;
      if (cVar7 == '_') {
        *param_1 = 0x80000000;
        uVar8 = 1;
        goto LAB_012745b4;
      }
    }
    if ((int)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,param_3);
    }
    pbVar3 = (byte *)thunk_FUN_016d4a50(param_3);
    if (pbVar3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,param_3);
    }
    uVar13 = 0;
    local_34 = 0;
    local_3c = param_3;
    local_38 = pbVar3;
    do {
      cVar7 = *param_2;
      if ((byte)(cVar7 - 0x30U) < 10) {
        if (uVar13 == local_3c) {
          FUN_006029c0(&local_3c);
          pbVar3 = local_38;
        }
        pbVar3[uVar13] = cVar7 - 0x30;
        uVar13 = uVar13 + 1;
        local_34 = uVar13;
      }
      else if (cVar7 != '_') {
        *param_1 = 0x80000000;
        *(undefined1 *)(param_1 + 1) = 1;
        if (local_3c == 0) {
          return;
        }
        thunk_FUN_016d3fb4();
        return;
      }
      param_3 = param_3 - 1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
    dVar19 = (double)VectorUnsignedToFloat(uVar13,(byte)(in_fpscr >> 0x16) & 3);
    uVar18 = FUN_016d5298(SUB84(dVar19 * 3.321928094887362 * 0.03125,0));
    pbVar3 = local_38;
    dVar19 = (double)CONCAT44(extraout_s1,uVar18);
    uVar18 = 0;
    local_30 = (uint)(0.0 < dVar19) * (int)(longlong)dVar19;
    if (4294967296.0 <= dVar19) {
      local_30 = 0;
    }
    if (dVar19 <= -1.0) {
      local_30 = 0;
    }
    bVar17 = 0x3ffffffe < local_30;
    bVar16 = local_30 == 0x3fffffff;
    uVar14 = local_30 * 4;
    if (local_30 < 0x40000000) {
      bVar17 = 0x7ffffffb < uVar14;
      bVar16 = uVar14 == 0x7ffffffc;
    }
    if (bVar17 && !bVar16) {
LAB_012746cc:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar18,uVar14);
    }
    if (uVar14 == 0) {
      local_2c = (uint *)&DAT_00000004;
      local_30 = 0;
    }
    else {
      local_2c = (uint *)thunk_FUN_016d4a50(uVar14);
      if (local_2c == (uint *)0x0) {
        uVar18 = 4;
        goto LAB_012746cc;
      }
    }
    local_28 = 0;
    uVar14 = uVar13 % 9;
    if (uVar14 == 0) {
      uVar14 = 9;
    }
    if (uVar13 < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00418e0f,0x13,&DAT_0188b724);
    }
    uVar15 = 0;
    pbVar9 = pbVar3;
    uVar11 = uVar14;
    do {
      uVar11 = uVar11 - 1;
      uVar15 = (uint)*pbVar9 + uVar15 * 10;
      pbVar9 = pbVar9 + 1;
    } while (uVar11 != 0);
    if (local_30 == 0) {
      FUN_0127ac28(&local_30);
    }
    uVar13 = uVar13 - uVar14;
    *local_2c = uVar15;
    local_28 = 1;
    if (uVar13 != 0) {
      pbVar3 = pbVar3 + uVar14;
      do {
        uVar14 = local_28;
        puVar6 = local_2c + local_28;
        uVar11 = uVar13;
        if (8 < uVar13) {
          uVar11 = 9;
        }
        if (puVar6[-1] == 0) {
LAB_01274800:
          uVar14 = 0;
          puVar4 = local_2c;
          do {
            lVar1 = (ulonglong)*puVar4 * 1000000000 + (ulonglong)uVar14;
            uVar14 = (uint)((ulonglong)lVar1 >> 0x20);
            puVar5 = puVar4 + 1;
            *puVar4 = (uint)lVar1;
            puVar4 = puVar5;
          } while (puVar5 != puVar6);
        }
        else {
          if (local_28 == local_30) {
            FUN_0127ac28(&local_30);
            local_2c[uVar14] = 0;
LAB_012747fc:
            local_28 = uVar14 + 1;
            puVar6 = local_2c + local_28;
            goto LAB_01274800;
          }
          bVar16 = local_28 != 0xffffffff;
          local_2c[local_28] = 0;
          local_28 = local_28 + 1;
          if (bVar16) goto LAB_012747fc;
        }
        uVar13 = uVar13 - uVar11;
        pbVar9 = pbVar3 + uVar11;
        uVar14 = 0;
        do {
          uVar11 = uVar11 - 1;
          uVar14 = (uint)*pbVar3 + uVar14 * 10;
          pbVar3 = pbVar3 + 1;
        } while (uVar11 != 0);
        if (local_28 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00418e0f,0x13,&DAT_0188b834);
        }
        uVar11 = *local_2c;
        *local_2c = uVar14 + uVar11;
        if ((CARRY4(uVar14,uVar11)) && (local_28 != 1)) {
          iVar10 = local_28 * 4 + -8;
          puVar6 = local_2c;
          do {
            puVar6 = puVar6 + 1;
            uVar14 = *puVar6;
            *puVar6 = uVar14 + 1;
            if (uVar14 != 0xffffffff) break;
            bVar16 = iVar10 != 0;
            iVar10 = iVar10 + -4;
          } while (bVar16);
        }
        pbVar3 = pbVar9;
      } while (uVar13 != 0);
    }
    uVar13 = local_28;
    if (local_2c[local_28 - 1] == 0) {
      iVar10 = local_28 << 2;
      uVar14 = local_28 & 0x3fffffff;
      do {
        uVar11 = uVar14;
        if (iVar10 == 0) {
          uVar13 = 0;
          goto LAB_012748f0;
        }
        iVar2 = iVar10 + -4;
        iVar10 = iVar10 + -4;
        uVar14 = uVar11 - 1;
      } while (*(int *)((int)local_2c + iVar2) == 0);
      if (uVar11 < local_28) {
        uVar13 = uVar11;
      }
    }
LAB_012748f0:
    puVar6 = local_2c;
    uVar14 = local_30;
    if (uVar13 < local_30 >> 2) {
      if (local_30 < uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478("Tried to shrink to a larger capacitymax line length exceeded",0x49,
                     &DAT_018ad594);
      }
      if (local_30 == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = uVar13;
        if (uVar13 == 0) {
          thunk_FUN_016d3fb4();
          puVar6 = (uint *)&DAT_00000004;
        }
        else {
          puVar6 = (uint *)thunk_FUN_016d4ea4(local_2c,uVar13 << 2);
          if (puVar6 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(4,uVar13 << 2);
          }
        }
      }
    }
    *param_1 = uVar14;
    param_1[1] = (uint)puVar6;
    param_1[2] = uVar13;
    if (local_3c != 0) {
      thunk_FUN_016d3fb4(local_38);
      return;
    }
  }
  return;
}

