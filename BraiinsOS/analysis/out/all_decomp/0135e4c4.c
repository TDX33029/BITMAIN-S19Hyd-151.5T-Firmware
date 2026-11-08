// FUN_0135e4c4 @ 0135e4c4 size=996 calls_out=8 calls_in=1
// strings: 

void FUN_0135e4c4(int *param_1,undefined4 *param_2,undefined1 *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint local_ac;
  int *local_a8;
  int *local_a0;
  int local_9c;
  uint local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int *local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined4 local_70;
  int *local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  uint local_58;
  uint local_54;
  int *local_50;
  uint local_4c;
  int *local_48;
  uint local_44;
  int local_40;
  uint local_3c;
  undefined4 local_38;
  int *local_34;
  uint local_30;
  int *local_2c;
  uint local_28;
  
  piVar8 = (int *)*param_2;
  uVar13 = param_2[2];
  uVar15 = (uint)*(ushort *)((int)piVar8 + 0x32);
  iVar11 = piVar8[uVar13 + 1];
  FUN_016dd52c(piVar8 + uVar13 + 1,piVar8 + uVar13 + 2,(uVar15 + ~uVar13) * 4);
  iVar17 = param_2[1];
  uVar2 = uVar15 - 1;
  *(short *)((int)piVar8 + 0x32) = (short)uVar2;
  if (4 < (uVar2 & 0xffff)) goto LAB_0135e864;
  iVar1 = *piVar8;
  if (iVar1 == 0) {
LAB_0135e608:
    local_98 = uVar13;
LAB_0135e60c:
    local_a0 = piVar8;
    local_9c = iVar17;
  }
  else {
    iVar5 = iVar17 + 1;
    if (*(ushort *)(piVar8 + 0xc) == 0) {
      if (*(short *)(iVar1 + 0x32) == 0) {
LAB_0135e890:
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00410ada,0x7b,&DAT_01892400);
      }
      local_64 = *(int *)(iVar1 + 0x38);
      local_70 = 0;
      local_78 = iVar1;
      local_74 = iVar5;
      local_6c = piVar8;
      local_68 = iVar17;
      local_60 = iVar17;
      if (0xb < uVar15 + *(ushort *)(local_64 + 0x32)) {
        FUN_0135ec58(&local_78,1);
        goto LAB_0135e608;
      }
      piVar8 = &local_78;
      uVar6 = 0;
    }
    else {
      local_8c = *(ushort *)(piVar8 + 0xc) - 1;
      local_88 = *(int *)(iVar1 + local_8c * 4 + 0x34);
      local_94 = iVar1;
      local_90 = iVar5;
      local_84 = iVar17;
      local_80 = piVar8;
      local_7c = iVar17;
      if (0xb < (uint)*(ushort *)(local_88 + 0x32) + (uVar2 & 0xffff) + 1) {
        FUN_0135e8b8(&local_94,1);
        local_98 = uVar13 + 1;
        goto LAB_0135e60c;
      }
      piVar8 = &local_94;
      uVar6 = 1;
    }
    FUN_0135ea58(&local_a0,piVar8,uVar6,uVar13);
  }
  uVar13 = local_98;
  iVar17 = local_9c;
  piVar8 = local_a0;
  piVar7 = (int *)*local_a0;
  if ((piVar7 != (int *)0x0) && (uVar2 = (uint)*(ushort *)((int)piVar7 + 0x32), uVar2 < 5)) {
    uVar15 = local_9c + 1;
    do {
      piVar12 = (int *)*piVar7;
      if (piVar12 == (int *)0x0) {
        if (uVar2 == 0) {
          *param_3 = 1;
        }
        break;
      }
      uVar3 = (uint)*(ushort *)(piVar7 + 0xc);
      uVar18 = uVar15 + 1;
      if (uVar3 == 0) {
        uVar3 = (uint)*(ushort *)((int)piVar12 + 0x32);
        if (uVar3 == 0) goto LAB_0135e890;
        iVar1 = uVar2 + 1;
        uVar9 = 0;
        local_a8 = (int *)piVar12[0xe];
        local_38 = 0;
        local_ac = (uint)*(ushort *)((int)local_a8 + 0x32);
        uVar10 = iVar1 + local_ac;
        local_40 = (int)piVar12;
        local_3c = uVar18;
        local_34 = piVar7;
        local_30 = uVar15;
        local_2c = local_a8;
        local_28 = uVar15;
        if (0xb < uVar10) {
          FUN_0135ec58(&local_40,5 - uVar2);
          break;
        }
        piVar14 = piVar7;
        uVar16 = uVar2;
      }
      else {
        uVar9 = uVar3 - 1;
        local_50 = (int *)piVar12[uVar3 + 0xc];
        uVar16 = (uint)*(ushort *)((int)local_50 + 0x32);
        local_5c = (int)piVar12;
        local_58 = uVar18;
        local_54 = uVar9;
        local_4c = uVar15;
        local_48 = piVar7;
        local_44 = uVar15;
        if (0xb < uVar2 + uVar16 + 1) {
          FUN_0135e8b8(&local_5c,5 - uVar2);
          break;
        }
        iVar1 = uVar16 + 1;
        uVar3 = (uint)*(ushort *)((int)piVar12 + 0x32);
        uVar10 = iVar1 + uVar2;
        piVar14 = local_50;
        local_ac = uVar2;
        local_a8 = piVar7;
      }
      *(short *)((int)piVar14 + 0x32) = (short)uVar10;
      iVar5 = piVar12[uVar9 + 1];
      FUN_016dd52c(piVar12 + uVar9 + 1,piVar12 + uVar9 + 2);
      piVar14[uVar16 + 1] = iVar5;
      FUN_016dd1aa(piVar14 + iVar1 + 1,local_a8 + 1,local_ac << 2);
      uVar2 = uVar9 + 1;
      FUN_016dd52c(piVar12 + uVar9 + 0xe,piVar12 + uVar9 + 0xf,(~uVar9 + uVar3) * 4);
      if (uVar2 < uVar3) {
        do {
          piVar7 = (int *)piVar12[uVar2 + 0xd];
          *(short *)(piVar7 + 0xc) = (short)uVar2;
          uVar2 = uVar2 + 1;
          *piVar7 = (int)piVar12;
        } while (uVar3 != uVar2);
      }
      *(short *)((int)piVar12 + 0x32) = *(short *)((int)piVar12 + 0x32) + -1;
      if (1 < uVar18) {
        if (local_ac + 1 != uVar10 - uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_004194bf,0x28,&DAT_018af448);
        }
        FUN_016dd1aa(piVar14 + iVar1 + 0xd,local_a8 + 0xd,(local_ac + 1) * 4);
        do {
          puVar4 = (undefined4 *)piVar14[iVar1 + 0xd];
          *(short *)(puVar4 + 0xc) = (short)iVar1;
          iVar1 = iVar1 + 1;
          *puVar4 = piVar14;
        } while (uVar10 + 1 != iVar1);
      }
      thunk_FUN_016d3fb4(local_a8);
      uVar2 = (uint)*(ushort *)((int)piVar12 + 0x32);
      uVar15 = uVar18;
      piVar7 = piVar12;
    } while (uVar2 < 5);
  }
LAB_0135e864:
  *param_1 = iVar11;
  param_1[1] = (int)piVar8;
  param_1[2] = iVar17;
  param_1[3] = uVar13;
  return;
}

