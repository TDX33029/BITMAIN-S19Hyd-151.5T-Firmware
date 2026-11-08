// FUN_01610230 @ 01610230 size=496 calls_out=5 calls_in=1
// strings: 

void FUN_01610230(int *param_1,int *param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int unaff_r4;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int local_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  undefined4 uStack_28;
  
  piVar13 = (int *)*param_2;
  if ((uint)(param_2[1] - (int)piVar13) < 4) {
    param_1[1] = -0x7ffffffb;
    param_1[2] = (int)piVar13;
    *param_1 = 0;
    param_1[3] = 4;
  }
  else {
    local_54 = -0x7ffffffb;
    FUN_00f2cc28(&local_54);
    iVar14 = *piVar13;
    *param_2 = (int)(piVar13 + 1);
    FUN_01622628(&local_54,param_2);
    iVar5 = iStack_4c;
    iVar4 = local_50;
    if (local_54 != -0x7ffffff6) {
      param_1[1] = local_54;
      param_1[2] = local_50;
      param_1[3] = iStack_4c;
      *param_1 = 0;
      return;
    }
    if (local_50 == 0) {
      FUN_01613578(param_1 + 1,1,&DAT_018ab9f8,&DAT_018ab990);
      *param_1 = 0;
      return;
    }
    piVar13 = (int *)*param_2;
    if ((uint)(param_2[1] - (int)piVar13) < 4) {
      param_1[1] = -0x7ffffffb;
      param_1[2] = (int)piVar13;
      param_1[3] = 4;
      *param_1 = 0;
      local_54 = -0x7ffffff6;
    }
    else {
      local_54 = -0x7ffffffb;
      FUN_00f2cc28(&local_54);
      iVar9 = *piVar13;
      *param_2 = (int)(piVar13 + 1);
      FUN_0161f8fc(&local_54,param_2);
      if ((char)local_54 != '\x01') {
        FUN_016dd1aa(&local_78,(uint)&local_54 | 1,0x20);
        param_1[4] = local_78;
        param_1[5] = iStack_74;
        param_1[6] = iStack_70;
        param_1[7] = iStack_6c;
        param_1[8] = local_68;
        param_1[9] = iStack_64;
        param_1[10] = iStack_60;
        param_1[0xb] = iStack_5c;
        param_1[3] = iVar9;
        *param_1 = iVar4;
        param_1[1] = iVar5;
        param_1[2] = iVar14;
        return;
      }
      param_1[3] = iStack_48;
      param_1[2] = iStack_4c;
      param_1[1] = local_50;
      *param_1 = 0;
    }
    if (iVar5 != 0) {
      if (iVar4 == 0) {
        return;
      }
      iVar5 = FUN_016d3bc8();
      uVar15 = *(byte *)(iVar4 + -3) & 0x1f;
      if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
         (uVar10 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar14 = uVar10 - 0x10, uVar10 == 0)) {
        iVar14 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar10 = (uint)(*(byte *)(iVar4 + -3) >> 5);
      iVar12 = *(int *)(iVar5 + 8) + 0x10;
      iVar9 = iVar14 * uVar15 + iVar14 + -4;
      iVar14 = iVar12 + iVar9;
      if (4 < uVar10) {
        if (uVar10 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar10 = *(uint *)(iVar14 + -4);
        if (uVar10 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar14 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar14 - iVar4) < uVar10) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar14 - uVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar12 + iVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar5 + 0x14);
      uVar10 = 1 << uVar15;
      *(undefined1 *)(iVar4 + -3) = 0xff;
      *(undefined2 *)(iVar4 + -2) = 0;
      do {
        uVar11 = *(uint *)(iVar5 + 0x10);
        uVar7 = *(uint *)(iVar5 + 0xc) | uVar11;
        if ((uVar10 & uVar7) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar11 == 0) || (uVar7 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar5,uVar15);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar6 = (undefined4 *)FUN_016d2bc8();
          uVar8 = *puVar6;
          FUN_016d6ac4(uStack_28,unaff_r4);
          *puVar6 = uVar8;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar5 + 0x10) = uVar10 + uVar11;
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
        *puVar16 = uVar10 + uVar11;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar11 == uVar7) {
          return;
        }
      } while( true );
    }
  }
  return;
}

