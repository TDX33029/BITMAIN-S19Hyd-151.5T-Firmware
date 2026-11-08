// FUN_01570de0 @ 01570de0 size=1440 calls_out=12 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong FUN_01570de0(int param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint unaff_r6;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  uint uVar16;
  int *piVar17;
  uint *puVar18;
  longlong lVar19;
  undefined8 uVar20;
  uint local_68;
  undefined8 local_38;
  uint local_30;
  uint local_2c;
  
  uVar16 = *(uint *)(param_1 + 8);
  if (0x7ffffffe < uVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_0130701c(&DAT_01cfbd00);
  }
  *(uint *)(param_1 + 8) = uVar16 + 1;
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar4 = FUN_0155d010(param_1 + 0x20,param_2);
    uVar10 = uVar4 >> 0x19;
    iVar13 = *(int *)(param_1 + 0x10);
    uVar12 = *(uint *)(param_1 + 0x14);
    unaff_r6 = 0;
    while( true ) {
      uVar4 = uVar12 & uVar4;
      uVar14 = *(uint *)(iVar13 + uVar4);
      uVar5 = uVar14 ^ uVar10 * 0x1010101;
      for (uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5)
      {
        uVar6 = uVar4 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                       (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar12;
        piVar7 = (int *)(iVar13 + -0x18 + uVar6 * -0x18);
        if ((param_3 == piVar7[1]) && (iVar8 = thunk_FUN_01bed842(param_2,*piVar7 + 8), iVar8 == 0))
        {
          iVar13 = iVar13 + uVar6 * -0x18;
          piVar7 = *(int **)(iVar13 + -0x10);
          do {
            iVar8 = *piVar7;
            bVar3 = (bool)hasExclusiveAccess(piVar7);
          } while (!bVar3);
          *piVar7 = iVar8 + 1;
          if (-1 < iVar8) {
            uVar11 = *(undefined4 *)(iVar13 + -0xc);
            *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
            return CONCAT44(uVar11,piVar7);
          }
          goto LAB_01571350;
        }
      }
      if ((uVar14 & 0x80808080 & uVar14 << 1) != 0) break;
      unaff_r6 = unaff_r6 + 4;
      uVar4 = uVar4 + unaff_r6;
    }
  }
  *(uint *)(param_1 + 8) = uVar16;
  FUN_0157bf74(&local_38,param_2);
  if ((int)local_38 == -0x7fffffff) {
    return (ulonglong)unaff_r6 << 0x20;
  }
  if ((int)local_38 == -0x80000000) {
    lVar19 = FUN_016bc0ec(local_38._4_4_,local_30);
  }
  else {
    lVar19 = FUN_016bc0ec(local_38._4_4_,local_30);
    FUN_019bb7e0((int)local_38,local_38._4_4_);
  }
  piVar7 = (int *)lVar19;
  if (*(int *)(param_1 + 8) == 0) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    uVar20 = FUN_016bc0ec(param_2);
    uVar16 = (uint)((ulonglong)uVar20 >> 0x20);
    piVar9 = (int *)uVar20;
    do {
      iVar13 = *piVar7;
      bVar3 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar3);
    *piVar7 = iVar13 + 1;
    if (-1 < iVar13) {
      local_2c = 0;
      local_30 = 0;
      local_38 = lVar19;
      uVar10 = FUN_0155cf4c(param_1 + 0x20,piVar9,uVar16);
      if (*(int *)(param_1 + 0x18) == 0) {
        FUN_0152bdac(param_1 + 0x10,param_1 + 0x20);
      }
      bVar3 = false;
      uVar12 = *(uint *)(param_1 + 0x14);
      puVar18 = *(uint **)(param_1 + 0x10);
      iVar13 = 0;
      uVar4 = uVar10;
      do {
        uVar4 = uVar12 & uVar4;
        uVar5 = *(uint *)((int)puVar18 + uVar4);
        uVar14 = uVar5 ^ (uVar10 >> 0x19) * 0x1010101;
        for (uVar14 = ~uVar14 & 0x80808080 & uVar14 + 0xfefefeff; uVar14 != 0;
            uVar14 = uVar14 - 1 & uVar14) {
          uVar6 = uVar4 + ((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                         (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3) &
                  uVar12;
          if (uVar16 == puVar18[uVar6 * -6 + -5]) {
            iVar8 = thunk_FUN_01bed842(piVar9 + 2,puVar18[uVar6 * -6 + -6] + 8);
            if (iVar8 == 0) {
              piVar7 = (int *)puVar18[uVar6 * -6 + -4];
              uVar10 = puVar18[uVar6 * -6 + -3];
              piVar15 = (int *)puVar18[uVar6 * -6 + -2];
              piVar17 = (int *)puVar18[uVar6 * -6 + -1];
              *(longlong *)(puVar18 + uVar6 * -6 + -4) = local_38;
              puVar18[uVar6 * -6 + -2] = local_30;
              puVar18[uVar6 * -6 + -1] = local_2c;
              DataMemoryBarrier(0xb);
              do {
                iVar13 = *piVar9;
                bVar3 = (bool)hasExclusiveAccess(piVar9);
              } while (!bVar3);
              *piVar9 = iVar13 + -1;
              if (iVar13 == 1) {
                DataMemoryBarrier(0xb);
                FUN_0070451c(piVar9,uVar16);
              }
              if (piVar7 != (int *)0x0) {
                DataMemoryBarrier(0xb);
                do {
                  iVar13 = *piVar7;
                  bVar3 = (bool)hasExclusiveAccess(piVar7);
                } while (!bVar3);
                *piVar7 = iVar13 + -1;
                if (iVar13 == 1) {
                  DataMemoryBarrier(0xb);
                  FUN_0070451c(piVar7,uVar10);
                }
                if (piVar15 != (int *)0x0) {
                  DataMemoryBarrier(0xb);
                  do {
                    iVar13 = *piVar15;
                    bVar3 = (bool)hasExclusiveAccess(piVar15);
                  } while (!bVar3);
                  *piVar15 = iVar13 + -1;
                  if (iVar13 == 1) {
                    DataMemoryBarrier(0xb);
                    FUN_0155da0c(piVar15);
                  }
                }
                if (piVar17 != (int *)0x0) {
                  DataMemoryBarrier(0xb);
                  do {
                    iVar13 = *piVar17;
                    bVar3 = (bool)hasExclusiveAccess(piVar17);
                  } while (!bVar3);
                  *piVar17 = iVar13 + -1;
                  if (iVar13 == 1) {
                    DataMemoryBarrier(0xb);
                    FUN_0155d918(piVar17);
                  }
                }
              }
              goto LAB_015712ac;
            }
          }
        }
        uVar14 = uVar5 & 0x80808080;
        if (bVar3) {
LAB_0157115c:
          if ((uVar14 & uVar5 << 1) != 0) {
            uVar16 = (uint)*(char *)((int)puVar18 + local_68);
            if (-1 < (int)uVar16) {
              uVar16 = *puVar18 & 0x80808080;
              uVar4 = LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                              (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18);
              uVar16 = (uint)*(byte *)((int)puVar18 + (uVar4 >> 3));
              local_68 = uVar4 >> 3;
            }
            iVar13 = *(int *)(param_1 + 0x1c);
            iVar8 = *(int *)(param_1 + 0x18);
            bVar2 = (byte)(uVar10 >> 0x19);
            *(byte *)((int)puVar18 + local_68) = bVar2;
            *(uint *)(param_1 + 0x18) = iVar8 - (uVar16 & 1);
            *(int *)(param_1 + 0x1c) = iVar13 + 1;
            *(byte *)((int)puVar18 + (uVar12 & local_68 - 4) + 4) = bVar2;
            *(undefined8 *)(puVar18 + local_68 * -6 + -6) = uVar20;
            *(longlong *)(puVar18 + local_68 * -6 + -4) = local_38;
            puVar18[local_68 * -6 + -2] = local_30;
            puVar18[local_68 * -6 + -1] = local_2c;
LAB_015712ac:
            *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
            return lVar19;
          }
          bVar3 = true;
        }
        else {
          if (uVar14 != 0) {
            local_68 = uVar4 + ((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                              (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3) &
                       uVar12;
            goto LAB_0157115c;
          }
          bVar3 = false;
        }
        iVar13 = iVar13 + 4;
        uVar4 = iVar13 + uVar4;
      } while( true );
    }
  }
  else {
    FUN_01306fc8(&DAT_01cfbd10,param_3);
  }
LAB_01571350:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1571350);
  (*pcVar1)();
}

