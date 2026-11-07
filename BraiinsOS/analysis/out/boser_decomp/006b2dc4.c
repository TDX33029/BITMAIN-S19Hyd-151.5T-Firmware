// FUN_006b2dc4 @ 006b2dc4 size=1232 calls_out=8 calls_in=1
// strings: assertion failed: match track_edge_idx {     LeftOrRight::Left(idx) => idx <= old_left_len;     LeftOrRight::Right(idx) => idx <= right_len; } | assertion failed: new_left_len <= CAPACITY

void FUN_006b2dc4(int param_1,int *param_2,undefined1 *param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  undefined4 uVar9;
  ushort *puVar10;
  undefined *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined1 auStack_278 [192];
  uint local_1b8;
  int local_1b4;
  uint local_1b0;
  uint local_1ac;
  int local_1a8;
  uint local_1a4;
  int local_1a0;
  uint local_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined1 auStack_188 [176];
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  int local_c8;
  int local_c0;
  
  iVar15 = *param_2;
  uVar16 = param_2[2];
  uVar6 = (uint)*(ushort *)(iVar15 + 0x81a);
  iVar2 = ~uVar16 + uVar6;
  iVar3 = iVar15 + uVar16 * 0xc;
  local_198 = *(undefined4 *)(iVar3 + 0x794);
  uStack_194 = *(undefined4 *)(iVar3 + 0x798);
  uStack_190 = *(undefined4 *)(iVar3 + 0x79c);
  FUN_01bed864((undefined4 *)(iVar3 + 0x794),iVar3 + 0x7a0,iVar2 * 0xc);
  iVar3 = uVar16 * 0xb0 + iVar15;
  FUN_01bed4e2(auStack_188,iVar3,0xb0);
  FUN_01bed864(iVar3,iVar3 + 0xb0,iVar2 * 0xb0);
  uVar14 = param_2[1];
  uVar6 = uVar6 - 1;
  *(ushort *)(iVar15 + 0x81a) = (ushort)uVar6;
  FUN_01bed4e2(auStack_278,&local_198,0xc0);
  if (4 < (uVar6 & 0xffff)) goto LAB_006b3224;
  FUN_006b1628(&local_1b8,iVar15,uVar14);
  if (local_1b8 == 2) {
    uVar14 = local_1b0;
    iVar15 = local_1b4;
  }
  else {
    uVar8 = (uint)*(ushort *)(local_1a8 + 0x81a);
    uVar12 = (uint)*(ushort *)(local_1a0 + 0x81a);
    uVar6 = uVar8 + uVar12 + 1;
    uVar14 = local_1a4;
    iVar15 = local_1a8;
    if ((local_1b8 & 1) == 0) {
      if (uVar6 < 0xc) {
        uVar13 = uVar12;
        goto LAB_006b2f18;
      }
      FUN_006b16d4(&local_1b4,1);
      uVar16 = uVar16 + 1;
      uVar14 = local_19c;
      iVar15 = local_1a0;
    }
    else {
      uVar13 = uVar8;
      if (uVar6 < 0xc) {
LAB_006b2f18:
        if (uVar13 < uVar16) {
          uVar9 = 0x8e;
          puVar11 = &DAT_01d2ff90;
          pcVar5 = 
          "assertion failed: match track_edge_idx {\n    LeftOrRight::Left(idx) => idx <= old_left_len,\n    LeftOrRight::Right(idx) => idx <= right_len,\n}"
          ;
LAB_006b3278:
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec(pcVar5,uVar9,puVar11);
        }
        iVar2 = uVar8 + 1;
        uVar6 = iVar2 + uVar12;
        if (0xb < uVar6) {
          uVar9 = 0x2a;
          puVar11 = &DAT_01d2ffa0;
          pcVar5 = "assertion failed: new_left_len <= CAPACITY";
          goto LAB_006b3278;
        }
        puVar10 = (ushort *)(local_1b4 + 0x81a);
        uVar13 = (uint)*puVar10;
        *(short *)(local_1a8 + 0x81a) = (short)uVar6;
        iVar3 = ~local_1ac + uVar13;
        iVar4 = local_1b4 + local_1ac * 0xc;
        local_d8 = *(uint *)(iVar4 + 0x794);
        uStack_d4 = *(uint *)(iVar4 + 0x798);
        uStack_d0 = *(uint *)(iVar4 + 0x79c);
        FUN_01bed864((uint *)(iVar4 + 0x794),iVar4 + 0x7a0,iVar3 * 0xc);
        puVar7 = (uint *)(local_1a8 + 0x794 + uVar8 * 0xc);
        *puVar7 = local_d8;
        puVar7[1] = uStack_d4;
        puVar7[2] = uStack_d0;
        FUN_01bed4e2(local_1a8 + 0x794 + iVar2 * 0xc,local_1a0 + 0x794,uVar12 * 0xc);
        iVar4 = local_1ac * 0xb0 + local_1b4;
        FUN_01bed4e2(&local_d8,iVar4,0xb0);
        FUN_01bed864(iVar4,iVar4 + 0xb0,iVar3 * 0xb0);
        FUN_01bed4e2(uVar8 * 0xb0 + local_1a8,&local_d8,0xb0);
        FUN_01bed4e2(iVar2 * 0xb0 + local_1a8,local_1a0,uVar12 * 0xb0);
        iVar4 = local_1b4 + (local_1ac + 1) * 4;
        FUN_01bed864(iVar4 + 0x820,iVar4 + 0x824,iVar3 * 4);
        if (local_1ac + 1 < uVar13) {
          iVar3 = local_1ac + 0x209;
          do {
            iVar4 = *(int *)(local_1b4 + iVar3 * 4);
            sVar1 = (short)iVar3;
            iVar3 = iVar3 + 1;
            *(short *)(iVar4 + 0x818) = sVar1 + -0x208;
            *(int *)(iVar4 + 0x790) = local_1b4;
          } while (iVar3 - uVar13 != 0x208);
        }
        *puVar10 = *puVar10 - 1;
        if (1 < local_1b0) {
          iVar3 = uVar12 + 1;
          if (iVar3 != uVar6 - uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
          }
          FUN_01bed4e2(local_1a8 + 0x820 + iVar2 * 4,local_1a0 + 0x820,iVar3 * 4);
          iVar2 = uVar8 + 0x209;
          do {
            iVar4 = *(int *)(local_1a8 + iVar2 * 4);
            sVar1 = (short)iVar2;
            iVar2 = iVar2 + 1;
            iVar3 = iVar3 + -1;
            *(short *)(iVar4 + 0x818) = sVar1 + -0x208;
            *(int *)(iVar4 + 0x790) = local_1a8;
          } while (iVar3 != 0);
        }
        thunk_FUN_01be4678(local_1a0);
        if ((local_1b8 & 1) == 0) {
          uVar16 = uVar8 + uVar16 + 1;
        }
      }
      else {
        FUN_006b1c24(&local_1b4,1);
      }
    }
  }
  if (*(int *)(iVar15 + 0x790) != 0) {
    uVar17 = CONCAT44(uVar14 + 1,*(int *)(iVar15 + 0x790));
    while( true ) {
      uVar6 = (uint)*(ushort *)((int)uVar17 + 0x81a);
      if (4 < uVar6) break;
      FUN_006b1628(&local_d8,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
      if (local_d8 == 2) {
        if (uVar6 == 0) {
          *param_3 = 1;
        }
        break;
      }
      uVar8 = (uint)*(ushort *)(local_c8 + 0x81a) + (uint)*(ushort *)(local_c0 + 0x81a) + 1;
      if ((local_d8 & 1) == 0) {
        if (0xb < uVar8) {
          FUN_006b16d4(&uStack_d4,5 - uVar6);
          break;
        }
      }
      else if (0xb < uVar8) {
        FUN_006b1c24(&uStack_d4,5 - uVar6);
        break;
      }
      uVar17 = FUN_006b19c8(&uStack_d4);
      if ((int)uVar17 == 0) break;
    }
  }
LAB_006b3224:
  FUN_01bed4e2(param_1,&local_198,0xc0);
  *(int *)(param_1 + 0xc0) = iVar15;
  *(uint *)(param_1 + 0xc4) = uVar14;
  *(uint *)(param_1 + 200) = uVar16;
  return;
}

