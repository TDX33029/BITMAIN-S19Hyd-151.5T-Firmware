// FUN_016cabd4 @ 016cabd4 size=516 calls_out=8 calls_in=2
// strings: 

void FUN_016cabd4(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  uint *puVar7;
  bool bVar8;
  undefined8 uVar9;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined4 *local_58;
  undefined4 *local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  local_6c = param_1[2];
  local_70 = param_2;
  if (param_2 == local_6c) {
    local_64 = param_1[5];
    local_68 = param_2;
    if (param_2 == local_64) {
      local_5c = param_1[8];
      local_60 = param_2;
      if (param_2 == local_5c) {
        iVar1 = param_1[1];
        bVar8 = param_2 == 0;
        uVar6 = 0;
        iVar3 = 0;
        if (!bVar8) {
          iVar3 = iVar1 + param_2 * 8;
          bVar8 = iVar3 == 8;
        }
        if (!bVar8) {
          uVar6 = *(undefined4 *)(iVar3 + -4);
        }
        if (param_2 == *param_1) {
          FUN_015f5ab8(param_1);
          iVar1 = param_1[1];
        }
        puVar2 = (undefined4 *)(iVar1 + param_2 * 8);
        *puVar2 = uVar6;
        puVar2[1] = uVar6;
        uVar9 = thunk_FUN_01bee35a(puVar2,0x2c0);
        puVar7 = (uint *)((int)uVar9 + (int)((ulonglong)uVar9 >> 0x20));
        param_1[2] = param_2 + 1;
        if ((char)puVar7[4] == '\0') {
          FUN_019ae6ac(&local_38);
          *puVar7 = local_38;
          puVar7[1] = uStack_34;
          puVar7[2] = uStack_30;
          puVar7[3] = uStack_2c;
          *(undefined1 *)(puVar7 + 4) = 1;
        }
        local_48 = *puVar7;
        uStack_44 = puVar7[1];
        uStack_40 = puVar7[2];
        uStack_3c = puVar7[3];
        *puVar7 = local_48 + 1;
        puVar7[1] = uStack_44 + (0xfffffffe < local_48);
        local_58 = &DAT_0056d238;
        local_54 = (undefined4 *)0x0;
        local_50 = 0;
        uStack_4c = 0;
        iVar3 = param_1[5];
        if (iVar3 == param_1[3]) {
          FUN_01ab8064(param_1 + 3);
        }
        puVar2 = (undefined4 *)(param_1[4] + iVar3 * 0x20);
        *puVar2 = local_58;
        puVar2[1] = local_54;
        puVar2[2] = local_50;
        puVar2[3] = uStack_4c;
        puVar2[4] = local_48;
        puVar2[5] = uStack_44;
        puVar2[6] = uStack_40;
        puVar2[7] = uStack_3c;
        param_1[5] = iVar3 + 1;
        puVar2 = (undefined4 *)thunk_FUN_01be5118(8);
        if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,8);
        }
        iVar1 = param_1[8];
        iVar3 = param_1[6];
        *puVar2 = 0;
        local_50 = 1;
        local_58 = (undefined4 *)0x1;
        local_54 = puVar2;
        if (iVar1 == iVar3) {
          FUN_018c4418(param_1 + 6);
        }
        puVar2 = (undefined4 *)(param_1[7] + iVar1 * 0xc);
        *puVar2 = local_58;
        puVar2[1] = local_54;
        puVar2[2] = local_50;
        param_1[8] = iVar1 + 1;
        param_1[9] = param_1[9] + 8;
        return;
      }
      piVar4 = &local_60;
      piVar5 = &local_5c;
    }
    else {
      piVar4 = &local_68;
      piVar5 = &local_64;
    }
  }
  else {
    piVar4 = &local_70;
    piVar5 = &local_6c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01304210(0,piVar4,piVar5,0);
}

