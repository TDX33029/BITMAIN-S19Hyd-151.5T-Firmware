// FUN_0167c1f0 @ 0167c1f0 size=1104 calls_out=8 calls_in=1
// strings: assertion failed: match track_edge_idx {     LeftOrRight::Left(idx) => idx <= old_left_len;     LeftOrRight::Right(idx) => idx <= right_len; } | assertion failed: new_left_len <= CAPACITY

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0167c1f0(int *param_1,undefined4 *param_2,undefined1 *param_3)

{
  ushort uVar1;
  short sVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  undefined8 uVar24;
  uint local_54;
  uint local_44;
  int *local_40;
  uint local_3c;
  uint local_38;
  int *local_34;
  uint local_30;
  int *local_2c;
  uint local_28;
  
  piVar18 = (int *)*param_2;
  uVar22 = param_2[2];
  uVar1 = *(ushort *)((int)piVar18 + 0xb6);
  iVar15 = (uint)uVar1 + ~uVar22;
  iVar23 = piVar18[uVar22 + 1];
  FUN_01bed864(piVar18 + uVar22 + 1,piVar18 + uVar22 + 2,iVar15 * 4);
  iVar20 = piVar18[uVar22 * 3 + 0xc];
  iVar7 = piVar18[uVar22 * 3 + 0xe];
  iVar16 = piVar18[uVar22 * 3 + 0xd];
  FUN_01bed864(piVar18 + uVar22 * 3 + 0xc,piVar18 + uVar22 * 3 + 0xf,iVar15 * 0xc);
  local_54 = param_2[1];
  uVar4 = uVar1 - 1;
  *(short *)((int)piVar18 + 0xb6) = (short)uVar4;
  if (4 < (uVar4 & 0xffff)) goto LAB_0167c5cc;
  FUN_0167b090(&local_44,piVar18);
  piVar3 = local_2c;
  piVar18 = local_34;
  uVar4 = local_44;
  if (local_44 == 2) {
    local_54 = local_3c;
    piVar18 = local_40;
  }
  else {
    uVar12 = (uint)*(ushort *)((int)local_34 + 0xb6);
    uVar9 = (uint)*(ushort *)((int)local_2c + 0xb6);
    uVar19 = uVar12 + uVar9 + 1;
    if ((local_44 & 1) == 0) {
      if (uVar19 < 0xc) {
        uVar13 = uVar9;
        goto LAB_0167c2f0;
      }
      local_54 = local_28;
      FUN_0167b134(&local_40,1);
      uVar22 = uVar22 + 1;
      piVar18 = piVar3;
    }
    else {
      uVar13 = uVar12;
      if (uVar19 < 0xc) {
LAB_0167c2f0:
        if (uVar13 < uVar22) {
          uVar10 = 0x8e;
          puVar11 = &DAT_01d2ff90;
          pcVar6 = 
          "assertion failed: match track_edge_idx {\n    LeftOrRight::Left(idx) => idx <= old_left_len,\n    LeftOrRight::Right(idx) => idx <= right_len,\n}"
          ;
LAB_0167c624:
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec(pcVar6,uVar10,puVar11);
        }
        uVar19 = uVar12 + 1 + uVar9;
        if (0xb < uVar19) {
          uVar10 = 0x2a;
          puVar11 = &DAT_01d2ffa0;
          pcVar6 = "assertion failed: new_left_len <= CAPACITY";
          goto LAB_0167c624;
        }
        uVar13 = (uint)*(ushort *)((int)local_40 + 0xb6);
        local_54 = local_30;
        *(short *)((int)local_34 + 0xb6) = (short)uVar19;
        iVar15 = local_40[local_38 + 1];
        FUN_01bed864(local_40 + local_38 + 1,local_40 + local_38 + 2);
        piVar18[uVar12 + 1] = iVar15;
        FUN_01bed4e2(piVar18 + uVar12 + 2,piVar3 + 1,uVar9 << 2);
        iVar15 = local_40[local_38 * 3 + 0xc];
        iVar14 = local_40[local_38 * 3 + 0xd];
        iVar17 = local_40[local_38 * 3 + 0xe];
        FUN_01bed864(local_40 + local_38 * 3 + 0xc,local_40 + local_38 * 3 + 0xf,
                     (~local_38 + uVar13) * 0xc);
        piVar5 = piVar18 + uVar12 * 3 + 0xc;
        *piVar5 = iVar15;
        piVar5[1] = iVar14;
        piVar5[2] = iVar17;
        FUN_01bed4e2(piVar18 + (uVar12 + 1) * 3 + 0xc,piVar3 + 0xc,uVar9 * 0xc);
        FUN_01bed864(local_40 + local_38 + 0x2f,local_40 + local_38 + 0x30,(~local_38 + uVar13) * 4)
        ;
        if (local_38 + 1 < uVar13) {
          do {
            uVar21 = local_38 + 1;
            puVar8 = (undefined4 *)local_40[local_38 + 0x2f];
            *(short *)(puVar8 + 0x2d) = (short)uVar21;
            *puVar8 = local_40;
            local_38 = uVar21;
          } while (uVar13 - 1 != uVar21);
        }
        *(short *)((int)local_40 + 0xb6) = *(short *)((int)local_40 + 0xb6) + -1;
        if (1 < local_3c) {
          iVar15 = uVar9 + 1;
          if (iVar15 != uVar19 - uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
          }
          FUN_01bed4e2(piVar18 + uVar12 + 0x2f,piVar3 + 0x2e,iVar15 * 4);
          iVar14 = uVar12 + 0x2f;
          do {
            puVar8 = (undefined4 *)piVar18[iVar14];
            sVar2 = (short)iVar14;
            iVar14 = iVar14 + 1;
            iVar15 = iVar15 + -1;
            *(short *)(puVar8 + 0x2d) = sVar2 + -0x2e;
            *puVar8 = piVar18;
          } while (iVar15 != 0);
        }
        thunk_FUN_01be4678(piVar3);
        if ((uVar4 & 1) == 0) {
          uVar22 = uVar12 + uVar22 + 1;
        }
      }
      else {
        local_54 = local_30;
        FUN_0167b5b0(&local_40,1);
      }
    }
  }
  if (*piVar18 != 0) {
    uVar24 = CONCAT44(local_54 + 1,*piVar18);
    while( true ) {
      uVar4 = (uint)*(ushort *)((int)uVar24 + 0xb6);
      if (4 < uVar4) break;
      FUN_0167b090(&local_44,(int)uVar24,(int)((ulonglong)uVar24 >> 0x20));
      if (local_44 == 2) {
        if (uVar4 == 0) {
          *param_3 = 1;
        }
        break;
      }
      uVar9 = (uint)*(ushort *)((int)local_34 + 0xb6) + (uint)*(ushort *)((int)local_2c + 0xb6) + 1;
      if ((local_44 & 1) == 0) {
        if (0xb < uVar9) {
          FUN_0167b134(&local_40,5 - uVar4);
          break;
        }
      }
      else if (0xb < uVar9) {
        FUN_0167b5b0(&local_40,5 - uVar4);
        break;
      }
      uVar24 = FUN_0167b3a4(&local_40);
      if ((int)uVar24 == 0) break;
    }
  }
LAB_0167c5cc:
  param_1[3] = iVar7;
  *param_1 = iVar23;
  param_1[1] = iVar20;
  param_1[2] = iVar16;
  param_1[4] = (int)piVar18;
  param_1[5] = local_54;
  param_1[6] = uVar22;
  return;
}

