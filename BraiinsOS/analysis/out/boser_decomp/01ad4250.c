// FUN_01ad4250 @ 01ad4250 size=1284 calls_out=9 calls_in=1
// strings: assertion failed: match track_edge_idx {     LeftOrRight::Left(idx) => idx <= old_left_len;     LeftOrRight::Right(idx) => idx <= right_len; } | assertion failed: new_left_len <= CAPACITY | assertion failed: self.height > 0

void FUN_01ad4250(int param_1,int *param_2,undefined4 *param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  char *pcVar5;
  uint uVar6;
  ushort *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined *puVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined8 uVar18;
  uint local_e8;
  int local_e4;
  uint local_e0;
  uint local_dc;
  int local_d8;
  uint local_d4;
  int local_d0;
  uint local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 auStack_b8 [72];
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  int local_60;
  int local_58;
  
  iVar16 = *param_2;
  uVar17 = param_2[2];
  uVar6 = (uint)*(ushort *)(iVar16 + 0x3a2);
  iVar14 = ~uVar17 + uVar6;
  iVar2 = iVar16 + uVar17 * 0xc;
  local_c8 = *(undefined4 *)(iVar2 + 0x31c);
  uStack_c4 = *(undefined4 *)(iVar2 + 800);
  uStack_c0 = *(undefined4 *)(iVar2 + 0x324);
  FUN_01bed864((undefined4 *)(iVar2 + 0x31c),iVar2 + 0x328,iVar14 * 0xc);
  iVar2 = iVar16 + uVar17 * 0x48;
  FUN_01bed4e2(auStack_b8,iVar2,0x48);
  FUN_01bed864(iVar2,iVar2 + 0x48,iVar14 * 0x48);
  uVar15 = param_2[1];
  uVar6 = uVar6 - 1;
  *(ushort *)(iVar16 + 0x3a2) = (ushort)uVar6;
  if (4 < (uVar6 & 0xffff)) goto LAB_01ad46c0;
  FUN_01ad0c8c(&local_e8,iVar16,uVar15);
  if (local_e8 == 2) {
    iVar16 = local_e4;
    uVar15 = local_e0;
  }
  else {
    uVar8 = (uint)*(ushort *)(local_d8 + 0x3a2);
    uVar6 = (uint)*(ushort *)(local_d0 + 0x3a2);
    uVar13 = uVar8 + uVar6 + 1;
    iVar16 = local_d8;
    uVar15 = local_d4;
    if ((local_e8 & 1) == 0) {
      if (uVar13 < 0xc) {
        uVar11 = uVar6;
        goto LAB_01ad4388;
      }
      FUN_01ad0d38(&local_e4,1);
      uVar17 = uVar17 + 1;
      iVar16 = local_d0;
      uVar15 = local_cc;
    }
    else {
      uVar11 = uVar8;
      if (uVar13 < 0xc) {
LAB_01ad4388:
        if (uVar11 < uVar17) {
          uVar9 = 0x8e;
          puVar10 = &DAT_01d2ff90;
          pcVar5 = 
          "assertion failed: match track_edge_idx {\n    LeftOrRight::Left(idx) => idx <= old_left_len,\n    LeftOrRight::Right(idx) => idx <= right_len,\n}"
          ;
LAB_01ad4714:
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec(pcVar5,uVar9,puVar10);
        }
        iVar2 = uVar8 + 1;
        uVar13 = iVar2 + uVar6;
        if (0xb < uVar13) {
          uVar9 = 0x2a;
          puVar10 = &DAT_01d2ffa0;
          pcVar5 = "assertion failed: new_left_len <= CAPACITY";
          goto LAB_01ad4714;
        }
        puVar7 = (ushort *)(local_e4 + 0x3a2);
        uVar11 = (uint)*puVar7;
        *(short *)(local_d8 + 0x3a2) = (short)uVar13;
        iVar14 = ~local_dc + uVar11;
        iVar3 = local_e4 + local_dc * 0xc;
        local_70 = *(uint *)(iVar3 + 0x31c);
        uStack_6c = *(uint *)(iVar3 + 800);
        uStack_68 = *(uint *)(iVar3 + 0x324);
        FUN_01bed864((uint *)(iVar3 + 0x31c),iVar3 + 0x328,iVar14 * 0xc);
        puVar4 = (uint *)(local_d8 + 0x31c + uVar8 * 0xc);
        *puVar4 = local_70;
        puVar4[1] = uStack_6c;
        puVar4[2] = uStack_68;
        FUN_01bed4e2(local_d8 + 0x31c + iVar2 * 0xc,local_d0 + 0x31c,uVar6 * 0xc);
        iVar3 = local_e4 + local_dc * 0x48;
        FUN_01bed4e2(&local_70,iVar3,0x48);
        FUN_01bed864(iVar3,iVar3 + 0x48,iVar14 * 0x48);
        FUN_01bed4e2(local_d8 + uVar8 * 0x48,&local_70,0x48);
        FUN_01bed4e2(local_d8 + iVar2 * 0x48,local_d0,uVar6 * 0x48);
        iVar3 = local_e4 + (local_dc + 1) * 4;
        FUN_01bed864(iVar3 + 0x3a8,iVar3 + 0x3ac,iVar14 * 4);
        if (local_dc + 1 < uVar11) {
          do {
            iVar14 = local_dc * 4;
            local_dc = local_dc + 1;
            iVar14 = *(int *)(local_e4 + iVar14 + 0x3ac);
            *(short *)(iVar14 + 0x3a0) = (short)local_dc;
            *(int *)(iVar14 + 0x318) = local_e4;
          } while (uVar11 - 1 != local_dc);
        }
        *puVar7 = *puVar7 - 1;
        if (1 < local_e0) {
          iVar14 = uVar6 + 1;
          if (iVar14 != uVar13 - uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
          }
          FUN_01bed4e2(local_d8 + 0x3a8 + iVar2 * 4,local_d0 + 0x3a8,iVar14 * 4);
          iVar2 = uVar8 + 0xeb;
          do {
            iVar3 = *(int *)(local_d8 + iVar2 * 4);
            sVar1 = (short)iVar2;
            iVar2 = iVar2 + 1;
            iVar14 = iVar14 + -1;
            *(short *)(iVar3 + 0x3a0) = sVar1 + -0xea;
            *(int *)(iVar3 + 0x318) = local_d8;
          } while (iVar14 != 0);
        }
        thunk_FUN_01be4678(local_d0);
        if ((local_e8 & 1) == 0) {
          uVar17 = uVar8 + uVar17 + 1;
        }
      }
      else {
        FUN_01ad1278(&local_e4,1);
      }
    }
  }
  if (*(int *)(iVar16 + 0x318) != 0) {
    uVar18 = CONCAT44(uVar15 + 1,*(int *)(iVar16 + 0x318));
    while( true ) {
      uVar6 = (uint)*(ushort *)((int)uVar18 + 0x3a2);
      if (4 < uVar6) break;
      FUN_01ad0c8c(&local_70,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
      if (local_70 == 2) {
        if (uVar6 == 0) {
          piVar12 = (int *)*param_3;
          *param_3 = 0;
          if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d2fed0);
          }
          if (piVar12[1] == 0) {
            uVar9 = 0x21;
            puVar10 = &DAT_01d2ff00;
            pcVar5 = "assertion failed: self.height > 0";
            goto LAB_01ad4714;
          }
          iVar2 = *(int *)(*piVar12 + 0x3a8);
          *piVar12 = iVar2;
          piVar12[1] = piVar12[1] + -1;
          *(undefined4 *)(iVar2 + 0x318) = 0;
          thunk_FUN_01be4678();
          *param_3 = piVar12;
        }
        break;
      }
      uVar8 = (uint)*(ushort *)(local_60 + 0x3a2) + (uint)*(ushort *)(local_58 + 0x3a2) + 1;
      if ((local_70 & 1) == 0) {
        if (0xb < uVar8) {
          FUN_01ad0d38(&uStack_6c,5 - uVar6);
          break;
        }
      }
      else if (0xb < uVar8) {
        FUN_01ad1278(&uStack_6c,5 - uVar6);
        break;
      }
      uVar18 = FUN_01ad1020(&uStack_6c);
      if ((int)uVar18 == 0) break;
    }
  }
LAB_01ad46c0:
  FUN_01bed4e2(param_1,&local_c8,0x58);
  *(int *)(param_1 + 0x58) = iVar16;
  *(uint *)(param_1 + 0x5c) = uVar15;
  *(uint *)(param_1 + 0x60) = uVar17;
  return;
}

