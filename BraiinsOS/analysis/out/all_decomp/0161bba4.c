// FUN_0161bba4 @ 0161bba4 size=644 calls_out=8 calls_in=1
// strings: 

void FUN_0161bba4(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int unaff_r4;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint *puVar18;
  uint local_b4;
  int local_b0;
  int local_ac;
  undefined2 local_a8;
  undefined2 uStack_a6;
  undefined2 uStack_a4;
  undefined2 local_a2;
  undefined2 uStack_a0;
  undefined2 local_9e;
  undefined2 uStack_9c;
  undefined2 uStack_9a;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  char local_48 [4];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_28;
  
  iVar7 = param_3 * 0x20;
  local_b4 = 0;
  if ((0x7ffffff < param_3) || (iVar7 < 0)) {
LAB_0161be14:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(local_b4,iVar7);
  }
  iVar17 = 0;
  iVar16 = 1;
  if (iVar7 != 0) {
    iVar16 = thunk_FUN_016d4a50(iVar7);
    local_b4 = param_3;
    if (iVar16 == 0) {
      local_b4 = 1;
      goto LAB_0161be14;
    }
  }
  local_ac = 0;
  puVar4 = (undefined4 *)((uint)&local_88 | 2);
  puVar5 = (undefined4 *)((uint)&local_68 | 3);
  iVar7 = 1;
  local_b0 = iVar16;
  while( true ) {
    iVar13 = iVar7;
    uVar11 = iVar13 - 1;
    if (iVar13 - param_3 == 1) break;
    FUN_0161f8fc(local_48,param_2);
    if (local_48[0] == '\x01') {
      puVar5[2] = local_3c;
      puVar5[1] = local_40;
      *puVar5 = local_44;
      uVar6 = *puVar5;
      uVar8 = puVar5[1];
      puVar4[2] = puVar5[2];
      puVar4[1] = uVar8;
      *puVar4 = uVar6;
      uVar6 = *puVar4;
      uVar8 = puVar4[1];
      uVar9 = puVar4[2];
      uStack_a6 = (undefined2)uVar6;
      uStack_a4 = (undefined2)((uint)uVar6 >> 0x10);
      local_a2 = (undefined2)uVar8;
      uStack_a0 = (undefined2)((uint)uVar8 >> 0x10);
      local_9e = (undefined2)uVar9;
      uStack_9c = (undefined2)((uint)uVar9 >> 0x10);
      *param_1 = uVar6;
      param_1[2] = uVar9;
      param_1[1] = uVar8;
      if (local_b4 == 0) {
        return;
      }
      if (iVar16 == 0) {
        return;
      }
      iVar7 = FUN_016d3bc8();
      uVar11 = *(byte *)(iVar16 + -3) & 0x1f;
      if (((*(byte *)(iVar7 + 0x14) & 0x1f) != 0) ||
         (uVar12 = *(uint *)(iVar7 + 0x14) & 0xfffff000, iVar17 = uVar12 - 0x10, uVar12 == 0)) {
        iVar17 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar7 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar12 = (uint)(*(byte *)(iVar16 + -3) >> 5);
      iVar15 = *(int *)(iVar7 + 8) + 0x10;
      iVar13 = iVar17 * uVar11 + iVar17 + -4;
      iVar17 = iVar15 + iVar13;
      if (4 < uVar12) {
        if (uVar12 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar12 = *(uint *)(iVar17 + -4);
        if (uVar12 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar17 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar17 - iVar16) < uVar12) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar17 - uVar12) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar15 + iVar13) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar7 + 0x14);
      uVar12 = 1 << uVar11;
      *(undefined1 *)(iVar16 + -3) = 0xff;
      *(undefined2 *)(iVar16 + -2) = 0;
      do {
        uVar14 = *(uint *)(iVar7 + 0x10);
        uVar10 = *(uint *)(iVar7 + 0xc) | uVar14;
        if ((uVar12 & uVar10) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar14 == 0) || (uVar10 + uVar12 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar7,uVar11);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar4 = (undefined4 *)FUN_016d2bc8();
          uVar6 = *puVar4;
          FUN_016d6ac4(uStack_28,unaff_r4);
          *puVar4 = uVar6;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar7 + 0x10) = uVar12 + uVar14;
          return;
        }
        puVar18 = (uint *)(iVar7 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar18);
          uVar10 = *puVar18;
          if (uVar14 != uVar10) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar18);
        } while (!bVar3);
        *puVar18 = uVar12 + uVar14;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar14 == uVar10) {
          return;
        }
      } while( true );
    }
    FUN_016dd1aa(&local_68,(uint)local_48 | 1,0x20);
    local_88 = local_68;
    uStack_84 = uStack_64;
    uStack_80 = uStack_60;
    uStack_7c = uStack_5c;
    local_78 = local_58;
    uStack_74 = uStack_54;
    uStack_70 = uStack_50;
    uStack_6c = uStack_4c;
    local_a8 = (undefined2)local_68;
    uStack_a6 = (undefined2)((uint)local_68 >> 0x10);
    uStack_a4 = (undefined2)uStack_64;
    local_a2 = (undefined2)((uint)uStack_64 >> 0x10);
    uStack_a0 = (undefined2)uStack_60;
    local_9e = (undefined2)((uint)uStack_60 >> 0x10);
    uStack_9c = (undefined2)uStack_5c;
    uStack_9a = (undefined2)((uint)uStack_5c >> 0x10);
    local_98 = local_58;
    uStack_94 = uStack_54;
    uStack_90 = uStack_50;
    uStack_8c = uStack_4c;
    if (uVar11 == local_b4) {
      FUN_01622468(&local_b4);
      iVar16 = local_b0;
    }
    FUN_016dd1aa(iVar16 + iVar17,&local_a8,0x20);
    iVar17 = iVar17 + 0x20;
    iVar7 = iVar13 + 1;
    local_ac = iVar13;
  }
  local_a8 = (undefined2)local_88;
  uStack_a6 = (undefined2)((uint)local_88 >> 0x10);
  uStack_a4 = (undefined2)uStack_84;
  local_a2 = (undefined2)((uint)uStack_84 >> 0x10);
  uStack_a0 = (undefined2)uStack_80;
  local_9e = (undefined2)((uint)uStack_80 >> 0x10);
  uStack_9c = (undefined2)uStack_7c;
  uStack_9a = (undefined2)((uint)uStack_7c >> 0x10);
  local_98 = local_78;
  uStack_94 = uStack_74;
  uStack_90 = uStack_70;
  uStack_8c = uStack_6c;
  if (uVar11 < local_b4) {
    if (iVar13 == 1) {
      thunk_FUN_016d3fb4(iVar16);
      iVar16 = 1;
      goto LAB_0161bdd0;
    }
    iVar16 = thunk_FUN_016d4ea4(iVar16,iVar17);
    if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar17);
    }
  }
  if (0xff < uVar11) {
    thunk_FUN_016d3fb4();
    FUN_01613578(param_1,uVar11,&DAT_00569af0,&DAT_018abad0);
    return;
  }
LAB_0161bdd0:
  param_1[1] = iVar16;
  param_1[2] = uVar11;
  *param_1 = 0x8000000a;
  return;
}

