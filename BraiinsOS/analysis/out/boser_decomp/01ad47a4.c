// FUN_01ad47a4 @ 01ad47a4 size=1296 calls_out=9 calls_in=1
// strings: assertion failed: match track_edge_idx {     LeftOrRight::Left(idx) => idx <= old_left_len;     LeftOrRight::Right(idx) => idx <= right_len; } | assertion failed: new_left_len <= CAPACITY | assertion failed: self.height > 0

void FUN_01ad47a4(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  char *pcVar2;
  ushort *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined *puVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  undefined8 uVar17;
  uint local_148;
  int local_144;
  uint local_140;
  uint local_13c;
  int local_138;
  uint local_134;
  int local_130;
  uint local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined1 auStack_118 [120];
  uint local_a0;
  uint uStack_9c;
  uint uStack_98;
  int local_90;
  int local_88;
  
  iVar15 = *param_2;
  uVar16 = param_2[2];
  uVar9 = (uint)*(ushort *)(iVar15 + 0x5b2);
  iVar1 = iVar15 + uVar16 * 0xc;
  iVar13 = ~uVar16 + uVar9;
  local_128 = *(undefined4 *)(iVar1 + 0x52c);
  uStack_124 = *(undefined4 *)(iVar1 + 0x530);
  uStack_120 = *(undefined4 *)(iVar1 + 0x534);
  FUN_01bed864((undefined4 *)(iVar1 + 0x52c),iVar1 + 0x538,iVar13 * 0xc);
  iVar1 = iVar15 + uVar16 * 0x78;
  FUN_01bed4e2(auStack_118,iVar1,0x78);
  FUN_01bed864(iVar1,iVar1 + 0x78,iVar13 * 0x78);
  uVar14 = param_2[1];
  uVar9 = uVar9 - 1;
  *(ushort *)(iVar15 + 0x5b2) = (ushort)uVar9;
  if (4 < (uVar9 & 0xffff)) goto LAB_01ad4c20;
  FUN_01ad1550(&local_148,iVar15,uVar14);
  if (local_148 == 2) {
    uVar14 = local_140;
    iVar15 = local_144;
  }
  else {
    uVar5 = (uint)*(ushort *)(local_138 + 0x5b2);
    uVar9 = (uint)*(ushort *)(local_130 + 0x5b2);
    uVar12 = uVar5 + uVar9 + 1;
    uVar14 = local_134;
    iVar15 = local_138;
    if ((local_148 & 1) == 0) {
      if (uVar12 < 0xc) {
        uVar10 = uVar9;
        goto LAB_01ad48d8;
      }
      FUN_01ad15fc(&local_144,1);
      uVar16 = uVar16 + 1;
      uVar14 = local_12c;
      iVar15 = local_130;
    }
    else {
      uVar10 = uVar5;
      if (uVar12 < 0xc) {
LAB_01ad48d8:
        if (uVar10 < uVar16) {
          uVar6 = 0x8e;
          puVar8 = &DAT_01d2ff90;
          pcVar2 = 
          "assertion failed: match track_edge_idx {\n    LeftOrRight::Left(idx) => idx <= old_left_len,\n    LeftOrRight::Right(idx) => idx <= right_len,\n}"
          ;
LAB_01ad4c74:
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec(pcVar2,uVar6,puVar8);
        }
        iVar1 = uVar5 + 1;
        uVar12 = iVar1 + uVar9;
        if (0xb < uVar12) {
          uVar6 = 0x2a;
          puVar8 = &DAT_01d2ffa0;
          pcVar2 = "assertion failed: new_left_len <= CAPACITY";
          goto LAB_01ad4c74;
        }
        puVar3 = (ushort *)(local_144 + 0x5b2);
        uVar10 = (uint)*puVar3;
        *(short *)(local_138 + 0x5b2) = (short)uVar12;
        iVar13 = local_144 + local_13c * 0xc;
        iVar7 = ~local_13c + uVar10;
        local_a0 = *(uint *)(iVar13 + 0x52c);
        uStack_9c = *(uint *)(iVar13 + 0x530);
        uStack_98 = *(uint *)(iVar13 + 0x534);
        FUN_01bed864((uint *)(iVar13 + 0x52c),iVar13 + 0x538,iVar7 * 0xc);
        puVar4 = (uint *)(local_138 + 0x52c + uVar5 * 0xc);
        *puVar4 = local_a0;
        puVar4[1] = uStack_9c;
        puVar4[2] = uStack_98;
        FUN_01bed4e2(local_138 + 0x52c + iVar1 * 0xc,local_130 + 0x52c,uVar9 * 0xc);
        iVar13 = local_144 + local_13c * 0x78;
        FUN_01bed4e2(&local_a0,iVar13,0x78);
        FUN_01bed864(iVar13,iVar13 + 0x78,iVar7 * 0x78);
        FUN_01bed4e2(local_138 + uVar5 * 0x78,&local_a0,0x78);
        FUN_01bed4e2(local_138 + iVar1 * 0x78,local_130,uVar9 * 0x78);
        iVar13 = local_144 + (local_13c + 1) * 4;
        FUN_01bed864(iVar13 + 0x5b8,iVar13 + 0x5bc,iVar7 * 4);
        if (local_13c + 1 < uVar10) {
          do {
            iVar13 = *(int *)(local_144 + 0x5bc + local_13c * 4);
            local_13c = local_13c + 1;
            *(short *)(iVar13 + 0x5b0) = (short)local_13c;
            *(int *)(iVar13 + 0x528) = local_144;
          } while (uVar10 - 1 != local_13c);
        }
        *puVar3 = *puVar3 - 1;
        if (1 < local_140) {
          iVar13 = uVar9 + 1;
          if (iVar13 != uVar12 - uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
          }
          FUN_01bed4e2(local_138 + 0x5b8 + iVar1 * 4,local_130 + 0x5b8,iVar13 * 4);
          uVar9 = uVar5;
          do {
            iVar1 = *(int *)(local_138 + 0x5bc + uVar9 * 4);
            uVar9 = uVar9 + 1;
            iVar13 = iVar13 + -1;
            *(short *)(iVar1 + 0x5b0) = (short)uVar9;
            *(int *)(iVar1 + 0x528) = local_138;
          } while (iVar13 != 0);
        }
        thunk_FUN_01be4678(local_130);
        if ((local_148 & 1) == 0) {
          uVar16 = uVar5 + uVar16 + 1;
        }
      }
      else {
        FUN_01ad1b54(&local_144,1);
      }
    }
  }
  if (*(int *)(iVar15 + 0x528) != 0) {
    uVar17 = CONCAT44(uVar14 + 1,*(int *)(iVar15 + 0x528));
    while( true ) {
      uVar9 = (uint)*(ushort *)((int)uVar17 + 0x5b2);
      if (4 < uVar9) break;
      FUN_01ad1550(&local_a0,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
      if (local_a0 == 2) {
        if (uVar9 == 0) {
          piVar11 = (int *)*param_3;
          *param_3 = 0;
          if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d2fed0);
          }
          if (piVar11[1] == 0) {
            uVar6 = 0x21;
            puVar8 = &DAT_01d2ff00;
            pcVar2 = "assertion failed: self.height > 0";
            goto LAB_01ad4c74;
          }
          iVar1 = *(int *)(*piVar11 + 0x5b8);
          *piVar11 = iVar1;
          piVar11[1] = piVar11[1] + -1;
          *(undefined4 *)(iVar1 + 0x528) = 0;
          thunk_FUN_01be4678();
          *param_3 = piVar11;
        }
        break;
      }
      uVar5 = (uint)*(ushort *)(local_90 + 0x5b2) + (uint)*(ushort *)(local_88 + 0x5b2) + 1;
      if ((local_a0 & 1) == 0) {
        if (0xb < uVar5) {
          FUN_01ad15fc(&uStack_9c,5 - uVar9);
          break;
        }
      }
      else if (0xb < uVar5) {
        FUN_01ad1b54(&uStack_9c,5 - uVar9);
        break;
      }
      uVar17 = FUN_01ad18f0(&uStack_9c);
      if ((int)uVar17 == 0) break;
    }
  }
LAB_01ad4c20:
  FUN_01bed4e2(param_1,&local_128,0x88);
  *(int *)(param_1 + 0x88) = iVar15;
  *(uint *)(param_1 + 0x8c) = uVar14;
  *(uint *)(param_1 + 0x90) = uVar16;
  return;
}

