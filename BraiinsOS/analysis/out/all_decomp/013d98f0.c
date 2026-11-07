// FUN_013d98f0 @ 013d98f0 size=720 calls_out=3 calls_in=1
// strings: 

undefined1 * FUN_013d98f0(int *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  bool bVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  
  if (*(char *)(*param_1 + 100) == '\0') {
    puVar12 = (undefined1 *)FUN_013d82f4();
    return puVar12;
  }
  pbVar13 = (byte *)param_1[2];
  puVar12 = &DAT_00110000;
  pbVar7 = *(byte **)(*param_1 + 0x50);
  if (pbVar7 != pbVar13) {
    uVar2 = FUN_013d2518();
    iVar4 = 1;
    if (0x7f < uVar2) {
      iVar4 = 2;
    }
    if (uVar2 < 0x800) {
      iVar3 = param_1[1];
    }
    else {
      iVar4 = 4;
      if (uVar2 < 0x10000) {
        iVar4 = 3;
      }
      iVar3 = param_1[1];
    }
    pbVar7 = pbVar7 + iVar4;
    if (pbVar7 != (byte *)0x0) {
      if (pbVar7 < pbVar13) {
        if ((char)pbVar7[iVar3] < -0x40) {
LAB_013d9ba8:
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(iVar3,pbVar13,pbVar7,pbVar13,&DAT_01894ae8);
        }
      }
      else if (pbVar7 != pbVar13) goto LAB_013d9ba8;
    }
    pbVar5 = pbVar7 + iVar3;
    pbVar8 = (byte *)0x0;
    bVar11 = false;
LAB_013d99ac:
    do {
      do {
        pbVar9 = pbVar8;
        if (pbVar5 == pbVar13 + iVar3) goto LAB_013d9ac0;
        pbVar6 = pbVar5 + 1;
        uVar2 = (uint)*pbVar5;
        if (0x7fffffff < (uint)(int)(char)*pbVar5) {
          if (uVar2 < 0xe0) {
            uVar2 = pbVar5[1] & 0x3f | (uVar2 & 0x1f) << 6;
            pbVar6 = pbVar5 + 2;
          }
          else {
            uVar10 = pbVar5[2] & 0x3f | (pbVar5[1] & 0x3f) << 6;
            if (uVar2 < 0xf0) {
              uVar2 = uVar10 | (uVar2 & 0x1f) << 0xc;
              pbVar6 = pbVar5 + 3;
            }
            else {
              uVar2 = pbVar5[3] & 0x3f | uVar10 << 6 | (uVar2 & 7) << 0x12;
              pbVar6 = pbVar5 + 4;
            }
          }
        }
        pbVar8 = pbVar6 + ((int)pbVar9 - (int)pbVar5);
        pbVar5 = pbVar6;
      } while ((uVar2 - 9 < 5) || (uVar2 == 0x20));
      if (0x7f < uVar2) {
        uVar10 = uVar2 >> 8;
        if (uVar10 < 0x20) {
          if (uVar10 == 0) {
            bVar1 = (&DAT_0041951b)[uVar2 & 0xff] & 1;
joined_r0x013d9a90:
            if (bVar1 != 0) goto LAB_013d99ac;
          }
          else if ((uVar10 == 0x16) && (uVar2 == 0x1680)) goto LAB_013d99ac;
        }
        else {
          if (uVar10 == 0x20) {
            bVar1 = (&DAT_0041951b)[uVar2 & 0xff] & 2;
            goto joined_r0x013d9a90;
          }
          if ((uVar10 == 0x30) && (uVar2 == 0x3000)) goto LAB_013d99ac;
        }
      }
      uVar10 = 0x23;
      if (bVar11) {
        uVar10 = 10;
      }
      bVar11 = (bool)(uVar2 == 0x23 & (bVar11 ^ 1U));
    } while (uVar2 == uVar10);
    pbVar7 = pbVar9 + (int)pbVar7;
LAB_013d9ac0:
    if (pbVar7 != (byte *)0x0) {
      if (pbVar7 < pbVar13) {
        if ((char)pbVar7[iVar3] < -0x40) {
LAB_013d9ae0:
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(iVar3,pbVar13,pbVar7,pbVar13,&DAT_01894af8);
        }
      }
      else if (pbVar7 != pbVar13) goto LAB_013d9ae0;
    }
    if (pbVar7 != pbVar13) {
      pbVar7 = pbVar7 + iVar3;
      puVar12 = (undefined1 *)(uint)*pbVar7;
      if ((char)*pbVar7 < '\0') {
        if (puVar12 < (undefined1 *)0xe0) {
          return (undefined1 *)(pbVar7[1] & 0x3f | ((uint)puVar12 & 0x1f) << 6);
        }
        uVar2 = pbVar7[2] & 0x3f | (pbVar7[1] & 0x3f) << 6;
        if (puVar12 < &DAT_000000f0) {
          return (undefined1 *)(uVar2 | ((uint)puVar12 & 0x1f) << 0xc);
        }
        return (undefined1 *)(pbVar7[3] & 0x3f | uVar2 << 6 | ((uint)puVar12 & 7) << 0x12);
      }
    }
  }
  return puVar12;
}

