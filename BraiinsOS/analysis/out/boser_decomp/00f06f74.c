// FUN_00f06f74 @ 00f06f74 size=620 calls_out=7 calls_in=0
// strings: delimited length exceeded | DailySchedule | invalid tag value: 0 | buffer underflow

code * FUN_00f06f74(char param_1,int *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  code *pcVar3;
  code *pcVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined *puVar8;
  uint uVar9;
  undefined4 *******pppppppuVar10;
  uint uVar11;
  int iVar12;
  undefined4 *******pppppppuVar13;
  int *piVar14;
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
    piVar14 = (int *)*param_3;
    FUN_00ef78d0(&local_40,*piVar14);
    if (local_40 == (undefined4 ******)&DAT_00000001) {
LAB_00f06fb8:
      pcVar4 = local_3c;
    }
    else {
      if ((uint)(local_38 <= *(undefined4 ********)(*piVar14 + 4)) <= (uint)-(int)local_34) {
        uVar7 = 0x10;
        pcVar5 = "buffer underflow";
LAB_00f071d4:
        pcVar4 = (code *)FUN_01aa0da0(pcVar5,uVar7);
        return pcVar4;
      }
      uVar11 = (int)*(undefined4 ********)(*piVar14 + 4) - (int)local_38;
      do {
        if (*(uint *)(*piVar14 + 4) <= uVar11) {
          if (*(uint *)(*piVar14 + 4) == uVar11) {
            return (code *)0x0;
          }
          uVar7 = 0x19;
          pcVar5 = "delimited length exceeded";
          goto LAB_00f071d4;
        }
        FUN_00ef78d0(&local_40);
        if (local_40 == (undefined4 ******)&DAT_00000001) goto LAB_00f06fb8;
        local_48 = local_38;
        local_44 = local_34;
        if (local_34 != (code *)0x0) {
          puVar8 = &DAT_00591421;
          local_54 = &local_48;
LAB_00f07144:
          local_50 = FUN_012fd074;
          pppppppuVar13 = &local_40;
          pppppppuVar10 = &local_54;
          goto LAB_00f07150;
        }
        local_30 = (undefined4 ******)((uint)local_38 & 7);
        local_2c = 0;
        uVar9 = ((uint)local_38 ^ 4) & 7;
        if ((0xf3U >> uVar9 & 1) == 0) {
          puVar8 = &DAT_00596158;
          local_54 = &local_30;
          goto LAB_00f07144;
        }
        uVar1 = (uint)local_38 >> 3;
        if (uVar1 == 0) {
          pcVar4 = (code *)FUN_01aa0da0("invalid tag value: 0",0x14);
          return pcVar4;
        }
        uVar2 = (&DAT_00571008)[uVar9];
        if (uVar1 == 1) {
          if (*param_2 == 0) {
            *param_2 = 1;
            param_2[1] = 0;
            param_2[2] = 0;
            param_2[3] = 0;
          }
          pcVar3 = (code *)FUN_00f052f0(uVar2,param_2 + 1,param_3);
          pcVar4 = (code *)0x0;
          if (pcVar3 != (code *)0x0) {
            iVar12 = *(int *)(pcVar3 + 8);
            if (iVar12 == *(int *)pcVar3) {
              FUN_018fa978(pcVar3);
            }
            puVar6 = (undefined4 *)(*(int *)(pcVar3 + 4) + iVar12 * 0x10);
            *puVar6 = "DailySchedule";
            puVar6[1] = 0xd;
            puVar6[2] = &DAT_0056d018;
            puVar6[3] = 4;
            *(int *)(pcVar3 + 8) = iVar12 + 1;
            return pcVar3;
          }
        }
        else {
          pcVar4 = (code *)FUN_00ef7b80(uVar2,uVar1,param_3,0x62);
        }
      } while (pcVar4 == (code *)0x0);
    }
  }
  else {
    local_38 = &local_48;
    pppppppuVar13 = &local_54;
    puVar8 = &DAT_005bfb48;
    local_34 = FUN_00ef7f4c;
    local_3c = FUN_00ef7f4c;
    local_40 = &local_30;
    pppppppuVar10 = &local_40;
LAB_00f07150:
    FUN_01a8da38(pppppppuVar13,puVar8,pppppppuVar10);
    pcVar4 = (code *)FUN_01aa428c(pppppppuVar13);
  }
  return pcVar4;
}

