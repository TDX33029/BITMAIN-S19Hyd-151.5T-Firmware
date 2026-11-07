// FUN_00df0690 @ 00df0690 size=764 calls_out=7 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00df0690(int *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int local_f4;
  int *local_ec;
  int local_e0;
  int *local_dc;
  int local_d8;
  int local_d0;
  int local_cc;
  int local_c8;
  undefined4 local_c4;
  int local_c0;
  int local_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int local_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar11 = param_2[5];
  iVar2 = *param_2;
  if (param_2[4] != iVar11) {
    uVar1 = *(undefined1 *)((int)param_2 + 0xd);
    iVar8 = param_2[3];
    iVar3 = param_2[1];
    iVar6 = param_2[2];
    iVar10 = param_2[4];
    do {
      iVar9 = iVar10 + 0x48;
      param_2[4] = iVar9;
      iVar4 = FUN_014c4050(iVar10,(char)iVar8,uVar1);
      if ((iVar4 != 0) &&
         (((iVar2 == -0x80000000 || (iVar5 = FUN_014c72ec(iVar4,iVar3,iVar6), iVar5 != 0)) &&
          (FUN_01094664(&local_64,param_2 + 6,iVar10,iVar4), local_64 != -0x80000000)))) {
        puVar7 = (undefined4 *)((uint)&local_a8 | 4);
        *puVar7 = local_60;
        puVar7[1] = uStack_5c;
        puVar7[2] = uStack_58;
        puVar7[3] = uStack_54;
        puVar7[4] = uStack_50;
        puVar7[5] = local_4c;
        puVar7[6] = uStack_48;
        puVar7[7] = uStack_44;
        puVar7[8] = uStack_40;
        puVar7[9] = uStack_3c;
        puVar7[10] = local_38;
        puVar7[0xb] = uStack_34;
        puVar7[0xc] = uStack_30;
        puVar7[0xd] = uStack_2c;
        puVar7[0xe] = uStack_28;
        local_a8 = local_64;
        local_ec = (int *)thunk_FUN_01be5118(0x100);
        if (local_ec == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(4,0x100);
        }
        *local_ec = local_a8;
        local_ec[1] = iStack_a4;
        local_ec[2] = iStack_a0;
        local_ec[3] = iStack_9c;
        local_ec[4] = iStack_98;
        local_ec[5] = local_94;
        local_ec[6] = iStack_90;
        local_ec[7] = iStack_8c;
        local_ec[8] = iStack_88;
        local_ec[9] = iStack_84;
        local_ec[10] = local_80;
        local_ec[0xb] = iStack_7c;
        local_ec[0xc] = iStack_78;
        local_ec[0xd] = iStack_74;
        local_ec[0xe] = iStack_70;
        local_ec[0xf] = iStack_6c;
        local_f4 = 1;
        local_e0 = 4;
        local_d8 = 1;
        iVar2 = *param_2;
        iVar11 = param_2[1];
        iVar10 = param_2[2];
        uVar12 = param_2[3];
        local_c0 = param_2[4];
        iVar8 = param_2[5];
        iStack_b8 = param_2[6];
        iStack_b4 = param_2[7];
        iStack_b0 = param_2[8];
        local_dc = local_ec;
        local_d0 = iVar2;
        local_cc = iVar11;
        local_c8 = iVar10;
        local_c4 = uVar12;
        local_bc = iVar8;
        if (local_c0 != iVar8) {
          local_c4._1_1_ = (undefined1)(uVar12 >> 8);
          uVar1 = local_c4._1_1_;
          iVar3 = local_c0;
          do {
            iVar4 = iVar3 + 0x48;
            local_c0 = iVar4;
            iVar6 = FUN_014c4050(iVar3,uVar12 & 0xff,uVar1);
            if (((iVar6 != 0) &&
                ((iVar2 == -0x80000000 || (iVar9 = FUN_014c72ec(iVar6,iVar11,iVar10), iVar9 != 0))))
               && (FUN_01094664(&local_64,&iStack_b8,iVar3,iVar6), local_64 != -0x80000000)) {
              *puVar7 = local_60;
              puVar7[1] = uStack_5c;
              puVar7[2] = uStack_58;
              puVar7[3] = uStack_54;
              puVar7[4] = uStack_50;
              puVar7[5] = local_4c;
              puVar7[6] = uStack_48;
              puVar7[7] = uStack_44;
              puVar7[8] = uStack_40;
              puVar7[9] = uStack_3c;
              puVar7[10] = local_38;
              puVar7[0xb] = uStack_34;
              puVar7[0xc] = uStack_30;
              puVar7[0xd] = uStack_2c;
              puVar7[0xe] = uStack_28;
              local_a8 = local_64;
              if (local_f4 == local_e0) {
                FUN_0132b898(&local_e0,local_f4,1,4,0x40);
                local_ec = local_dc;
              }
              piVar13 = local_ec + local_f4 * 0x10;
              local_f4 = local_f4 + 1;
              *piVar13 = local_a8;
              piVar13[1] = iStack_a4;
              piVar13[2] = iStack_a0;
              piVar13[3] = iStack_9c;
              piVar13[4] = iStack_98;
              piVar13[5] = local_94;
              piVar13[6] = iStack_90;
              piVar13[7] = iStack_8c;
              piVar13[8] = iStack_88;
              piVar13[9] = iStack_84;
              piVar13[10] = local_80;
              piVar13[0xb] = iStack_7c;
              piVar13[0xc] = iStack_78;
              piVar13[0xd] = iStack_74;
              piVar13[0xe] = iStack_70;
              piVar13[0xf] = iStack_6c;
              local_d8 = local_f4;
            }
            iVar3 = iVar4;
          } while (iVar4 != iVar8);
        }
        if (iVar2 != -0x80000000) {
          FUN_019bb7e0(iVar2,local_cc);
        }
        *param_1 = local_e0;
        param_1[1] = (int)local_dc;
        param_1[2] = local_d8;
        return;
      }
      iVar10 = iVar9;
    } while (iVar9 != iVar11);
  }
  *param_1 = 0;
  param_1[1] = 4;
  param_1[2] = 0;
  if (iVar2 == -0x80000000) {
    return;
  }
  FUN_019bb7e0(iVar2,param_2[1]);
  return;
}

