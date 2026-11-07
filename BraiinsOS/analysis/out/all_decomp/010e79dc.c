// FUN_010e79dc @ 010e79dc size=512 calls_out=4 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_010e79dc(int *param_1,int *param_2)

{
  undefined2 uVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int unaff_r4;
  int *piVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  undefined2 *puVar18;
  uint uVar19;
  uint *puVar20;
  int *local_44;
  int local_40;
  int local_3c;
  undefined2 *local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  local_40 = 3;
  local_44 = param_2;
  FUN_010e1aa0(&local_30,&local_44);
  iVar12 = iStack_28;
  iVar7 = iStack_2c;
  iVar8 = local_40;
  piVar5 = local_44;
  if (local_30 != -0x7ffffff6) {
    param_1[1] = local_30;
    param_1[2] = iStack_2c;
    param_1[3] = iStack_28;
    *param_1 = 0;
    return;
  }
  if (iStack_2c == 0) {
    FUN_01613578(param_1 + 1,0,&DAT_01885c40,&DAT_018ab990);
    *param_1 = 0;
    return;
  }
  if (local_40 == 0) {
    FUN_01613578(&local_30,1,&DAT_01885c40,&DAT_018ab990);
  }
  else {
    piVar14 = (int *)*local_44;
    if ((uint)(local_44[1] - (int)piVar14) < 8) {
      param_1[2] = (int)piVar14;
      param_1[3] = 8;
      *param_1 = 0;
      param_1[1] = -0x7ffffffb;
      goto joined_r0x010e7a5c;
    }
    local_30 = -0x7ffffffb;
    FUN_00f2cc28(&local_30);
    piVar6 = local_44;
    iVar10 = *piVar14;
    iVar11 = piVar14[1];
    *piVar5 = (int)(piVar14 + 2);
    if (iVar8 != 1) {
      puVar18 = (undefined2 *)*local_44;
      if ((uint)(local_44[1] - (int)puVar18) < 2) {
        local_3c = -0x7ffffffb;
        local_34 = 2;
        local_38 = puVar18;
      }
      else {
        local_30 = -0x7ffffffb;
        FUN_00f2cc28(&local_30);
        uVar1 = *puVar18;
        *piVar6 = (int)(puVar18 + 1);
        FUN_0161be60(&local_3c,piVar6,uVar1);
        if (local_3c == -0x7ffffff6) {
          if (local_38 != (undefined2 *)0x0) {
            param_1[4] = iVar10;
            *param_1 = iVar7;
            param_1[1] = iVar12;
            param_1[2] = (int)local_38;
            param_1[3] = local_34;
            param_1[5] = iVar11;
            return;
          }
          goto LAB_010e7b40;
        }
      }
      param_1[1] = local_3c;
      param_1[2] = (int)local_38;
      *param_1 = 0;
      param_1[3] = local_34;
      goto joined_r0x010e7a5c;
    }
LAB_010e7b40:
    FUN_01613578(&local_30,2,&DAT_01885c40,&DAT_018ab990);
  }
  *param_1 = 0;
  param_1[1] = local_30;
  param_1[2] = iStack_2c;
  param_1[3] = iStack_28;
joined_r0x010e7a5c:
  if (iVar12 == 0) {
    return;
  }
  if (iVar7 == 0) {
    return;
  }
  iVar8 = FUN_016d3bc8();
  uVar19 = *(byte *)(iVar7 + -3) & 0x1f;
  if (((*(byte *)(iVar8 + 0x14) & 0x1f) != 0) ||
     (uVar16 = *(uint *)(iVar8 + 0x14) & 0xfffff000, iVar12 = uVar16 - 0x10, uVar16 == 0)) {
    iVar12 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar8 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar16 = (uint)(*(byte *)(iVar7 + -3) >> 5);
  iVar11 = *(int *)(iVar8 + 8) + 0x10;
  iVar10 = iVar12 * uVar19 + iVar12 + -4;
  iVar12 = iVar11 + iVar10;
  if (4 < uVar16) {
    if (uVar16 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar16 = *(uint *)(iVar12 + -4);
    if (uVar16 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar12 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar12 - iVar7) < uVar16) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar12 - uVar16) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar11 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar8 + 0x14);
  uVar16 = 1 << uVar19;
  *(undefined1 *)(iVar7 + -3) = 0xff;
  *(undefined2 *)(iVar7 + -2) = 0;
  do {
    uVar17 = *(uint *)(iVar8 + 0x10);
    uVar13 = *(uint *)(iVar8 + 0xc) | uVar17;
    if ((uVar16 & uVar13) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar17 == 0) || (uVar13 + uVar16 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&iStack_28,iVar8,uVar19);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar9 = (undefined4 *)FUN_016d2bc8();
      uVar15 = *puVar9;
      FUN_016d6ac4(iStack_28,unaff_r4);
      *puVar9 = uVar15;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar8 + 0x10) = uVar16 + uVar17;
      return;
    }
    puVar20 = (uint *)(iVar8 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar20);
      uVar13 = *puVar20;
      if (uVar17 != uVar13) goto LAB_016d409c;
      bVar4 = (bool)hasExclusiveAccess(puVar20);
    } while (!bVar4);
    *puVar20 = uVar16 + uVar17;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar17 == uVar13) {
      return;
    }
  } while( true );
}

