// FUN_0124179c @ 0124179c size=504 calls_out=4 calls_in=0
// strings: 

void FUN_0124179c(undefined4 *param_1,int param_2,char *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  bool bVar9;
  bool bVar10;
  uint local_84;
  int local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_34;
  uint local_30;
  undefined4 local_28;
  
  if (*param_3 != '\x04') {
    *param_1 = 0x80000000;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
  }
  uVar4 = *(uint *)(param_2 + 8);
  if (*(uint *)(param_3 + 0xc) < *(uint *)(param_2 + 8)) {
    uVar4 = *(uint *)(param_3 + 0xc);
  }
  uVar1 = uVar4 * 0x40;
  bVar10 = 0x3fffffe < uVar4;
  bVar9 = uVar4 == 0x3ffffff;
  if (uVar4 < 0x4000000) {
    bVar10 = 0x7ffffffb < uVar1;
    bVar9 = uVar1 == 0x7ffffffc;
  }
  if (!(bVar10 && !bVar9)) {
    uVar6 = 0;
    if (uVar1 == 0) {
      iVar3 = 4;
      local_84 = 0;
    }
    else {
      iVar3 = thunk_FUN_016d4a50(uVar1);
      local_84 = uVar4;
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,uVar1);
      }
    }
    iVar5 = *(int *)(param_2 + 4);
    iVar7 = *(int *)(param_3 + 8);
    local_7c = 0;
    if (uVar4 != 0) {
      local_80 = iVar3;
      do {
        uVar6 = local_7c;
        local_34 = 0x80000001;
        local_30 = local_7c;
        local_28 = param_4;
        FUN_011c9534(&local_78,iVar5,iVar7,&local_34,param_5,param_6);
        if (uVar6 == local_84) {
          FUN_011ca644(&local_84);
          iVar3 = local_80;
        }
        puVar8 = (undefined4 *)(iVar3 + uVar6 * 0x40);
        uVar6 = uVar6 + 1;
        iVar5 = iVar5 + 0x14;
        *puVar8 = local_78;
        puVar8[1] = uStack_74;
        puVar8[2] = uStack_70;
        puVar8[3] = uStack_6c;
        puVar8[4] = uStack_68;
        iVar7 = iVar7 + 0x18;
        puVar8[5] = local_64;
        puVar8[6] = uStack_60;
        puVar8[7] = uStack_5c;
        puVar8[8] = uStack_58;
        puVar8[9] = uStack_54;
        puVar8[10] = local_50;
        puVar8[0xb] = uStack_4c;
        puVar8[0xc] = uStack_48;
        puVar8[0xd] = uStack_44;
        puVar8[0xe] = uStack_40;
        puVar8[0xf] = uStack_3c;
        local_7c = uVar6;
      } while (uVar4 != uVar6);
    }
    iVar5 = uVar6 << 6;
    iVar7 = iVar3;
    do {
      if (iVar5 == 0) {
        *param_1 = 0x80000000;
        param_1[1] = local_84;
        param_1[2] = iVar3;
        param_1[3] = uVar6;
        param_1[4] = 0;
        return;
      }
      pcVar2 = (char *)(iVar7 + 0x3c);
      iVar5 = iVar5 + -0x40;
      iVar7 = iVar7 + 0x40;
    } while (*pcVar2 != '\0');
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    param_1[3] = local_84;
    param_1[4] = iVar3;
    param_1[5] = uVar6;
    param_1[6] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00600af4(0,uVar1);
}

