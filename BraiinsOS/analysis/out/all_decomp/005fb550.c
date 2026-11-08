// FUN_005fb550 @ 005fb550 size=1216 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_005fb550(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 uVar8;
  code *pcVar9;
  undefined4 *puVar10;
  int iVar11;
  bool bVar12;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 local_41;
  undefined4 *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 **local_2c;
  char local_28;
  char local_27;
  
  puVar10 = *(undefined4 **)(param_1 + 4);
  iVar11 = *(int *)(param_1 + 8);
  uVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418df9,1);
  if (iVar11 == 0) goto LAB_005fb750;
  bVar12 = uVar4 == 0;
  uVar4 = 1;
  if (bVar12) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      local_50 = *puVar10;
      uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0033d652,0xe);
      local_3c = (undefined *)(CONCAT31((int3)((uint)local_3c >> 8),uVar2) & 0xffff00ff);
      local_40 = param_2;
      FUN_00fb2258(&local_40,&DAT_003cf0d5,3,&local_50,FUN_01135a50);
      uVar4 = (uint)(local_3c._1_1_ | (byte)local_3c);
      if (local_3c._1_1_ == 1 && ((uint)local_3c & 1) == 0) {
        if ((*(byte *)((int)local_40 + 10) & 0x80) == 0) {
          pcVar9 = *(code **)(local_40[1] + 0xc);
          pcVar7 = " }";
          puVar6 = (undefined4 *)*local_40;
LAB_005fb720:
          uVar8 = 2;
        }
        else {
          puVar6 = (undefined4 *)*local_40;
          uVar8 = 1;
          pcVar9 = *(code **)(local_40[1] + 0xc);
          pcVar7 = "}";
        }
        uVar4 = (*pcVar9)(puVar6,pcVar7,uVar8);
      }
    }
    else {
      uVar4 = 1;
      iVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950e,1);
      if (iVar5 == 0) {
        local_50 = *param_2;
        uStack_4c = param_2[1];
        local_41 = 1;
        local_38 = param_2[2];
        uStack_34 = param_2[3];
        local_3c = &DAT_01880dc4;
        puStack_48 = &local_41;
        local_40 = &local_50;
        local_30 = *puVar10;
        local_28 = FUN_00fb1f64(local_40,&DAT_0033d652,0xe);
        local_2c = &local_40;
        local_27 = '\0';
        FUN_00fb2258(&local_2c,&DAT_003cf0d5,3,&local_30,FUN_01135a50);
        if (local_27 == '\x01' && local_28 == '\0') {
          if ((*(byte *)((int)local_2c + 10) & 0x80) == 0) {
            puVar6 = *local_2c;
            uVar8 = 2;
            pcVar9 = (code *)local_2c[1][3];
            pcVar7 = " }";
          }
          else {
            puVar6 = *local_2c;
            uVar8 = 1;
            pcVar9 = (code *)local_2c[1][3];
            pcVar7 = "}";
          }
          iVar5 = (*pcVar9)(puVar6,pcVar7,uVar8);
          if (iVar5 == 0) goto LAB_005fb70c;
        }
        else if ((local_27 == '\0') && (local_28 == '\0')) {
LAB_005fb70c:
          pcVar9 = *(code **)(local_3c + 0xc);
          pcVar7 = &DAT_00414a81;
          puVar6 = local_40;
          goto LAB_005fb720;
        }
        uVar4 = 1;
      }
    }
  }
  if (iVar11 != 1) {
    iVar11 = iVar11 * 4 + -4;
    do {
      puVar10 = puVar10 + 1;
      uVar1 = uVar4 & 1;
      uVar4 = 1;
      if (uVar1 == 0) {
        if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
          iVar5 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
          uVar4 = 1;
          if (iVar5 == 0) {
            local_50 = *puVar10;
            bVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0033d652,0xe);
            local_3c._0_2_ = (ushort)bVar3;
            local_40 = param_2;
            FUN_00fb2258(&local_40,&DAT_003cf0d5,3,&local_50,FUN_01135a50);
            uVar4 = (uint)(local_3c._1_1_ | (byte)local_3c);
            if ((local_3c._1_1_ == 1) && (((uint)local_3c & 1) == 0)) {
              if ((*(byte *)((int)local_40 + 10) & 0x80) == 0) {
                pcVar9 = *(code **)(local_40[1] + 0xc);
                puVar6 = (undefined4 *)*local_40;
                pcVar7 = " }";
                goto LAB_005fb9ec;
              }
              puVar6 = (undefined4 *)*local_40;
              uVar8 = 1;
              pcVar9 = *(code **)(local_40[1] + 0xc);
              pcVar7 = "}";
              goto LAB_005fb9f0;
            }
          }
        }
        else {
          local_50 = *param_2;
          uStack_4c = param_2[1];
          local_41 = 1;
          local_38 = param_2[2];
          uStack_34 = param_2[3];
          puStack_48 = &local_41;
          local_3c = &DAT_01880dc4;
          local_30 = *puVar10;
          local_40 = &local_50;
          local_28 = FUN_00fb1f64(&local_50,&DAT_0033d652,0xe);
          local_27 = '\0';
          local_2c = &local_40;
          FUN_00fb2258(&local_2c,&DAT_003cf0d5,3,&local_30,FUN_01135a50);
          if (local_27 == '\x01' && local_28 == '\0') {
            if ((*(byte *)((int)local_2c + 10) & 0x80) == 0) {
              iVar5 = (*(code *)local_2c[1][3])(*local_2c," }",2);
            }
            else {
              iVar5 = (*(code *)local_2c[1][3])(*local_2c,"}",1);
            }
            if (iVar5 == 0) goto LAB_005fb9d8;
          }
          else if ((local_27 == '\0') && (local_28 == '\0')) {
LAB_005fb9d8:
            pcVar9 = *(code **)(local_3c + 0xc);
            pcVar7 = &DAT_00414a81;
            puVar6 = local_40;
LAB_005fb9ec:
            uVar8 = 2;
LAB_005fb9f0:
            uVar4 = (*pcVar9)(puVar6,pcVar7,uVar8);
            goto LAB_005fb808;
          }
          uVar4 = 1;
        }
      }
LAB_005fb808:
      iVar11 = iVar11 + -4;
    } while (iVar11 != 0);
  }
LAB_005fb750:
  uVar8 = 1;
  if ((uVar4 & 1) == 0) {
    uVar8 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418ec5,1);
  }
  return uVar8;
}

