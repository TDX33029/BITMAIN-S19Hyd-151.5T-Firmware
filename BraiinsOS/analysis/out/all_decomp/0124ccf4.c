// FUN_0124ccf4 @ 0124ccf4 size=596 calls_out=7 calls_in=0
// strings: 

void FUN_0124ccf4(undefined4 *param_1,undefined4 param_2,char *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  uint local_b0;
  int local_ac;
  int local_a8;
  uint local_a4 [3];
  undefined4 local_98;
  uint local_94;
  undefined4 local_90;
  int local_8c;
  undefined4 local_88;
  uint local_84;
  undefined1 local_80 [4];
  int local_7c;
  int local_78;
  int local_74;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*param_3 != '\x05') {
    *param_1 = 0x80000000;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
  }
  uVar6 = *(uint *)(param_3 + 0xc);
  local_b0 = 0;
  bVar12 = 0x3fffffe < uVar6;
  bVar11 = uVar6 == 0x3ffffff;
  uVar10 = uVar6 * 0x40;
  if (uVar6 < 0x4000000) {
    bVar12 = 0x7ffffffb < uVar10;
    bVar11 = uVar10 == 0x7ffffffc;
  }
  if (!(bVar12 && !bVar11)) {
    iVar9 = 0;
    if (uVar10 == 0) {
      iVar2 = 4;
    }
    else {
      iVar2 = thunk_FUN_016d4a50(uVar10);
      local_b0 = uVar6;
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,uVar10);
      }
    }
    local_98 = *(undefined4 *)(param_3 + 8);
    local_a4[2] = *(uint *)(param_3 + 4);
    if (local_a4[2] == 0) {
      uVar6 = 0;
    }
    local_a4[0] = (uint)(local_a4[2] != 0);
    iVar7 = 1;
    local_a8 = 0;
    local_90 = 0;
    local_a4[1] = 0;
    local_ac = iVar2;
    local_94 = local_a4[0];
    local_8c = local_a4[2];
    local_88 = local_98;
    local_84 = uVar6;
    do {
      iVar3 = FUN_00f45584(local_a4);
      uVar10 = iVar7 - 1;
      if (iVar3 == 0) {
        iVar7 = iVar2;
        do {
          if (iVar9 == 0) {
            param_1[1] = local_b0;
            param_1[2] = iVar2;
            param_1[3] = uVar10;
            *param_1 = 0x80000000;
            param_1[4] = 0;
            return;
          }
          pcVar1 = (char *)(iVar7 + 0x3c);
          iVar9 = iVar9 + -0x40;
          iVar7 = iVar7 + 0x40;
        } while (*pcVar1 != '\0');
        *param_1 = 0;
        param_1[1] = 4;
        param_1[2] = 0;
        param_1[3] = local_b0;
        param_1[4] = iVar2;
        param_1[5] = uVar10;
        param_1[6] = 0;
        return;
      }
      uVar8 = *(undefined4 *)(iVar3 + 4);
      iVar3 = *(int *)(iVar3 + 8);
      if (iVar3 == 0) {
        iVar4 = 1;
      }
      else {
        iVar4 = thunk_FUN_016d4a50(iVar3);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar3);
        }
      }
      FUN_016dd1aa(iVar4,uVar8,iVar3);
      local_80[0] = 3;
      local_7c = iVar3;
      local_78 = iVar4;
      local_74 = iVar3;
      FUN_011c9534(&local_68,param_2,local_80,param_4,param_5,param_6);
      if (uVar10 == local_b0) {
        FUN_011ca644(&local_b0);
        iVar2 = local_ac;
      }
      puVar5 = (undefined4 *)(iVar2 + iVar9);
      *puVar5 = local_68;
      puVar5[1] = uStack_64;
      puVar5[2] = uStack_60;
      puVar5[3] = uStack_5c;
      puVar5[4] = uStack_58;
      puVar5[5] = local_54;
      puVar5[6] = uStack_50;
      puVar5[7] = uStack_4c;
      puVar5[8] = uStack_48;
      puVar5[9] = uStack_44;
      puVar5[10] = local_40;
      puVar5[0xb] = uStack_3c;
      puVar5[0xc] = uStack_38;
      puVar5[0xd] = uStack_34;
      puVar5[0xe] = uStack_30;
      puVar5[0xf] = uStack_2c;
      local_a8 = iVar7;
      FUN_01164f34(local_80);
      iVar7 = iVar7 + 1;
      iVar9 = iVar9 + 0x40;
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_00600af4();
}

