// FUN_016d62e4 @ 016d62e4 size=556 calls_out=10 calls_in=1
// strings: 

void FUN_016d62e4(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  code *pcVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int *unaff_r11;
  bool bVar9;
  undefined8 uVar10;
  int local_b4;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_b4 = FUN_016d4a28(param_2);
  if (local_b4 == 0x7c) {
    iVar8 = *param_2;
    puVar6 = (undefined4 *)(iVar8 + 0x50);
    uVar4 = *(undefined4 *)(iVar8 + 0x54);
    uVar7 = *(undefined4 *)(iVar8 + 0x58);
    param_3[6] = *puVar6;
    param_3[7] = uVar4;
    param_3[8] = uVar7;
    if (*(int *)(iVar8 + 0x10) == 0) {
      piVar2 = *(int **)(iVar8 + 0x18);
      bVar9 = *(int *)(iVar8 + 0x1c) == 0;
      iVar5 = 0;
      if (!bVar9) {
        iVar5 = *(int *)(iVar8 + 0x1c) * 7;
      }
      *(undefined4 *)(iVar8 + 0x10) = 0xffffffff;
      if (!bVar9) {
        unaff_r11 = piVar2 + iVar5 * 4;
        piVar2 = unaff_r11 + -0x1c;
        bVar9 = piVar2 == (int *)0x0;
      }
      if ((bVar9) || (*piVar2 != -0x80000000)) {
        local_40 = param_3[3];
        uStack_3c = param_3[4];
        uStack_38 = param_3[5];
        local_34 = *puVar6;
        uStack_30 = *(undefined4 *)(iVar8 + 0x54);
        uStack_2c = *(undefined4 *)(iVar8 + 0x58);
        puVar3 = (undefined8 *)thunk_FUN_01be5118(8);
        if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,8);
        }
        local_b0._0_4_ = *param_3;
        local_b0._4_4_ = param_3[1];
        local_a8 = (undefined8 *)param_3[2];
        local_a4 = param_3[3];
        local_a0 = param_3[4];
        uStack_9c = param_3[5];
        uStack_98 = param_3[6];
        uStack_94 = param_3[7];
        uStack_90 = param_3[8];
        uVar10 = FUN_016ec68c(&local_b0);
        *puVar3 = uVar10;
        local_a0 = local_40;
        uStack_9c = uStack_3c;
        uStack_98 = uStack_38;
        uStack_94 = local_34;
        uStack_90 = uStack_30;
        uStack_8c = uStack_2c;
        iVar5 = *(int *)(iVar8 + 0x1c);
        local_a4 = 1;
        local_b0._4_4_ = 1;
        local_b0._0_4_ = 0x80000000;
        local_a8 = puVar3;
        if (iVar5 == *(int *)(iVar8 + 0x14)) {
          FUN_016f53d8(iVar8 + 0x14);
        }
        FUN_01bed4e2(*(int *)(iVar8 + 0x18) + iVar5 * 0x70,&local_b0,0x70);
        *(int *)(iVar8 + 0x1c) = iVar5 + 1;
      }
      else {
        local_b0._0_4_ = *param_3;
        local_b0._4_4_ = param_3[1];
        local_a8 = (undefined8 *)param_3[2];
        local_a4 = param_3[3];
        local_a0 = param_3[4];
        uStack_9c = param_3[5];
        uStack_98 = param_3[6];
        uStack_94 = param_3[7];
        uStack_90 = param_3[8];
        uVar10 = FUN_016ec68c();
        iVar5 = unaff_r11[-0x19];
        local_b0 = uVar10;
        if (iVar5 == unaff_r11[-0x1b]) {
          FUN_015f5ab8();
        }
        *(undefined8 *)(unaff_r11[-0x1a] + iVar5 * 8) = uVar10;
        unaff_r11[-0x19] = iVar5 + 1;
      }
      *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
      FUN_016d4fe8(param_2);
      uVar4 = *(undefined4 *)(iVar8 + 0x54);
      uVar7 = *(undefined4 *)(iVar8 + 0x58);
      param_1[7] = *puVar6;
      param_1[8] = uVar4;
      param_1[9] = uVar7;
      uVar4 = *(undefined4 *)(iVar8 + 0x54);
      uVar7 = *(undefined4 *)(iVar8 + 0x58);
      param_1[4] = *puVar6;
      param_1[5] = uVar4;
      param_1[6] = uVar7;
      *param_1 = 0x22;
      param_1[1] = 0;
      param_1[2] = 4;
      param_1[3] = 0;
      return;
    }
    FUN_01306fc8(&DAT_01d0a018);
  }
  else {
    FUN_016f4e14(&local_b4,&DAT_0056dc38,&DAT_01d09e28);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x16d650c);
  (*pcVar1)();
}

