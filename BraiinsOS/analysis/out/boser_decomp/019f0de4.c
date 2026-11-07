// FUN_019f0de4 @ 019f0de4 size=1188 calls_out=19 calls_in=1
// strings: Cannot drop a runtime in a context where blocking is not allowed. This happens when a runtime is dropped from within an asynchronous context.

void FUN_019f0de4(int *param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_r3;
  int extraout_r3_00;
  int extraout_r3_01;
  char *pcVar6;
  char cVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  undefined8 uVar16;
  int local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint *local_78;
  int local_74;
  undefined4 uStack_70;
  int local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  uint *puStack_50;
  uint *local_4c;
  uint local_48;
  uint *local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar8 = *param_1;
  pcVar6 = (char *)(iVar8 + 0x28);
  if (*pcVar6 == '\0') {
    bVar15 = (bool)hasExclusiveAccess(pcVar6);
    if (!bVar15) goto LAB_019f11f0;
    *pcVar6 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_019f11f0:
    FUN_0164fba8(pcVar6);
  }
  FUN_0165098c(pcVar6);
  if (*(char *)(iVar8 + 0x78) != '\0') {
    FUN_01650a90(pcVar6);
    if (*pcVar6 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar15 = (bool)hasExclusiveAccess(pcVar6);
        if (bVar15) {
          *pcVar6 = '\0';
          return;
        }
      } while (*pcVar6 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_0164f86c(pcVar6);
    return;
  }
  piVar2 = *(int **)(iVar8 + 100);
  *(undefined1 *)(iVar8 + 0x78) = 1;
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar2;
      bVar15 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar15);
    *piVar2 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019da320(*(undefined4 *)(iVar8 + 100));
    }
  }
  iVar5 = *param_1;
  *(undefined4 *)(iVar8 + 100) = 0;
  if (*(int *)(iVar5 + 0x90) != 0) {
    FUN_0164e740(iVar5 + 0x90);
  }
  local_88 = *(int *)(iVar8 + 0x68);
  uStack_84 = *(undefined4 *)(iVar8 + 0x6c);
  uStack_80 = *(undefined4 *)(iVar8 + 0x70);
  uVar16 = thunk_FUN_01bee35a((int *)(iVar8 + 0x68),0x2c0);
  puVar9 = (uint *)((int)uVar16 + (int)((ulonglong)uVar16 >> 0x20));
  *(undefined4 *)(iVar8 + 0x68) = 0;
  if ((char)puVar9[4] == '\0') {
    FUN_019ae6ac(&local_58);
    *puVar9 = (uint)local_58;
    puVar9[1] = local_58._4_4_;
    puVar9[2] = (uint)puStack_50;
    puVar9[3] = (uint)local_4c;
    *(undefined1 *)(puVar9 + 4) = 1;
  }
  uVar13 = *puVar9;
  uVar3 = puVar9[2];
  uVar12 = puVar9[1];
  uVar14 = puVar9[3];
  *puVar9 = uVar13 + 1;
  puVar9[1] = uVar12 + (0xfffffffe < uVar13);
  local_78 = *(uint **)(iVar8 + 0x40);
  local_74 = *(int *)(iVar8 + 0x44);
  uStack_70 = *(undefined4 *)(iVar8 + 0x48);
  local_6c = *(int *)(iVar8 + 0x4c);
  local_68 = *(undefined4 *)(iVar8 + 0x50);
  uStack_64 = *(undefined4 *)(iVar8 + 0x54);
  uStack_60 = *(undefined4 *)(iVar8 + 0x58);
  uStack_5c = *(undefined4 *)(iVar8 + 0x5c);
  *(undefined4 **)(iVar8 + 0x40) = &DAT_0056d238;
  *(undefined4 *)(iVar8 + 0x44) = 0;
  *(undefined4 *)(iVar8 + 0x48) = 0;
  *(undefined4 *)(iVar8 + 0x4c) = 0;
  *(uint *)(iVar8 + 0x50) = uVar13;
  *(uint *)(iVar8 + 0x54) = uVar12;
  *(uint *)(iVar8 + 0x58) = uVar3;
  *(uint *)(iVar8 + 0x5c) = uVar14;
  FUN_01650a90(pcVar6);
  if (*pcVar6 == '\x01') {
    uVar4 = 0;
    DataMemoryBarrier(0xb);
    do {
      bVar15 = (bool)hasExclusiveAccess(pcVar6);
      if (bVar15) {
        *pcVar6 = '\0';
        goto LAB_019f0fa4;
      }
    } while (*pcVar6 == '\x01');
  }
  ClearExclusiveLocal();
  uVar4 = FUN_0164f86c(pcVar6);
