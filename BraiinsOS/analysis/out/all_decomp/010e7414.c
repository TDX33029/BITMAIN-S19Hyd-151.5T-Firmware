// FUN_010e7414 @ 010e7414 size=548 calls_out=6 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_010e7414(undefined4 *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int unaff_r4;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined2 *puVar14;
  uint uVar15;
  undefined2 *puVar16;
  uint *puVar17;
  undefined4 *local_44;
  int local_40;
  int local_3c;
  undefined2 *local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  puVar14 = (undefined2 *)*param_2;
  local_40 = 2;
  if ((uint)(param_2[1] - (int)puVar14) < 2) {
    local_3c = -0x7ffffffb;
    local_34 = 2;
    local_38 = puVar14;
LAB_010e74d4:
    param_1[1] = local_3c;
    param_1[2] = local_38;
    *param_1 = 0;
    param_1[3] = local_34;
    return;
  }
  local_30 = -0x7ffffffb;
  local_44 = param_2;
  FUN_00f2cc28(&local_30);
  uVar1 = *puVar14;
  *param_2 = puVar14 + 1;
  FUN_010e576c(&local_3c,param_2,uVar1);
  iVar5 = local_34;
  puVar14 = local_38;
  if (local_3c != -0x7ffffff6) goto LAB_010e74d4;
  if (local_38 == (undefined2 *)0x0) {
    FUN_01613578(param_1 + 1,0,&DAT_01885c38,&DAT_018ab990);
    *param_1 = 0;
    return;
  }
  FUN_010e1aa0(&local_30,&local_44);
  iVar11 = iStack_28;
  iVar7 = iStack_2c;
  puVar6 = local_44;
  if (local_30 != -0x7ffffff6) {
    param_1[1] = local_30;
    param_1[2] = iStack_2c;
    param_1[3] = iStack_28;
    *param_1 = 0;
    if (iVar5 == 0) {
      return;
    }
    goto LAB_010e75c0;
  }
  if (iStack_2c == 0) {
    FUN_01613578(&local_30,1,&DAT_01885c38,&DAT_018ab990);
    *param_1 = 0;
    param_1[1] = local_30;
    param_1[2] = iStack_2c;
    param_1[3] = iStack_28;
  }
  else {
    if (local_40 == 0) {
LAB_010e755c:
      FUN_01613578(&local_30,2,&DAT_01885c38,&DAT_018ab990);
      *param_1 = 0;
      param_1[1] = local_30;
      param_1[2] = iStack_2c;
      param_1[3] = iStack_28;
    }
    else {
      puVar16 = (undefined2 *)*local_44;
      if ((uint)(local_44[1] - (int)puVar16) < 2) {
        local_3c = -0x7ffffffb;
        local_34 = 2;
        local_38 = puVar16;
      }
      else {
        local_30 = -0x7ffffffb;
        FUN_00f2cc28(&local_30);
        uVar1 = *puVar16;
        *puVar6 = puVar16 + 1;
        FUN_010e5ca0(&local_3c,puVar6,uVar1);
        if (local_3c == -0x7ffffff6) {
          if (local_38 != (undefined2 *)0x0) {
            *param_1 = puVar14;
            param_1[1] = iVar5;
            param_1[2] = iVar7;
            param_1[3] = iVar11;
            param_1[4] = local_38;
            param_1[5] = local_34;
            return;
          }
          goto LAB_010e755c;
        }
      }
      param_1[1] = local_3c;
      param_1[2] = local_38;
      *param_1 = 0;
      param_1[3] = local_34;
    }
    if (iVar11 != 0) {
      thunk_FUN_016d3fb4(iVar7);
    }
  }
  if (iVar5 == 0) {
    return;
  }
LAB_010e75c0:
  if (puVar14 == (undefined2 *)0x0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar15 = *(byte *)((int)puVar14 + -3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar7 = uVar10 - 0x10, uVar10 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)((int)puVar14 + -3) >> 5);
  iVar13 = *(int *)(iVar5 + 8) + 0x10;
  iVar11 = iVar7 * uVar15 + iVar7 + -4;
  iVar7 = iVar13 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar10 = *(uint *)(iVar7 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar7 - (int)puVar14) < uVar10) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar7 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar5 + 0x14);
  uVar10 = 1 << uVar15;
  *(undefined1 *)((int)puVar14 + -3) = 0xff;
  puVar14[-1] = 0;
  do {
    uVar12 = *(uint *)(iVar5 + 0x10);
    uVar8 = *(uint *)(iVar5 + 0xc) | uVar12;
    if ((uVar10 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar12 == 0) || (uVar8 + uVar10 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&iStack_28,iVar5,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar6;
      FUN_016d6ac4(iStack_28,unaff_r4);
      *puVar6 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar5 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar17 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar8 = *puVar17;
      if (uVar12 != uVar8) goto LAB_016d409c;
      bVar4 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar4);
    *puVar17 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar8) {
      return;
    }
  } while( true );
}

