// FUN_0128d658 @ 0128d658 size=1084 calls_out=2 calls_in=2
// strings: 

void FUN_0128d658(ulonglong *param_1,byte *param_2,uint param_3,int param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  byte unaff_r8;
  byte *pbVar14;
  bool bVar15;
  bool bVar16;
  ulonglong uVar17;
  
  if (param_4 == 0) {
    if (param_3 != 0) {
      puVar4 = (undefined1 *)(uint)*param_2;
      goto LAB_0128d6c0;
    }
  }
  else if (param_3 != 0) {
    puVar4 = (undefined1 *)(uint)*param_2;
    if (((uint)puVar4 | 0x20) == 0x7a) {
      if ((param_3 == 1) || (-0x41 < (char)param_2[1])) {
        *(byte **)param_1 = param_2 + 1;
        *(uint *)((int)param_1 + 4) = param_3 - 1;
        *(undefined4 *)(param_1 + 1) = 0;
        return;
      }
      uVar6 = 0x1c26248;
      goto LAB_0128da60;
    }
LAB_0128d6c0:
    if (0x7fffffff < (uint)(int)(char)puVar4) {
      if (puVar4 < (undefined1 *)0xe0) {
        puVar4 = (undefined1 *)(param_2[1] & 0x3f | ((uint)puVar4 & 0x1f) << 6);
      }
      else {
        uVar10 = param_2[2] & 0x3f | (param_2[1] & 0x3f) << 6;
        if (puVar4 < (undefined1 *)0xf0) {
          puVar4 = (undefined1 *)(uVar10 | ((uint)puVar4 & 0x1f) << 0xc);
        }
        else {
          puVar4 = (undefined1 *)(param_2[3] & 0x3f | uVar10 << 6 | ((uint)puVar4 & 7) << 0x12);
        }
      }
    }
    if (puVar4 < (undefined1 *)0x2212) {
      if (puVar4 == (undefined1 *)0x2b) {
        bVar16 = false;
        iVar5 = 1;
        iVar8 = -1;
        if ((param_3 != 1) && ((char)param_2[1] < -0x40)) {
          uVar6 = 0x1c26258;
LAB_0128da60:
                    /* WARNING: Subroutine does not return */
          FUN_012fb514(param_2,param_3,1,param_3,uVar6);
        }
LAB_0128d7f4:
        param_3 = param_3 + iVar8;
        if (param_3 < 2) goto LAB_0128d800;
        param_2 = param_2 + iVar5;
        bVar1 = param_2[1];
        bVar7 = bVar1 - 0x30;
        bVar15 = 8 < bVar7;
        if (bVar7 < 10) {
          unaff_r8 = *param_2;
          bVar15 = 9 < (byte)(unaff_r8 - 0x30);
        }
        if (!bVar15) {
          pbVar14 = (byte *)0x0;
          pbVar9 = (byte *)0x0;
          if (param_3 != 2) {
            if ((char)param_2[2] < -0x40) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb514(param_2,param_3,2,param_3,0x1c26288);
            }
            pbVar14 = (byte *)(param_3 - 2);
            pbVar11 = param_2 + 2;
            do {
              pbVar12 = pbVar11 + 1;
              uVar10 = (uint)*pbVar11;
              if (0x7fffffff < (uint)(int)(char)*pbVar11) {
                if (uVar10 < 0xe0) {
                  uVar10 = pbVar11[1] & 0x3f | (uVar10 & 0x1f) << 6;
                  pbVar12 = pbVar11 + 2;
                }
                else {
                  uVar13 = pbVar11[2] & 0x3f | (pbVar11[1] & 0x3f) << 6;
                  if (uVar10 < 0xf0) {
                    uVar10 = uVar13 | (uVar10 & 0x1f) << 0xc;
                    pbVar12 = pbVar11 + 3;
                  }
                  else {
                    uVar10 = pbVar11[3] & 0x3f | uVar13 << 6 | (uVar10 & 7) << 0x12;
                    pbVar12 = pbVar11 + 4;
                  }
                }
              }
              if ((4 < uVar10 - 9) && (uVar10 != 0x20 && uVar10 != 0x3a)) {
                if (uVar10 < 0x80) goto LAB_0128d990;
                uVar13 = uVar10 >> 8;
                if (uVar13 < 0x20) {
                  if (uVar13 == 0) {
                    bVar7 = (&DAT_00533bcd)[uVar10 & 0xff] & 1;
joined_r0x0128d984:
                    if (bVar7 == 0) goto LAB_0128d990;
                  }
                  else if ((uVar13 != 0x16) || (uVar10 != 0x1680)) goto LAB_0128d990;
                }
                else {
                  if (uVar13 == 0x20) {
                    bVar7 = (&DAT_00533bcd)[uVar10 & 0xff] & 2;
                    goto joined_r0x0128d984;
                  }
                  if ((uVar13 != 0x30) || (uVar10 != 0x3000)) goto LAB_0128d990;
                }
              }
              pbVar9 = pbVar12 + ((int)pbVar9 - (int)pbVar11);
              pbVar11 = pbVar12;
            } while (pbVar12 != param_2 + param_3);
            pbVar9 = pbVar14;
          }
LAB_0128d990:
          param_2 = param_2 + (int)pbVar9;
          if ((uint)((int)pbVar14 - (int)pbVar9) < 2) {
            if (param_5 != 0) {
              iVar5 = 0;
              uVar17 = ZEXT48(param_2 + 2);
              if (pbVar14 == pbVar9) goto LAB_0128da08;
            }
            goto LAB_0128d800;
          }
          bVar7 = param_2[2];
          bVar2 = param_2[3];
          if ((byte)(bVar7 - 0x30) < 6) {
            if ((byte)(bVar2 - 0x30) < 10) {
              iVar5 = (uint)(byte)((bVar2 + bVar7 * '\n') - 0x10) * 0x3c;
              uVar17 = FUN_0128daac();
LAB_0128da08:
              iVar5 = (short)(ushort)(byte)((bVar1 + unaff_r8 * '\n') - 0x10) * 0xe10 + iVar5;
              if (bVar16) {
                iVar5 = -iVar5;
              }
              *param_1 = uVar17;
              *(int *)(param_1 + 1) = iVar5;
              return;
            }
          }
          else {
            bVar16 = 8 < (byte)(bVar2 - 0x30);
            if ((byte)(bVar2 - 0x30) < 10) {
              bVar16 = 3 < (byte)(bVar7 - 0x36);
            }
            if (!bVar16) {
              uVar3 = 0;
              *(undefined4 *)param_1 = 0;
              goto LAB_0128d844;
            }
          }
        }
      }
      else if (puVar4 == (undefined1 *)0x2d) {
        iVar5 = 1;
        iVar8 = -1;
        if (param_3 == 1) {
          bVar16 = true;
        }
        else {
          bVar16 = true;
          if ((char)param_2[1] < -0x40) {
            uVar6 = 0x1c26268;
            goto LAB_0128da60;
          }
        }
        goto LAB_0128d7f4;
      }
LAB_0128d838:
      *(undefined4 *)param_1 = 0;
      uVar3 = 3;
      goto LAB_0128d844;
    }
    if (puVar4 == (undefined1 *)0x2212) {
      if (param_3 < 4) {
        if (param_3 != 3) goto LAB_0128d7a4;
      }
      else if ((char)param_2[3] < -0x40) {
LAB_0128d7a4:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(param_2,param_3,3,param_3,0x1c26278);
      }
      bVar16 = true;
      iVar5 = 3;
      iVar8 = -3;
      goto LAB_0128d7f4;
    }
    if (puVar4 != &DAT_00110000) goto LAB_0128d838;
  }
LAB_0128d800:
  *(undefined4 *)param_1 = 0;
  uVar3 = 4;
LAB_0128d844:
  *(undefined1 *)((int)param_1 + 4) = uVar3;
  return;
}

