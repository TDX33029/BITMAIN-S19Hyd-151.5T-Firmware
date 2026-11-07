// FUN_019d1458 @ 019d1458 size=916 calls_out=15 calls_in=2
// strings: 

void FUN_019d1458(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 extraout_r1;
  uint uVar7;
  int iVar8;
  int *piVar9;
  bool bVar10;
  undefined8 uVar11;
  uint local_c0;
  uint local_bc;
  undefined1 *local_b8;
  uint local_b0;
  uint local_ac;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  uint local_88;
  uint local_84;
  undefined1 *local_80;
  uint *local_78;
  code *pcStack_74;
  uint *puStack_70;
  code *local_6c;
  
  FUN_019d12ac(&local_c0);
  iVar8 = param_2 + 0x18;
  iVar2 = FUN_019d0d20(iVar8,param_3,param_4);
  if (*(char *)(iVar2 + 0x20) == '\0') {
    iVar2 = FUN_019d0d20(iVar8,param_3,&DAT_01d28b84);
    local_b0 = *(uint *)(iVar2 + 0x18);
    local_ac = *(uint *)(iVar2 + 0x1c);
    uVar3 = *(uint *)(param_2 + 0x60);
    uVar7 = *(uint *)(param_2 + 100);
    if (local_ac <= uVar7 && (uint)(uVar3 <= local_b0) <= local_ac - uVar7) {
      pcStack_74 = FUN_012fd074;
      local_6c = FUN_012fd074;
      local_78 = (uint *)(param_2 + 0x60);
      puStack_70 = &local_b0;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_0058ba8d,&local_78,param_4);
    }
    uVar7 = local_ac ^ uVar7;
    uVar4 = local_b0 ^ uVar3 | 0x3f;
    bVar10 = (uint)(0xfffffffd < uVar4) <= uVar7 - 0xf;
    iVar2 = uVar7 - ((0xfffffffd >= uVar4) + 0xf);
    uVar3 = 0xfffffffe;
    if (uVar7 < 0x10 && bVar10) {
      uVar3 = uVar4;
    }
    if (uVar7 >= 0x10 || !bVar10) {
      uVar7 = 0xf;
    }
    uVar1 = (ushort)LZCOUNT(uVar3) | 0x20;
    if (uVar7 != 0) {
      uVar1 = (ushort)LZCOUNT(uVar7);
    }
    uVar7 = (short)(uVar1 ^ 0x3e) * 0x2b;
    uVar3 = uVar7 >> 8;
    if (*(uint *)(param_2 + 0x5c) <= uVar7 >> 8) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar3,*(uint *)(param_2 + 0x5c),param_4,iVar2);
    }
    iVar2 = *(int *)(param_2 + 0x58) + (uVar3 | uVar3 << 5) * 0x10;
    uVar7 = *(int *)(iVar2 + 0x208) * 6 & 0x3e;
    uVar3 = local_b0 >> uVar7 | local_ac << (0x20 - uVar7 & 0xff);
    if (-1 < (int)(uVar7 - 0x20)) {
      uVar3 = local_ac >> (uVar7 - 0x20 & 0xff);
    }
    uVar3 = uVar3 & 0x3f;
    FUN_019d0f14(iVar2 + uVar3 * 8,param_3,iVar8,&DAT_01d2879c);
    if (*(int *)(iVar2 + uVar3 * 8) == 0) {
      uVar7 = 1 << uVar3;
      uVar4 = uVar3 - 0x20;
      if (-1 < (int)uVar4) {
        uVar7 = 0;
      }
      *(uint *)(iVar2 + 0x200) = *(uint *)(iVar2 + 0x200) ^ uVar7;
      uVar3 = 1 >> (0x20 - uVar3 & 0xff);
      if (-1 < (int)uVar4) {
        uVar3 = 1 << (uVar4 & 0xff);
      }
      *(uint *)(iVar2 + 0x204) = *(uint *)(iVar2 + 0x204) ^ uVar3;
    }
  }
  else {
    FUN_019d0f14(param_2,param_3,iVar8,param_4);
  }
  FUN_019d10a0(&local_b0,iVar8,param_3);
  FUN_019d12ac(&local_88,param_2);
  puVar5 = &DAT_3b9aca00;
  if (local_b8 == &DAT_3b9aca00 || local_80 == &DAT_3b9aca00) {
    if (local_b8 == &DAT_3b9aca00 && local_80 == &DAT_3b9aca00) goto LAB_019d16fc;
    if (local_80 == &DAT_3b9aca00) {
      FUN_00b7ae3c(*(undefined4 *)(param_2 + 0x78));
      *(undefined4 *)(param_2 + 0x78) = 0;
      goto LAB_019d16fc;
    }
  }
  else {
    bVar10 = local_b8 == local_80;
    if (bVar10) {
      puVar5 = (undefined1 *)(local_c0 ^ local_88);
      local_b8 = (undefined1 *)(local_bc ^ local_84);
    }
    if (bVar10 && (puVar5 == (undefined1 *)0x0 && local_b8 == (undefined1 *)0x0)) goto LAB_019d16fc;
  }
  piVar9 = (int *)(param_2 + 0x78);
  if (*piVar9 == 0) {
    uVar11 = FUN_019ef7f4(param_4);
    uVar6 = (undefined4)((ulonglong)uVar11 >> 0x20);
    FUN_019dc4f8(&local_78,(int)uVar11,uVar6,uVar6,local_88,local_84,local_80,param_4);
    iVar2 = thunk_FUN_01be5118(0x50);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x50);
    }
    FUN_01bed4e2(iVar2,&local_78,0x50);
    FUN_00b7ae3c(*piVar9);
    *piVar9 = iVar2;
  }
  else {
    FUN_019f598c(*piVar9,1,local_88,local_84,local_80,1);
  }
LAB_019d16fc:
  if (*(int *)(param_2 + 0x48) == 0) {
    iVar2 = *(int *)(param_2 + 0x70);
    *(undefined4 *)(param_2 + 0x70) = 0;
    if (iVar2 != 0) {
      (**(code **)(iVar2 + 4))(*(undefined4 *)(param_2 + 0x74));
    }
  }
  FUN_01bf0ff0(local_98,local_94,1000,0);
  FUN_019fa158(&local_78,extraout_r1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),
               *(undefined4 *)(param_2 + 0x10));
  param_1[4] = local_a0;
  param_1[5] = local_9c;
  param_1[6] = param_3;
  *param_1 = local_78;
  param_1[1] = pcStack_74;
  param_1[2] = puStack_70;
  return;
}

