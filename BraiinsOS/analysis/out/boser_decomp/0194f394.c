// FUN_0194f394 @ 0194f394 size=1140 calls_out=8 calls_in=1
// strings: assertion failed: match track_edge_idx {     LeftOrRight::Left(idx) => idx <= old_left_len;     LeftOrRight::Right(idx) => idx <= right_len; } | assertion failed: new_left_len <= CAPACITY

void FUN_0194f394(int param_1,int *param_2,undefined1 *param_3)

{
  char *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined8 uVar16;
  uint local_250;
  int local_24c;
  uint local_248;
  uint local_244;
  int local_240;
  uint local_23c;
  int local_238;
  uint local_234;
  undefined1 auStack_230 [16];
  undefined1 auStack_220 [256];
  uint local_120;
  undefined1 auStack_11c [12];
  int local_110;
  int local_108;
  
  uVar13 = param_2[2];
  iVar15 = *param_2;
  iVar8 = iVar15 + uVar13 * 0x10;
  uVar14 = (uint)*(ushort *)(iVar15 + 0xb8a);
  FUN_01bed4e2(auStack_230,iVar8,0x10);
  iVar12 = ~uVar13 + uVar14;
  FUN_01bed864(iVar8,iVar8 + 0x10,iVar12 * 0x10);
  iVar9 = iVar15 + uVar13 * 0xfc;
  iVar8 = iVar9 + 0xb4;
  FUN_01bed4e2(auStack_220,iVar8,0xfc);
  FUN_01bed864(iVar8,iVar9 + 0x1b0,iVar12 * 0xfc);
  uVar14 = uVar14 - 1;
  *(ushort *)(iVar15 + 0xb8a) = (ushort)uVar14;
  uVar6 = param_2[1];
  if (4 < (uVar14 & 0xffff)) goto LAB_0194f798;
  FUN_0194e7fc(&local_250,iVar15,uVar6);
  if (local_250 == 2) {
    uVar6 = local_248;
    iVar15 = local_24c;
  }
  else {
    uVar10 = (uint)*(ushort *)(local_240 + 0xb8a);
    uVar2 = (uint)*(ushort *)(local_238 + 0xb8a);
    uVar14 = uVar10 + uVar2 + 1;
    uVar6 = local_23c;
    iVar15 = local_240;
    if ((local_250 & 1) == 0) {
      if (uVar14 < 0xc) {
        uVar7 = uVar2;
        goto LAB_0194f4b4;
      }
      FUN_0194e8a8(&local_24c,1);
      uVar13 = uVar13 + 1;
      uVar6 = local_234;
      iVar15 = local_238;
    }
    else {
      uVar7 = uVar10;
      if (uVar14 < 0xc) {
LAB_0194f4b4:
        if (uVar7 < uVar13) {
          uVar3 = 0x8e;
          puVar5 = &DAT_01d2ff90;
          pcVar1 = 
          "assertion failed: match track_edge_idx {\n    LeftOrRight::Left(idx) => idx <= old_left_len,\n    LeftOrRight::Right(idx) => idx <= right_len,\n}"
          ;
LAB_0194f7ec:
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec(pcVar1,uVar3,puVar5);
        }
        iVar8 = uVar10 + 1;
        uVar14 = iVar8 + uVar2;
        if (0xb < uVar14) {
          uVar3 = 0x2a;
          puVar5 = &DAT_01d2ffa0;
          pcVar1 = "assertion failed: new_left_len <= CAPACITY";
          goto LAB_0194f7ec;
        }
        iVar9 = local_24c + local_244 * 0x10;
        puVar4 = (ushort *)(local_24c + 0xb8a);
        uVar7 = (uint)*puVar4;
        *(short *)(local_240 + 0xb8a) = (short)uVar14;
        FUN_01bed4e2(&local_120,iVar9,0x10);
        iVar12 = ~local_244 + uVar7;
        FUN_01bed864(iVar9,iVar9 + 0x10,iVar12 * 0x10);
        FUN_01bed4e2(local_240 + uVar10 * 0x10,&local_120,0x10);
        FUN_01bed4e2(local_240 + iVar8 * 0x10,local_238,uVar2 << 4);
        iVar11 = local_24c + local_244 * 0xfc;
        iVar9 = iVar11 + 0xb4;
        FUN_01bed4e2(&local_120,iVar9,0xfc);
        FUN_01bed864(iVar9,iVar11 + 0x1b0,iVar12 * 0xfc);
        FUN_01bed4e2(local_240 + 0xb4 + uVar10 * 0xfc,&local_120,0xfc);
        FUN_01bed4e2(local_240 + 0xb4 + iVar8 * 0xfc,local_238 + 0xb4,uVar2 * 0xfc);
        iVar9 = local_24c + (local_244 + 1) * 4;
        FUN_01bed864(iVar9 + 0xb8c,iVar9 + 0xb90,iVar12 * 4);
        if (local_244 + 1 < uVar7) {
          do {
            iVar9 = local_244 * 4;
            local_244 = local_244 + 1;
            iVar9 = *(int *)(local_24c + iVar9 + 0xb90);
            *(short *)(iVar9 + 0xb88) = (short)local_244;
            *(int *)(iVar9 + 0xb0) = local_24c;
          } while (uVar7 - 1 != local_244);
        }
        *puVar4 = *puVar4 - 1;
        if (1 < local_248) {
          iVar9 = uVar2 + 1;
          if (iVar9 != uVar14 - uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
          }
          FUN_01bed4e2(local_240 + 0xb8c + iVar8 * 4,local_238 + 0xb8c,iVar9 * 4);
          uVar14 = uVar10;
          do {
            iVar8 = uVar14 * 4;
            uVar14 = uVar14 + 1;
            iVar9 = iVar9 + -1;
            iVar8 = *(int *)(local_240 + iVar8 + 0xb90);
            *(short *)(iVar8 + 0xb88) = (short)uVar14;
            *(int *)(iVar8 + 0xb0) = local_240;
          } while (iVar9 != 0);
        }
        thunk_FUN_01be4678(local_238);
        if ((local_250 & 1) == 0) {
          uVar13 = uVar10 + uVar13 + 1;
        }
      }
      else {
        FUN_0194edc0(&local_24c,1);
      }
    }
  }
  if (*(int *)(iVar15 + 0xb0) != 0) {
    uVar16 = CONCAT44(uVar6 + 1,*(int *)(iVar15 + 0xb0));
    while( true ) {
      uVar14 = (uint)*(ushort *)((int)uVar16 + 0xb8a);
      if (4 < uVar14) break;
      FUN_0194e7fc(&local_120,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
      if (local_120 == 2) {
        if (uVar14 == 0) {
          *param_3 = 1;
        }
        break;
      }
      uVar2 = (uint)*(ushort *)(local_110 + 0xb8a) + (uint)*(ushort *)(local_108 + 0xb8a) + 1;
      if ((local_120 & 1) == 0) {
        if (0xb < uVar2) {
          FUN_0194e8a8(auStack_11c,5 - uVar14);
          break;
        }
      }
      else if (0xb < uVar2) {
        FUN_0194edc0(auStack_11c,5 - uVar14);
        break;
      }
      uVar16 = FUN_0194eb8c(auStack_11c);
      if ((int)uVar16 == 0) break;
    }
  }
LAB_0194f798:
  FUN_01bed4e2(param_1,auStack_230,0x10c);
  *(int *)(param_1 + 0x10c) = iVar15;
  *(uint *)(param_1 + 0x110) = uVar6;
  *(uint *)(param_1 + 0x114) = uVar13;
  return;
}

