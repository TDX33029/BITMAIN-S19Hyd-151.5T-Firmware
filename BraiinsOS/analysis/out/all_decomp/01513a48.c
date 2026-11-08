// FUN_01513a48 @ 01513a48 size=404 calls_out=3 calls_in=3
// strings: 

void FUN_01513a48(undefined4 *param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint local_68;
  undefined4 *local_64;
  undefined4 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint *puStack_4c;
  uint *puStack_48;
  uint *puStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint *local_34;
  uint *local_30;
  uint *local_2c;
  
  uVar2 = (uint)((int)param_3 - (int)param_2) / 0xc;
  iVar1 = uVar2 * 0x18;
  if (0x3ffffffc < (uint)((int)param_3 - (int)param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar1);
  }
  uVar9 = 0;
  if (iVar1 == 0) {
    local_64 = (undefined4 *)&DAT_00000004;
    local_68 = 0;
  }
  else {
    local_64 = (undefined4 *)thunk_FUN_016d4a50(iVar1);
    local_68 = uVar2;
    if (local_64 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar1);
    }
  }
  puVar4 = &local_68;
  uStack_60 = 0;
  if (param_3 != param_2) {
    uVar9 = 0;
    puVar8 = local_64;
    do {
      puVar6 = (uint *)param_2[2];
      puVar5 = (uint *)&DAT_80000000;
      puVar7 = (uint *)param_2[1];
      if (*param_2 == -0x80000000) {
        puStack_48 = puVar7;
      }
      else {
        uVar3 = 0;
        if ((int)puVar6 < 0) {
LAB_01513bd8:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar3,puVar4);
        }
        if (puVar6 == (uint *)0x0) {
          puVar4 = (uint *)&DAT_00000001;
          puVar5 = (uint *)0x0;
        }
        else {
          puVar4 = (uint *)thunk_FUN_016d4a50(puVar6,puVar4);
          if (puVar4 == (uint *)0x0) {
            uVar3 = 1;
            puVar4 = puVar6;
            goto LAB_01513bd8;
          }
          puVar5 = puVar6;
        }
        FUN_016dd1aa(puVar4,puVar7,puVar6);
        puStack_48 = puVar4;
      }
      local_3c = 4;
      uVar9 = uVar9 + 1;
      local_38 = 0;
      param_2 = param_2 + 3;
      local_40 = 0;
      local_58 = 0;
      uStack_54 = 4;
      uStack_50 = 0;
      *puVar8 = 0;
      puVar8[1] = 4;
      puVar8[2] = 0;
      puVar8[3] = puVar5;
      puVar8[4] = puStack_48;
      puVar8[5] = puVar6;
      puVar8 = puVar8 + 6;
      puStack_4c = puVar5;
      puStack_44 = puVar6;
      local_34 = puVar5;
      local_30 = puStack_48;
      local_2c = puVar6;
    } while (uVar2 != uVar9);
  }
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 0;
  param_1[3] = local_68;
  param_1[4] = local_64;
  param_1[5] = uVar9;
  return;
}

