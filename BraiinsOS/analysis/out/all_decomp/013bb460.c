// FUN_013bb460 @ 013bb460 size=404 calls_out=6 calls_in=4
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_013bb460(undefined4 *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint local_40;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  local_5c = 0;
  local_60 = 0;
  local_64 = 4;
  local_68 = 0;
  local_6c = 0;
  local_70 = 8;
  local_74 = 0;
  local_78 = 0;
  local_7c = 4;
  local_80 = 0;
  if (param_3 != 0) {
    *param_1 = 0x80000003;
    param_1[1] = 0;
    FUN_013bb358(&local_80);
    return;
  }
  FUN_013baffc(&local_80);
  if (local_78 != 0) {
    iVar5 = local_78 << 3;
    uVar1 = local_78 * 2;
    uVar3 = 0;
    do {
      if (local_78 == uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01893d70);
      }
      piVar4 = (int *)(local_7c + uVar3 * 8);
      iVar7 = *piVar4;
      uVar6 = piVar4[1];
      if ((CARRY4(uVar6,uVar1)) || (0x7ffffffe < uVar6 + uVar1)) {
        *param_1 = 0x80000001;
        param_1[1] = uVar3;
        param_1[2] = (uVar6 - iVar7 >> 1) + 1;
        FUN_013bb358(&local_80);
        return;
      }
      local_58 = iVar7 + uVar1;
      piVar4[1] = uVar6 + uVar1;
      if (0x7ffffffe < local_58) {
        local_54 = 0;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_58,&DAT_01893e30,&DAT_01893db0);
      }
      *(uint *)(local_7c + uVar3 * 8) = local_58;
      uVar3 = uVar3 + 1;
      iVar5 = iVar5 + -8;
    } while (iVar5 != 0);
  }
  local_50 = local_80;
  uStack_4c = local_7c;
  uStack_48 = local_78;
  uStack_44 = local_74;
  local_40 = local_70;
  local_3c = local_6c;
  uStack_38 = local_68;
  uStack_34 = local_64;
  uStack_30 = local_60;
  uStack_2c = local_5c;
  local_54 = 1;
  local_58 = 1;
  puVar2 = (uint *)thunk_FUN_016d4a50(0x30);
  if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x30);
  }
  *puVar2 = local_58;
  puVar2[1] = local_54;
  puVar2[2] = local_50;
  puVar2[3] = uStack_4c;
  puVar2[4] = uStack_48;
  puVar2[5] = uStack_44;
  puVar2[6] = local_40;
  puVar2[7] = local_3c;
  puVar2[8] = uStack_38;
  puVar2[9] = uStack_34;
  puVar2[10] = uStack_30;
  puVar2[0xb] = uStack_2c;
  *param_1 = &DAT_80000004;
  param_1[1] = puVar2;
  return;
}

