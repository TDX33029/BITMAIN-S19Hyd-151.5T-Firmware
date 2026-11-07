// FUN_00619b10 @ 00619b10 size=512 calls_out=8 calls_in=1
// strings: 

void FUN_00619b10(char *param_1,undefined4 param_2,int param_3,int *param_4,int param_5)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int unaff_r4;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  int local_78;
  int local_74;
  int local_70;
  int local_68;
  int local_64;
  undefined1 auStack_48 [4];
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  char local_38;
  undefined2 local_37;
  char local_35;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 uStack_28;
  
  if (*(int *)(param_3 + 0xf0) == 0) {
    iVar10 = 0;
    local_74 = 1;
    iVar14 = 0;
  }
  else {
    FUN_006008c8((uint)&local_38 | 4,*(int *)(param_3 + 0xf0),*(undefined4 *)(param_3 + 0xf4));
    iVar10 = local_2c;
    iVar7 = local_30;
    local_74 = local_30;
    iVar14 = local_34;
    if (local_34 == -0x80000000) {
      if (local_2c < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(0,local_2c);
      }
      if (local_2c == 0) {
        iVar14 = 0;
        iVar4 = 1;
      }
      else {
        iVar4 = thunk_FUN_016d4a50(local_2c);
        iVar14 = iVar10;
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar10);
        }
      }
      FUN_016dd1aa(iVar4,iVar7,iVar10);
      local_74 = iVar4;
    }
  }
  uVar5 = param_4[8];
  local_78 = iVar14;
  local_70 = iVar10;
  if (uVar5 != 0 || param_4[9] != 0) {
    if (*(ushort *)(param_5 + 0x92) < 5) {
      uVar5 = uVar5 - 1;
      if (*(uint *)(param_5 + 0x74) <= uVar5) goto LAB_00619cb4;
    }
    else if (*(uint *)(param_5 + 0x74) <= uVar5) goto LAB_00619cb4;
    FUN_0060c1b4(&local_68,*(int *)(param_5 + 0x70) + uVar5 * 0x10);
    if (local_68 != 0x2e || local_64 != 0) {
      FUN_00611d9c(&local_38,param_2,*(undefined1 *)(param_3 + 0xd9),
                   *(undefined4 *)(param_3 + 0x104),&local_68);
      iVar10 = local_74;
      if (local_38 != 'O') {
        param_1[3] = local_35;
        *(undefined2 *)(param_1 + 1) = local_37;
        *(int *)(param_1 + 4) = local_34;
        *(int *)(param_1 + 8) = local_30;
        *(int *)(param_1 + 0xc) = local_2c;
        *param_1 = local_38;
        if (iVar14 == 0) {
          return;
        }
        if (local_74 == 0) {
          return;
        }
        iVar14 = FUN_016d3bc8();
        uVar5 = *(byte *)(iVar10 + -3) & 0x1f;
        if (((*(byte *)(iVar14 + 0x14) & 0x1f) != 0) ||
           (uVar11 = *(uint *)(iVar14 + 0x14) & 0xfffff000, iVar7 = uVar11 - 0x10, uVar11 == 0)) {
          iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar14 + 0x14) & 0xfff) >> 6) * 2)
                  << 4;
        }
        uVar11 = (uint)(*(byte *)(iVar10 + -3) >> 5);
        iVar13 = *(int *)(iVar14 + 8) + 0x10;
        iVar4 = iVar7 * uVar5 + iVar7 + -4;
        iVar7 = iVar13 + iVar4;
        if (4 < uVar11) {
          if (uVar11 != 5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar1)();
          }
          uVar11 = *(uint *)(iVar7 + -4);
          if (uVar11 < 5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar1)();
          }
          if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar1)();
          }
        }
        if ((uint)(iVar7 - iVar10) < uVar11) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar1)();
        }
        if (*(char *)(iVar7 - uVar11) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar1)();
        }
        if (*(char *)(iVar13 + iVar4) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar1)();
        }
        bVar2 = *(byte *)(iVar14 + 0x14);
        uVar11 = 1 << uVar5;
        *(undefined1 *)(iVar10 + -3) = 0xff;
        *(undefined2 *)(iVar10 + -2) = 0;
        do {
          uVar12 = *(uint *)(iVar14 + 0x10);
          uVar8 = *(uint *)(iVar14 + 0xc) | uVar12;
          if ((uVar11 & uVar8) != 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar1)();
          }
          if ((uVar12 == 0) || (uVar8 + uVar11 == (2 << (bVar2 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&uStack_28,iVar14,uVar5);
            FUN_016dddc0(&DAT_018ddd48);
            if (unaff_r4 == 0) {
              return;
            }
            puVar6 = (undefined4 *)FUN_016d2bc8();
            uVar9 = *puVar6;
            FUN_016d6ac4(uStack_28,unaff_r4);
            *puVar6 = uVar9;
            return;
          }
          if (DAT_018ddb0b == '\0') {
            *(uint *)(iVar14 + 0x10) = uVar11 + uVar12;
            return;
          }
          puVar15 = (uint *)(iVar14 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar15);
            uVar8 = *puVar15;
            if (uVar12 != uVar8) goto LAB_016d409c;
            bVar3 = (bool)hasExclusiveAccess(puVar15);
          } while (!bVar3);
          *puVar15 = uVar11 + uVar12;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar12 == uVar8) {
            return;
          }
        } while( true );
      }
      FUN_006008c8((uint)auStack_48 | 4,local_34,local_30);
      FUN_005e8bd8(&local_78,local_40,local_3c);
      if ((local_44 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(local_40);
      }
    }
  }
LAB_00619cb4:
                    /* WARNING: Could not recover jumptable at 0x00619cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00619cc4 + *(int *)(&DAT_00619cc4 + *param_4 * 4)))();
  return;
}

