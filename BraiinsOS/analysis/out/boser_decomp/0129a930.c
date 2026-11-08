// FUN_0129a930 @ 0129a930 size=440 calls_out=3 calls_in=4
// strings: 

void FUN_0129a930(uint *param_1,int param_2,uint param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint local_88;
  uint local_84;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar3 = 0;
  iVar5 = param_3 * 0x30;
  if (0x2aaaaaa < param_3) {
LAB_0129a95c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar3,iVar5);
  }
  if (iVar5 == 0) {
    local_84 = 4;
    local_88 = 0;
  }
  else {
    uVar3 = 4;
    local_84 = FUN_01298504(iVar5,4);
    if (local_84 == 0) goto LAB_0129a95c;
    local_88 = param_3;
    if (param_3 != 0) {
      puVar6 = (undefined4 *)(local_84 + 0x24);
      uVar4 = 0;
      do {
        if (iVar5 == 0) break;
        uVar7 = *(undefined4 *)(param_2 + 0x24);
        uVar3 = *(undefined4 *)(param_2 + 0x28);
        FUN_012993c4(&local_50,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
        uVar1 = *(undefined1 *)(param_2 + 0x2c);
        FUN_012993c4(&local_40,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14));
        FUN_012993c4(&local_30,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20));
        uVar2 = *(undefined1 *)(param_2 + 0x2d);
        uVar4 = uVar4 + 1;
        puVar6[-9] = local_50;
        puVar6[-8] = uStack_4c;
        puVar6[-7] = uStack_48;
        puVar6[-6] = local_40;
        puVar6[-5] = uStack_3c;
        puVar6[-4] = uStack_38;
        puVar6[-3] = local_30;
        puVar6[-2] = uStack_2c;
        puVar6[-1] = uStack_28;
        *(undefined1 *)(puVar6 + 2) = uVar1;
        iVar5 = iVar5 + -0x30;
        *puVar6 = uVar7;
        *(undefined1 *)((int)puVar6 + 9) = uVar2;
        puVar6[1] = uVar3;
        puVar6 = puVar6 + 0xc;
        param_2 = param_2 + 0x30;
      } while (param_3 != uVar4);
    }
  }
  *param_1 = local_88;
  param_1[1] = local_84;
  param_1[2] = param_3;
  return;
}

