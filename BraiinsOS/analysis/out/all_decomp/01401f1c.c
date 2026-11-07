// FUN_01401f1c @ 01401f1c size=624 calls_out=7 calls_in=3
// strings: BUG: thread name may not contain interior null bytes

void FUN_01401f1c(char *param_1,uint param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  undefined8 uVar16;
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  
  iVar14 = param_2 + 1;
  if (param_2 == 0xfffffffe || iVar14 < -1) {
                    /* WARNING: Subroutine does not return */
    FUN_00600c10();
  }
  iVar4 = thunk_FUN_016d4a50(iVar14);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar14);
  }
  FUN_016dd1aa(iVar4,param_1,param_2);
  local_30 = iVar14;
  local_2c = iVar4;
  local_28 = param_2;
  if (param_2 < 8) {
    if (param_2 != 0) {
      if (*param_1 == '\0') {
        local_24 = 0;
      }
      else {
        if (param_2 == 1) goto LAB_014020b0;
        if (param_1[1] == '\0') {
          local_24 = 1;
        }
        else {
          if (param_2 == 2) goto LAB_014020b0;
          if (param_1[2] == '\0') {
            local_24 = 2;
          }
          else {
            if (param_2 == 3) goto LAB_014020b0;
            if (param_1[3] == '\0') {
              local_24 = 3;
            }
            else {
              if (param_2 == 4) goto LAB_014020b0;
              if (param_1[4] == '\0') {
                local_24 = 4;
              }
              else {
                if (param_2 == 5) goto LAB_014020b0;
                if (param_1[5] == '\0') {
                  local_24 = 5;
                }
                else {
                  if ((param_2 == 6) || (param_1[6] != '\0')) goto LAB_014020b0;
                  local_24 = 6;
                }
              }
            }
          }
        }
      }
LAB_01402118:
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("BUG: thread name may not contain interior null bytes",0x34,&local_30,
                   &DAT_018a3688,&DAT_018a3678);
    }
    goto LAB_014020b0;
  }
  uVar5 = ((uint)(param_1 + 3) & 0xfffffffc) - (int)param_1;
  if (uVar5 == 0) {
    uVar5 = 0;
LAB_01402040:
    do {
      uVar8 = *(uint *)(param_1 + uVar5);
      uVar13 = *(uint *)((int)(param_1 + uVar5) + 4);
      if (((0x1010100 - uVar8 | uVar8) & 0x80808080 & (0x1010100 - uVar13 | uVar13)) != 0x80808080)
      break;
      uVar5 = uVar5 + 8;
    } while (uVar5 <= param_2 - 8);
  }
  else {
    iVar14 = 0;
    do {
      if (param_1[-iVar14] == '\0') {
        local_24 = -iVar14;
        goto LAB_01402118;
      }
      iVar14 = iVar14 + -1;
    } while ((int)param_1 - ((uint)(param_1 + 3) & 0xfffffffc) != iVar14);
    if (uVar5 <= param_2 - 8) goto LAB_01402040;
  }
  if (param_2 != uVar5) {
    iVar14 = 0;
    do {
      if (param_1[iVar14 + uVar5] == '\0') {
        local_24 = iVar14 + uVar5;
        goto LAB_01402118;
      }
      iVar14 = iVar14 + 1;
    } while (param_2 - uVar5 != iVar14);
  }
LAB_014020b0:
  uVar16 = FUN_00600c38(&local_30);
  puVar6 = (undefined1 *)uVar16;
  FUN_016d380e(0xf,puVar6,0,0,0);
  *puVar6 = 0;
  if ((int)((ulonglong)uVar16 >> 0x20) == 0) {
    return;
  }
  if (puVar6 == (undefined1 *)0x0) {
    return;
  }
  iVar14 = FUN_016d3bc8();
  uVar5 = (byte)puVar6[-3] & 0x1f;
  if (((*(byte *)(iVar14 + 0x14) & 0x1f) != 0) ||
     (uVar8 = *(uint *)(iVar14 + 0x14) & 0xfffff000, iVar4 = uVar8 - 0x10, uVar8 == 0)) {
    iVar4 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar14 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar8 = (uint)((byte)puVar6[-3] >> 5);
  iVar12 = *(int *)(iVar14 + 8) + 0x10;
  iVar10 = iVar4 * uVar5 + iVar4 + -4;
  iVar4 = iVar12 + iVar10;
  if (4 < uVar8) {
    if (uVar8 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar8 = *(uint *)(iVar4 + -4);
    if (uVar8 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar4 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar4 - (int)puVar6) < uVar8) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar4 - uVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar14 + 0x14);
  uVar8 = 1 << uVar5;
  puVar6[-3] = 0xff;
  *(undefined2 *)(puVar6 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar14 + 0x10);
    uVar13 = *(uint *)(iVar14 + 0xc) | uVar11;
    if ((uVar8 & uVar13) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar11 == 0) || (uVar13 + uVar8 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar14,uVar5);
      FUN_016dddc0(&DAT_018ddd48);
      if (local_24 == 0) {
        return;
      }
      puVar7 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar7;
      FUN_016d6ac4(local_28,local_24);
      *puVar7 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar14 + 0x10) = uVar8 + uVar11;
      return;
    }
    puVar15 = (uint *)(iVar14 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar13 = *puVar15;
      if (uVar11 != uVar13) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar3);
    *puVar15 = uVar8 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar13) {
      return;
    }
  } while( true );
}

