// FUN_01aa6d68 @ 01aa6d68 size=1776 calls_out=9 calls_in=1
// strings: 

undefined4 FUN_01aa6d68(uint *param_1,byte *param_2)

{
  ulonglong uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  byte *pbVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  byte *pbVar14;
  int iVar15;
  bool bVar16;
  bool bVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  byte *local_44;
  uint local_40;
  uint *local_3c;
  byte *local_38;
  uint *local_34;
  byte *local_30;
  uint *local_2c;
  uint local_28;
  
  pbVar14 = &DAT_00000001;
  if (param_2 != (byte *)0x0) {
    pbVar11 = (byte *)0x0;
    do {
      if (*(byte *)((int)param_1 + (int)pbVar11) == 0x2f) {
        if (pbVar11 != (byte *)0x0) {
          if (pbVar11 < param_2) {
            if ((char)*(byte *)((int)param_1 + (int)pbVar11) < -0x40) {
LAB_01aa6dc8:
              uVar10 = 0;
              puVar5 = &DAT_01d2e668;
              goto LAB_01aa704c;
            }
          }
          else if (param_2 != pbVar11) goto LAB_01aa6dc8;
        }
        pbVar14 = (byte *)((int)param_1 + (int)pbVar11);
        iVar15 = (int)param_2 - (int)pbVar11;
        goto LAB_01aa6de8;
      }
      pbVar11 = pbVar11 + 1;
    } while (param_2 != pbVar11);
  }
  iVar15 = 0;
  pbVar11 = param_2;
LAB_01aa6de8:
  FUN_014faff8(&local_44,param_1,pbVar11,0x40);
  pbVar12 = local_38;
  puVar8 = local_3c;
  param_2 = pbVar11;
  if (local_44 != (byte *)0x0) {
    pbVar11 = local_44;
    uVar13 = local_40;
    while (FUN_014faff8(&local_34,pbVar11,uVar13,0x25), uVar9 = local_28, puVar2 = local_2c,
          local_34 != (uint *)0x0) {
      if (local_30 == (byte *)0x0) {
        if (local_28 < 2) {
          return 1;
        }
      }
      else {
        iVar3 = FUN_01aa96ec();
        if (iVar3 == 0 || uVar9 < 2) {
          return 1;
        }
      }
      if ((9 < (byte)*puVar2 - 0x30) && (5 < ((byte)*puVar2 & 0xdf) - 0x41)) {
        return 1;
      }
      if ((9 < *(byte *)((int)puVar2 + 1) - 0x30) &&
         (5 < (*(byte *)((int)puVar2 + 1) & 0xdf) - 0x41)) {
        return 1;
      }
      if ((uVar9 != 2) && ((char)*(byte *)((int)puVar2 + 2) < -0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(puVar2,uVar9,2,uVar9,&DAT_01d2e658);
      }
      uVar13 = uVar9 - 2;
      pbVar11 = (byte *)((int)puVar2 + 2);
    }
    iVar3 = FUN_01aa96ec(pbVar11,uVar13);
    param_1 = puVar8;
    param_2 = pbVar12;
    if (iVar3 == 0) {
      return 1;
    }
  }
  FUN_014fb1ec(&local_34,param_1,param_2,0x3a);
  if (local_34 != (uint *)0x0) {
    puVar8 = local_2c;
    uVar13 = local_28;
    do {
      if (uVar13 == 0) {
        param_1 = local_34;
        param_2 = local_30;
        break;
      }
      uVar9 = *puVar8;
      uVar13 = uVar13 - 1;
      puVar8 = (uint *)((int)puVar8 + 1);
    } while (0xfffffff4 < (byte)uVar9 - 0x3a && (byte)uVar9 != 0x2f);
  }
  if (param_2 == (byte *)0x2) {
    pbVar11 = (byte *)((int)param_1 + 1);
LAB_01aa6f50:
    bVar16 = (byte)*param_1 == 0x5b;
    if (bVar16) {
      pbVar11 = (byte *)(uint)*pbVar11;
    }
    if (bVar16 && pbVar11 == &DAT_0000005d) {
      pbVar11 = param_2 + -1;
      pbVar12 = (byte *)((int)param_1 + 1);
      iVar4 = (int)(char)*pbVar12;
      bVar17 = SCARRY4(iVar4,0x40);
      iVar3 = iVar4 + 0x40;
      bVar16 = iVar4 == -0x40;
      if (-0x41 < iVar4) {
        iVar4 = (int)(char)*(byte *)((int)param_1 + (int)pbVar11);
        bVar17 = SCARRY4(iVar4,0x41);
        iVar3 = iVar4 + 0x41;
        bVar16 = iVar4 == -0x41;
      }
      if (bVar16 || iVar3 < 0 != bVar17) {
        uVar10 = 1;
        puVar5 = &DAT_01cfa804;
LAB_01aa704c:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(param_1,param_2,uVar10,pbVar11,puVar5);
      }
      param_2 = param_2 + -2;
      uVar18 = FUN_014fb2d8(pbVar12,param_2,0x76);
      if ((int)uVar18 == 0) {
        uVar18 = FUN_014fb2d8(pbVar12,param_2,0x56);
      }
      if ((int)uVar18 != 0) {
        FUN_014faff8(&local_34,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20),0x2e);
        if (local_34 == (uint *)0x0) {
          return 2;
        }
        if (local_30 == (byte *)0x0) {
          return 2;
        }
        while (local_30 != (byte *)0x0) {
          puVar8 = (uint *)((int)local_34 + 1);
          uVar13 = (uint)(byte)*local_34;
          local_30 = local_30 + -1;
          local_34 = puVar8;
          if ((uVar13 - 0x3a < 0xfffffff5 || uVar13 == 0x2f) &&
             ((uVar13 & 0xdf) - 0x47 < 0xfffffffa)) {
            return 2;
          }
        }
        if (local_28 == 0) {
          return 2;
        }
        if (local_28 < 4) {
          uVar13 = local_28;
          while (uVar13 != 0) {
            iVar3 = uVar13 - 1;
            uVar13 = uVar13 - 1;
            if (0x7fffffff < (uint)(int)(char)*(byte *)((int)local_2c + iVar3)) {
              return 2;
            }
          }
        }
        else {
          if ((*local_2c & 0x80808080) != 0) {
            return 2;
          }
          uVar13 = ((uint)((int)local_2c + 3) & 0xfffffffc) - (int)local_2c;
          if (uVar13 == 0) {
            uVar13 = 4;
          }
          for (; uVar13 < local_28 - 4; uVar13 = uVar13 + 4) {
            if ((*(uint *)((int)local_2c + uVar13) & 0x80808080) != 0) {
              return 2;
            }
          }
          if ((*(uint *)((int)local_2c + (local_28 - 4)) & 0x80808080) != 0) {
            return 2;
          }
        }
        local_30 = (byte *)((int)local_2c + local_28);
        local_34 = local_2c;
        iVar3 = FUN_01aa8fd8(&local_34);
        if (iVar3 != 0) {
          return 2;
        }
        goto LAB_01aa7070;
      }
      bVar16 = false;
      iVar3 = 0;
      uVar19 = CONCAT44(param_2,pbVar12);
      while( true ) {
        iVar4 = (int)(uVar19 >> 0x20);
        if (iVar4 == 0) break;
        FUN_014faff8(&local_44,(int)uVar19,iVar4,0x3a);
        pbVar11 = local_38;
        uVar1 = CONCAT44(local_38,local_3c);
        if (local_44 == (byte *)0x0) {
          if (uVar19 < 0x500000000) goto LAB_01aa7388;
          FUN_014faff8(&local_34,(int)uVar19,iVar4,0x2e);
          uVar13 = local_28;
          puVar8 = local_2c;
          if (((((local_34 != (uint *)0x0) && (iVar4 = FUN_014fa86c(local_34,local_30), iVar4 != 0))
               && (FUN_014faff8(&local_34,puVar8,uVar13,0x2e), uVar13 = local_28, puVar8 = local_2c,
                  local_34 != (uint *)0x0)) &&
              ((iVar4 = FUN_014fa86c(local_34,local_30), iVar4 != 0 &&
               (FUN_014faff8(&local_34,puVar8,uVar13,0x2e), local_34 != (uint *)0x0)))) &&
             (iVar4 = FUN_014fa86c(local_34,local_30), iVar4 != 0)) {
            iVar7 = FUN_014fa86c(local_2c,local_28);
            iVar4 = 2;
            if (iVar7 != 0) goto LAB_01aa7434;
          }
          return 2;
        }
        if (4 < local_40) {
          return 2;
        }
        pbVar12 = local_44;
        uVar13 = local_40;
        if (local_40 == 0) {
          uVar19 = FUN_014fb2d8(local_3c,local_38,0x3a);
          if ((int)uVar19 == 0) {
            return 2;
          }
          if (bVar16) {
            return 2;
          }
LAB_01aa721c:
          bVar16 = true;
          uVar1 = uVar19;
        }
        else {
          while (uVar13 != 0) {
            pbVar6 = pbVar12 + 1;
            uVar9 = (uint)*pbVar12;
            uVar13 = uVar13 - 1;
            pbVar12 = pbVar6;
            if ((uVar9 - 0x3a < 0xfffffff5 || uVar9 == 0x2f) && ((uVar9 & 0xdf) - 0x47 < 0xfffffffa)
               ) {
              return 2;
            }
          }
          uVar19 = FUN_014fb2d8(local_3c,local_38,0x3a);
          if ((int)uVar19 != 0) {
            if (bVar16) {
              return 2;
            }
            iVar3 = iVar3 + 1;
            goto LAB_01aa721c;
          }
          if (pbVar11 == (byte *)0x0) {
            return 2;
          }
          iVar3 = iVar3 + 1;
        }
        uVar19 = uVar1;
        if (8 < iVar3) {
          return 2;
        }
      }
      goto LAB_01aa7438;
    }
  }
  else if (&DAT_00000001 < param_2) {
    pbVar11 = (byte *)((int)param_1 + (int)param_2) + -1;
    goto LAB_01aa6f50;
  }
  while (FUN_014faff8(&local_34,param_1,param_2,0x25), uVar13 = local_28, puVar8 = local_2c,
        local_34 != (uint *)0x0) {
    if ((local_30 != (byte *)0x0) && (iVar3 = FUN_01aa951c(), iVar3 == 0)) {
      return 2;
    }
    if (uVar13 < 2) {
      return 2;
    }
    if ((9 < (byte)*puVar8 - 0x30) && (5 < ((byte)*puVar8 & 0xdf) - 0x41)) {
      return 2;
    }
    if ((9 < *(byte *)((int)puVar8 + 1) - 0x30) && (5 < (*(byte *)((int)puVar8 + 1) & 0xdf) - 0x41))
    {
      return 2;
    }
    if ((uVar13 != 2) && ((char)*(byte *)((int)puVar8 + 2) < -0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb514(puVar8,uVar13,2,uVar13,&DAT_01d2e658);
    }
    param_2 = (byte *)(uVar13 - 2);
    param_1 = (uint *)((int)puVar8 + 2);
  }
  uVar13 = FUN_01aa951c(param_1,param_2);
  goto LAB_01aa7064;
LAB_01aa7388:
  while( true ) {
    iVar4 = (int)(uVar19 >> 0x20);
    if (iVar4 == 0) break;
    pbVar11 = (byte *)uVar19 + 1;
    uVar13 = (uint)*(byte *)uVar19;
    iVar4 = iVar4 + -1;
    uVar19 = CONCAT44(iVar4,pbVar11);
    if ((uVar13 - 0x3a < 0xfffffff5 || uVar13 == 0x2f) &&
       (uVar19 = CONCAT44(iVar4,pbVar11), (uVar13 & 0xdf) - 0x47 < 0xfffffffa)) {
      return 2;
    }
  }
  iVar4 = 1;
LAB_01aa7434:
  iVar3 = iVar3 + iVar4;
LAB_01aa7438:
  bVar17 = iVar3 < 8;
  if (!bVar16) {
    bVar17 = iVar3 == 8;
  }
  uVar13 = (uint)bVar17;
LAB_01aa7064:
  if (uVar13 == 0) {
    return 2;
  }
LAB_01aa7070:
  if (iVar15 == 0) {
    uVar10 = 0xb;
  }
  else {
    uVar10 = 4;
    if (*pbVar14 == 0x2f) {
      iVar15 = FUN_01aa98bc(pbVar14 + 1,iVar15 + -1);
      uVar10 = 4;
      if (iVar15 != 0) {
        uVar10 = 0xb;
      }
    }
  }
  return uVar10;
}

