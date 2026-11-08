// FUN_006740b4 @ 006740b4 size=520 calls_out=6 calls_in=2
// strings: 

void FUN_006740b4(int param_1,undefined4 param_2,int param_3,int *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  short *psVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  short *local_4c;
  uint local_48;
  undefined4 local_40;
  short *local_3c;
  uint local_38;
  undefined4 *local_34;
  undefined2 *local_30;
  undefined4 *local_2c;
  undefined1 *local_28;
  
  iVar8 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 8) != 0) {
    iVar9 = *(int *)(param_1 + 8) * 0x5c + iVar8;
    local_58 = param_2;
    local_54 = param_3;
    do {
      if (-1 < *(int *)(iVar8 + 0x10)) {
        local_38 = 0;
        local_40 = 0;
        local_28 = (undefined1 *)0x0;
        local_3c = (short *)&DAT_00000001;
        local_2c = (undefined4 *)0x60000020;
        local_30 = (undefined2 *)&DAT_01c04724;
        local_34 = &local_40;
        iVar5 = FUN_012fb940(&local_34,*(int *)(iVar8 + 0x44) + 8,*(undefined4 *)(iVar8 + 0x48));
        if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533383,0x37,&local_50,&DAT_01c0473c,&DAT_01d30334);
        }
        local_50 = local_40;
        local_4c = local_3c;
        local_48 = local_38;
        if ((local_38 < 2) || (*local_3c != 0x5f5f)) {
          if (param_3 != 0) {
            local_28 = &LAB_00632348;
            local_2c = &local_50;
            local_30 = &DAT_0132b6a0;
            local_34 = &local_58;
            FUN_00664898(&local_40,&DAT_005b25a2,&local_34);
          }
          uVar4 = local_38;
          psVar3 = local_3c;
          uVar2 = local_40;
          iVar5 = *(int *)(iVar8 + 0x34);
          iVar7 = *(int *)(iVar8 + 0x38) * 0x5c;
          do {
            if (iVar7 == 0) goto LAB_0067420c;
            piVar1 = (int *)(iVar5 + 0x10);
            iVar7 = iVar7 + -0x5c;
            iVar5 = iVar5 + 0x5c;
          } while (*piVar1 < 0);
          if (*(int *)(iVar8 + 0x18) == 0) {
            FUN_006740b4(iVar8 + 0x30,local_3c,local_38,param_4);
            FUN_019bb7e0(uVar2,psVar3);
          }
          else {
LAB_0067420c:
            iVar5 = param_4[2];
            if (iVar5 == *param_4) {
              FUN_019abd3c(param_4);
            }
            param_4[2] = iVar5 + 1;
            puVar6 = (undefined4 *)(param_4[1] + iVar5 * 0xc);
            *puVar6 = uVar2;
            puVar6[1] = psVar3;
            puVar6[2] = uVar4;
          }
          if (param_3 == 0) goto LAB_0067425c;
        }
        FUN_019bb7e0(local_50,local_4c);
      }
LAB_0067425c:
      iVar8 = iVar8 + 0x5c;
    } while (iVar8 != iVar9);
  }
  return;
}

