// FUN_01acfea0 @ 01acfea0 size=624 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_01acfea0(byte *param_1,byte *param_2,undefined4 param_3,byte *param_4)

{
  byte bVar1;
  short sVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  short sVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  
  uVar4 = 2;
  if (param_2 == (byte *)0x0) goto LAB_01ad00cc;
  if (param_2 != &DAT_00000001) {
    sVar2 = *(short *)param_1;
    sVar10 = 0x7830;
    bVar12 = sVar2 != 0x7830;
    if (bVar12) {
      sVar2 = *(short *)param_1;
      sVar10 = 0x5830;
    }
    if (!bVar12 || sVar2 == sVar10) {
      if (param_2 < (byte *)0x3) {
LAB_01ad0050:
        uVar4 = 1;
        param_4 = (byte *)0x0;
      }
      else {
        pbVar6 = param_1 + 2;
        if ((char)*pbVar6 < -0x40) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb514(param_1,param_2,2,param_2,&DAT_01d2fd78);
        }
        param_2 = param_2 + -2;
        pbVar5 = param_2;
        pbVar7 = pbVar6;
        do {
          if (pbVar5 == (byte *)0x0) {
            uVar11 = 0x10;
            bVar12 = true;
            param_4 = pbVar7;
            goto LAB_01acffcc;
          }
          param_4 = pbVar7 + 1;
          bVar1 = *pbVar7;
          pbVar5 = pbVar5 + -1;
          pbVar7 = param_4;
        } while ((bVar1 - 0x30 < 10) || ((bVar1 & 0xdf) - 0x41 < 6));
      }
      goto LAB_01ad00cc;
    }
    if (*param_1 == 0x30) {
      pbVar6 = param_1 + 1;
      if ((char)*pbVar6 < -0x40) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(param_1,param_2,1,param_2,&DAT_01d2fd68);
      }
      param_2 = param_2 + -1;
      pbVar5 = param_2;
      pbVar7 = pbVar6;
      do {
        if (pbVar5 == (byte *)0x0) {
          uVar11 = 8;
          bVar12 = false;
          param_4 = pbVar7;
          goto LAB_01acffcc;
        }
        param_4 = pbVar7 + 1;
        bVar1 = *pbVar7;
        pbVar5 = pbVar5 + -1;
        pbVar7 = param_4;
      } while ((bVar1 & 0xf8) == 0x30);
      goto LAB_01ad00cc;
    }
  }
  bVar12 = false;
  param_4 = (byte *)0x0;
LAB_01acfec8:
  if (param_2 != param_4) goto code_r0x01acfed0;
  uVar11 = 10;
  pbVar6 = param_1;
LAB_01acffcc:
  bVar1 = *pbVar6;
  if ((param_2 == &DAT_00000001) && ((uVar4 = 0, bVar1 == 0x2b || (bVar1 == 0x2d))))
  goto LAB_01ad00cc;
  if (bVar1 == 0x2b) {
    pbVar6 = pbVar6 + 1;
    param_2 = param_2 + -1;
  }
  if (&DAT_00000008 < param_2) {
    param_4 = (byte *)0x0;
    while( true ) {
      if (param_2 == (byte *)0x0) {
        uVar4 = 1;
        goto LAB_01ad00cc;
      }
      uVar3 = ZEXT48(param_4);
      param_4 = (byte *)(uVar11 * uVar3);
      if ((int)(uVar11 * uVar3 >> 0x20) != 0) break;
      uVar8 = (uint)*pbVar6;
      uVar4 = 0;
      uVar9 = uVar8 - 0x30;
      if (0x39 < uVar8) {
        uVar9 = (uVar8 - 0x41 & 0xffffffdf) + 10;
      }
      if (!bVar12) {
        uVar9 = uVar8 - 0x30;
      }
      bVar13 = CARRY4(uVar9,(uint)param_4);
      param_4 = param_4 + uVar9;
      if ((uVar11 <= uVar9) || (param_2 = param_2 + -1, pbVar6 = pbVar6 + 1, bVar13))
      goto LAB_01ad00cc;
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
    if (param_2 == (byte *)0x0) goto LAB_01ad0050;
    param_4 = (byte *)0x0;
    while( true ) {
      uVar8 = (uint)*pbVar6;
      uVar9 = uVar8 - 0x30;
      if (0x39 < uVar8) {
        uVar9 = (uVar8 - 0x41 & 0xffffffdf) + 10;
      }
      if (!bVar12) {
        uVar9 = uVar8 - 0x30;
      }
      if (uVar11 <= uVar9) break;
      param_4 = (byte *)((int)param_4 * uVar11 + uVar9);
      pbVar6 = pbVar6 + 1;
      param_2 = param_2 + -1;
      if (param_2 == (byte *)0x0) goto LAB_01ad00cc;
    }
    uVar4 = 0;
  }
LAB_01ad00cc:
  return CONCAT44(param_4,uVar4);
code_r0x01acfed0:
  pbVar6 = param_1 + (int)param_4;
  param_4 = param_4 + 1;
  if (9 < *pbVar6 - 0x30) goto LAB_01ad00cc;
  goto LAB_01acfec8;
}

