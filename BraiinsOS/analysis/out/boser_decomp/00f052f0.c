// FUN_00f052f0 @ 00f052f0 size=788 calls_out=7 calls_in=3
// strings: delimited length exceeded | TimeOfDayCreatePoolGroupRequestRemovePoolGroupRequestSetQuickRampingRequestUpdatePoolGroupRequest | TimeOfDayCreatePoolGroupRequestRemovePoolGroupRequestSetQuickRampingRequestUpdatePoolGroupRequest | secondnanosecond | minute | invalid tag value: 0

code * FUN_00f052f0(char param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  code *pcVar3;
  code *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined *puVar8;
  uint uVar9;
  char *pcVar10;
  undefined4 *******pppppppuVar11;
  undefined4 *******pppppppuVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  undefined4 *******local_54;
  code *local_50;
  undefined4 *******local_48;
  code *local_44;
  undefined4 ******local_40;
  code *local_3c;
  undefined4 *******local_38;
  code *local_34;
  undefined4 ******local_30;
  undefined4 local_2c;
  
  local_30 = (undefined4 ******)CONCAT31(local_30._1_3_,param_1);
  local_48 = (undefined4 *******)CONCAT31(local_48._1_3_,2);
  if (param_1 == '\x02') {
    piVar15 = (int *)*param_3;
    FUN_00ef78d0(&local_40,*piVar15);
    if (local_40 == (undefined4 ******)&DAT_00000001) {
LAB_00f05338:
      pcVar4 = local_3c;
    }
    else {
      if ((uint)(local_38 <= *(undefined4 ********)(*piVar15 + 4)) <= (uint)-(int)local_34) {
        uVar7 = 0x10;
        pcVar10 = "buffer underflow";
LAB_00f055f8:
        pcVar4 = (code *)FUN_01aa0da0(pcVar10,uVar7);
        return pcVar4;
      }
      uVar13 = (int)*(undefined4 ********)(*piVar15 + 4) - (int)local_38;
      do {
        if (*(uint *)(*piVar15 + 4) <= uVar13) {
          if (*(uint *)(*piVar15 + 4) == uVar13) {
            return (code *)0x0;
          }
          uVar7 = 0x19;
          pcVar10 = "delimited length exceeded";
          goto LAB_00f055f8;
        }
        FUN_00ef78d0(&local_40);
        if (local_40 == (undefined4 ******)&DAT_00000001) goto LAB_00f05338;
        local_48 = local_38;
        local_44 = local_34;
        if (local_34 != (code *)0x0) {
          puVar8 = &DAT_00591421;
          local_54 = &local_48;
LAB_00f05568:
          local_50 = FUN_012fd074;
          pppppppuVar12 = &local_40;
          pppppppuVar11 = &local_54;
          goto LAB_00f05574;
        }
        local_2c = 0;
        local_30 = (undefined4 ******)((uint)local_38 & 7);
        uVar9 = ((uint)local_38 ^ 4) & 7;
        if ((0xf3U >> uVar9 & 1) == 0) {
          puVar8 = &DAT_00596158;
          local_54 = &local_30;
          goto LAB_00f05568;
        }
        uVar1 = (uint)local_38 >> 3;
        if (uVar1 == 0) {
          pcVar4 = (code *)FUN_01aa0da0("invalid tag value: 0",0x14);
          return pcVar4;
        }
        uVar2 = (&DAT_00571008)[uVar9];
        if (uVar1 == 1) {
          pcVar3 = (code *)FUN_00ef7f88(uVar2,param_2,piVar15);
          pcVar4 = (code *)0x0;
          if (pcVar3 != (code *)0x0) {
            iVar14 = *(int *)(pcVar3 + 8);
            if (iVar14 == *(int *)pcVar3) {
              FUN_018fa978(pcVar3);
            }
            puVar6 = (undefined4 *)(*(int *)(pcVar3 + 4) + iVar14 * 0x10);
            *puVar6 = 
            "TimeOfDayCreatePoolGroupRequestRemovePoolGroupRequestSetQuickRampingRequestUpdatePoolGroupRequest"
            ;
            pcVar10 = "hour\x0f\x04";
            uVar7 = 4;
            goto LAB_00f05530;
          }
        }
        else if (uVar1 == 2) {
          pcVar3 = (code *)FUN_00ef7f88(uVar2,param_2 + 4,piVar15);
          pcVar4 = (code *)0x0;
          if (pcVar3 != (code *)0x0) {
            iVar14 = *(int *)(pcVar3 + 8);
            if (iVar14 == *(int *)pcVar3) {
              FUN_018fa978(pcVar3);
            }
            iVar5 = *(int *)(pcVar3 + 4);
            pcVar10 = "minute";
LAB_00f05528:
            puVar6 = (undefined4 *)(iVar5 + iVar14 * 0x10);
            *puVar6 = 
            "TimeOfDayCreatePoolGroupRequestRemovePoolGroupRequestSetQuickRampingRequestUpdatePoolGroupRequest"
            ;
            uVar7 = 6;
LAB_00f05530:
            puVar6[1] = 9;
            puVar6[2] = pcVar10;
            puVar6[3] = uVar7;
            *(int *)(pcVar3 + 8) = iVar14 + 1;
            return pcVar3;
          }
        }
        else if (uVar1 == 3) {
          pcVar3 = (code *)FUN_00ef7f88(uVar2,param_2 + 8,piVar15);
          pcVar4 = (code *)0x0;
          if (pcVar3 != (code *)0x0) {
            iVar14 = *(int *)(pcVar3 + 8);
            if (iVar14 == *(int *)pcVar3) {
              FUN_018fa978(pcVar3);
            }
            iVar5 = *(int *)(pcVar3 + 4);
            pcVar10 = "secondnanosecond";
            goto LAB_00f05528;
          }
        }
        else {
          pcVar4 = (code *)FUN_00ef7b80(uVar2,uVar1,param_3,0x61);
        }
      } while (pcVar4 == (code *)0x0);
    }
  }
  else {
    local_38 = &local_48;
    pppppppuVar12 = &local_54;
    puVar8 = &DAT_005bfb48;
    local_34 = FUN_00ef7f4c;
    local_3c = FUN_00ef7f4c;
    local_40 = &local_30;
    pppppppuVar11 = &local_40;
LAB_00f05574:
    FUN_01a8da38(pppppppuVar12,puVar8,pppppppuVar11);
    pcVar4 = (code *)FUN_01aa428c(pppppppuVar12);
  }
  return pcVar4;
}

