// FUN_0160edb8 @ 0160edb8 size=784 calls_out=4 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0160edb8(int *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  int iVar8;
  int *piVar9;
  undefined1 *puVar10;
  undefined2 *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int unaff_r4;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int *piVar23;
  undefined2 *puVar24;
  uint uVar25;
  uint *puVar26;
  undefined4 *local_68;
  undefined4 local_64;
  uint local_60;
  int local_5c;
  int *local_58;
  int iStack_54;
  int local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  puVar10 = (undefined1 *)*param_2;
  if (puVar10 == (undefined1 *)param_2[1]) {
    *param_1 = 0;
    param_1[1] = -0x7ffffffb;
    return;
  }
  uVar1 = *puVar10;
  *param_2 = puVar10 + 1;
  local_60 = 0x80000005;
  local_68 = param_2;
  FUN_00f2cc28(&local_60);
  puVar24 = (undefined2 *)*param_2;
  if ((uint)(param_2[1] - (int)puVar24) < 2) {
    *(short *)(param_1 + 2) = (short)puVar24;
    param_1[3] = 2;
    *param_1 = 0;
    param_1[1] = -0x7ffffffb;
    *(short *)((int)param_1 + 10) = (short)((uint)puVar24 >> 0x10);
    return;
  }
  local_60 = 0x80000005;
  FUN_00f2cc28(&local_60);
  puVar11 = puVar24 + 1;
  uVar2 = *puVar24;
  *param_2 = puVar11;
  if ((uint)(param_2[1] - (int)puVar11) < 2) {
    param_1[3] = 2;
    *(short *)(param_1 + 2) = (short)puVar11;
    *param_1 = 0;
    param_1[1] = -0x7ffffffb;
    *(short *)((int)param_1 + 10) = (short)((uint)puVar11 >> 0x10);
    return;
  }
  local_60 = 0x80000005;
  FUN_00f2cc28(&local_60);
  puVar11 = puVar24 + 2;
  *param_2 = puVar11;
  if ((uint)(param_2[1] - (int)puVar11) < 4) {
    *param_1 = 0;
    param_1[1] = -0x7ffffffb;
    param_1[2] = (int)puVar11;
    param_1[3] = 4;
    return;
  }
  uVar3 = puVar24[1];
  local_60 = 0x80000005;
  FUN_00f2cc28(&local_60);
  iVar18 = *(int *)(puVar24 + 2);
  *param_2 = puVar24 + 4;
  FUN_01622628(&local_60,param_2);
  piVar9 = local_58;
  iVar8 = local_5c;
  if (local_60 != 0x8000000a) {
    param_1[1] = local_60;
    param_1[2] = local_5c;
    *param_1 = 0;
    param_1[3] = (int)local_58;
    return;
  }
  if (local_5c == 0) {
    FUN_01613578(param_1 + 1,4,&DAT_018ab9b8,&DAT_018ab990);
    *param_1 = 0;
  }
  else {
    puVar24 = (undefined2 *)*param_2;
    local_64 = 1;
    if ((uint)(param_2[1] - (int)puVar24) < 2) {
      param_1[3] = 2;
      *param_1 = 0;
      param_1[1] = -0x7ffffffb;
      *(short *)(param_1 + 2) = (short)puVar24;
      *(short *)((int)param_1 + 10) = (short)((uint)puVar24 >> 0x10);
    }
    else {
      local_60 = 0x80000005;
      FUN_00f2cc28(&local_60);
      uVar4 = *puVar24;
      *param_2 = puVar24 + 1;
      FUN_01613680(&local_60,&local_68);
      if ((local_60 & 1) == 0) {
        piVar12 = &local_50;
        piVar23 = piVar9;
        if (local_5c != 0) {
          piVar12 = param_1 + 5;
          piVar23 = &local_38;
        }
        local_38 = local_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        if (local_5c != 0) {
          iVar14 = piVar23[1];
          iVar15 = piVar23[2];
          iVar19 = piVar23[3];
          iVar22 = piVar23[4];
          *piVar12 = *piVar23;
          piVar12[1] = iVar14;
          piVar12[2] = iVar15;
          piVar12[3] = iVar19;
          piVar12[4] = iVar22;
          param_1[3] = (int)local_58;
          param_1[4] = iStack_54;
          *param_1 = iVar8;
          param_1[1] = (int)piVar9;
          param_1[2] = local_5c;
          *(undefined2 *)(param_1 + 0xc) = uVar4;
          *(undefined2 *)((int)param_1 + 0x2e) = uVar3;
          *(undefined1 *)((int)param_1 + 0x32) = uVar1;
          *(undefined2 *)(param_1 + 0xb) = uVar2;
          param_1[10] = iVar18;
          return;
        }
        FUN_01613578(&local_60,6,&DAT_018ab9b8,&DAT_018ab990);
        *param_1 = 0;
        param_1[1] = local_60;
        param_1[2] = local_5c;
        param_1[3] = (int)local_58;
      }
      else {
        param_1[2] = (int)local_58;
        param_1[3] = iStack_54;
        *param_1 = 0;
        param_1[1] = local_5c;
      }
    }
    if (piVar9 != (int *)0x0) {
      if (iVar8 == 0) {
        return;
      }
      iVar18 = FUN_016d3bc8();
      uVar25 = *(byte *)(iVar8 + -3) & 0x1f;
      if (((*(byte *)(iVar18 + 0x14) & 0x1f) != 0) ||
         (uVar20 = *(uint *)(iVar18 + 0x14) & 0xfffff000, iVar14 = uVar20 - 0x10, uVar20 == 0)) {
        iVar14 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar18 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar20 = (uint)(*(byte *)(iVar8 + -3) >> 5);
      iVar19 = *(int *)(iVar18 + 8) + 0x10;
      iVar15 = iVar14 * uVar25 + iVar14 + -4;
      iVar14 = iVar19 + iVar15;
      if (4 < uVar20) {
        if (uVar20 != 5) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar5)();
        }
        uVar20 = *(uint *)(iVar14 + -4);
        if (uVar20 < 5) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar5)();
        }
        if (*(char *)(iVar14 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar5)();
        }
      }
      if ((uint)(iVar14 - iVar8) < uVar20) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar5)();
      }
      if (*(char *)(iVar14 - uVar20) != '\0') {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar5)();
      }
      if (*(char *)(iVar19 + iVar15) != '\0') {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar5)();
      }
      bVar6 = *(byte *)(iVar18 + 0x14);
      uVar20 = 1 << uVar25;
      *(undefined1 *)(iVar8 + -3) = 0xff;
      *(undefined2 *)(iVar8 + -2) = 0;
      do {
        uVar21 = *(uint *)(iVar18 + 0x10);
        uVar16 = *(uint *)(iVar18 + 0xc) | uVar21;
        if ((uVar20 & uVar16) != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar5)();
        }
        if ((uVar21 == 0) || (uVar16 + uVar20 == (2 << (bVar6 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar18,uVar25);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar13 = (undefined4 *)FUN_016d2bc8();
          uVar17 = *puVar13;
          FUN_016d6ac4(uStack_28,unaff_r4);
          *puVar13 = uVar17;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar18 + 0x10) = uVar20 + uVar21;
          return;
        }
        puVar26 = (uint *)(iVar18 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar26);
          uVar16 = *puVar26;
          if (uVar21 != uVar16) goto LAB_016d409c;
          bVar7 = (bool)hasExclusiveAccess(puVar26);
        } while (!bVar7);
        *puVar26 = uVar20 + uVar21;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar21 == uVar16) {
          return;
        }
      } while( true );
    }
  }
  return;
}

