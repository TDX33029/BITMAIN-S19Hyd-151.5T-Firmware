// FUN_01a535ac @ 01a535ac size=1276 calls_out=16 calls_in=0
// strings: root should always be a tabletrailing_commadoc_position

undefined4 FUN_01a535ac(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  int *piVar9;
  undefined4 uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  int local_6c;
  int local_68;
  int *local_64;
  uint local_60;
  int *local_5c;
  int *local_58;
  int local_54;
  int *local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  int *local_3c;
  int local_38;
  int *local_34;
  int *local_30;
  undefined4 local_2c;
  int *local_28;
  
  if (*param_1 != 2) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("root should always be a tabletrailing_commadoc_position",0x1d,&DAT_01d2c2e0);
  }
  uVar10 = 1;
  iVar3 = FUN_01a559a0(param_1 + 0x10,param_2,1,0);
  if (iVar3 == 0) {
    local_70 = 0;
    local_74 = 4;
    local_64 = (int *)&SUB_00000004;
    local_30 = &local_68;
    local_34 = &local_6c;
    local_78 = 0;
    local_6c = 0;
    local_60 = 0;
    local_68 = 0;
    FUN_01a5faa0(param_1 + 2,&local_78,0,&local_34);
    if (1 < local_60) {
      if (local_60 < 0x15) {
        FUN_01a4ceac();
      }
      else {
        FUN_01a4cf78();
      }
    }
    local_54 = local_68;
    piVar6 = local_64 + local_60 * 6;
    piVar5 = local_64;
    local_5c = local_64;
    local_50 = piVar6;
    if (local_60 != 0) {
      bVar2 = true;
      piVar8 = local_64;
      do {
        piVar5 = piVar8 + 6;
        if (*piVar8 == -0x80000000) goto LAB_01a53a18;
        iVar14 = piVar8[1];
        iVar12 = piVar8[2];
        iVar3 = piVar8[3];
        bVar1 = *(byte *)(piVar8 + 5);
        local_4c = *piVar8;
        local_48 = iVar14;
        local_44 = iVar12;
        FUN_01a54cc8(&local_40,iVar3);
        if (*(char *)(iVar3 + 0x5c) == '\0') {
          if (iVar12 != 0) {
            if ((bVar1 & 1) != 0) goto LAB_01a536f8;
LAB_01a537bc:
            pcVar7 = "\n";
            if (bVar2) {
              pcVar7 = (char *)0x1;
            }
            iVar13 = FUN_01a559a0(iVar3 + 0x38,param_2,pcVar7,~bVar2);
            if (((iVar13 == 0) &&
                (iVar13 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0053340d,1), iVar13 == 0))
               && ((iVar12 = FUN_01a5dca8(iVar14,iVar12,param_2), iVar12 == 0 &&
                   ((iVar12 = (**(code **)(param_2[1] + 0xc))(*param_2,"]",1), iVar12 == 0 &&
                    (iVar3 = FUN_01a55a04(iVar3 + 0x38,param_2,1,0), iVar3 == 0)))))) {
              iVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,"\n",1);
LAB_01a5387c:
              bVar2 = false;
              if (iVar3 == 0) goto LAB_01a538a8;
            }
LAB_01a539ec:
            FUN_01a54efc(&local_40);
LAB_01a539f4:
            local_58 = piVar5;
            FUN_01a4c510(&local_4c);
            FUN_01a5341c(&local_5c);
            uVar10 = 1;
            goto LAB_01a53a5c;
          }
LAB_01a53894:
          bVar2 = (bool)(local_38 == 0 & bVar2);
        }
        else {
          if (iVar12 == 0) goto LAB_01a53894;
          if ((bVar1 & 1) != 0) {
LAB_01a536f8:
            pcVar7 = "\n";
            if (bVar2) {
              pcVar7 = (char *)0x1;
            }
            iVar13 = FUN_01a559a0(iVar3 + 0x38,param_2,pcVar7,~bVar2);
            if ((((iVar13 == 0) &&
                 (iVar13 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0052d613,2), iVar13 == 0))
                && (iVar12 = FUN_01a5dca8(iVar14,iVar12,param_2), iVar12 == 0)) &&
               ((iVar12 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0052d615,2), iVar12 == 0 &&
                (iVar3 = FUN_01a55a04(iVar3 + 0x38,param_2,1,0), iVar3 == 0)))) {
              iVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,"\n",1);
              goto LAB_01a5387c;
            }
            goto LAB_01a539ec;
          }
          if (local_38 != 0) goto LAB_01a537bc;
        }
LAB_01a538a8:
        piVar11 = local_3c + local_38 * 4;
        local_2c = local_40;
        local_30 = local_3c;
        local_34 = local_3c;
        piVar8 = local_3c;
        local_28 = piVar11;
        if (local_38 != 0) {
          do {
            piVar9 = piVar8 + 4;
            iVar3 = *piVar8;
            if (iVar3 == -0x80000000) goto LAB_01a53990;
            iVar14 = piVar8[3];
            iVar13 = piVar8[1];
            iVar12 = FUN_01a5ddc4(iVar13,piVar8[2],param_2,&DAT_01d2c5c8);
            if ((((iVar12 != 0) ||
                 (iVar12 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00531a0c,1), iVar12 != 0))
                || (iVar12 = FUN_01a5df24(iVar14,param_2,&DAT_01d2c5d8), iVar12 != 0)) ||
               (iVar12 = (**(code **)(param_2[1] + 0xc))(*param_2,"\n",1), iVar12 != 0)) {
              local_30 = piVar9;
              FUN_0134aee0(iVar3,iVar13,4,4);
              FUN_01a533c4(&local_34);
              goto LAB_01a539f4;
            }
            FUN_0134aee0(iVar3,iVar13,4,4);
            piVar4 = piVar8 + 4;
            piVar8 = piVar9;
          } while (piVar4 != piVar11);
          piVar9 = piVar11;
LAB_01a53990:
          local_30 = piVar9;
        }
        FUN_01a533c4(&local_34);
        FUN_01a4c510(&local_4c);
        piVar8 = piVar5;
      } while (piVar5 != piVar6);
      piVar5 = piVar6;
    }
LAB_01a53a18:
    local_58 = piVar5;
    FUN_01a5341c(&local_5c);
    uVar10 = 1;
    iVar3 = FUN_01a55a04(param_1 + 0x10,param_2,1,0);
    if (iVar3 == 0) {
      uVar10 = FUN_01a5c6e0(param_1 + 0x1c,param_2,1,0);
    }
LAB_01a53a5c:
    FUN_01a4c510(&local_78);
  }
  return uVar10;
}

