// FUN_01668388 @ 01668388 size=1796 calls_out=6 calls_in=2
// strings: Hash table capacity overflow

undefined4 FUN_01668388(int *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  char cVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  undefined8 uVar20;
  uint local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint *local_50;
  uint local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint *local_34;
  uint uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  local_60 = param_1[3];
  puVar5 = (undefined4 *)(local_60 + 1);
  if (0xfffffffe < local_60) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01d30868);
  }
  uVar18 = param_1[1];
  uVar12 = uVar18 + 1;
  uVar13 = uVar18;
  if (7 < uVar18) {
    uVar13 = (uVar12 & 0xfffffff8) - (uVar12 >> 3);
  }
  if ((undefined4 *)(uVar13 >> 1) < puVar5) {
    if (puVar5 < (undefined4 *)(uVar13 + 1)) {
      puVar5 = (undefined4 *)(uVar13 + 1);
    }
    FUN_01667800(&local_40,param_1 + 4,0x10,4,puVar5);
    if (local_40 == 0) {
      return local_3c;
    }
    local_50 = local_34;
    local_4c = uStack_30;
    local_48 = iStack_2c;
    local_44 = uStack_28;
    local_58 = local_3c;
    iVar6 = 0;
    local_54 = local_38;
    local_5c = local_40;
    if (local_60 != 0) {
      puVar16 = (uint *)*param_1;
      iVar6 = 0;
      uVar13 = ~*puVar16 & 0x80808080;
      do {
        if (uVar13 == 0) {
          do {
            puVar16 = puVar16 + 1;
            iVar6 = iVar6 + 4;
          } while ((*puVar16 & 0x80808080) == 0x80808080);
          uVar13 = *puVar16 & 0x80808080 ^ 0x80808080;
        }
        uVar17 = iVar6 + ((uint)LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                        (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3);
        iVar7 = *param_1 + uVar17 * -0x10;
        puVar8 = *(uint **)(iVar7 + -0xc);
        uVar10 = *(uint *)(iVar7 + -8);
        uVar12 = param_4 >> (uVar10 & 0x1f) | param_4 << 0x20 - (uVar10 & 0x1f);
        uVar18 = param_3 >> (uVar10 & 0x1f) | param_3 << 0x20 - (uVar10 & 0x1f);
        if (uVar10 < 0x11) {
          if (uVar10 < 8) {
            uVar11 = DAT_01d519fc;
            if (uVar10 < 4) {
              uVar15 = DAT_01d519f8;
              if (uVar10 != 0) {
                uVar18 = uVar18 ^ (byte)*puVar8;
                uVar15 = CONCAT11(*(byte *)((int)puVar8 + (uVar10 - 1)),
                                  *(byte *)((int)puVar8 + (uVar10 >> 1))) ^ DAT_01d519f8;
              }
            }
            else {
              uVar18 = uVar18 ^ *puVar8;
              uVar15 = DAT_01d519f8 ^ *(uint *)((int)puVar8 + (uVar10 - 4));
            }
          }
          else {
            uVar18 = *puVar8 ^ uVar18;
            uVar12 = puVar8[1] ^ uVar12;
            uVar15 = *(uint *)((int)puVar8 + (uVar10 - 8)) ^ DAT_01d519f8;
            uVar11 = *(uint *)((int)puVar8 + (uVar10 - 4)) ^ DAT_01d519fc;
          }
          uVar3 = (ulonglong)uVar15 * (ulonglong)uVar18 ^ (ulonglong)uVar11 * (ulonglong)uVar12;
          uVar4 = (ulonglong)uVar11 * (ulonglong)uVar18 ^ (ulonglong)uVar15 * (ulonglong)uVar12;
          uVar20 = CONCAT44((uint)(uVar3 >> 0x20) ^ (uint)uVar4,(uint)uVar3 ^ (uint)(uVar4 >> 0x20))
          ;
        }
        else {
          puVar5 = &DAT_01d519f0;
          uVar20 = FUN_013476f0();
        }
        uVar18 = (uint)((ulonglong)uVar20 >> 0x20);
        uVar12 = (uint)uVar20 ^ 0xff;
        uVar12 = uVar18 * DAT_01d519f4 ^ DAT_01d519f0 * uVar12 ^
                 (uint)((ulonglong)uVar18 * (ulonglong)DAT_01d519f0 >> 0x20) ^
                 (uint)((ulonglong)DAT_01d519f4 * (ulonglong)uVar12 >> 0x20);
        uVar18 = uStack_30 & uVar12;
        uVar10 = *(uint *)((int)local_34 + uVar18) & 0x80808080;
        if (uVar10 == 0) {
          iVar7 = 4;
          do {
            uVar18 = uVar18 + iVar7;
            iVar7 = iVar7 + 4;
            uVar18 = uVar18 & uStack_30;
            uVar10 = *(uint *)((int)local_34 + uVar18) & 0x80808080;
          } while (uVar10 == 0);
        }
        uVar18 = uVar18 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                         (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) &
                 uStack_30;
        if (-1 < *(char *)((int)local_34 + uVar18)) {
          uVar18 = *local_34 & 0x80808080;
          uVar18 = (uint)LZCOUNT((*local_34 & 0x80) << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 |
                                 (uVar18 >> 0x10 & 0xff) << 8 | uVar18 >> 0x18) >> 3;
        }
        uVar13 = uVar13 - 1 & uVar13;
        bVar2 = (byte)(uVar12 >> 0x19);
        *(byte *)((int)local_34 + uVar18) = bVar2;
        *(byte *)((int)(local_34 + 1) + (uVar18 - 4 & uStack_30)) = bVar2;
        local_60 = local_60 - 1;
        FUN_01bed4e2(local_34 + ~uVar18 * 4,*param_1 + ~uVar17 * 0x10,0x10,local_34 + 1,puVar5);
      } while (local_60 != 0);
      iVar6 = param_1[3];
    }
    local_44 = iVar6;
    local_48 = local_48 - iVar6;
    iVar6 = 0;
    do {
      puVar16 = (uint *)param_1[iVar6];
      param_1[iVar6] = (int)(&local_50)[iVar6];
      iVar7 = iVar6 + 1;
      (&local_50)[iVar6] = puVar16;
      iVar6 = iVar7;
    } while (iVar7 != 4);
    FUN_01a52db4(&local_5c);
  }
  else {
    puVar16 = (uint *)*param_1;
    if (uVar12 == 0) {
      FUN_01bed864(puVar16 + 1,puVar16);
      uVar13 = 0;
    }
    else {
      uVar13 = uVar12 >> 2;
      if ((uVar12 & 3) != 0) {
        uVar13 = (uVar12 >> 2) + 1;
      }
      iVar6 = 0;
      do {
        puVar16[-iVar6] = (~(puVar16[-iVar6] >> 7) & 0x1010101) + (puVar16[-iVar6] | 0x7f7f7f7f);
        iVar6 = iVar6 + -1;
      } while (-iVar6 != uVar13);
      if (uVar12 < 4) {
        FUN_01bed864(puVar16 + 1,puVar16);
      }
      else {
        *(uint *)((int)puVar16 + uVar12) = *puVar16;
      }
      iVar6 = 0;
      uVar12 = 0;
      uVar13 = uVar18;
      do {
        puVar8 = puVar16;
        if (*(char *)((int)puVar16 + uVar12) == -0x80) {
          while( true ) {
            uVar17 = puVar8[uVar12 * -4 + -2];
            puVar9 = (uint *)puVar8[uVar12 * -4 + -3];
            uVar13 = param_4 >> (uVar17 & 0x1f) | param_4 << 0x20 - (uVar17 & 0x1f);
            uVar10 = param_3 >> (uVar17 & 0x1f) | param_3 << 0x20 - (uVar17 & 0x1f);
            if (uVar17 < 0x11) {
              if (uVar17 < 8) {
                uVar11 = DAT_01d519fc;
                if (uVar17 < 4) {
                  uVar15 = DAT_01d519f8;
                  if (uVar17 != 0) {
                    uVar10 = uVar10 ^ (byte)*puVar9;
                    uVar15 = CONCAT11(*(byte *)((int)puVar9 + (uVar17 - 1)),
                                      *(byte *)((int)puVar9 + (uVar17 >> 1))) ^ DAT_01d519f8;
                  }
                }
                else {
                  uVar10 = uVar10 ^ *puVar9;
                  uVar15 = DAT_01d519f8 ^ *(uint *)((int)puVar9 + (uVar17 - 4));
                }
              }
              else {
                uVar10 = *puVar9 ^ uVar10;
                uVar13 = puVar9[1] ^ uVar13;
                uVar11 = *(uint *)((int)puVar9 + (uVar17 - 4)) ^ DAT_01d519fc;
                uVar15 = *(uint *)((int)puVar9 + (uVar17 - 8)) ^ DAT_01d519f8;
              }
              uVar4 = (ulonglong)uVar11 * (ulonglong)uVar10 ^ (ulonglong)uVar15 * (ulonglong)uVar13;
              uVar3 = (ulonglong)uVar15 * (ulonglong)uVar10 ^ (ulonglong)uVar11 * (ulonglong)uVar13;
              uVar20 = CONCAT44((uint)(uVar3 >> 0x20) ^ (uint)uVar4,
                                (uint)uVar3 ^ (uint)(uVar4 >> 0x20));
            }
            else {
              uVar20 = FUN_013476f0(puVar9,uVar17,uVar10,uVar13,&DAT_01d519f0);
            }
            uVar17 = (uint)((ulonglong)uVar20 >> 0x20);
            uVar10 = (uint)uVar20 ^ 0xff;
            uVar13 = param_1[1];
            uVar17 = uVar17 * DAT_01d519f4 ^ DAT_01d519f0 * uVar10 ^
                     (uint)((ulonglong)uVar17 * (ulonglong)DAT_01d519f0 >> 0x20) ^
                     (uint)((ulonglong)DAT_01d519f4 * (ulonglong)uVar10 >> 0x20);
            uVar11 = uVar13 & uVar17;
            uVar15 = *(uint *)((int)puVar8 + uVar11) & 0x80808080;
            uVar10 = uVar11;
            if (uVar15 == 0) {
              iVar7 = 4;
              do {
                uVar10 = uVar10 + iVar7;
                iVar7 = iVar7 + 4;
                uVar10 = uVar10 & uVar13;
                uVar15 = *(uint *)((int)puVar8 + uVar10) & 0x80808080;
              } while (uVar15 == 0);
            }
            uVar10 = uVar10 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                             (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3) &
                     uVar13;
            if (-1 < *(char *)((int)puVar8 + uVar10)) {
              uVar10 = *puVar8 & 0x80808080;
              uVar10 = (uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                     (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3;
            }
            bVar2 = (byte)(uVar17 >> 0x18);
            if (((uVar10 - uVar11 ^ uVar12 - uVar11) & uVar13) < 4) {
              bVar2 = bVar2 >> 1;
              *(byte *)((int)puVar8 + uVar12) = bVar2;
              *(byte *)((int)puVar8 + (uVar13 & uVar12 - 4) + 4) = bVar2;
              goto LAB_01668974;
            }
            cVar1 = *(char *)((int)puVar8 + uVar10);
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar8 + uVar10) = bVar2;
            *(byte *)((int)puVar8 + (uVar10 - 4 & uVar13) + 4) = bVar2;
            if (cVar1 == -1) break;
            iVar7 = -0x10;
            do {
              uVar14 = *(undefined4 *)((int)puVar16 + iVar7 + iVar6);
              *(undefined4 *)((int)puVar16 + iVar7 + iVar6) =
                   *(undefined4 *)((int)puVar8 + iVar7 + uVar10 * -0x10);
              *(undefined4 *)((int)puVar8 + iVar7 + uVar10 * -0x10) = uVar14;
              iVar7 = iVar7 + 4;
            } while (iVar7 != 0);
            puVar8 = (uint *)*param_1;
          }
          puVar9 = puVar8 + ~uVar10 * 4;
          uVar13 = param_1[1];
          puVar8 = (uint *)*param_1;
          *(undefined1 *)((int)puVar8 + uVar12) = 0xff;
          *(undefined1 *)((int)puVar8 + (uVar13 & uVar12 - 4) + 4) = 0xff;
          FUN_01bed4e2(puVar9,puVar16 + ~uVar12 * 4,0x10);
        }
LAB_01668974:
        iVar6 = iVar6 + -0x10;
        bVar19 = uVar12 != uVar18;
        uVar12 = uVar12 + 1;
        puVar16 = puVar8;
      } while (bVar19);
      if (7 < uVar13) {
        uVar13 = (uVar13 + 1 & 0xfffffff8) - (uVar13 + 1 >> 3);
      }
    }
    param_1[2] = uVar13 - param_1[3];
  }
  return 0x80000001;
}

