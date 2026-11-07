// FUN_00b20e70 @ 00b20e70 size=500 calls_out=3 calls_in=1
// strings: 

void FUN_00b20e70(uint *param_1,int param_2,uint param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint local_a0;
  uint local_9c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar2 = param_3 * 0x34;
  uVar3 = 0;
  if (0x2762762 < param_3) {
LAB_00b20e9c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar3,iVar2);
  }
  if (iVar2 == 0) {
    local_9c = 4;
    local_a0 = 0;
  }
  else {
    uVar3 = 4;
    local_9c = FUN_01298504(iVar2,4);
    if (local_9c == 0) goto LAB_00b20e9c;
    local_a0 = param_3;
    if (param_3 != 0) {
      iVar5 = 0;
      uVar4 = 0;
      iVar7 = param_2;
      do {
        if (iVar2 == iVar5) break;
        if (*(int *)(iVar7 + 0x18) == -0x80000000) {
          local_60 = 0x80000000;
        }
        else {
          FUN_006666fc(&local_60,*(undefined4 *)(param_2 + iVar5 + 0x1c),
                       *(undefined4 *)(param_2 + iVar5 + 0x20));
        }
        FUN_006666fc(&local_50,*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar7 + 8));
        FUN_006666fc(&local_40,*(undefined4 *)(iVar7 + 0x10),*(undefined4 *)(iVar7 + 0x14));
        if (*(int *)(iVar7 + 0x24) == -0x80000000) {
          local_30 = 0x80000000;
        }
        else {
          FUN_006666fc(&local_30,*(undefined4 *)(param_2 + iVar5 + 0x28),
                       *(undefined4 *)(param_2 + iVar5 + 0x2c));
        }
        uVar1 = *(undefined1 *)(iVar7 + 0x30);
        iVar7 = iVar7 + 0x34;
        uVar4 = uVar4 + 1;
        puVar6 = (undefined4 *)(local_9c + iVar5);
        iVar5 = iVar5 + 0x34;
        *puVar6 = local_50;
        puVar6[1] = uStack_4c;
        puVar6[2] = uStack_48;
        puVar6[3] = local_40;
        puVar6[4] = uStack_3c;
        puVar6[5] = uStack_38;
        puVar6[6] = local_60;
        puVar6[7] = uStack_5c;
        puVar6[8] = uStack_58;
        puVar6[9] = local_30;
        puVar6[10] = uStack_2c;
        puVar6[0xb] = uStack_28;
        *(undefined1 *)(puVar6 + 0xc) = uVar1;
      } while (param_3 != uVar4);
    }
  }
  *param_1 = local_a0;
  param_1[1] = local_9c;
  param_1[2] = param_3;
  return;
}

