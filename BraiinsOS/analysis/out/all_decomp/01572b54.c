// FUN_01572b54 @ 01572b54 size=1248 calls_out=2 calls_in=1
// strings: 

ulonglong FUN_01572b54(undefined4 *param_1,undefined2 *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined2 uVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  int iVar13;
  byte *pbVar14;
  int iVar15;
  int iVar16;
  char local_29;
  ushort local_28;
  ushort local_26;
  
  if (param_3 == 0) {
    return 0;
  }
  pbVar12 = (byte *)*param_1;
  iVar13 = param_1[1];
  if (param_3 != 1) {
    FUN_01572350(&local_29,param_1);
    uVar2 = 0;
    if (local_29 != '\0') {
      if (param_3 == 0) {
LAB_01573004:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar2,param_3,&DAT_018a9080);
      }
LAB_01572ba0:
      param_2[uVar2] = local_28 << 8 | local_28 >> 8;
      uVar3 = uVar2 + 1;
      if (param_3 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar3,param_3,&DAT_018a9090);
      }
      param_2[uVar3] = local_26 << 8 | local_26 >> 8;
      return CONCAT44(1,uVar2 + 2);
    }
  }
  uVar2 = 0;
  if (iVar13 == 0) {
    iVar13 = 0;
LAB_01572d28:
    *param_1 = pbVar12;
    param_1[1] = iVar13;
    return (ulonglong)uVar2;
  }
  iVar5 = iVar13 + -1;
  pbVar4 = pbVar12 + 1;
  uVar3 = (uint)*pbVar12;
  *param_1 = pbVar4;
  param_1[1] = iVar5;
  uVar9 = uVar3 - 0x30;
  if (0x39 < uVar3) {
    uVar9 = (uVar3 - 0x41 & 0xffffffdf) + 10;
  }
  if (0xf < uVar9) goto LAB_01572d28;
  if (iVar5 == 0) {
    iVar5 = 0;
    *param_2 = (short)uVar9;
    pbVar14 = pbVar4;
    goto joined_r0x01572d48;
  }
  uVar2 = (uint)pbVar12[1];
  iVar16 = iVar13 + -2;
  uVar3 = uVar2 - 0x30;
  if (0x39 < uVar2) {
    uVar3 = (uVar2 - 0x41 & 0xffffffdf) + 10;
  }
  pbVar14 = pbVar12 + 2;
  *param_1 = pbVar14;
  param_1[1] = iVar16;
  if (uVar3 < 0x10) {
    uVar9 = uVar3 | uVar9 << 4;
    uVar8 = (undefined2)uVar9;
    if (iVar16 != 0) {
      uVar2 = (uint)pbVar12[2];
      pbVar10 = pbVar12 + 3;
      iVar7 = iVar13 + -3;
      *param_1 = pbVar10;
      uVar3 = uVar2 - 0x30;
      if (0x39 < uVar2) {
        uVar3 = (uVar2 - 0x41 & 0xffffffdf) + 10;
      }
      param_1[1] = iVar7;
      pbVar4 = pbVar14;
      iVar5 = iVar16;
      if (uVar3 < 0x10) {
        uVar9 = uVar3 | uVar9 << 4;
        uVar8 = (undefined2)uVar9;
        if (iVar7 == 0) {
          iVar5 = 0;
          pbVar14 = pbVar10;
          goto LAB_01572fdc;
        }
        uVar3 = (uint)pbVar12[3];
        iVar16 = iVar13 + -4;
        pbVar14 = pbVar12 + 4;
        uVar2 = uVar3 - 0x30;
        if (0x39 < uVar3) {
          uVar2 = (uVar3 - 0x41 & 0xffffffdf) + 10;
        }
        *param_1 = pbVar14;
        param_1[1] = iVar16;
        pbVar4 = pbVar10;
        iVar5 = iVar7;
        if (uVar2 < 0x10) {
          uVar9 = uVar2 | uVar9 << 4;
          uVar8 = (undefined2)uVar9;
          if (iVar16 == 0) {
            iVar5 = 0;
            goto LAB_01572fdc;
          }
          uVar2 = (uint)*pbVar14;
          uVar3 = uVar2 - 0x30;
          if (0x39 < uVar2) {
            uVar3 = (uVar2 - 0x41 & 0xffffffde) + 10;
          }
          uVar2 = 0;
          pbVar4 = pbVar14;
          iVar5 = iVar16;
          if (uVar3 < 0x10) goto LAB_01572d28;
        }
      }
      goto LAB_01572fd8;
    }
    iVar5 = 0;
  }
  else {
LAB_01572fd8:
    uVar8 = (undefined2)uVar9;
    *param_1 = pbVar4;
    param_1[1] = iVar5;
    pbVar14 = pbVar4;
  }
