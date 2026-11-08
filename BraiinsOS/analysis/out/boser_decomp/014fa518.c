// FUN_014fa518 @ 014fa518 size=824 calls_out=3 calls_in=1
// strings: 

void FUN_014fa518(uint *param_1,short *param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  short *psVar5;
  uint uVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint unaff_r6;
  uint unaff_lr;
  int local_34 [3];
  int local_28;
  
  uVar6 = param_3;
  if (param_3 == 0) {
    bVar2 = true;
    bVar1 = false;
  }
  else {
    unaff_r6 = 0;
    do {
      uVar8 = *(byte *)((int)param_2 + unaff_r6) - 0x23;
      if ((uVar8 < 0x1d) && ((1 << (uVar8 & 0xff) & 0x10801001U) != 0)) {
        if (unaff_r6 == 0) {
LAB_014fa5bc:
          if (param_3 <= unaff_r6) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(unaff_r6,param_3,&DAT_01cfa7c4);
          }
          pcVar4 = (char *)((int)param_2 + unaff_r6);
          uVar8 = unaff_r6 + 1;
          if ((param_3 <= uVar8) || (-0x41 < (char)*(short *)((int)param_2 + uVar8))) {
            if (*pcVar4 == ':') {
              uVar6 = param_3 - uVar8;
              param_2 = (short *)((int)param_2 + uVar8);
            }
            bVar1 = *pcVar4 == ':';
            goto LAB_014fa600;
          }
          puVar7 = &DAT_01cfa7d4;
          unaff_r6 = param_3;
        }
        else {
          if (unaff_r6 < param_3) {
            if (-0x41 < *(char *)((int)param_2 + unaff_r6)) goto LAB_014fa5bc;
          }
          else if (unaff_r6 == param_3) goto LAB_014fa5bc;
          uVar8 = 0;
          puVar7 = &DAT_01cfa7b4;
        }
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(param_2,param_3,uVar8,unaff_r6,puVar7);
      }
      unaff_r6 = unaff_r6 + 1;
    } while (param_3 != unaff_r6);
    bVar1 = false;
LAB_014fa600:
    uVar8 = uVar6;
    if (uVar6 < 2) {
      bVar2 = true;
LAB_014fa610:
      if (uVar8 == 0) goto LAB_014fa738;
      iVar3 = (int)param_2 + uVar8;
    }
    else {
      iVar3 = (int)param_2 + uVar6;
      if (*param_2 == 0x2f2f) {
        uVar8 = uVar6 - 2;
        bVar2 = false;
        unaff_lr = uVar8;
        if (uVar8 != 0) {
          psVar5 = param_2 + 1;
          uVar9 = 2;
          do {
            uVar10 = *(byte *)((int)param_2 + uVar9) - 0x23;
            if ((uVar10 < 0x1d) && ((1 << (uVar10 & 0xff) & 0x10001001U) != 0)) {
              unaff_lr = uVar9 - 2;
              if (unaff_lr != 0) {
                if (unaff_lr < uVar8) {
                  if (*(char *)((int)psVar5 + unaff_lr) < -0x40) {
LAB_014fa7c8:
                    /* WARNING: Subroutine does not return */
                    FUN_012fb514(psVar5,uVar8,0,unaff_lr,&DAT_01d2e668);
                  }
                }
                else if (uVar8 != unaff_lr) goto LAB_014fa7c8;
              }
              uVar8 = uVar8 - unaff_lr;
              param_2 = (short *)((int)psVar5 + unaff_lr);
              bVar2 = false;
              goto LAB_014fa610;
            }
            uVar9 = uVar9 + 1;
          } while (uVar6 != uVar9);
        }
        goto LAB_014fa738;
      }
      bVar2 = true;
    }
    uVar9 = 0;
    do {
      if (*(char *)((int)param_2 + uVar9) == '#' || *(char *)((int)param_2 + uVar9) == '?') {
        if (uVar9 != 0) {
          if (uVar9 < uVar8) {
            if (*(char *)((int)param_2 + uVar9) < -0x40) {
LAB_014fa684:
                    /* WARNING: Subroutine does not return */
              FUN_012fb514(param_2,uVar8,0,uVar9,&DAT_01d2e668);
            }
          }
          else if (uVar8 != uVar9) goto LAB_014fa684;
        }
        iVar3 = uVar8 - uVar9;
        uVar8 = 0;
        if (iVar3 != 0) {
          pcVar4 = (char *)((int)param_2 + uVar9);
          if (*pcVar4 == '?') {
            if ((iVar3 == 1) || (-0x41 < pcVar4[1])) {
              FUN_014faff8(local_34,pcVar4 + 1,iVar3 + -1,0x23);
              uVar9 = 0;
              if (local_34[0] != 0) {
                uVar9 = param_3 - local_28;
              }
              uVar8 = (param_3 - iVar3) + 1;
              goto LAB_014fa73c;
            }
            puVar7 = &DAT_01cfa6f4;
          }
          else {
            if ((iVar3 == 1) || (-0x41 < pcVar4[1])) {
              uVar9 = (param_3 - iVar3) + 1;
              goto LAB_014fa73c;
            }
            puVar7 = &DAT_01cfa704;
          }
                    /* WARNING: Subroutine does not return */
          FUN_012fb514(pcVar4,iVar3,1,iVar3,puVar7);
        }
        break;
      }
      uVar9 = uVar9 + 1;
    } while ((int)param_2 + uVar9 != iVar3);
  }
LAB_014fa738:
  uVar8 = 0;
  uVar9 = 0;
LAB_014fa73c:
  if (!bVar1) {
    unaff_r6 = 0;
  }
  uVar6 = (param_3 - uVar6) + unaff_lr + 2;
  if (bVar2) {
    uVar6 = 0;
  }
  *param_1 = unaff_r6;
  param_1[1] = uVar6;
  param_1[2] = uVar8;
  param_1[3] = uVar9;
  return;
}

