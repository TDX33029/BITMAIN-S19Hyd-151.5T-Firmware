// FUN_005bb5ac @ 005bb5ac size=1616 calls_out=15 calls_in=2
// strings: A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers.

void FUN_005bb5ac(longlong *param_1,int param_2,uint param_3,undefined4 param_4)

{
  bool bVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  undefined1 *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong *plVar18;
  undefined1 *puVar19;
  int *piVar20;
  int iVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined4 local_b8;
  undefined4 local_b4;
  uint *local_90;
  code *local_8c;
  undefined8 *local_88;
  code *local_84;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 local_48;
  int local_40;
  int local_3c;
  int local_38;
  undefined8 local_30;
  
  uVar3 = CONCAT44(local_b8,local_b4);
  piVar20 = (int *)(param_2 + 0x58);
  FUN_01626d3c(&local_90,piVar20);
  puVar5 = local_88;
  plVar18 = (longlong *)(param_2 + 8);
  if (((uint)local_90 & 1) == 0) {
    puVar19 = &DAT_3b9aca00;
  }
  else {
    lVar22 = FUN_01846088(local_88,local_84,1000,0);
    uVar3 = lVar22 + *plVar18;
    uVar11 = (uint)(uVar3 >> 0x20);
    local_58 = CONCAT44(local_58._4_4_,(undefined4)local_58);
    local_30 = CONCAT44(local_30._4_4_,(uint)local_30);
    local_60 = CONCAT44(local_60._4_4_,(undefined4)local_60);
    if ((int)((*(uint *)(param_2 + 0xc) ^ uVar11) &
             ~(*(uint *)(param_2 + 0xc) ^ (uint)((ulonglong)lVar22 >> 0x20))) < 0)
    goto LAB_005bba24;
    puVar19 = (undefined1 *)
              (((int)lVar22 * -1000 + (int)puVar5) * 1000000 + *(int *)(param_2 + 0x10));
    if (&DAT_3b9aca00 <= puVar19) {
      uVar3 = uVar3 + 1;
      local_58 = CONCAT44(local_58._4_4_,(undefined4)local_58);
      local_30 = CONCAT44(local_30._4_4_,(uint)local_30);
      local_60 = CONCAT44(local_60._4_4_,(undefined4)local_60);
      if ((int)((uVar11 ^ (uint)(uVar3 >> 0x20)) & ~uVar11) < 0) goto LAB_005bba24;
      puVar19 = puVar19 + -1000000000;
    }
  }
  iVar15 = param_2 + 0x18;
  iVar7 = FUN_005bbe4c(iVar15,param_3,param_4);
  if (*(char *)(iVar7 + 0x20) == '\0') {
    iVar7 = FUN_005bbe4c(iVar15,param_3,&DAT_018ac290);
    local_30._0_4_ = *(uint *)(iVar7 + 0x18);
    local_30._4_4_ = *(uint *)(iVar7 + 0x1c);
    uVar11 = *(uint *)(param_2 + 0x60);
    uVar13 = *(uint *)(param_2 + 100);
    if (local_30._4_4_ <= uVar13 && (uint)(uVar11 <= (uint)local_30) <= local_30._4_4_ - uVar13) {
      local_88 = &local_30;
      local_8c = FUN_00fac4cc;
      local_84 = FUN_00fac4cc;
      local_90 = (uint *)(param_2 + 0x60);
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_0058add5,&local_90,param_4);
    }
    uVar13 = uVar13 ^ local_30._4_4_;
    uVar8 = uVar11 ^ (uint)local_30 | 0x3f;
    bVar1 = (uint)(0xfffffffd < uVar8) <= uVar13 - 0xf;
    uVar11 = 0xfffffffe;
    if (uVar13 < 0x10 && bVar1) {
      uVar11 = uVar8;
    }
    if (uVar13 >= 0x10 || !bVar1) {
      uVar13 = 0xf;
    }
    uVar6 = (ushort)LZCOUNT(uVar11) | 0x20;
    if (uVar13 != 0) {
      uVar6 = (ushort)LZCOUNT(uVar13);
    }
    uVar13 = (short)(uVar6 ^ 0x3e) * 0x2b;
    uVar11 = uVar13 >> 8;
    if (*(uint *)(param_2 + 0x5c) <= uVar13 >> 8) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar11,*(uint *)(param_2 + 0x5c),param_4);
    }
    iVar7 = *piVar20 + (uVar11 | uVar11 << 5) * 0x10;
    uVar13 = *(int *)(iVar7 + 0x208) * 6 & 0x3e;
    uVar11 = (uint)local_30 >> uVar13 | local_30._4_4_ << (0x20 - uVar13 & 0xff);
    if (-1 < (int)(uVar13 - 0x20)) {
      uVar11 = local_30._4_4_ >> (uVar13 - 0x20 & 0xff);
    }
    uVar11 = uVar11 & 0x3f;
    FUN_005b520c(iVar7 + uVar11 * 8,param_3,iVar15,&DAT_018abd58);
    if (*(int *)(iVar7 + uVar11 * 8) == 0) {
      uVar13 = 1 << uVar11;
      uVar8 = uVar11 - 0x20;
      if (-1 < (int)uVar8) {
        uVar13 = 0;
      }
      *(uint *)(iVar7 + 0x200) = *(uint *)(iVar7 + 0x200) ^ uVar13;
      uVar11 = 1 >> (0x20 - uVar11 & 0xff);
      if (-1 < (int)uVar8) {
        uVar11 = 1 << (uVar8 & 0xff);
      }
      *(uint *)(iVar7 + 0x204) = *(uint *)(iVar7 + 0x204) ^ uVar11;
      cVar2 = *(char *)(param_2 + 0x50);
    }
    else {
      cVar2 = *(char *)(param_2 + 0x50);
    }
  }
  else {
    FUN_005b520c(param_2,param_3,iVar15,param_4);
    cVar2 = *(char *)(param_2 + 0x50);
  }
  uVar11 = param_3;
  if (cVar2 == '\x01') {
    uVar23 = FUN_00ee3a34(iVar15,param_3);
    uVar11 = (uint)(uVar23 >> 0x20);
    if ((uVar23 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00412edc,0x17,&DAT_018ac2c0);
    }
  }
  if (*(uint *)(param_2 + 0x44) <= uVar11) {
LAB_005bbbe4:
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00412edc,0xb,&DAT_018ac2d0);
  }
  iVar7 = *(int *)(param_2 + 0x4c);
  piVar9 = (int *)(*(int *)(param_2 + 0x40) + uVar11 * 0x28);
  iVar21 = *piVar9;
  iVar15 = piVar9[5];
  piVar12 = piVar9 + 1;
  local_40 = *piVar12;
  *piVar9 = 2;
  local_3c = piVar9[2];
  local_38 = piVar9[3];
  iVar16 = piVar9[7];
  *piVar12 = iVar7;
  iVar7 = piVar9[4];
  iVar17 = piVar9[6];
  if (iVar21 == 2) {
    *piVar12 = local_40;
    piVar9[2] = local_3c;
    piVar9[4] = iVar7;
    piVar9[5] = iVar15;
    piVar9[3] = local_38;
    piVar9[6] = iVar17;
    piVar9[7] = iVar16;
    goto LAB_005bbbe4;
  }
  iVar21 = *(int *)(param_2 + 0x48) + -1;
  *(int *)(param_2 + 0x48) = iVar21;
  *(uint *)(param_2 + 0x4c) = uVar11;
  FUN_01626d3c(&local_90,piVar20);
  if (((uint)local_90 & 1) == 0) {
    if (puVar19 == &DAT_3b9aca00) goto LAB_005bb98c;
    iVar10 = *(int *)(param_2 + 0x78);
    if (iVar10 != 0) {
      FUN_00a07b4c(iVar10);
      thunk_FUN_016d3fb4(iVar10);
    }
    *(undefined4 *)(param_2 + 0x78) = 0;
  }
  else {
    lVar22 = FUN_01846088(local_88,local_84,1000,0);
    uVar23 = lVar22 + *plVar18;
    uVar11 = (uint)(uVar23 >> 0x20);
    local_58 = CONCAT44(local_58._4_4_,(undefined4)local_58);
    local_30 = CONCAT44(local_30._4_4_,(uint)local_30);
    local_60 = CONCAT44(local_60._4_4_,(undefined4)local_60);
    if ((int)((*(uint *)(param_2 + 0xc) ^ uVar11) &
             ~(*(uint *)(param_2 + 0xc) ^ (uint)((ulonglong)lVar22 >> 0x20))) < 0)
    goto LAB_005bba24;
    iVar10 = (int)lVar22 * -1000 + (int)local_88;
    puVar14 = (undefined1 *)(iVar10 * 1000000 + *(int *)(param_2 + 0x10));
    if (&DAT_3b9aca00 <= puVar14) {
      uVar23 = uVar23 + 1;
      local_58 = CONCAT44(local_58._4_4_,(undefined4)local_58);
      local_30 = CONCAT44(local_30._4_4_,(uint)local_30);
      local_60 = CONCAT44(local_60._4_4_,(undefined4)local_60);
      if ((int)((uVar11 ^ (uint)(uVar23 >> 0x20)) & ~uVar11) < 0) goto LAB_005bba24;
      iVar10 = -1000000000;
      puVar14 = puVar14 + -1000000000;
    }
    uVar4 = CONCAT44(*(int *)(param_2 + 0x10),iVar10);
    if (puVar19 == puVar14) {
      uVar4 = uVar3 ^ uVar23;
    }
    if (puVar19 != puVar14 || uVar4 != 0) {
      if (*(int *)(param_2 + 0x78) == 0) {
        local_30 = FUN_0164ec90(param_4);
        iVar10 = 0x180;
        if ((local_30 & 1) != 0) {
          iVar10 = 0xb8;
        }
        if (*(undefined1 **)((int)(local_30 >> 0x20) + iVar10 + 0x90) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                       ,0x73,param_4);
        }
        local_8c = (code *)0x0;
        local_90 = (uint *)0x0;
        local_48 = 0;
        local_50 = puVar14;
        local_58 = uVar23;
        local_60 = local_30;
        iVar10 = thunk_FUN_016d4a50(0x50);
        if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x50);
        }
        FUN_016dd1aa(iVar10,&local_90,0x50);
        *(int *)(param_2 + 0x78) = iVar10;
        goto joined_r0x005bb944;
      }
      FUN_01653364(*(int *)(param_2 + 0x78),1,(int)uVar23,(int)(uVar23 >> 0x20),puVar14,1);
    }
