// FUN_0115728c @ 0115728c size=1140 calls_out=2 calls_in=1
// strings: 

void FUN_0115728c(uint *param_1,ushort *param_2,uint param_3)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  uint uVar10;
  ushort *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  uVar14 = 0;
  if (param_3 != 0) {
    uVar7 = 0x10801001;
    do {
      uVar10 = *(byte *)((int)param_2 + uVar14) - 0x23;
      if ((uVar10 < 0x1d) && ((1 << (uVar10 & 0xff) & 0x10801001U) != 0)) {
        if (uVar14 != 0) {
          if (uVar14 < param_3) {
            if (*(char *)((int)param_2 + uVar14) < -0x40) goto LAB_011572f4;
          }
          else if (uVar14 != param_3) {
LAB_011572f4:
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac(param_2,param_3,0,uVar14,&DAT_01888e0c);
          }
        }
        if (param_3 <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar14,param_3,&DAT_01888e1c);
        }
        uVar7 = (uint)*(byte *)((int)param_2 + uVar14);
        uVar10 = uVar14 + 1;
        if ((uVar10 < param_3) && (*(char *)((int)param_2 + uVar10) < -0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(param_2,param_3,uVar10,param_3,&DAT_01888e2c);
        }
        if (uVar7 == 0x3a) {
          param_2 = (ushort *)((int)param_2 + uVar10);
          uVar10 = param_3 - uVar10;
          bVar3 = false;
          goto joined_r0x011573a4;
        }
        break;
      }
      uVar14 = uVar14 + 1;
    } while (param_3 != uVar14);
    bVar3 = true;
    uVar10 = param_3;
joined_r0x011573a4:
    uVar15 = uVar10;
    if (uVar10 < 2) {
      bVar2 = false;
LAB_011573b0:
      uVar12 = 0;
      if (uVar15 == 0) {
        uVar8 = 0;
        goto LAB_01157498;
      }
      puVar9 = (ushort *)((int)param_2 + uVar15);
    }
    else {
      uVar7 = (uint)*param_2;
      if (uVar7 == 0x2f2f) {
        uVar15 = uVar10 - 2;
        if (uVar15 != 0) {
          param_2 = param_2 + 1;
          uVar7 = 0;
          do {
            uVar8 = *(byte *)((int)param_2 + uVar7) - 0x23;
            if ((uVar8 < 0x1d) && ((1 << (uVar8 & 0xff) & 0x10001001U) != 0)) {
              bVar2 = true;
              if (uVar7 != 0) {
                if (uVar7 < uVar15) {
                  if (*(char *)((int)param_2 + uVar7) < -0x40) goto LAB_01157540;
                }
                else if (uVar15 != uVar7) {
LAB_01157540:
                    /* WARNING: Subroutine does not return */
                  FUN_00faa8ac(param_2,uVar15,0,uVar7,&DAT_018adf70);
                }
                param_2 = (ushort *)((int)param_2 + uVar7);
                uVar15 = uVar15 - uVar7;
              }
              goto LAB_011573b0;
            }
            uVar7 = uVar7 + 1;
          } while (uVar15 != uVar7);
        }
        uVar8 = 0;
        if (bVar3) {
          uVar14 = 0;
        }
        uVar12 = 0;
        goto LAB_011574c4;
      }
      puVar9 = (ushort *)((int)param_2 + uVar10);
      bVar2 = false;
    }
    uVar8 = 0;
    puVar11 = param_2;
    do {
      if ((char)*puVar11 == '#' || (char)*puVar11 == '?') {
        puVar9 = param_2;
        if (uVar8 != 0) {
          if (uVar8 < uVar15) {
            if (*(char *)((int)param_2 + uVar8) < -0x40) goto LAB_01157410;
          }
          else if (uVar15 != uVar8) {
LAB_01157410:
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac(param_2,uVar15,0,uVar8,&DAT_018adf70);
          }
          uVar15 = uVar15 - uVar8;
          puVar9 = (ushort *)((int)param_2 + uVar8);
        }
        if ((param_2 == (ushort *)0x0) || (uVar15 == 0)) {
          uVar8 = 0;
          uVar12 = 0;
          goto LAB_01157498;
        }
        uVar8 = (param_3 - uVar15) + 1;
        if ((char)*puVar9 == '?') {
          if (uVar15 == 1) goto LAB_01157488;
          pcVar5 = (char *)((int)puVar9 + 1);
          cVar1 = *pcVar5;
          if (-0x41 < cVar1) {
            uVar6 = uVar15 - 1;
            uVar12 = 2;
            goto joined_r0x011575a4;
          }
          puVar4 = &DAT_01888f0c;
        }
        else {
          uVar12 = uVar8;
          uVar8 = 0;
          if ((uVar15 == 1) || (-0x41 < *(char *)((int)puVar9 + 1))) goto LAB_01157498;
          puVar4 = &DAT_01888f1c;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(puVar9,uVar15,1,uVar15,puVar4);
      }
      puVar11 = (ushort *)((int)puVar11 + 1);
      uVar8 = uVar8 + 1;
    } while (puVar11 != puVar9);
    uVar12 = 0;
    uVar8 = 0;
    goto LAB_01157498;
  }
  uVar8 = 0;
  uVar12 = 0;
  goto LAB_011574c0;
joined_r0x011575a4:
  if (cVar1 == '#') goto LAB_011575c0;
  if (uVar15 == uVar12) goto LAB_01157488;
  cVar1 = *(char *)((int)puVar11 + uVar12);
  uVar12 = uVar12 + 1;
  goto joined_r0x011575a4;
LAB_011575c0:
  uVar13 = uVar12 - 2;
  if (uVar13 == 0) {
LAB_011575e4:
    uVar15 = uVar12 - 1;
  }
  else {
    if (uVar13 < uVar6) {
      if (pcVar5[uVar13] < -0x40) goto LAB_011576e4;
      goto LAB_011575e4;
    }
    if (uVar13 != uVar6) {
LAB_011576e4:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(pcVar5,uVar6,0,uVar13,&DAT_01888dbc);
    }
  }
  if (uVar15 < uVar6) {
    if (pcVar5[uVar15] < -0x40) goto LAB_011576c8;
    uVar12 = uVar15;
  }
  else {
    uVar12 = uVar6;
    if (uVar15 != uVar6) {
LAB_011576c8:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(pcVar5,uVar6,uVar15,uVar6,&DAT_01888dcc);
    }
  }
  uVar12 = (uVar12 - uVar6) + param_3;
  if (bVar3) {
    uVar14 = 0;
  }
  if (bVar2) {
    param_3 = (param_3 - uVar10) + uVar7 + 2;
    goto LAB_011574c4;
  }
  goto LAB_011574c0;
LAB_01157488:
  uVar12 = 0;
LAB_01157498:
  if (bVar3) {
    uVar14 = 0;
  }
  if (bVar2) {
    param_3 = (param_3 - uVar10) + uVar7 + 2;
    goto LAB_011574c4;
  }
LAB_011574c0:
  param_3 = 0;
LAB_011574c4:
  *param_1 = uVar14;
  param_1[1] = param_3;
  param_1[2] = uVar8;
  param_1[3] = uVar12;
  return;
}

