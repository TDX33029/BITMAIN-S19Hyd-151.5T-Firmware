// FUN_01ad3cc0 @ 01ad3cc0 size=1344 calls_out=9 calls_in=1
// strings: assertion failed: match track_edge_idx {     LeftOrRight::Left(idx) => idx <= old_left_len;     LeftOrRight::Right(idx) => idx <= right_len; } | assertion failed: new_left_len <= CAPACITY | assertion failed: self.height > 0

void FUN_01ad3cc0(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  char *pcVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 uVar5;
  ushort *puVar6;
  int iVar7;
  undefined *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined1 auStack_4d0 [392];
  uint local_348;
  int local_344;
  uint local_340;
  uint local_33c;
  int local_338;
  uint local_334;
  int local_330;
  uint local_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined1 auStack_318 [376];
  uint local_1a0;
  uint uStack_19c;
  uint uStack_198;
  int local_190;
  int local_188;
  
  iVar14 = *param_2;
  uVar16 = param_2[2];
  uVar9 = (uint)*(ushort *)(iVar14 + 0x10b2);
  iVar1 = iVar14 + uVar16 * 0xc;
  iVar15 = ~uVar16 + uVar9;
  local_328 = *(undefined4 *)(iVar1 + 0x102c);
  uStack_324 = *(undefined4 *)(iVar1 + 0x1030);
  uStack_320 = *(undefined4 *)(iVar1 + 0x1034);
  FUN_01bed864((undefined4 *)(iVar1 + 0x102c),iVar1 + 0x1038,iVar15 * 0xc);
  iVar1 = uVar16 * 0x178 + iVar14;
  FUN_01bed4e2(auStack_318,iVar1,0x178);
  FUN_01bed864(iVar1,iVar1 + 0x178,iVar15 * 0x178);
  uVar13 = param_2[1];
  uVar9 = uVar9 - 1;
  *(ushort *)(iVar14 + 0x10b2) = (ushort)uVar9;
  FUN_01bed4e2(auStack_4d0,&local_328,0x188);
  if (4 < (uVar9 & 0xffff)) goto LAB_01ad4168;
  FUN_01ad1e38(&local_348,iVar14,uVar13);
  if (local_348 == 2) {
    uVar13 = local_340;
    iVar14 = local_344;
  }
  else {
    uVar4 = (uint)*(ushort *)(local_338 + 0x10b2);
    uVar10 = (uint)*(ushort *)(local_330 + 0x10b2);
    uVar9 = uVar4 + uVar10 + 1;
    uVar13 = local_334;
    iVar14 = local_338;
    if ((local_348 & 1) == 0) {
      if (uVar9 < 0xc) {
        uVar11 = uVar10;
        goto LAB_01ad3e18;
      }
      FUN_01ad1ef8(&local_344,1);
      uVar16 = uVar16 + 1;
      uVar13 = local_32c;
      iVar14 = local_330;
    }
    else {
      uVar11 = uVar4;
      if (uVar9 < 0xc) {
LAB_01ad3e18:
        if (uVar11 < uVar16) {
          uVar5 = 0x8e;
          puVar8 = &DAT_01d2ff90;
          pcVar2 = 
          "assertion failed: match track_edge_idx {\n    LeftOrRight::Left(idx) => idx <= old_left_len,\n    LeftOrRight::Right(idx) => idx <= right_len,\n}"
          ;
LAB_01ad41c0:
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec(pcVar2,uVar5,puVar8);
        }
        iVar1 = uVar4 + 1;
        uVar9 = iVar1 + uVar10;
        if (0xb < uVar9) {
          uVar5 = 0x2a;
          puVar8 = &DAT_01d2ffa0;
          pcVar2 = "assertion failed: new_left_len <= CAPACITY";
          goto LAB_01ad41c0;
        }
        puVar6 = (ushort *)(local_344 + 0x10b2);
        uVar11 = (uint)*puVar6;
        *(short *)(local_338 + 0x10b2) = (short)uVar9;
        iVar15 = local_344 + local_33c * 0xc;
        iVar7 = ~local_33c + uVar11;
        local_1a0 = *(uint *)(iVar15 + 0x102c);
        uStack_19c = *(uint *)(iVar15 + 0x1030);
        uStack_198 = *(uint *)(iVar15 + 0x1034);
        FUN_01bed864((uint *)(iVar15 + 0x102c),iVar15 + 0x1038,iVar7 * 0xc);
        puVar3 = (uint *)(local_338 + 0x102c + uVar4 * 0xc);
        *puVar3 = local_1a0;
        puVar3[1] = uStack_19c;
        puVar3[2] = uStack_198;
        FUN_01bed4e2(local_338 + 0x102c + iVar1 * 0xc,local_330 + 0x102c,uVar10 * 0xc);
        iVar15 = local_33c * 0x178 + local_344;
        FUN_01bed4e2(&local_1a0,iVar15,0x178);
        FUN_01bed864(iVar15,iVar15 + 0x178,iVar7 * 0x178);
        FUN_01bed4e2(uVar4 * 0x178 + local_338,&local_1a0,0x178);
        FUN_01bed4e2(iVar1 * 0x178 + local_338,local_330,uVar10 * 0x178);
        iVar15 = local_344 + (local_33c + 1) * 4;
        FUN_01bed864(iVar15 + 0x10b8,iVar15 + 0x10bc,iVar7 * 4);
        if (local_33c + 1 < uVar11) {
          do {
            iVar15 = *(int *)(local_344 + 0x10bc + local_33c * 4);
            local_33c = local_33c + 1;
            *(int *)(&DAT_00001028 + iVar15) = local_344;
            *(short *)(&DAT_000010b0 + iVar15) = (short)local_33c;
          } while (uVar11 - 1 != local_33c);
        }
        *puVar6 = *puVar6 - 1;
        if (1 < local_340) {
          iVar15 = uVar10 + 1;
          if (iVar15 != uVar9 - uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
          }
          FUN_01bed4e2(local_338 + 0x10b8 + iVar1 * 4,local_330 + 0x10b8,iVar15 * 4);
          uVar9 = uVar4;
          do {
            iVar1 = *(int *)(local_338 + 0x10bc + uVar9 * 4);
            uVar9 = uVar9 + 1;
            iVar15 = iVar15 + -1;
            *(int *)(&DAT_00001028 + iVar1) = local_338;
            *(short *)(&DAT_000010b0 + iVar1) = (short)uVar9;
          } while (iVar15 != 0);
        }
        thunk_FUN_01be4678(local_330);
        if ((local_348 & 1) == 0) {
          uVar16 = uVar4 + uVar16 + 1;
        }
      }
      else {
        FUN_01ad2444(&local_344,1);
      }
    }
  }
  if (*(int *)(&DAT_00001028 + iVar14) != 0) {
    uVar17 = CONCAT44(uVar13 + 1,*(int *)(&DAT_00001028 + iVar14));
    while( true ) {
      uVar9 = (uint)*(ushort *)((int)uVar17 + 0x10b2);
      if (4 < uVar9) break;
      FUN_01ad1e38(&local_1a0,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
      if (local_1a0 == 2) {
        if (uVar9 == 0) {
          piVar12 = (int *)*param_3;
          *param_3 = 0;
          if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d2fed0);
          }
          iVar1 = piVar12[1];
          if (iVar1 == 0) {
            uVar5 = 0x21;
            puVar8 = &DAT_01d2ff00;
            pcVar2 = "assertion failed: self.height > 0";
            goto LAB_01ad41c0;
          }
          iVar15 = *(int *)(*piVar12 + 0x10b8);
          *(undefined4 *)(&DAT_00001028 + iVar15) = 0;
          *piVar12 = iVar15;
          piVar12[1] = iVar1 + -1;
          thunk_FUN_01be4678();
          *param_3 = piVar12;
        }
        break;
      }
      uVar4 = (uint)*(ushort *)(local_190 + 0x10b2) + (uint)*(ushort *)(local_188 + 0x10b2) + 1;
      if ((local_1a0 & 1) == 0) {
        if (0xb < uVar4) {
          FUN_01ad1ef8(&uStack_19c,5 - uVar9);
          break;
        }
      }
      else if (0xb < uVar4) {
        FUN_01ad2444(&uStack_19c,5 - uVar9);
        break;
      }
      uVar17 = FUN_01ad21f4(&uStack_19c);
      if ((int)uVar17 == 0) break;
    }
  }
LAB_01ad4168:
  FUN_01bed4e2(param_1,&local_328,0x188);
  *(int *)(param_1 + 0x188) = iVar14;
  *(uint *)(param_1 + 0x18c) = uVar13;
  *(uint *)(param_1 + 400) = uVar16;
  return;
}

