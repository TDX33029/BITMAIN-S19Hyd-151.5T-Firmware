// FUN_00efc078 @ 00efc078 size=596 calls_out=7 calls_in=1
// strings: delimited length exceeded | Power | invalid tag value: 0 | buffer underflow

code * FUN_00efc078(char param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  uint uVar1;
  code *pcVar2;
  code *pcVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined *puVar7;
  uint uVar8;
  undefined4 *******pppppppuVar9;
  int iVar10;
  undefined4 *******pppppppuVar11;
  int *piVar12;
  uint uVar13;
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
    piVar12 = (int *)*param_3;
    FUN_00ef78d0(&local_40,*piVar12);
    if (local_40 == (undefined4 ******)&DAT_00000001) {
LAB_00efc0c4:
      pcVar3 = local_3c;
    }
    else {
      if ((uint)(local_38 <= *(undefined4 ********)(*piVar12 + 4)) <= (uint)-(int)local_34) {
        uVar6 = 0x10;
        pcVar4 = "buffer underflow";
LAB_00efc2c0:
        pcVar3 = (code *)FUN_01aa0da0(pcVar4,uVar6);
        return pcVar3;
      }
      uVar13 = (int)*(undefined4 ********)(*piVar12 + 4) - (int)local_38;
      do {
        if (*(uint *)(*piVar12 + 4) <= uVar13) {
          if (*(uint *)(*piVar12 + 4) == uVar13) {
            return (code *)0x0;
          }
          uVar6 = 0x19;
          pcVar4 = "delimited length exceeded";
          goto LAB_00efc2c0;
        }
        FUN_00ef78d0(&local_40);
        if (local_40 == (undefined4 ******)&DAT_00000001) goto LAB_00efc0c4;
        local_48 = local_38;
        local_44 = local_34;
        if (local_34 != (code *)0x0) {
          puVar7 = &DAT_00591421;
          local_54 = &local_48;
LAB_00efc230:
          local_50 = FUN_012fd074;
          pppppppuVar11 = &local_40;
          pppppppuVar9 = &local_54;
          goto LAB_00efc23c;
        }
        local_2c = 0;
        local_30 = (undefined4 ******)((uint)local_38 & 7);
        uVar8 = ((uint)local_38 ^ 4) & 7;
        if ((0xf3U >> uVar8 & 1) == 0) {
          puVar7 = &DAT_00596158;
          local_54 = &local_30;
          goto LAB_00efc230;
        }
        uVar1 = (uint)local_38 >> 3;
        if (uVar1 == 0) {
          pcVar3 = (code *)FUN_01aa0da0("invalid tag value: 0",0x14);
          return pcVar3;
        }
        if (uVar1 == 1) {
          pcVar2 = (code *)FUN_00efc310((&DAT_00571008)[uVar8],param_2,piVar12);
          pcVar3 = (code *)0x0;
          if (pcVar2 != (code *)0x0) {
            iVar10 = *(int *)(pcVar2 + 8);
            if (iVar10 == *(int *)pcVar2) {
              FUN_018fa978(pcVar2);
            }
            puVar5 = (undefined4 *)(*(int *)(pcVar2 + 4) + iVar10 * 0x10);
            *puVar5 = "Power";
            puVar5[1] = 5;
            puVar5[2] = &DAT_0056f4bc;
            puVar5[3] = 4;
            *(int *)(pcVar2 + 8) = iVar10 + 1;
            return pcVar2;
          }
        }
        else {
          pcVar3 = (code *)FUN_00ef7b80((&DAT_00571008)[uVar8],uVar1,param_3,param_4 + -1);
        }
      } while (pcVar3 == (code *)0x0);
    }
  }
  else {
    local_38 = &local_48;
    pppppppuVar11 = &local_54;
    puVar7 = &DAT_005bfb48;
    local_34 = FUN_00ef7f4c;
    local_3c = FUN_00ef7f4c;
    local_40 = &local_30;
    pppppppuVar9 = &local_40;
LAB_00efc23c:
    FUN_01a8da38(pppppppuVar11,puVar7,pppppppuVar9);
    pcVar3 = (code *)FUN_01aa428c(pppppppuVar11);
  }
  return pcVar3;
}

