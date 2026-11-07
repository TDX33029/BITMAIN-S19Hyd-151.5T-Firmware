// FUN_00823d64 @ 00823d64 size=492 calls_out=7 calls_in=1
// strings: PSU: short reply | PSU: short reply

void FUN_00823d64(int *param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  undefined1 uVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  int unaff_r4;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int unaff_r9;
  uint uVar15;
  uint *puVar16;
  undefined4 local_44;
  undefined1 *local_40;
  uint local_3c;
  char local_34;
  undefined1 local_30;
  char local_2f;
  char local_2e;
  undefined4 uStack_28;
  
  FUN_00873008(&local_44);
  puVar5 = local_40;
  iVar8 = local_44;
  if (local_44 == -0x80000000) {
    *param_1 = -0x80000000;
    param_1[1] = (int)local_40;
    return;
  }
  FUN_00821908(&local_44);
  if ((char)local_44 != '\x01') {
    if (local_34 == local_44._1_1_) {
      if (param_4 == '\0') {
        if (local_3c != 0) {
LAB_00823e50:
          if ((int)local_3c < 1) {
            uVar7 = 0;
            goto LAB_00823e5c;
          }
          uVar1 = *puVar5;
          unaff_r9 = local_3c - 1;
          if (unaff_r9 == 0) {
            iVar6 = 1;
            iVar13 = 0;
          }
          else {
            iVar6 = thunk_FUN_016d4a50(unaff_r9);
            if (iVar6 == 0) {
LAB_00823f1c:
              uVar7 = 1;
LAB_00823e5c:
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(uVar7,unaff_r9);
            }
            iVar13 = unaff_r9;
          }
          FUN_016dd1aa(iVar6,puVar5 + 1,unaff_r9);
          *(undefined1 *)(param_1 + 3) = uVar1;
          *param_1 = iVar13;
          param_1[1] = iVar6;
          param_1[2] = unaff_r9;
          goto joined_r0x00823ebc;
        }
        local_40 = (undefined1 *)FUN_00808f1c("PSU: short reply",0x10);
      }
      else if (param_4 == '\x01') {
        if (1 < local_3c) {
          uVar1 = *puVar5;
          unaff_r9 = local_3c - 2;
          if (unaff_r9 == 0) {
            iVar13 = 0;
            iVar6 = 1;
          }
          else {
            iVar6 = thunk_FUN_016d4a50(unaff_r9);
            if (iVar6 == 0) goto LAB_00823f1c;
            iVar13 = unaff_r9;
          }
          FUN_016dd1aa(iVar6,puVar5 + 2,unaff_r9);
          *(undefined1 *)(param_1 + 3) = uVar1;
          *param_1 = iVar13;
          param_1[1] = iVar6;
          param_1[2] = unaff_r9;
          goto joined_r0x00823ebc;
        }
        local_40 = (undefined1 *)FUN_00808f1c(&DAT_00343175,0x15);
      }
      else {
        if (local_3c != 0) goto LAB_00823e50;
        local_40 = (undefined1 *)FUN_00808f1c("PSU: short reply",0x10);
      }
    }
    else {
      local_2e = local_44._1_1_;
      local_2f = local_34;
      local_30 = 4;
      local_40 = (undefined1 *)FUN_0080b0cc(&local_30);
    }
  }
  *param_1 = -0x80000000;
  param_1[1] = (int)local_40;
joined_r0x00823ebc:
  if (iVar8 == 0) {
    return;
  }
  if (puVar5 == (undefined1 *)0x0) {
    return;
  }
  iVar8 = FUN_016d3bc8();
  uVar15 = (byte)puVar5[-3] & 0x1f;
  if (((*(byte *)(iVar8 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar8 + 0x14) & 0xfffff000, iVar13 = uVar11 - 0x10, uVar11 == 0)) {
    iVar13 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar8 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)((byte)puVar5[-3] >> 5);
  iVar14 = *(int *)(iVar8 + 8) + 0x10;
  iVar6 = iVar13 * uVar15 + iVar13 + -4;
  iVar13 = iVar14 + iVar6;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar11 = *(uint *)(iVar13 + -4);
    if (uVar11 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar13 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar13 - (int)puVar5) < uVar11) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar13 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar14 + iVar6) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar8 + 0x14);
  uVar11 = 1 << uVar15;
  puVar5[-3] = 0xff;
  *(undefined2 *)(puVar5 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar8 + 0x10);
    uVar10 = *(uint *)(iVar8 + 0xc) | uVar12;
    if ((uVar11 & uVar10) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar12 == 0) || (uVar10 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar8,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar9 = (undefined4 *)FUN_016d2bc8();
      uVar7 = *puVar9;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar9 = uVar7;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar8 + 0x10) = uVar11 + uVar12;
      return;
    }
    puVar16 = (uint *)(iVar8 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar10 = *puVar16;
      if (uVar12 != uVar10) goto LAB_016d409c;
      bVar4 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar4);
    *puVar16 = uVar11 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar10) {
      return;
    }
  } while( true );
}