LAB_005bb98c:
  }
joined_r0x005bb944:
  if (iVar21 == 0) {
    iVar21 = *(int *)(param_2 + 0x70);
    *(undefined4 *)(param_2 + 0x70) = 0;
    if (iVar21 != 0) {
      (**(code **)(iVar21 + 4))(*(undefined4 *)(param_2 + 0x74));
    }
  }
  lVar24 = FUN_01846088(iVar17,iVar16,1000,0);
  lVar22 = lVar24 + *plVar18;
  uVar11 = (uint)((ulonglong)lVar22 >> 0x20);
  if ((int)((*(uint *)(param_2 + 0xc) ^ uVar11) &
           ~(*(uint *)(param_2 + 0xc) ^ (uint)((ulonglong)lVar24 >> 0x20))) < 0) {
LAB_005bba24:
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
  }
  puVar19 = (undefined1 *)(((int)lVar24 * -1000 + iVar17) * 1000000 + *(int *)(param_2 + 0x10));
  if (&DAT_3b9aca00 <= puVar19) {
    lVar22 = lVar22 + 1;
    if ((int)((uVar11 ^ (uint)((ulonglong)lVar22 >> 0x20)) & ~uVar11) < 0) goto LAB_005bba24;
    puVar19 = puVar19 + -1000000000;
  }
  *(undefined1 **)(param_1 + 1) = puVar19;
  *(int *)(param_1 + 2) = iVar7;
  *param_1 = lVar22;
  *(int *)((int)param_1 + 0x14) = iVar15;
  *(uint *)(param_1 + 3) = param_3;
  return;
}

