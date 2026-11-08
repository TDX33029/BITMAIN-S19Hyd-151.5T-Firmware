// FUN_0125055c @ 0125055c size=412 calls_out=4 calls_in=0
// strings: 

void FUN_0125055c(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  uint local_74;
  int local_70;
  uint local_6c;
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
  
  uVar7 = *(uint *)(param_2 + 8);
  bVar10 = 0x3fffffe < uVar7;
  bVar9 = uVar7 == 0x3ffffff;
  uVar1 = uVar7 * 0x40;
  if (uVar7 < 0x4000000) {
    bVar10 = 0x7ffffffb < uVar1;
    bVar9 = uVar1 == 0x7ffffffc;
  }
  if (!(bVar10 && !bVar9)) {
    uVar8 = 0;
    if (uVar1 == 0) {
      iVar3 = 4;
      local_74 = 0;
    }
    else {
      iVar3 = thunk_FUN_016d4a50(uVar1);
      local_74 = uVar7;
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,uVar1);
      }
    }
    if (uVar7 != 0) {
      local_6c = 0;
      iVar6 = *(int *)(param_2 + 4);
      iVar5 = uVar7 * 0x14;
      local_70 = iVar3;
      do {
        uVar8 = local_6c;
        FUN_011c9534(&local_68,iVar6,param_3,param_4,param_5,param_6);
        if (uVar8 == local_74) {
          FUN_011ca644(&local_74);
          iVar3 = local_70;
        }
        puVar4 = (undefined4 *)(iVar3 + uVar8 * 0x40);
        iVar6 = iVar6 + 0x14;
        uVar8 = uVar8 + 1;
        *puVar4 = local_68;
        puVar4[1] = uStack_64;
        puVar4[2] = uStack_60;
        puVar4[3] = uStack_5c;
        puVar4[4] = uStack_58;
        iVar5 = iVar5 + -0x14;
        puVar4[5] = local_54;
        puVar4[6] = uStack_50;
        puVar4[7] = uStack_4c;
        puVar4[8] = uStack_48;
        puVar4[9] = uStack_44;
        puVar4[10] = local_40;
        puVar4[0xb] = uStack_3c;
        puVar4[0xc] = uStack_38;
        puVar4[0xd] = uStack_34;
        puVar4[0xe] = uStack_30;
        puVar4[0xf] = uStack_2c;
        local_6c = uVar8;
      } while (iVar5 != 0);
    }
    iVar5 = uVar8 << 6;
    iVar6 = iVar3;
    do {
      if (iVar5 == 0) {
        param_1[1] = local_74;
        param_1[2] = iVar3;
        param_1[3] = uVar8;
        *param_1 = 0x80000000;
        param_1[4] = 0;
        return;
      }
      pcVar2 = (char *)(iVar6 + 0x3c);
      iVar5 = iVar5 + -0x40;
      iVar6 = iVar6 + 0x40;
    } while (*pcVar2 != '\0');
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    param_1[3] = local_74;
    param_1[4] = iVar3;
    param_1[5] = uVar8;
    param_1[6] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00600af4(0,uVar1);
}

