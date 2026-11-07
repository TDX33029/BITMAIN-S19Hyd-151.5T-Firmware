// FUN_01629628 @ 01629628 size=1628 calls_out=15 calls_in=2
// strings: A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers.

void FUN_01629628(longlong *param_1,int param_2,uint param_3,undefined4 param_4)

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
  uint uVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  undefined1 *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong *plVar18;
  int *piVar19;
  int iVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined1 *local_98;
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
  
  uVar3 = CONCAT44(local_bc,local_b8);
  piVar19 = (int *)(param_2 + 0x58);
  FUN_01626d3c(&local_90,piVar19);
  puVar5 = local_88;
  plVar18 = (longlong *)(param_2 + 8);
  if (((uint)local_90 & 1) == 0) {
    local_98 = &DAT_3b9aca00;
  }
  else {
    lVar21 = FUN_01846088(local_88,local_84,1000,0);
    uVar3 = lVar21 + *plVar18;
    uVar10 = (uint)(uVar3 >> 0x20);
    local_58 = CONCAT44(local_58._4_4_,(undefined4)local_58);
    local_30 = CONCAT44(local_30._4_4_,(uint)local_30);
    local_60 = CONCAT44(local_60._4_4_,(undefined4)local_60);
    if ((int)((*(uint *)(param_2 + 0xc) ^ uVar10) &
             ~(*(uint *)(param_2 + 0xc) ^ (uint)((ulonglong)lVar21 >> 0x20))) < 0)
    goto LAB_01629aa8;
    local_98 = (undefined1 *)
               (((int)puVar5 + (int)lVar21 * -1000) * 1000000 + *(int *)(param_2 + 0x10));
    if (&DAT_3b9aca00 <= local_98) {
      uVar3 = uVar3 + 1;
      local_58 = CONCAT44(local_58._4_4_,(undefined4)local_58);
      local_30 = CONCAT44(local_30._4_4_,(uint)local_30);
      local_60 = CONCAT44(local_60._4_4_,(undefined4)local_60);
      if ((int)((uVar10 ^ (uint)(uVar3 >> 0x20)) & ~uVar10) < 0) goto LAB_01629aa8;
      local_98 = local_98 + -1000000000;
    }
  }
  iVar15 = param_2 + 0x18;
  iVar7 = FUN_01628e10(iVar15,param_3,param_4);
  if (*(char *)(iVar7 + 0x20) == '\0') {
    iVar7 = FUN_01628e10(iVar15,param_3,&DAT_018ac290);
    local_30._0_4_ = *(uint *)(iVar7 + 0x18);
    local_30._4_4_ = *(uint *)(iVar7 + 0x1c);
    uVar10 = *(uint *)(param_2 + 0x60);
    uVar13 = *(uint *)(param_2 + 100);
    if (local_30._4_4_ <= uVar13 && (uint)(uVar10 <= (uint)local_30) <= local_30._4_4_ - uVar13) {
      local_88 = &local_30;
      local_8c = FUN_00fac4cc;
      local_84 = FUN_00fac4cc;
      local_90 = (uint *)(param_2 + 0x60);
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_0058add5,&local_90,param_4);
    }
    uVar13 = uVar13 ^ local_30._4_4_;
    uVar8 = uVar10 ^ (uint)local_30 | 0x3f;
    bVar1 = (uint)(0xfffffffd < uVar8) <= uVar13 - 0xf;
    uVar10 = 0xfffffffe;
    if (uVar13 < 0x10 && bVar1) {
      uVar10 = uVar8;
    }
    if (uVar13 >= 0x10 || !bVar1) {
      uVar13 = 0xf;
    }
    uVar6 = (ushort)LZCOUNT(uVar10) | 0x20;
    if (uVar13 != 0) {
      uVar6 = (ushort)LZCOUNT(uVar13);
    }
    uVar13 = (short)(uVar6 ^ 0x3e) * 0x2b;
    uVar10 = uVar13 >> 8;
    if (*(uint *)(param_2 + 0x5c) <= uVar13 >> 8) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar10,*(uint *)(param_2 + 0x5c),param_4);
    }
    iVar7 = *piVar19 + (uVar10 | uVar10 << 5) * 0x10;
    uVar13 = *(int *)(iVar7 + 0x208) * 6 & 0x3e;
    uVar10 = (uint)local_30 >> uVar13 | local_30._4_4_ << (0x20 - uVar13 & 0xff);
    if (-1 < (int)(uVar13 - 0x20)) {
      uVar10 = local_30._4_4_ >> (uVar13 - 0x20 & 0xff);
    }
    uVar10 = uVar10 & 0x3f;
    FUN_016291a4(iVar7 + uVar10 * 8,param_3,iVar15,&DAT_018abd58);
    if (*(int *)(iVar7 + uVar10 * 8) == 0) {
      uVar13 = 1 << uVar10;
      uVar8 = uVar10 - 0x20;
      if (-1 < (int)uVar8) {
        uVar13 = 0;
      }
      *(uint *)(iVar7 + 0x200) = *(uint *)(iVar7 + 0x200) ^ uVar13;
      uVar10 = 1 >> (0x20 - uVar10 & 0xff);
      if (-1 < (int)uVar8) {
        uVar10 = 1 << (uVar8 & 0xff);
      }
      *(uint *)(iVar7 + 0x204) = *(uint *)(iVar7 + 0x204) ^ uVar10;
      cVar2 = *(char *)(param_2 + 0x50);
    }
    else {
      cVar2 = *(char *)(param_2 + 0x50);
    }
  }
  else {
    FUN_016291a4(param_2,param_3,iVar15,param_4);
    cVar2 = *(char *)(param_2 + 0x50);
  }
  uVar10 = param_3;
  if (cVar2 == '\x01') {
    uVar22 = FUN_01625860(iVar15,param_3);
    uVar10 = (uint)(uVar22 >> 0x20);
    if ((uVar22 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00412edc,0x17,&DAT_018ac2c0);
    }
  }
  if (*(uint *)(param_2 + 0x44) <= uVar10) {
LAB_01629c6c:
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00412edc,0xb,&DAT_018ac2d0);
  }
  iVar7 = *(int *)(param_2 + 0x4c);
  piVar9 = (int *)(*(int *)(param_2 + 0x40) + uVar10 * 0x28);
  iVar20 = *piVar9;
  iVar15 = piVar9[5];
  piVar11 = piVar9 + 1;
  local_40 = *piVar11;
  *piVar9 = 2;
  local_3c = piVar9[2];
  local_38 = piVar9[3];
  iVar16 = piVar9[7];
  *piVar11 = iVar7;
  iVar7 = piVar9[4];
  iVar17 = piVar9[6];
  if (iVar20 == 2) {
    *piVar11 = local_40;
    piVar9[2] = local_3c;
    piVar9[4] = iVar7;
    piVar9[5] = iVar15;
    piVar9[3] = local_38;
    piVar9[6] = iVar17;
    piVar9[7] = iVar16;
    goto LAB_01629c6c;
  }
  iVar20 = *(int *)(param_2 + 0x48) + -1;
  *(int *)(param_2 + 0x48) = iVar20;
  *(uint *)(param_2 + 0x4c) = uVar10;
  FUN_01626d3c(&local_90,piVar19);
  if (((uint)local_90 & 1) == 0) {
    if (local_98 == &DAT_3b9aca00) goto LAB_01629a18;
    iVar12 = *(int *)(param_2 + 0x78);
    if (iVar12 != 0) {
      FUN_00a07b4c(iVar12);
      thunk_FUN_016d3fb4(iVar12);
    }
    *(undefined4 *)(param_2 + 0x78) = 0;
  }
  else {
    lVar21 = FUN_01846088(local_88,local_84,1000,0);
    uVar22 = lVar21 + *plVar18;
    uVar10 = (uint)(uVar22 >> 0x20);
    local_58 = CONCAT44(local_58._4_4_,(undefined4)local_58);
    local_30 = CONCAT44(local_30._4_4_,(uint)local_30);
    local_60 = CONCAT44(local_60._4_4_,(undefined4)local_60);
    if ((int)((*(uint *)(param_2 + 0xc) ^ uVar10) &
             ~(*(uint *)(param_2 + 0xc) ^ (uint)((ulonglong)lVar21 >> 0x20))) < 0)
    goto LAB_01629aa8;
    uVar4 = CONCAT44(*(int *)(param_2 + 0x10),local_98);
    puVar14 = (undefined1 *)
              (((int)local_88 + (int)lVar21 * -1000) * 1000000 + *(int *)(param_2 + 0x10));
    if (&DAT_3b9aca00 <= puVar14) {
      uVar22 = uVar22 + 1;
      local_58 = CONCAT44(local_58._4_4_,(undefined4)local_58);
      local_30 = CONCAT44(local_30._4_4_,(uint)local_30);
      local_60 = CONCAT44(local_60._4_4_,(undefined4)local_60);
      if ((int)((uVar10 ^ (uint)(uVar22 >> 0x20)) & ~uVar10) < 0) goto LAB_01629aa8;
      puVar14 = puVar14 + -1000000000;
    }
    if (local_98 == puVar14) {
      uVar4 = uVar3 ^ uVar22;
    }
    if (local_98 != puVar14 || uVar4 != 0) {
      if (*(int *)(param_2 + 0x78) == 0) {
        local_30 = FUN_0164ec90(param_4);
        iVar12 = 0x180;
        if ((local_30 & 1) != 0) {
          iVar12 = 0xb8;
        }
        if (*(undefined1 **)((int)(local_30 >> 0x20) + iVar12 + 0x90) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                       ,0x73,param_4);
        }
        local_8c = (code *)0x0;
        local_90 = (uint *)0x0;
        local_48 = 0;
        local_50 = puVar14;
        local_58 = uVar22;
        local_60 = local_30;
        iVar12 = thunk_FUN_016d4a50(0x50);
        if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x50);
        }
        FUN_016dd1aa(iVar12,&local_90,0x50);
        *(int *)(param_2 + 0x78) = iVar12;
        goto joined_r0x016299cc;
      }
      FUN_01653364(*(int *)(param_2 + 0x78),1,(int)uVar22,(int)(uVar22 >> 0x20),puVar14,1);
    }
