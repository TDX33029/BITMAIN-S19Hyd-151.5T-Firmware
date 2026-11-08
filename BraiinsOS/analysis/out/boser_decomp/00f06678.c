// FUN_00f06678 @ 00f06678 size=464 calls_out=5 calls_in=0
// strings: invalid tag value: 0 | buffer underflow | delimited length exceeded

code * FUN_00f06678(char param_1,undefined4 *param_2)

{
  code *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *******pppppppuVar6;
  undefined4 *******pppppppuVar7;
  int *piVar8;
  uint uVar9;
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
    piVar8 = (int *)*param_2;
    FUN_00ef78d0(&local_40,*piVar8);
    if (local_40 == (undefined4 ******)&DAT_00000001) {
LAB_00f066bc:
      pcVar1 = local_3c;
    }
    else {
      if ((uint)(local_38 <= *(undefined4 ********)(*piVar8 + 4)) <= (uint)-(int)local_34) {
        uVar4 = 0x10;
        pcVar2 = "buffer underflow";
LAB_00f0683c:
        pcVar1 = (code *)FUN_01aa0da0(pcVar2,uVar4);
        return pcVar1;
      }
      uVar9 = (int)*(undefined4 ********)(*piVar8 + 4) - (int)local_38;
      do {
        if (*(uint *)(*piVar8 + 4) <= uVar9) {
          if (*(uint *)(*piVar8 + 4) == uVar9) {
            return (code *)0x0;
          }
          uVar4 = 0x19;
          pcVar2 = "delimited length exceeded";
          goto LAB_00f0683c;
        }
        FUN_00ef78d0(&local_40);
        if (local_40 == (undefined4 ******)&DAT_00000001) goto LAB_00f066bc;
        local_48 = local_38;
        local_44 = local_34;
        if (local_34 != (code *)0x0) {
          puVar3 = &DAT_00591421;
          local_54 = &local_48;
LAB_00f0679c:
          local_50 = FUN_012fd074;
          pppppppuVar7 = &local_40;
          pppppppuVar6 = &local_54;
          goto LAB_00f067a8;
        }
        local_2c = 0;
        local_30 = (undefined4 ******)((uint)local_38 & 7);
        uVar5 = ((uint)local_38 ^ 4) & 7;
        if ((0xf3U >> uVar5 & 1) == 0) {
          puVar3 = &DAT_00596158;
          local_54 = &local_30;
          goto LAB_00f0679c;
        }
        if ((uint)local_38 >> 3 == 0) {
          pcVar1 = (code *)FUN_01aa0da0("invalid tag value: 0",0x14);
          return pcVar1;
        }
        pcVar1 = (code *)FUN_00ef7b80((&DAT_00571008)[uVar5],(uint)local_38 >> 3,param_2,99);
      } while (pcVar1 == (code *)0x0);
    }
  }
  else {
    local_38 = &local_48;
    pppppppuVar7 = &local_54;
    puVar3 = &DAT_005bfb48;
    local_34 = FUN_00ef7f4c;
    local_3c = FUN_00ef7f4c;
    local_40 = &local_30;
    pppppppuVar6 = &local_40;
LAB_00f067a8:
    FUN_01a8da38(pppppppuVar7,puVar3,pppppppuVar6);
    pcVar1 = (code *)FUN_01aa428c(pppppppuVar7);
  }
  return pcVar1;
}

