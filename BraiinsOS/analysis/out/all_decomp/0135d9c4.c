// FUN_0135d9c4 @ 0135d9c4 size=1156 calls_out=8 calls_in=1
// strings: 

void FUN_0135d9c4(undefined4 *param_1,int *param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  uint uVar19;
  uint local_b8;
  uint local_ac;
  int local_a4;
  int local_a0;
  int local_9c;
  uint local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined4 local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  uint local_58;
  uint local_54;
  int local_50;
  uint local_4c;
  int local_48;
  uint local_44;
  int local_40;
  uint local_3c;
  undefined4 local_38;
  int local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  
  iVar16 = *param_2;
  local_b8 = param_2[2];
  uVar14 = (uint)*(ushort *)(iVar16 + 0x8a);
  iVar1 = iVar16 + local_b8 * 4;
  puVar2 = (undefined4 *)(iVar1 + 0x5c);
  uVar9 = *puVar2;
  FUN_016dd52c(puVar2,iVar1 + 0x60,(uVar14 + ~local_b8) * 4);
  puVar2 = (undefined4 *)(iVar16 + local_b8 * 8);
  uVar5 = *puVar2;
  uVar6 = puVar2[1];
  FUN_016dd52c(puVar2,puVar2 + 2,(uVar14 + ~local_b8) * 8);
  iVar1 = param_2[1];
  uVar7 = uVar14 - 1;
  *(short *)(iVar16 + 0x8a) = (short)uVar7;
  if (4 < (uVar7 & 0xffff)) goto LAB_0135ddec;
  iVar3 = *(int *)(iVar16 + 0x58);
  if (iVar3 == 0) {
LAB_0135db40:
    local_a0 = iVar16;
    local_9c = iVar1;
    local_98 = local_b8;
  }
  else {
    iVar10 = iVar1 + 1;
    if (*(ushort *)(iVar16 + 0x88) == 0) {
      if (*(short *)(iVar3 + 0x8a) == 0) {
LAB_0135de30:
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00410ada,0x7b,&DAT_01892400);
      }
      local_64 = *(int *)(iVar3 + 0x90);
      local_70 = 0;
      local_78 = iVar3;
      local_74 = iVar10;
      local_6c = iVar16;
      local_68 = iVar1;
      local_60 = iVar1;
      if (0xb < uVar14 + *(ushort *)(local_64 + 0x8a)) {
        FUN_0135e290(&local_78,1);
        goto LAB_0135db40;
      }
      FUN_0135e060(&local_a0,&local_78,0,local_b8);
    }
    else {
      local_8c = *(ushort *)(iVar16 + 0x88) - 1;
      local_88 = *(int *)(iVar3 + local_8c * 4 + 0x8c);
      local_94 = iVar3;
      local_90 = iVar10;
      local_84 = iVar1;
      local_80 = iVar16;
      local_7c = iVar1;
      if ((uint)*(ushort *)(local_88 + 0x8a) + (uVar7 & 0xffff) + 1 < 0xc) {
        FUN_0135e060(&local_a0,&local_94,1,local_b8);
      }
      else {
        FUN_0135de58(&local_94,1);
        local_98 = local_b8 + 1;
        local_a0 = iVar16;
        local_9c = iVar1;
      }
    }
  }
  iVar1 = local_9c;
  iVar16 = local_a0;
  iVar3 = *(int *)(local_a0 + 0x58);
  local_b8 = local_98;
  if ((iVar3 != 0) && (uVar7 = (uint)*(ushort *)(iVar3 + 0x8a), uVar7 < 5)) {
    uVar14 = local_9c + 1;
    do {
      iVar10 = *(int *)(iVar3 + 0x58);
      if (iVar10 == 0) {
        if (uVar7 == 0) {
          *param_3 = 1;
        }
        break;
      }
      uVar11 = uVar14 + 1;
      if (*(ushort *)(iVar3 + 0x88) == 0) {
        uVar19 = (uint)*(ushort *)(iVar10 + 0x8a);
        if (uVar19 == 0) goto LAB_0135de30;
        iVar12 = uVar7 + 1;
        uVar13 = 0;
        local_a4 = *(int *)(iVar10 + 0x90);
        local_38 = 0;
        local_ac = (uint)*(ushort *)(local_a4 + 0x8a);
        uVar4 = iVar12 + local_ac;
        local_40 = iVar10;
        local_3c = uVar11;
        local_34 = iVar3;
        local_30 = uVar14;
        local_2c = local_a4;
        local_28 = uVar14;
        if (0xb < uVar4) {
          FUN_0135e290(&local_40,5 - uVar7);
          break;
        }
        uVar8 = uVar7;
        iVar18 = iVar3;
      }
      else {
        uVar13 = *(ushort *)(iVar3 + 0x88) - 1;
        local_50 = *(int *)(iVar10 + uVar13 * 4 + 0x8c);
        uVar8 = (uint)*(ushort *)(local_50 + 0x8a);
        local_5c = iVar10;
        local_58 = uVar11;
        local_54 = uVar13;
        local_4c = uVar14;
        local_48 = iVar3;
        local_44 = uVar14;
        if (0xb < uVar7 + uVar8 + 1) {
          FUN_0135de58(&local_5c,5 - uVar7);
          break;
        }
        iVar12 = uVar8 + 1;
        uVar19 = (uint)*(ushort *)(iVar10 + 0x8a);
        uVar4 = iVar12 + uVar7;
        iVar18 = local_50;
        local_ac = uVar7;
        local_a4 = iVar3;
      }
      *(short *)(iVar18 + 0x8a) = (short)uVar4;
      iVar3 = iVar10 + uVar13 * 4;
      puVar2 = (undefined4 *)(iVar3 + 0x5c);
      uVar17 = *puVar2;
      FUN_016dd52c(puVar2,iVar3 + 0x60);
      *(undefined4 *)(iVar18 + 0x5c + uVar8 * 4) = uVar17;
      FUN_016dd1aa(iVar18 + 0x5c + iVar12 * 4,local_a4 + 0x5c,local_ac << 2);
      puVar2 = (undefined4 *)(iVar10 + uVar13 * 8);
      uVar17 = *puVar2;
      uVar15 = puVar2[1];
      FUN_016dd52c(puVar2,puVar2 + 2,(~uVar13 + uVar19) * 8);
      puVar2 = (undefined4 *)(iVar18 + uVar8 * 8);
      *puVar2 = uVar17;
      puVar2[1] = uVar15;
      FUN_016dd1aa(iVar18 + iVar12 * 8,local_a4,local_ac << 3);
      uVar7 = uVar13 + 1;
      iVar3 = iVar10 + uVar7 * 4;
      FUN_016dd52c(iVar3 + 0x8c,iVar3 + 0x90,(~uVar13 + uVar19) * 4);
      if (uVar7 < uVar19) {
        do {
          iVar3 = *(int *)(iVar10 + uVar7 * 4 + 0x8c);
          *(short *)(iVar3 + 0x88) = (short)uVar7;
          uVar7 = uVar7 + 1;
          *(int *)(iVar3 + 0x58) = iVar10;
        } while (uVar19 != uVar7);
      }
      *(short *)(iVar10 + 0x8a) = *(short *)(iVar10 + 0x8a) + -1;
      if (1 < uVar11) {
        if (local_ac + 1 != uVar4 - uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_004194bf,0x28,&DAT_018af448);
        }
        FUN_016dd1aa(iVar18 + 0x8c + iVar12 * 4,local_a4 + 0x8c,(local_ac + 1) * 4);
        do {
          iVar3 = *(int *)(iVar18 + iVar12 * 4 + 0x8c);
          *(short *)(iVar3 + 0x88) = (short)iVar12;
          iVar12 = iVar12 + 1;
          *(int *)(iVar3 + 0x58) = iVar18;
        } while (uVar4 + 1 != iVar12);
      }
      thunk_FUN_016d3fb4(local_a4);
      uVar7 = (uint)*(ushort *)(iVar10 + 0x8a);
      uVar14 = uVar11;
      iVar3 = iVar10;
    } while (uVar7 < 5);
  }
LAB_0135ddec:
  *param_1 = uVar9;
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  param_1[3] = iVar16;
  param_1[4] = iVar1;
  param_1[5] = local_b8;
  return;
}