LAB_01629a18:
  }
joined_r0x016299cc:
  if (iVar20 == 0) {
    iVar20 = *(int *)(param_2 + 0x70);
    *(undefined4 *)(param_2 + 0x70) = 0;
    if (iVar20 != 0) {
      (**(code **)(iVar20 + 4))(*(undefined4 *)(param_2 + 0x74));
    }
  }
  lVar23 = FUN_01846088(iVar17,iVar16,1000,0);
  lVar21 = lVar23 + *plVar18;
  uVar10 = (uint)((ulonglong)lVar21 >> 0x20);
  if ((int)((*(uint *)(param_2 + 0xc) ^ uVar10) &
           ~(*(uint *)(param_2 + 0xc) ^ (uint)((ulonglong)lVar23 >> 0x20))) < 0) {
LAB_01629aa8:
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
  }
  puVar14 = (undefined1 *)((iVar17 + (int)lVar23 * -1000) * 1000000 + *(int *)(param_2 + 0x10));
  if (&DAT_3b9aca00 <= puVar14) {
    lVar21 = lVar21 + 1;
    if ((int)((uVar10 ^ (uint)((ulonglong)lVar21 >> 0x20)) & ~uVar10) < 0) goto LAB_01629aa8;
    puVar14 = puVar14 + -1000000000;
  }
  *(undefined1 **)(param_1 + 1) = puVar14;
  *(int *)(param_1 + 2) = iVar7;
  *(int *)((int)param_1 + 0x14) = iVar15;
  *param_1 = lVar21;
  *(uint *)(param_1 + 3) = param_3;
  return;
}

