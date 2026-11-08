// FUN_0191f448 @ 0191f448 size=1552 calls_out=12 calls_in=1
// strings: res master | tls13  | resumption | tls13 

void FUN_0191f448(undefined4 *param_1,int param_2,int *param_3,int param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint extraout_r3;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  undefined4 **ppuVar13;
  code *pcVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined1 auStack_160 [64];
  uint local_120;
  undefined1 local_11c [64];
  uint local_dc;
  undefined4 **local_d8;
  undefined4 local_d4;
  undefined1 *local_d0;
  undefined4 local_cc;
  char *local_c8;
  undefined4 local_c4;
  char *local_c0;
  undefined4 local_bc;
  undefined1 *local_b8;
  undefined4 local_b4;
  undefined1 *local_b0;
  uint local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  int local_9c;
  int local_98;
  int local_94;
  undefined4 *local_90;
  undefined4 *local_8c;
  undefined4 *local_88;
  undefined4 *puStack_84;
  undefined4 *local_78;
  undefined4 *local_74;
  undefined4 *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_2a;
  undefined1 local_29 [5];
  
  iVar11 = *(int *)(param_4 + 0x10);
  iVar8 = *(int *)(param_4 + 0x14);
  iVar4 = FUN_018ed844(iVar11,iVar8);
  if (iVar4 != 0) {
    *(undefined1 *)(param_1 + 1) = 6;
    *param_1 = &DAT_8000001c;
    return;
  }
  (**(code **)(*(int *)(param_2 + 0x18) + 0xc))(auStack_160,*(undefined4 *)(param_2 + 0x14));
  if (0x40 < local_120) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,local_120,0x40,&DAT_01d258e8);
  }
  uVar10 = *(undefined4 *)(param_2 + 0x40);
  pcVar14 = *(code **)(*(int *)(param_2 + 0x44) + 0x10);
  uVar5 = (**(code **)(*(int *)(param_2 + 0x44) + 0x14))(uVar10);
  local_90._0_2_ = (ushort)((uVar5 & 0xff) << 8) | (ushort)(uVar5 >> 8) & 0xff;
  local_2a = 0x10;
  local_b8 = local_29;
  local_b4 = 1;
  local_cc = 1;
  local_d0 = &local_2a;
  local_bc = 10;
  local_c0 = "res master";
  local_c4 = 6;
  local_c8 = "tls13 ";
  local_d4 = 2;
  local_29[0] = (undefined1)local_120;
  local_ac = local_120;
  local_d8 = &local_90;
  local_b0 = auStack_160;
  (*pcVar14)(&local_74,uVar10,&local_d8,6);
  uVar15 = *(undefined4 *)(param_4 + 4);
  uVar10 = *(undefined4 *)(param_4 + 8);
  local_78 = (undefined4 *)(param_2 + 0x40);
  uVar17 = (**(code **)(*(int *)(*(int *)(param_2 + 0x48) + 0xc) + 0x18))
                     (*(undefined4 *)(*(int *)(param_2 + 0x48) + 8),&local_74);
  iVar4 = (int)((ulonglong)uVar17 >> 0x20);
  ppuVar13 = (undefined4 **)uVar17;
  pcVar14 = *(code **)(iVar4 + 0x10);
  uVar5 = (**(code **)(iVar4 + 0x14))();
  local_d8 = &local_90;
  local_90 = (undefined4 *)
             CONCAT22(local_90._2_2_,(ushort)((uVar5 & 0xff) << 8) | (ushort)(uVar5 >> 8) & 0xff);
  local_b8 = local_29;
  local_2a = 0x10;
  local_c0 = "resumption";
  local_29[0] = (undefined1)uVar10;
  local_b4 = 1;
  local_bc = 10;
  local_c4 = 6;
  local_cc = 1;
  local_d0 = &local_2a;
  local_c8 = "tls13 ";
  local_d4 = 2;
  local_b0 = (undefined1 *)uVar15;
  local_ac = uVar10;
  (*pcVar14)(local_11c,ppuVar13,&local_d8,6);
  FUN_01443048(ppuVar13,iVar4);
  iVar4 = 4;
  do {
    local_29[iVar4 + -0x4f] = 0;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x44);
  iVar4 = *(int *)(*(int *)(param_2 + 0x30) + 0x98);
  FUN_0190b0e0(&local_78,*(undefined4 *)(*(int *)(param_2 + 0x30) + 0x94),*(undefined4 *)(iVar4 + 8)
               ,*(undefined4 *)(iVar4 + 0x10));
  puVar2 = local_70;
  if (local_78 != (undefined4 *)0x80000029) {
    param_1[4] = local_68;
    param_1[5] = uStack_64;
    param_1[6] = uStack_60;
    param_1[7] = uStack_5c;
    *param_1 = local_78;
    param_1[1] = local_74;
    param_1[2] = local_70;
    param_1[3] = local_6c;
LAB_0191f74c:
    iVar4 = 0;
    do {
      local_11c[iVar4] = 0;
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x40);
    return;
  }
  piVar9 = *(int **)(param_4 + 0x18);
  uVar10 = *(undefined4 *)(param_2 + 0x3c);
  do {
    iVar4 = *piVar9;
    bVar1 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar1);
  *piVar9 = iVar4 + 1;
  if (iVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)software_udf(0xfdee,0x191fa58);
    (*pcVar14)();
  }
  if (0x40 < local_dc) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,local_dc,0x40,&DAT_01d24fd8);
  }
  iVar4 = param_3[1];
  if (iVar4 == 0) {
LAB_0191f70c:
    local_88 = (undefined4 *)0x0;
    local_8c = (undefined4 *)&SUB_00000004;
    local_90 = (undefined4 *)0x0;
  }
  else {
    ppuVar13 = &local_78;
    FUN_018e307c(ppuVar13,*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 8));
    if (local_78 == (undefined4 *)&DAT_80000000) goto LAB_0191f70c;
    local_90 = local_78;
    local_8c = local_74;
    local_88 = local_70;
  }
  uVar16 = 0;
  uVar15 = *(undefined4 *)(param_4 + 0x20);
  piVar12 = (int *)(iVar11 + iVar8 * 0x10);
  if (iVar8 != 0) {
    puVar6 = (undefined4 *)(iVar11 + 4);
    do {
      iVar4 = puVar6[-1];
      if (iVar4 != -0x7fffffff) {
        ppuVar13 = (undefined4 **)(uint)*(ushort *)(puVar6 + 2);
      }
      if (iVar4 == -0x7fffffff || ppuVar13 == (undefined4 **)&DAT_00000019) {
        if (iVar4 == -0x7fffffff) {
          uVar16 = *puVar6;
        }
        break;
      }
      piVar7 = puVar6 + 3;
      puVar6 = puVar6 + 4;
    } while (piVar7 != piVar12);
  }
  FUN_018f6450(&local_d8,piVar9,local_11c,local_dc,puVar2,local_6c,*(undefined4 *)(param_4 + 0x1c),
               &local_90,*(int *)(param_2 + 0x30) + 0xa0,*(int *)(param_2 + 0x30) + 0x84);
  local_94 = 0;
  local_9c = 0;
  local_98 = 1;
  local_a8 = uVar15;
  local_a4 = uVar16;
  local_a0 = uVar10;
  if ((char)param_3[2] != '\0') {
    if (iVar8 != 0) {
      piVar9 = (int *)(iVar11 + 4);
      uVar5 = extraout_r3;
      do {
        iVar4 = piVar9[-1];
        if (iVar4 != -0x7fffffff) {
          uVar5 = (uint)*(ushort *)(piVar9 + 2);
        }
        if (iVar4 == -0x7fffffff || uVar5 == 0x19) {
          if ((iVar4 == -0x7fffffff) && (1 < *piVar9 + 1U)) {
            *(undefined1 *)(param_1 + 1) = 0x19;
            *param_1 = &DAT_8000001c;
            FUN_0191fb20(&local_d8);
            goto LAB_0191f74c;
          }
          break;
        }
        piVar7 = piVar9 + 3;
        piVar9 = piVar9 + 4;
      } while (piVar7 != piVar12);
    }
    iVar4 = *param_3;
    if (*(int *)(iVar4 + 0x58) != -0x80000000) {
      iVar8 = *(int *)(iVar4 + 0x60);
      uVar10 = 0;
      if (iVar8 < 0) {
LAB_0191f8b4:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar10,iVar8);
      }
      uVar15 = *(undefined4 *)(iVar4 + 0x5c);
      if (iVar8 == 0) {
        iVar11 = 1;
        iVar4 = 0;
      }
      else {
        uVar10 = 1;
        iVar11 = FUN_01298504(iVar8,1);
        iVar4 = iVar8;
        if (iVar11 == 0) goto LAB_0191f8b4;
      }
      FUN_01bed4e2(iVar11,uVar15,iVar8);
      FUN_0134bd64(0,1);
      local_9c = iVar4;
      local_98 = iVar11;
      local_94 = iVar8;
    }
  }
  iVar4 = *(int *)(param_2 + 0x34);
  iVar8 = *(int *)(param_2 + 0x38);
  iVar11 = *(int *)(iVar8 + 8);
  if (*(char *)(param_2 + 0x1c) == '\x01') {
    FUN_01bed4e2((uint)&local_90 | 1,param_2 + 0x1d,0x11);
    uVar3 = 1;
  }
  else {
    if (*(int *)(param_2 + 0x20) == -0x80000000) {
      local_78 = *(undefined4 **)(param_2 + 0x20);
      local_74 = *(undefined4 **)(param_2 + 0x24);
      local_70 = *(undefined4 **)(param_2 + 0x28);
    }
    else {
      FUN_006666fc(&local_78,*(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_2 + 0x28));
    }
    local_8c = local_78;
    local_88 = local_74;
    puStack_84 = local_70;
    uVar3 = 0;
  }
  local_90 = (undefined4 *)CONCAT31(local_90._1_3_,uVar3);
  FUN_01bed4e2(&local_78,&local_d8,0x48);
  (**(code **)(iVar8 + 0x24))(iVar4 + (iVar11 - 1U & 0xfffffff8) + 8,&local_90,&local_78);
  *param_1 = 0x80000029;
  iVar4 = 0;
  do {
    local_11c[iVar4] = 0;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x40);
  return;
}