LAB_01572fdc:
  *param_2 = uVar8;
joined_r0x01572d48:
  if (param_3 == 1) {
    return 1;
  }
  iVar16 = param_3 * 2 + -2;
  uVar2 = 1;
  pbVar12 = pbVar14;
  iVar13 = iVar5;
  puVar6 = param_2;
  do {
    puVar6 = puVar6 + 1;
    if (uVar2 < param_3 - 1) {
      if (iVar13 != 0) {
        bVar1 = *pbVar12;
        *param_1 = pbVar12 + 1;
        param_1[1] = iVar13 + -1;
        if ((bVar1 == 0x3a) && (FUN_01572350(&local_29,param_1), local_29 != '\0')) {
          if (param_3 <= uVar2) goto LAB_01573004;
          goto LAB_01572ba0;
        }
      }
      *param_1 = pbVar12;
      param_1[1] = iVar13;
    }
    if (iVar13 == 0) {
      iVar13 = 0;
LAB_01572f9c:
      *param_1 = pbVar12;
      param_1[1] = iVar13;
      return (ulonglong)uVar2;
    }
    if (*pbVar12 != 0x3a) goto LAB_01572f9c;
    if (iVar13 == 1) {
      iVar13 = 1;
      goto LAB_01572f9c;
    }
    uVar3 = (uint)pbVar12[1];
    iVar5 = iVar13 + -2;
    pbVar4 = pbVar12 + 2;
    param_1[1] = iVar5;
    *param_1 = pbVar4;
    uVar9 = uVar3 - 0x30;
    if (0x39 < uVar3) {
      uVar9 = (uVar3 - 0x41 & 0xffffffdf) + 10;
    }
    if (0xf < uVar9) goto LAB_01572f9c;
    if (iVar5 == 0) {
      pbVar14 = pbVar4;
      iVar7 = 0;
    }
    else {
      uVar11 = (uint)pbVar12[2];
      iVar7 = iVar13 + -3;
      uVar3 = uVar11 - 0x30;
      if (0x39 < uVar11) {
        uVar3 = (uVar11 - 0x41 & 0xffffffdf) + 10;
      }
      pbVar14 = pbVar12 + 3;
      param_1[1] = iVar7;
      *param_1 = pbVar14;
      if (uVar3 < 0x10) {
        uVar9 = uVar3 | uVar9 << 4;
        if (iVar7 == 0) {
          iVar7 = 0;
        }
        else {
          uVar11 = (uint)pbVar12[3];
          iVar15 = iVar13 + -4;
          pbVar10 = pbVar12 + 4;
          param_1[1] = iVar15;
          uVar3 = uVar11 - 0x30;
          if (0x39 < uVar11) {
            uVar3 = (uVar11 - 0x41 & 0xffffffdf) + 10;
          }
          *param_1 = pbVar10;
          if (uVar3 < 0x10) {
            uVar9 = uVar3 | uVar9 << 4;
            pbVar14 = pbVar10;
            if (iVar15 == 0) {
              iVar7 = 0;
            }
            else {
              uVar11 = (uint)pbVar12[4];
              iVar5 = iVar13 + -5;
              pbVar4 = pbVar12 + 5;
              param_1[1] = iVar5;
              uVar3 = uVar11 - 0x30;
              if (0x39 < uVar11) {
                uVar3 = (uVar11 - 0x41 & 0xffffffdf) + 10;
              }
              *param_1 = pbVar4;
              if (uVar3 < 0x10) {
                uVar9 = uVar3 | uVar9 << 4;
                if (iVar5 != 0) {
                  uVar3 = (uint)*pbVar4;
                  uVar11 = uVar3 - 0x30;
                  if (0x39 < uVar3) {
                    uVar11 = (uVar3 - 0x41 & 0xffffffde) + 10;
                  }
                  if (0xf < uVar11) goto LAB_01572f24;
                  goto LAB_01572d28;
                }
                pbVar14 = pbVar4;
                iVar7 = 0;
              }
              else {
                *param_1 = pbVar10;
                param_1[1] = iVar15;
                iVar7 = iVar15;
              }
            }
          }
          else {
            *param_1 = pbVar14;
            param_1[1] = iVar7;
          }
        }
      }
      else {
LAB_01572f24:
        *param_1 = pbVar4;
        param_1[1] = iVar5;
        pbVar14 = pbVar4;
        iVar7 = iVar5;
      }
    }
    uVar2 = uVar2 + 1;
    iVar16 = iVar16 + -2;
    *puVar6 = (short)uVar9;
    pbVar12 = pbVar14;
    iVar13 = iVar7;
    if (iVar16 == 0) {
      return (ulonglong)param_3;
    }
  } while( true );
}

