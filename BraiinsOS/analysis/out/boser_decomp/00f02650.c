// FUN_00f02650 @ 00f02650 size=1496 calls_out=17 calls_in=2
// strings: delimited length exceeded | Value | invalid tag value: 0 | recursion limit reached | buffer underflow

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int ******* FUN_00f02650(char param_1,int *******param_2,undefined4 *param_3,int param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  int *******pppppppiVar3;
  int *******pppppppiVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *******pppppppiVar7;
  int *******pppppppiVar8;
  char *pcVar9;
  int ******ppppppiVar10;
  int *******pppppppiVar11;
  undefined4 uVar12;
  undefined *puVar13;
  int ******ppppppiVar14;
  int *piVar15;
  int *******local_60;
  int *******local_5c;
  int ******local_58;
  undefined4 local_54;
  int *******local_50;
  int *******local_4c;
  int *******local_48;
  int *******local_40;
  int *******pppppppiStack_3c;
  int *******local_38;
  int *******local_34;
  
  local_58 = (int ******)CONCAT31(local_58._1_3_,param_1);
  local_60 = (int *******)CONCAT31(local_60._1_3_,2);
  if (param_1 == '\x02') {
    if (param_4 == 0) {
      uVar12 = 0x17;
      pcVar9 = "recursion limit reached";
LAB_00f02c00:
      pppppppiVar11 = (int *******)FUN_01aa0da0(pcVar9,uVar12,param_3);
      return pppppppiVar11;
    }
    piVar15 = (int *)*param_3;
    FUN_00ef78d0(&local_40,*piVar15);
    if (local_40 == (int *******)&DAT_00000001) {
LAB_00f026ac:
      pppppppiVar7 = pppppppiStack_3c;
    }
    else {
      pppppppiVar11 = *(int ********)(*piVar15 + 4);
      if ((uint)(local_38 <= pppppppiVar11) <= (uint)-(int)local_34) {
        uVar12 = 0x10;
        pcVar9 = "buffer underflow";
        param_3 = (undefined4 *)-(int)((int)local_34 + (uint)(local_38 > pppppppiVar11));
        goto LAB_00f02c00;
      }
      puVar5 = (undefined4 *)((int)pppppppiVar11 - (int)local_38);
      param_4 = param_4 + -1;
      pppppppiVar11 = param_2 + 1;
      do {
        if (*(undefined4 **)(*piVar15 + 4) <= puVar5) {
          if (*(undefined4 **)(*piVar15 + 4) == puVar5) {
            return (int *******)0x0;
          }
          uVar12 = 0x19;
          pcVar9 = "delimited length exceeded";
          param_3 = puVar5;
          goto LAB_00f02c00;
        }
        FUN_00ef78d0(&local_40);
        if (local_40 == (int *******)&DAT_00000001) goto LAB_00f026ac;
        local_60 = local_38;
        local_5c = local_34;
        if (local_34 != (int *******)0x0) {
          puVar13 = &DAT_00591421;
          local_50 = (int *******)&local_60;
LAB_00f02b60:
          local_4c = (int *******)FUN_012fd074;
          pppppppiVar7 = (int *******)&local_40;
          pppppppiVar11 = (int *******)&local_50;
          goto LAB_00f02b6c;
        }
        local_58 = (int ******)((uint)local_38 & 7);
        uVar6 = ((uint)local_38 ^ 4) & 7;
        local_54 = 0;
        if ((0xf3U >> uVar6 & 1) == 0) {
          puVar13 = &DAT_00596158;
          local_50 = &local_58;
          goto LAB_00f02b60;
        }
        ppppppiVar14 = (int ******)((uint)local_38 >> 3);
        if (ppppppiVar14 == (int ******)0x0) {
          pppppppiVar11 = (int *******)FUN_01aa0da0("invalid tag value: 0",0x14);
          return pppppppiVar11;
        }
        uVar1 = (&DAT_00571008)[uVar6];
        if (local_38 < (int *******)0x38) {
          local_58 = ppppppiVar14;
          switch(ppppppiVar14) {
          case (int ******)0x1:
            if (*param_2 == (int ******)0x80000000) {
              pppppppiVar8 = (int *******)FUN_00ef7f88(uVar1,pppppppiVar11,piVar15);
            }
            else {
              local_40 = (int *******)0x0;
              pppppppiVar8 = (int *******)FUN_00ef7f88(uVar1,&local_40,piVar15);
              pppppppiVar7 = local_40;
              if (pppppppiVar8 == (int *******)0x0) {
                FUN_00f20128(param_2);
                *param_2 = (int ******)0x80000000;
                param_2[1] = (int ******)pppppppiVar7;
              }
            }
            break;
          case (int ******)0x2:
            if (*param_2 == (int ******)0x80000001) {
              pppppppiVar8 = (int *******)FUN_010169f4(uVar1,param_2 + 2,piVar15);
            }
            else {
              pppppppiStack_3c = (int *******)0x0;
              local_40 = (int *******)0x0;
              pppppppiVar8 = (int *******)FUN_010169f4(uVar1,&local_40,piVar15);
              if (pppppppiVar8 == (int *******)0x0) {
                uVar2 = CONCAT44(pppppppiStack_3c,local_40);
                FUN_00f20128(param_2);
                ppppppiVar14 = (int ******)0x80000001;
                *(undefined8 *)(param_2 + 2) = uVar2;
LAB_00f029f0:
                *param_2 = ppppppiVar14;
              }
            }
            break;
          case (int ******)0x3:
            if (*param_2 == (int ******)0x80000002) {
              pppppppiVar8 = (int *******)FUN_01016c90(uVar1,pppppppiVar11,param_3);
            }
            else {
              local_38 = (int *******)0x0;
              pppppppiStack_3c = (int *******)&DAT_00000001;
              local_40 = (int *******)0x0;
              pppppppiVar8 = (int *******)FUN_01016c90(uVar1,&local_40,param_3);
              pppppppiVar4 = local_38;
              pppppppiVar3 = pppppppiStack_3c;
              pppppppiVar7 = local_40;
              if (pppppppiVar8 == (int *******)0x0) {
                FUN_00f20128(param_2);
                *param_2 = (int ******)0x80000002;
                param_2[1] = (int ******)pppppppiVar7;
                param_2[2] = (int ******)pppppppiVar3;
                param_2[3] = (int ******)pppppppiVar4;
              }
              else {
                FUN_019bb7e0();
              }
            }
            break;
          case (int ******)0x4:
            if (*param_2 == (int ******)0x80000003) {
              pppppppiVar8 = (int *******)FUN_00ef7e6c(uVar1,pppppppiVar11,piVar15);
            }
            else {
              local_40 = (int *******)((uint)local_40 & 0xffffff00);
              pppppppiVar8 = (int *******)FUN_00ef7e6c(uVar1,&local_40,piVar15);
              if (pppppppiVar8 == (int *******)0x0) {
                uVar1 = local_40._0_1_;
                FUN_00f20128(param_2);
                ppppppiVar14 = (int ******)0x80000003;
                *(undefined1 *)(param_2 + 1) = uVar1;
                goto LAB_00f029f0;
              }
            }
            break;
          case (int ******)0x5:
            if (*param_2 == (int ******)&DAT_80000004) {
              pppppppiVar8 = (int *******)FUN_00ef8028(uVar1,pppppppiVar11,param_3,param_4);
            }
            else {
              local_48 = (int *******)0x0;
              local_50 = (int *******)0x0;
              pppppppiVar8 = (int *******)FUN_00ef8028(uVar1,&local_50,param_3,param_4);
              pppppppiStack_3c = local_50;
              local_38 = local_4c;
              local_34 = local_48;
              local_40 = param_2;
              if (pppppppiVar8 == (int *******)0x0) {
                FUN_00f20128(param_2);
                *param_2 = (int ******)&DAT_80000004;
                *pppppppiVar11 = (int ******)pppppppiStack_3c;
                param_2[2] = (int ******)local_38;
                param_2[3] = (int ******)local_34;
              }
              else {
                FUN_0165d624(&pppppppiStack_3c);
              }
            }
            break;
          case (int ******)0x6:
            if ((int)*param_2 < 0) {
              local_48 = (int *******)0x0;
              local_4c = (int *******)&DAT_00000008;
              local_50 = (int *******)0x0;
              pppppppiVar8 = (int *******)FUN_00f062a8(uVar1,&local_50,param_3,param_4);
              local_40 = local_50;
              pppppppiStack_3c = local_4c;
              local_38 = local_48;
              local_34 = param_2;
              if (pppppppiVar8 == (int *******)0x0) {
                FUN_00f20128(param_2);
                *param_2 = (int ******)local_50;
                param_2[1] = (int ******)local_4c;
                param_2[2] = (int ******)local_48;
              }
              else {
                FUN_00f20180(&local_40);
              }
            }
            else {
              pppppppiVar8 = (int *******)FUN_00f062a8(uVar1,param_2,param_3,param_4);
            }
            break;
          default:
            local_40 = &local_58;
            pppppppiStack_3c = (int *******)FUN_012fd02c;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_00599bd6,&local_40,&DAT_01c19074);
          }
          pppppppiVar7 = (int *******)0x0;
          if (pppppppiVar8 != (int *******)0x0) {
            ppppppiVar14 = pppppppiVar8[2];
            if (ppppppiVar14 == *pppppppiVar8) {
              FUN_018fa978(pppppppiVar8);
            }
            ppppppiVar10 = pppppppiVar8[1] + (int)ppppppiVar14 * 4;
            *ppppppiVar10 = (int *****)"Value";
            ppppppiVar10[1] = (int *****)0x5;
            ppppppiVar10[2] = (int *****)&DAT_0056f2ec;
            ppppppiVar10[3] = (int *****)0x4;
            pppppppiVar8[2] = (int ******)((int)ppppppiVar14 + 1);
            return pppppppiVar8;
          }
        }
        else {
          pppppppiVar7 = (int *******)FUN_00ef7b80(uVar1,ppppppiVar14,param_3,param_4);
        }
      } while (pppppppiVar7 == (int *******)0x0);
    }
  }
  else {
    local_38 = (int *******)&local_60;
    pppppppiVar7 = (int *******)&local_50;
    puVar13 = &DAT_005bfb48;
    local_34 = (int *******)FUN_00ef7f4c;
    pppppppiStack_3c = (int *******)FUN_00ef7f4c;
    local_40 = &local_58;
    pppppppiVar11 = (int *******)&local_40;
LAB_00f02b6c:
    FUN_01a8da38(pppppppiVar7,puVar13,pppppppiVar11);
    pppppppiVar7 = (int *******)FUN_01aa428c(pppppppiVar7);
  }
  return pppppppiVar7;
}