LAB_019f0fa4:
  uVar16 = thunk_FUN_01bee35a(uVar4,0x20);
  iVar8 = (int)uVar16 + (int)((ulonglong)uVar16 >> 0x20);
  if (*(char *)(iVar8 + 0x38) == '\x01') {
LAB_019f0fdc:
    if (*(char *)(iVar8 + 0x32) != '\x02') {
      if (((DAT_01d51b08 & 0x7fffffff) == 0) || (iVar8 = FUN_0197ac0c(), iVar8 != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100("Cannot drop a runtime in a context where blocking is not allowed. This happens when a runtime is dropped from within an asynchronous context."
                     ,0x11b,&DAT_01d290d4);
      }
      FUN_019d8dc8(&local_78);
      if (local_88 == 0) {
        return;
      }
      FUN_01736438(&local_88);
      return;
    }
  }
  else if (*(char *)(iVar8 + 0x38) != '\x02') {
    FUN_019a2bcc(iVar8,&LAB_019efb68);
    *(undefined1 *)(iVar8 + 0x38) = 1;
    goto LAB_019f0fdc;
  }
  uVar16 = FUN_019ee710();
  iVar5 = extraout_r3;
  if ((int)uVar16 != 0) {
    local_58 = uVar16;
    do {
      cVar7 = *(char *)(iVar8 + 0x38);
      if (cVar7 == '\x01') {
LAB_019f1048:
        cVar7 = *(char *)(iVar8 + 0x30);
        uVar13 = (uint)*(byte *)(iVar8 + 0x31);
        *(undefined2 *)(iVar8 + 0x30) = 0x8001;
      }
      else if (cVar7 != '\x02') {
        FUN_019a2bcc(iVar8,&LAB_019efb68);
        *(undefined1 *)(iVar8 + 0x38) = 1;
        goto LAB_019f1048;
      }
      cVar1 = FUN_019f6a08(param_1 + 1,&local_58);
      if (cVar7 != '\x02') {
        if (*(char *)(iVar8 + 0x38) != '\x01') {
          if (*(char *)(iVar8 + 0x38) == '\x02') goto LAB_019f10a0;
          FUN_019a2bcc(iVar8,&LAB_019efb68);
          *(undefined1 *)(iVar8 + 0x38) = 1;
        }
        *(char *)(iVar8 + 0x31) = (char)uVar13;
        *(char *)(iVar8 + 0x30) = cVar7;
      }
LAB_019f10a0:
      if (cVar1 != '\x02') goto LAB_019f10b4;
      FUN_019ee698();
    } while( true );
  }
LAB_019f10c8:
  bVar15 = local_88 == 0;
  if (!bVar15) {
    FUN_019f6e6c(&local_88);
    FUN_012d40d0();
    iVar5 = extraout_r3_01;
  }
  puStack_50 = (uint *)(uint)bVar15;
  if (local_74 == 0) {
    local_58._0_4_ = 0;
  }
  else {
    puStack_50 = local_78 + local_74 * -4 + -4;
    iVar5 = local_74 * 0x11 + 0x15;
    local_58._0_4_ = 4;
  }
  local_40 = (int)local_78 + local_74 + 1;
  puVar11 = local_78 + 1;
  uVar3 = ~*local_78 & 0x80808080;
  local_3c = local_6c;
  local_4c = local_78;
  puVar9 = local_78;
  iVar8 = local_6c;
  local_58._4_4_ = iVar5;
  local_48 = uVar3;
  local_44 = puVar11;
  while (iVar8 != 0) {
    uVar12 = uVar3;
    puVar10 = puVar11;
    if (uVar3 == 0) {
      do {
        puVar11 = puVar10 + 1;
        uVar3 = *puVar10;
        puVar9 = puVar9 + -0x10;
        puVar10 = puVar11;
      } while ((uVar3 & 0x80808080) == 0x80808080);
      uVar12 = uVar3 & 0x80808080 ^ 0x80808080;
      local_4c = puVar9;
      local_44 = puVar11;
    }
    iVar8 = iVar8 + -1;
    uVar3 = uVar12 - 1 & uVar12;
    uVar12 = LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
                     uVar12 >> 0x18) & 0x38;
    local_38 = *(undefined4 *)((int)puVar9 + uVar12 * -2 + -0x10);
    local_34 = *(int *)((int)puVar9 + uVar12 * -2 + -0xc);
    uStack_30 = *(undefined4 *)((int)puVar9 + uVar12 * -2 + -8);
    uStack_2c = *(undefined4 *)((int)puVar9 + uVar12 * -2 + -4);
    local_48 = uVar3;
    if (local_34 == 0) goto LAB_019f11d8;
    FUN_019f6e6c((uint)&local_38 | 4);
    FUN_012d40d0();
  }
  iVar8 = 0;
LAB_019f11d8:
  local_3c = iVar8;
  FUN_019d8e74(&local_58);
  return;
LAB_019f10b4:
  (**(code **)((int)uVar16 + 0xc))((int)((ulonglong)uVar16 >> 0x20));
  iVar5 = extraout_r3_00;
  goto LAB_019f10c8;
}

