// FUN_01692d54 @ 01692d54 size=3264 calls_out=6 calls_in=1
// strings: 

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_01692d54(byte *param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  bool bVar15;
  bool bVar16;
  byte *local_28;
  uint local_24;
  byte *pbStack_20;
  int iStack_1c;
  
  if (param_2 != 0) {
    uVar12 = 0;
    do {
      if (param_1[uVar12] == 0x40) {
        uVar10 = uVar12;
        if (uVar12 == 0) {
LAB_01692e00:
          uVar10 = uVar10 + 1;
          if (uVar10 < param_2) {
            if ((char)param_1[uVar10] < -0x40) {
LAB_0169300c:
                    /* WARNING: Subroutine does not return */
              FUN_00faa8ac(param_1,param_2,uVar10,param_2,&DAT_01888dcc);
            }
            uVar8 = uVar10;
          }
          else {
            uVar8 = param_2;
            if (uVar10 != param_2) goto LAB_0169300c;
          }
        }
        else {
          if (uVar12 < param_2) {
            if ((char)param_1[uVar12] < -0x40) goto LAB_01693960;
            goto LAB_01692e00;
          }
          if (uVar12 != param_2) {
LAB_01693960:
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac(param_1,param_2,0,uVar12,&DAT_01888dbc);
          }
          uVar8 = 0;
          uVar10 = param_2;
          if (param_2 != 0xffffffff) goto LAB_01692e00;
        }
        pbVar2 = param_1 + uVar8;
        param_2 = param_2 - uVar8;
        goto joined_r0x01693210;
      }
      uVar12 = uVar12 + 1;
    } while (param_2 != uVar12);
  }
  pbVar2 = param_1;
LAB_01692d88:
  FUN_0115707c(&local_28,pbVar2,param_2,0x3a);
  pbVar6 = pbVar2;
  uVar12 = param_2;
  if (local_28 != (byte *)0x0) {
    pbVar7 = pbStack_20;
    iVar9 = iStack_1c;
    do {
      pbVar6 = local_28;
      uVar12 = local_24;
      if (iVar9 == 0) break;
      bVar1 = *pbVar7;
      iVar9 = iVar9 + -1;
      pbVar7 = pbVar7 + 1;
      pbVar6 = pbVar2;
      uVar12 = param_2;
    } while (0xfffffff4 < bVar1 - 0x3a && bVar1 != 0x2f);
  }
  if (uVar12 == 2) {
    pbVar2 = pbVar6 + 1;
  }
  else {
    if (uVar12 < 2) goto joined_r0x01692e58;
    pbVar2 = pbVar6 + (uVar12 - 1);
  }
  if (*pbVar6 == 0x5b) {
    pbVar2 = (byte *)(uint)*pbVar2;
  }
  if (*pbVar6 != 0x5b || pbVar2 != &DAT_0000005d) {
joined_r0x01692e58:
    for (; uVar12 != 0; uVar12 = uVar12 - 2) {
      uVar10 = 0;
      while (pbVar6[uVar10] != 0x25) {
        uVar10 = uVar10 + 1;
        if (uVar12 == uVar10) goto LAB_01692f68;
      }
      if ((uVar10 != 0) && ((char)pbVar6[uVar10] < -0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(pbVar6,uVar12,0,uVar10,&DAT_01888dbc);
      }
      uVar8 = uVar10 + 1;
      if (uVar8 < uVar12) {
        if ((char)pbVar6[uVar8] < -0x40) {
LAB_016938f4:
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(pbVar6,uVar12,uVar8,uVar12,&DAT_01888dcc);
        }
        uVar11 = uVar8;
      }
      else {
        uVar11 = uVar12;
        if (uVar8 != uVar12) goto LAB_016938f4;
      }
      uVar12 = uVar12 - uVar11;
      if (uVar10 == 0) {
        if (uVar12 < 2) {
          return 2;
        }
      }
      else {
        iVar9 = FUN_01690ccc(pbVar6,uVar10);
        if (iVar9 == 0 || uVar12 < 2) {
          return 2;
        }
      }
      pbVar6 = pbVar6 + uVar11;
      if ((9 < *pbVar6 - 0x30) && (5 < (*pbVar6 & 0xdf) - 0x41)) {
        return 2;
      }
      if ((9 < pbVar6[1] - 0x30) && (5 < (pbVar6[1] & 0xdf) - 0x41)) {
        return 2;
      }
      if ((uVar12 != 2) && ((char)pbVar6[2] < -0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(pbVar6,uVar12,2,uVar12,&DAT_018adf80);
      }
      pbVar6 = pbVar6 + 2;
    }
    uVar12 = 0;
LAB_01692f68:
    uVar12 = FUN_01690ccc(pbVar6,uVar12);
LAB_01692f78:
    uVar3 = 2;
    if (uVar12 != 0) {
      uVar3 = 0xb;
    }
    return uVar3;
  }
  puVar13 = (uint *)(pbVar6 + 1);
  bVar1 = (byte)*puVar13;
  iVar4 = (int)(char)bVar1;
  bVar16 = SCARRY4(iVar4,0x40);
  iVar9 = iVar4 + 0x40;
  bVar15 = iVar4 == -0x40;
  if (-0x41 < iVar4) {
    iVar4 = (int)(char)pbVar6[uVar12 - 1];
    bVar16 = SCARRY4(iVar4,0x41);
    iVar9 = iVar4 + 0x41;
    bVar15 = iVar4 == -0x41;
  }
  if (bVar15 || iVar9 < 0 != bVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa8ac(pbVar6,uVar12,1,uVar12 - 1,&DAT_01888e5c);
  }
  uVar10 = uVar12 - 2;
  if ((uVar10 == 0) || (bVar1 != 0x56 && bVar1 != 0x76)) {
    bVar15 = false;
    iVar9 = 0;
LAB_0169302c:
    if (uVar10 != 0) {
      uVar8 = 0;
      do {
        if (*(byte *)((int)puVar13 + uVar8) == 0x3a) goto LAB_01693054;
        uVar8 = uVar8 + 1;
      } while (uVar10 != uVar8);
      if (uVar10 < 5) {
        while (uVar10 != 0) {
          puVar14 = (uint *)((int)puVar13 + 1);
          uVar12 = (uint)(byte)*puVar13;
          uVar10 = uVar10 - 1;
          puVar13 = puVar14;
          if ((uVar12 - 0x3a < 0xfffffff5 || uVar12 == 0x2f) &&
             ((uVar12 & 0xdf) - 0x47 < 0xfffffffa)) {
            return 2;
          }
        }
        iVar4 = 1;
      }
      else {
        uVar8 = 0;
        while (*(byte *)((int)puVar13 + uVar8) != 0x2e) {
          uVar8 = uVar8 + 1;
          if (uVar10 == uVar8) {
            return 2;
          }
        }
        uVar12 = uVar8;
        if (uVar8 == 0) {
LAB_016933e4:
          uVar12 = uVar12 + 1;
          if (uVar12 < uVar10) {
            if ((char)*(byte *)((int)puVar13 + uVar12) < -0x40) goto LAB_01693998;
            uVar11 = uVar12;
          }
          else {
            uVar11 = uVar10;
            if (uVar12 != uVar10) goto LAB_01693998;
          }
        }
        else {
          if (uVar8 < uVar10) {
            if ((char)*(byte *)((int)puVar13 + uVar8) < -0x40) goto LAB_016939b0;
            goto LAB_016933e4;
          }
          if (uVar8 != uVar10) goto LAB_016939b0;
          uVar11 = 0;
          uVar12 = uVar10;
          if (uVar10 != 0xffffffff) goto LAB_016933e4;
        }
        if (uVar8 == 1) {
          bVar1 = (byte)*puVar13;
joined_r0x0169356c:
          if (9 < bVar1 - 0x30) {
            return 2;
          }
        }
        else {
          if (uVar8 != 3) {
            if (uVar8 != 2) {
              return 2;
            }
            if (8 < (byte)*puVar13 - 0x31) {
              return 2;
            }
            bVar1 = *(byte *)((int)puVar13 + 1);
            goto joined_r0x0169356c;
          }
          if ((byte)*puVar13 != 0x32) {
            if ((byte)*puVar13 != 0x31) {
              return 2;
            }
            if (9 < *(byte *)((int)puVar13 + 1) - 0x30) {
              return 2;
            }
LAB_0169361c:
            bVar1 = *(byte *)((int)puVar13 + 2);
            goto joined_r0x0169356c;
          }
          if (*(byte *)((int)puVar13 + 1) - 0x30 < 5) goto LAB_0169361c;
          if (*(byte *)((int)puVar13 + 1) != 0x35) {
            return 2;
          }
          if (5 < *(byte *)((int)puVar13 + 2) - 0x30) {
            return 2;
          }
        }
        FUN_01156f7c(&local_28,(byte *)((int)puVar13 + uVar11),uVar10 - uVar11,0x2e);
        if (local_28 == (byte *)0x0) {
          return 2;
        }
        if (local_24 == 1) {
          uVar12 = (uint)*local_28;
LAB_016936fc:
          if (9 < uVar12 - 0x30) {
            return 2;
          }
        }
        else {
          if (local_24 != 3) {
            if (local_24 != 2) {
              return 2;
            }
            if (8 < *local_28 - 0x31) {
              return 2;
            }
            uVar12 = (uint)local_28[1];
            goto LAB_016936fc;
          }
          if (*local_28 != 0x32) {
            if (*local_28 != 0x31) {
              return 2;
            }
            if (9 < local_28[1] - 0x30) {
              return 2;
            }
LAB_016936f8:
            uVar12 = (uint)local_28[2];
            goto LAB_016936fc;
          }
          if (local_28[1] - 0x30 < 5) goto LAB_016936f8;
          if (local_28[1] != 0x35) {
            return 2;
          }
          if (5 < local_28[2] - 0x30) {
            return 2;
          }
        }
        FUN_01156f7c(&local_28,pbStack_20,iStack_1c,0x2e);
        if (local_28 == (byte *)0x0) {
          return 2;
        }
        if (local_24 == 1) {
          bVar1 = *local_28;
joined_r0x016937f4:
          if (9 < bVar1 - 0x30) {
            return 2;
          }
        }
        else {
          if (local_24 != 3) {
            if (local_24 != 2) {
              return 2;
            }
            if (8 < *local_28 - 0x31) {
              return 2;
            }
            bVar1 = local_28[1];
            goto joined_r0x016937f4;
          }
          if (*local_28 != 0x32) {
            if (*local_28 != 0x31) {
              return 2;
            }
            if (9 < local_28[1] - 0x30) {
              return 2;
            }
LAB_016937e4:
            bVar1 = local_28[2];
            goto joined_r0x016937f4;
          }
          if (local_28[1] - 0x30 < 5) goto LAB_016937e4;
          if (local_28[1] != 0x35) {
            return 2;
          }
          if (5 < local_28[2] - 0x30) {
            return 2;
          }
        }
        if (iStack_1c == 1) {
          uVar12 = (uint)*pbStack_20;
LAB_016938bc:
          iVar4 = 2;
          if (9 < uVar12 - 0x30) {
            return 2;
          }
        }
        else {
          if (iStack_1c != 3) {
            if (iStack_1c != 2) {
              return 2;
            }
            if (8 < *pbStack_20 - 0x31) {
              return 2;
            }
            uVar12 = (uint)pbStack_20[1];
            goto LAB_016938bc;
          }
          if (*pbStack_20 != 0x32) {
            if (*pbStack_20 != 0x31) {
              return 2;
            }
            if (9 < pbStack_20[1] - 0x30) {
              return 2;
            }
LAB_016938b8:
            uVar12 = (uint)pbStack_20[2];
            goto LAB_016938bc;
          }
          if (pbStack_20[1] - 0x30 < 5) goto LAB_016938b8;
          if (pbStack_20[1] != 0x35) {
            return 2;
          }
          iVar4 = 2;
          if (5 < pbStack_20[2] - 0x30) {
            return 2;
          }
        }
      }
      iVar9 = iVar9 + iVar4;
    }
    bVar16 = iVar9 < 8;
    if (!bVar15) {
      bVar16 = iVar9 == 8;
    }
    uVar12 = (uint)bVar16;
    goto LAB_01692f78;
  }
  if (uVar10 == 1) {
    return 2;
  }
  if ((char)pbVar6[2] < -0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa8ac(puVar13,uVar10,1,uVar10,&DAT_01888e6c);
  }
  puVar13 = (uint *)(pbVar6 + 2);
  uVar10 = uVar12 - 3;
  uVar8 = 0;
  while (*(byte *)((int)puVar13 + uVar8) != 0x2e) {
    uVar8 = uVar8 + 1;
    if (uVar10 == uVar8) {
      return 2;
    }
  }
  if (uVar8 == 0) {
LAB_01693424:
    uVar12 = uVar8 + 1;
  }
  else {
    if (uVar8 < uVar10) {
      if ((char)*(byte *)((int)puVar13 + uVar8) < -0x40) goto LAB_016939b0;
      goto LAB_01693424;
    }
    if (uVar8 != uVar10) {
LAB_016939b0:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(puVar13,uVar10,0,uVar8,&DAT_01888dbc);
    }
    uVar12 = uVar12 - 2;
    uVar11 = uVar10;
    puVar14 = puVar13;
    if (uVar12 == 0) goto LAB_016934c8;
  }
  if (uVar12 < uVar10) {
    if ((char)*(byte *)((int)puVar13 + uVar12) < -0x40) {
LAB_01693998:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(puVar13,uVar10,uVar12,uVar10,&DAT_01888dcc);
    }
    uVar5 = uVar12;
  }
  else {
    uVar5 = uVar10;
    if (uVar12 != uVar10) goto LAB_01693998;
  }
  if (uVar8 == 0) {
    return 2;
  }
  uVar11 = uVar10 - uVar5;
  puVar14 = (uint *)((int)puVar13 + uVar5);
LAB_016934c8:
  uVar12 = 0;
  while (uVar8 != uVar12) {
    uVar5 = (uint)*(byte *)((int)puVar13 + uVar12);
    uVar12 = uVar12 + 1;
    if ((uVar5 - 0x3a < 0xfffffff5 || uVar5 == 0x2f) && ((uVar5 & 0xdf) - 0x47 < 0xfffffffa)) {
      return 2;
    }
  }
  if (uVar11 == 0) {
    return 2;
  }
  if (uVar11 < 4) {
    while (uVar11 != 0) {
      iVar9 = uVar11 - 1;
      uVar11 = uVar11 - 1;
      if (0x7fffffff < (uint)(int)(char)*(byte *)((int)puVar14 + iVar9)) {
        return 2;
      }
    }
  }
  else {
    if ((*puVar14 & 0x80808080) != 0) {
      return 2;
    }
    uVar12 = ((uint)((int)puVar14 + 3) & 0xfffffffc) - (int)puVar14;
    if (uVar12 == 0) {
      uVar12 = 4;
    }
    for (; uVar12 < uVar11 - 4; uVar12 = uVar12 + 4) {
      if ((*(uint *)((int)puVar14 + uVar12) & 0x80808080) != 0) {
        return 2;
      }
    }
    if ((*(uint *)((int)puVar14 + (uVar11 - 4)) & 0x80808080) != 0) {
      return 2;
    }
  }
  while( true ) {
    if (puVar14 == (uint *)((int)puVar13 + uVar10)) {
      return 0xb;
    }
    bVar1 = (byte)*puVar14;
    if ((char)bVar1 < '\0') break;
    puVar14 = (uint *)((int)puVar14 + 1);
    if (((&DAT_004149d6)[bVar1] & 0x40) == 0) {
      return 2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa4a4((uint)bVar1,0x80,&DAT_018ae088);
joined_r0x01693210:
  if (uVar12 == 0) goto LAB_0169331c;
  uVar10 = 0;
  while (param_1[uVar10] != 0x25) {
    uVar10 = uVar10 + 1;
    if (uVar12 == uVar10) goto LAB_01693320;
  }
  if ((uVar10 != 0) && ((char)param_1[uVar10] < -0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa8ac(param_1,uVar12,0,uVar10,&DAT_01888dbc);
  }
  uVar8 = uVar10 + 1;
  if (uVar8 < uVar12) {
    if ((char)param_1[uVar8] < -0x40) {
LAB_01693948:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(param_1,uVar12,uVar8,uVar12,&DAT_01888dcc);
    }
    uVar11 = uVar8;
  }
  else {
    uVar11 = uVar12;
    if (uVar8 != uVar12) goto LAB_01693948;
  }
  uVar12 = uVar12 - uVar11;
  if (uVar10 == 0) {
    if (uVar12 < 2) {
      return 1;
    }
  }
  else {
    iVar9 = FUN_016902dc();
    if (iVar9 == 0 || uVar12 < 2) {
      return 1;
    }
  }
  param_1 = param_1 + uVar11;
  if ((9 < *param_1 - 0x30) && (5 < (*param_1 & 0xdf) - 0x41)) {
    return 1;
  }
  if ((9 < param_1[1] - 0x30) && (5 < (param_1[1] & 0xdf) - 0x41)) {
    return 1;
  }
  if ((uVar12 != 2) && ((char)param_1[2] < -0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa8ac(param_1,uVar12,2,uVar12,&DAT_018adf80);
  }
  uVar12 = uVar12 - 2;
  param_1 = param_1 + 2;
  goto joined_r0x01693210;
LAB_0169331c:
  uVar12 = 0;
LAB_01693320:
  iVar9 = FUN_016902dc(param_1,uVar12);
  if (iVar9 == 0) {
    return 1;
  }
  goto LAB_01692d88;
LAB_01693054:
  if ((uVar8 != 0) && ((char)*(byte *)((int)puVar13 + uVar8) < -0x40)) goto LAB_016939b0;
  uVar12 = uVar8 + 1;
  if (uVar12 < uVar10) {
    if ((char)*(byte *)((int)puVar13 + uVar12) < -0x40) goto LAB_01693998;
    uVar11 = uVar12;
  }
  else {
    uVar11 = uVar10;
    if (uVar12 != uVar10) goto LAB_01693998;
  }
  if (4 < uVar8) {
    return 2;
  }
  puVar14 = (uint *)((int)puVar13 + uVar11);
  uVar10 = uVar10 - uVar11;
  if (uVar8 == 0) {
    if (uVar10 == 0) {
      return 2;
    }
    if ((byte)*puVar14 != 0x3a) {
      return 2;
    }
    if ((uVar10 != 1) && ((char)*(byte *)((int)puVar14 + 1) < -0x40)) {
LAB_016939e4:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(puVar14,uVar10,1,uVar10,&DAT_01888e6c);
    }
    if (bVar15) {
      return 2;
    }
  }
  else {
    uVar12 = (uint)(byte)*puVar13;
    if ((uVar12 - 0x3a < 0xfffffff5 || uVar12 == 0x2f) && ((uVar12 & 0xdf) - 0x47 < 0xfffffffa)) {
      return 2;
    }
    if (uVar8 != 1) {
      uVar12 = (uint)*(byte *)((int)puVar13 + 1);
      if ((uVar12 - 0x3a < 0xfffffff5 || uVar12 == 0x2f) && ((uVar12 & 0xdf) - 0x47 < 0xfffffffa)) {
        return 2;
      }
      if (uVar8 != 2) {
        uVar12 = (uint)*(byte *)((int)puVar13 + 2);
        if ((uVar12 - 0x3a < 0xfffffff5 || uVar12 == 0x2f) && ((uVar12 & 0xdf) - 0x47 < 0xfffffffa))
        {
          return 2;
        }
        if ((uVar8 != 3) &&
           (*(byte *)((int)puVar13 + 3) - 0x3a < 0xfffffff6 &&
            (*(byte *)((int)puVar13 + 3) & 0xdf) - 0x47 < 0xfffffffa || uVar8 != 4)) {
          return 2;
        }
      }
    }
    if (uVar10 == 0) {
      return 2;
    }
    if ((byte)*puVar14 != 0x3a) {
      iVar9 = iVar9 + 1;
      puVar13 = puVar14;
      goto joined_r0x016931ec;
    }
    if ((uVar10 != 1) && ((char)*(byte *)((int)puVar14 + 1) < -0x40)) goto LAB_016939e4;
    if (bVar15) {
      return 2;
    }
    iVar9 = iVar9 + 1;
  }
  puVar13 = (uint *)((int)puVar14 + 1);
  uVar10 = uVar10 - 1;
  bVar15 = true;
joined_r0x016931ec:
  if (8 < iVar9) {
    return 2;
  }
  goto LAB_0169302c;
}

