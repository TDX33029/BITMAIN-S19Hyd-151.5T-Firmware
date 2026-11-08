// FUN_00f062a8 @ 00f062a8 size=856 calls_out=9 calls_in=1
// strings: delimited length exceeded | ListValue | invalid tag value: 0 | recursion limit reached | buffer underflow

/* WARNING: Restarted to delay deadcode elimination for space: stack */

code * FUN_00f062a8(char param_1,int *param_2,undefined4 *param_3,int param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 ******ppppppuVar7;
  undefined4 *******pppppppuVar8;
  int *piVar9;
  undefined4 *******pppppppuVar10;
  uint uVar11;
  int iVar12;
  undefined4 *******local_58;
  code *local_54;
  undefined4 ******local_50;
  undefined4 local_4c;
  undefined4 *******local_48;
  code *local_44;
  undefined4 *******pppppppuStack_40;
  code *pcStack_3c;
  undefined4 *******local_38;
  code *local_34;
  undefined4 *******local_30;
  code *local_2c;
  
  local_50 = (undefined4 ******)CONCAT31(local_50._1_3_,param_1);
  local_58 = (undefined4 *******)CONCAT31(local_58._1_3_,2);
  if (param_1 == '\x02') {
    if (param_4 == 0) {
      uVar5 = 0x17;
      pcVar4 = "recursion limit reached";
LAB_00f065f4:
      pcVar2 = (code *)FUN_01aa0da0(pcVar4,uVar5);
      return pcVar2;
    }
    piVar9 = (int *)*param_3;
    FUN_00ef78d0(&local_38,*piVar9);
    if (local_38 == (undefined4 *******)&DAT_00000001) {
LAB_00f062fc:
      pcVar2 = local_34;
    }
    else {
      if ((uint)(local_30 <= *(undefined4 ********)(*piVar9 + 4)) <= (uint)-(int)local_2c) {
        uVar5 = 0x10;
        pcVar4 = "buffer underflow";
        goto LAB_00f065f4;
      }
      uVar11 = (int)*(undefined4 ********)(*piVar9 + 4) - (int)local_30;
      do {
        if (*(uint *)(*piVar9 + 4) <= uVar11) {
          if (*(uint *)(*piVar9 + 4) == uVar11) {
            return (code *)0x0;
          }
          uVar5 = 0x19;
          pcVar4 = "delimited length exceeded";
          goto LAB_00f065f4;
        }
        FUN_00ef78d0(&local_38);
        if (local_38 == (undefined4 *******)&DAT_00000001) goto LAB_00f062fc;
        local_58 = local_30;
        local_54 = local_2c;
        if (local_2c != (code *)0x0) {
          puVar6 = &DAT_00591421;
          local_48 = &local_58;
LAB_00f06508:
          local_44 = FUN_012fd074;
          pppppppuVar10 = &local_38;
          pppppppuVar8 = &local_48;
          goto LAB_00f06514;
        }
        ppppppuVar7 = (undefined4 ******)((uint)local_30 & 7);
        local_4c = 0;
        local_50 = ppppppuVar7;
        if ((0xf3U >> ((uint)ppppppuVar7 ^ 4) & 1) == 0) {
          puVar6 = &DAT_00596158;
          local_48 = &local_50;
          goto LAB_00f06508;
        }
        uVar1 = (uint)local_30 >> 3;
        if (uVar1 == 0) {
          pcVar2 = (code *)FUN_01aa0da0("invalid tag value: 0",0x14);
          break;
        }
        if (uVar1 == 1) {
          local_50 = (undefined4 ******)(uint)(byte)(&DAT_00571008)[(uint)ppppppuVar7 ^ 4];
          local_58._1_3_ = (undefined3)((uint)local_30 >> 8);
          local_58 = (undefined4 *******)CONCAT31(local_58._1_3_,2);
          if (ppppppuVar7 != (undefined4 ******)0x2) {
            local_30 = &local_58;
            local_2c = FUN_00ef7f4c;
            local_34 = FUN_00ef7f4c;
            local_38 = &local_50;
            FUN_01a8da38(&local_48,&DAT_005bfb48,&local_38);
            pcVar2 = (code *)FUN_01aa428c(&local_48);
LAB_00f064a0:
            iVar12 = *(int *)(pcVar2 + 8);
            if (iVar12 == *(int *)pcVar2) {
              FUN_018fa978(pcVar2);
            }
            puVar3 = (undefined4 *)(*(int *)(pcVar2 + 4) + iVar12 * 0x10);
            *puVar3 = "ListValue";
            puVar3[1] = 9;
            puVar3[2] = &DAT_00531568;
            puVar3[3] = 6;
            *(int *)(pcVar2 + 8) = iVar12 + 1;
            return pcVar2;
          }
          local_48 = (undefined4 *******)&DAT_80000005;
          pcVar2 = (code *)FUN_00f02650(2,&local_48,param_3,param_4 + -1);
          if (pcVar2 != (code *)0x0) {
            FUN_014880e4(&local_48);
            goto LAB_00f064a0;
          }
          local_38 = local_48;
          local_34 = local_44;
          local_30 = pppppppuStack_40;
          local_2c = pcStack_3c;
          iVar12 = param_2[2];
          if (iVar12 == *param_2) {
            FUN_00f9d6ec(param_2);
          }
          puVar3 = (undefined4 *)(param_2[1] + iVar12 * 0x10);
          *puVar3 = local_38;
          puVar3[1] = local_34;
          puVar3[2] = local_30;
          puVar3[3] = local_2c;
          param_2[2] = iVar12 + 1;
          pcVar2 = (code *)0x0;
        }
        else {
          pcVar2 = (code *)FUN_00ef7b80((&DAT_00571008)[(uint)ppppppuVar7 ^ 4],uVar1,param_3,
                                        param_4 + -1);
        }
      } while (pcVar2 == (code *)0x0);
    }
  }
  else {
    local_30 = &local_58;
    pppppppuVar10 = &local_48;
    puVar6 = &DAT_005bfb48;
    local_2c = FUN_00ef7f4c;
    local_34 = FUN_00ef7f4c;
    local_38 = &local_50;
    pppppppuVar8 = &local_38;
LAB_00f06514:
    FUN_01a8da38(pppppppuVar10,puVar6,pppppppuVar8);
    pcVar2 = (code *)FUN_01aa428c(pppppppuVar10);
  }
  return pcVar2;
}

