// FUN_0155e354 @ 0155e354 size=1208 calls_out=12 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0155e354(int *param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4,
                 undefined4 param_5)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  uint local_d0;
  undefined1 local_cc;
  char local_b4 [4];
  uint local_b0;
  undefined4 local_ac;
  undefined4 local_a0;
  byte local_98;
  undefined2 local_97;
  undefined1 local_95;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  int *local_84;
  
  do {
    if (*param_1 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(param_1);
      goto LAB_0155e38c;
    }
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = 1;
  DataMemoryBarrier(0xb);
LAB_0155e38c:
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    uVar14 = 0;
    if ((char)param_1[1] == '\0') {
LAB_0155e3b8:
      FUN_01532be4(&local_a0,param_1 + 6,param_2);
      uVar13 = local_a0;
      if (local_98 == 2) {
        *(undefined2 *)(local_a0 - 6) = param_4;
        *(undefined2 *)(local_a0 - 8) = param_3;
      }
      else {
        bVar3 = local_a0._3_1_;
        if ((local_98 & 1) == 0) {
          local_cc = 0;
          if (local_94 == 0x80000000) {
            uVar6 = 0x80000000;
            local_d0 = local_90;
          }
          else {
            if (local_8c == 0) {
              local_d0 = 1;
            }
            else {
              local_d0 = thunk_FUN_016d4a50(local_8c);
              if (local_d0 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600af4(1,local_8c);
              }
            }
            FUN_016dd1aa(local_d0,local_90,local_8c);
            uVar6 = local_8c;
          }
        }
        else {
          local_cc = 1;
          local_a0 = CONCAT22(CONCAT11(local_a0._3_1_,local_95),local_97);
          local_d0 = local_90;
          uVar6 = local_94;
        }
        uVar4 = param_1[2];
        uVar8 = param_1[5];
        if (uVar8 == uVar4) {
          FUN_0155e8e0(param_1 + 2);
          uVar4 = param_1[2];
          uVar8 = param_1[5];
        }
        uVar9 = param_1[4] + uVar8;
        uVar5 = uVar9 - uVar4;
        if (uVar9 < uVar4) {
          uVar5 = uVar9;
        }
        param_1[5] = uVar8 + 1;
        puVar11 = (undefined1 *)(param_1[3] + uVar5 * 0x14);
        *puVar11 = local_cc;
        *(uint *)(puVar11 + 8) = local_d0;
        *(uint *)(puVar11 + 0xc) = local_8c;
        *(uint *)(puVar11 + 0x10) = local_88;
        *(undefined2 *)(puVar11 + 1) = (undefined2)local_a0;
        puVar11[3] = local_a0._2_1_;
        *(uint *)(puVar11 + 4) = uVar6;
        uVar6 = thunk_FUN_016d4a50(0x240);
        if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(8,0x240);
        }
        puVar7 = (uint *)*local_84;
        uVar8 = local_84[1];
        uVar13 = uVar8 & uVar13;
        uVar4 = *(uint *)((int)puVar7 + uVar13) & 0x80808080;
        if (uVar4 == 0) {
          iVar10 = 4;
          do {
            uVar13 = uVar13 + iVar10;
            iVar10 = iVar10 + 4;
            uVar13 = uVar13 & uVar8;
            uVar4 = *(uint *)((int)puVar7 + uVar13) & 0x80808080;
          } while (uVar4 == 0);
        }
        uVar13 = uVar13 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                         (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) & uVar8;
        uVar4 = (uint)*(char *)((int)puVar7 + uVar13);
        if (-1 < (int)uVar4) {
          uVar13 = *puVar7 & 0x80808080;
          uVar13 = LZCOUNT((*puVar7 & 0x80) << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                           (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18);
          uVar4 = (uint)*(byte *)((int)puVar7 + (uVar13 >> 3));
          uVar13 = uVar13 >> 3;
        }
        iVar10 = local_84[2];
        *(byte *)((int)puVar7 + uVar13) = bVar3 >> 1;
        local_84[2] = iVar10 - (uVar4 & 1);
        *(byte *)((int)puVar7 + (uVar13 - 4 & uVar8) + 4) = bVar3 >> 1;
        *(undefined2 *)(puVar7 + uVar13 * -0x24 + -2) = 0x10;
        puVar7[uVar13 * -0x24 + -0x11] = 0x80000000;
        puVar7[uVar13 * -0x24 + -0x1c] = 0;
        puVar7[uVar13 * -0x24 + -0x1b] = 0;
        puVar7[uVar13 * -0x24 + -0x23] = local_94;
        puVar7[uVar13 * -0x24 + -0x22] = local_90;
        *(undefined1 *)((int)puVar7 + uVar13 * -0x90 + -0x8d) = local_95;
        puVar7[uVar13 * -0x24 + -0x21] = local_8c;
        *(undefined2 *)((int)puVar7 + uVar13 * -0x90 + -0x8f) = local_97;
        puVar7[uVar13 * -0x24 + -0x1e] = 8;
        puVar7[uVar13 * -0x24 + -0x1d] = uVar6;
        puVar7[uVar13 * -0x24 + -0x20] = local_88;
        iVar10 = local_84[3];
        *(byte *)(puVar7 + uVar13 * -0x24 + -0x24) = local_98;
        local_84[3] = iVar10 + 1;
        *(undefined2 *)(puVar7 + uVar13 * -0x24 + -2) = param_3;
        *(undefined2 *)((int)puVar7 + uVar13 * -0x90 + -6) = param_4;
        uVar13 = param_1[2];
        if ((uVar13 == param_1[5]) && (uVar13 != 0)) {
          param_1[5] = uVar13 - 1;
          uVar4 = param_1[4] + 1;
          uVar6 = uVar4 - uVar13;
          if (uVar4 < uVar13) {
            uVar6 = uVar4;
          }
          pcVar12 = (char *)(param_1[3] + param_1[4] * 0x14);
          cVar1 = *pcVar12;
          param_1[4] = uVar6;
          if (cVar1 != '\x02') {
            local_b4[0] = cVar1;
            FUN_016dd1aa((uint)local_b4 | 1,pcVar12 + 1,0x13);
            FUN_015337fc(&local_a0,param_1 + 6,local_b4);
            FUN_0155e968(&local_a0);
            if ((cVar1 == '\0') && ((local_b0 & 0x7fffffff) != 0)) {
              thunk_FUN_016d3fb4(local_ac);
            }
          }
        }
      }
      if (((uVar14 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar10 = FUN_015bf3f8(), iVar10 == 0)) {
        *(undefined1 *)(param_1 + 1) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar10 = *param_1;
        bVar2 = (bool)hasExclusiveAccess(param_1);
      } while (!bVar2);
      *param_1 = 0;
      if (iVar10 == 2) {
        software_interrupt(0);
        FUN_016d3496(param_1,0x81,1,param_5);
        return;
      }
      return;
    }
  }
  else {
    uVar14 = FUN_015bf3f8();
    uVar14 = uVar14 ^ 1;
    if ((char)param_1[1] == '\0') goto LAB_0155e3b8;
    if (uVar14 != 0) goto LAB_0155e758;
  }
  if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar10 = FUN_015bf3f8(), iVar10 == 0)) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
LAB_0155e758:
  DataMemoryBarrier(0xb);
  do {
    iVar10 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = 0;
  if (iVar10 == 2) {
    FUN_016d6968(0xf0,param_1,0x81,1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa444(&DAT_018a8e4c);
}

