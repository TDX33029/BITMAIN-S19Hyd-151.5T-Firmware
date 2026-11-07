// FUN_0167b734 @ 0167b734 size=592 calls_out=2 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x0167b868) */
/* WARNING: Removing unreachable block (ram,0x0167b974) */

void FUN_0167b734(int *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  byte *unaff_r8;
  int *unaff_r9;
  undefined1 unaff_r10;
  undefined1 unaff_r11;
  undefined4 local_88;
  int iStack_84;
  int iStack_80;
  int local_7c;
  int local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  byte *local_58;
  undefined4 *local_54;
  int local_50 [2];
  byte *pbStack_48;
  undefined4 *puStack_44;
  byte *pbStack_40;
  byte *pbStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int iStack_2c;
  byte **ppbStack_28;
  
  iVar5 = *(int *)(param_3 + 0xc);
  pbVar4 = *(byte **)(param_3 + 8);
  if (iVar5 != 0) {
    bVar1 = *pbVar4;
    *(byte **)(param_3 + 8) = pbVar4 + 1;
    *(int *)(param_3 + 0xc) = iVar5 + -1;
    if (bVar1 - 0x30 < 10) {
      *param_1 = 3;
      param_1[1] = iStack_84;
      param_1[2] = iStack_80;
      param_1[3] = local_7c;
      param_1[4] = local_78;
      param_1[5] = iStack_74;
      return;
    }
    *(byte **)(param_3 + 8) = pbVar4;
    *(int *)(param_3 + 0xc) = iVar5;
  }
  *(byte **)(param_3 + 8) = pbVar4;
  *(int *)(param_3 + 0xc) = iVar5;
  local_78 = 0;
  local_7c = 0;
  iStack_84 = 0;
  iStack_80 = 4;
  local_88 = 1;
  if (iVar5 != 0) {
    bVar1 = *param_2;
    local_58 = pbVar4 + 1;
    bVar2 = *pbVar4;
    local_54 = (undefined4 *)(iVar5 + -1);
    *(byte **)(param_3 + 8) = local_58;
    *(undefined4 **)(param_3 + 0xc) = local_54;
    if (bVar1 == bVar2) {
      if (local_54 == (undefined4 *)0x0) {
LAB_0167b8bc:
        local_60 = 0;
        local_64 = 0;
        local_68 = 4;
        local_6c = 0;
        local_70 = 2;
        ppbStack_28 = &local_58;
        local_38 = *(undefined4 *)(param_2 + 4);
        local_34 = *(undefined4 *)(param_2 + 8);
        local_30 = *(undefined4 *)(param_2 + 0xc);
        unaff_r9 = local_50;
        iStack_2c = param_3;
        FUN_00953084(unaff_r9,&local_70,&local_38);
        pbVar4 = pbStack_40;
        local_58 = pbStack_3c;
        local_54 = &local_70;
        pbVar3 = (byte *)((uint)&local_88 | 4);
        if (local_50[0] != 3) {
          local_6c._0_1_ = (undefined1)local_50[1];
          local_6c._1_1_ = (undefined1)((uint)local_50[1] >> 8);
          local_6c._2_2_ = (undefined2)((uint)local_50[1] >> 0x10);
          unaff_r11 = local_6c._1_1_;
          unaff_r10 = (undefined1)local_6c;
          if (local_50[0] != 1) goto LAB_0167b948;
          goto LAB_0167b860;
        }
      }
      else {
        bVar1 = pbVar4[1];
        *(byte **)(param_3 + 8) = pbVar4 + 2;
        *(int *)(param_3 + 0xc) = iVar5 + -2;
        pbVar4 = (byte *)(uint)bVar1;
        pbVar3 = unaff_r8;
        if (&DAT_00000009 < (byte *)(uint)bVar1 + -0x30) {
          *(byte **)(param_3 + 8) = local_58;
          *(undefined4 **)(param_3 + 0xc) = local_54;
          goto LAB_0167b8bc;
        }
      }
      pbStack_3c = pbVar3;
      puStack_44 = local_54;
      pbStack_40 = local_58;
      pbStack_48 = pbVar4;
      local_6c._2_2_ = SUB42(unaff_r9,0);
      local_50[0] = 3;
LAB_0167b948:
      *param_1 = local_50[0];
      param_1[2] = (int)pbStack_48;
      param_1[3] = (int)puStack_44;
      param_1[4] = (int)pbStack_40;
      param_1[5] = (int)pbStack_3c;
      *(undefined2 *)((int)param_1 + 6) = local_6c._2_2_;
      *(undefined1 *)((int)param_1 + 5) = unaff_r11;
      *(undefined1 *)(param_1 + 1) = unaff_r10;
      return;
    }
    *(byte **)(param_3 + 8) = pbVar4;
    *(int *)(param_3 + 0xc) = iVar5;
  }
  local_6c._1_1_ = 0;
  local_6c._0_1_ = 0;
  puStack_44 = (undefined4 *)0x0;
  pbStack_40 = (byte *)0x0;
  pbStack_48 = &DAT_00000004;
  local_6c._2_2_ = 0;
  pbStack_3c = unaff_r8;
LAB_0167b860:
  param_1[2] = (int)pbStack_48;
  param_1[3] = (int)puStack_44;
  param_1[4] = (int)pbStack_40;
  param_1[5] = (int)pbStack_3c;
  *(undefined2 *)((int)param_1 + 6) = local_6c._2_2_;
  *(undefined1 *)((int)param_1 + 5) = local_6c._1_1_;
  *(undefined1 *)(param_1 + 1) = (undefined1)local_6c;
  *param_1 = 1;
  return;
}

