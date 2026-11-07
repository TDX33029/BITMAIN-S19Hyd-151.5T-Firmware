// FUN_0119e8b4 @ 0119e8b4 size=344 calls_out=5 calls_in=1
// strings: additionalProperties

void FUN_0119e8b4(int *param_1,undefined4 param_2,int param_3,int *param_4)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int unaff_r4;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint *puVar16;
  undefined8 uVar17;
  int local_d8;
  int iStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  int iStack_98;
  int local_94;
  int local_90;
  int local_88;
  int local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  FUN_011e4414(&local_58,param_3,param_2);
  if (local_58 == 0) {
    *param_1 = 0;
    param_1[1] = local_54;
    if (*param_4 != 0) {
      iVar4 = param_4[1];
      if (iVar4 == 0) {
        return;
      }
      iVar5 = FUN_016d3bc8();
      uVar13 = *(byte *)(iVar4 + -3) & 0x1f;
      if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
         (uVar9 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar8 = uVar9 - 0x10, uVar9 == 0)) {
        iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar9 = (uint)(*(byte *)(iVar4 + -3) >> 5);
      iVar12 = *(int *)(iVar5 + 8) + 0x10;
      iVar10 = iVar8 * uVar13 + iVar8 + -4;
      iVar8 = iVar12 + iVar10;
      if (4 < uVar9) {
        if (uVar9 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar9 = *(uint *)(iVar8 + -4);
        if (uVar9 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar8 - iVar4) < uVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar8 - uVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar5 + 0x14);
      uVar9 = 1 << uVar13;
      *(undefined1 *)(iVar4 + -3) = 0xff;
      *(undefined2 *)(iVar4 + -2) = 0;
      do {
        uVar11 = *(uint *)(iVar5 + 0x10);
        uVar7 = *(uint *)(iVar5 + 0xc) | uVar11;
        if ((uVar9 & uVar7) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar11 == 0) || (uVar7 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar5,uVar13);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar6 = (undefined4 *)FUN_016d2bc8();
          uVar14 = *puVar6;
          FUN_016d6ac4(uStack_28,unaff_r4);
          *puVar6 = uVar14;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar5 + 0x10) = uVar9 + uVar11;
          return;
        }
        puVar16 = (uint *)(iVar5 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar16);
          uVar7 = *puVar16;
          if (uVar11 != uVar7) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar16);
        } while (!bVar3);
        *puVar16 = uVar9 + uVar11;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar11 == uVar7) {
          return;
        }
      } while( true );
    }
  }
  else {
    local_80 = local_50;
    uStack_7c = uStack_4c;
    uStack_78 = uStack_48;
    uStack_74 = uStack_44;
    local_70 = uStack_40;
    local_6c = local_3c;
    uStack_68 = uStack_38;
    uStack_64 = uStack_34;
    uStack_60 = uStack_30;
    uStack_5c = uStack_2c;
    iVar4 = *param_4;
    iVar5 = param_4[1];
    iVar8 = param_4[2];
    uVar14 = *(undefined4 *)(param_3 + 0x38);
    uVar15 = *(undefined4 *)(param_3 + 0x3c);
    local_84 = local_54;
    local_88 = local_58;
    uVar17 = FUN_0123ab30(uVar14,uVar15,"additionalProperties",0x14);
    local_a0 = FUN_0123ab30(uVar14,uVar15,&DAT_00569b28,8);
    local_d8 = local_88;
    iStack_d4 = local_84;
    uStack_d0 = local_80;
    uStack_cc = uStack_7c;
    uStack_c8 = uStack_78;
    uStack_c4 = uStack_74;
    local_c0 = local_70;
    uStack_bc = local_6c;
    uStack_b8 = uStack_68;
    uStack_b4 = uStack_64;
    uStack_b0 = uStack_60;
    uStack_ac = uStack_5c;
    iStack_98 = iVar4;
    local_94 = iVar5;
    local_90 = iVar8;
    local_a8 = uVar17;
    iVar4 = thunk_FUN_016d4a50(0x50);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x50);
    }
    FUN_016dd1aa(iVar4,&local_d8,0x50);
    *param_1 = iVar4;
    param_1[1] = (int)&DAT_01889448;
  }
  return;
}

