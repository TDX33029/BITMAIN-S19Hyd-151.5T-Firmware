// FUN_013c62ac @ 013c62ac size=1928 calls_out=8 calls_in=2
// strings: 

void FUN_013c62ac(int *param_1,int param_2,undefined4 param_3,undefined4 *param_4,undefined4 param_5
                 ,int param_6,uint param_7,uint param_8,int *param_9)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  undefined4 uVar8;
  undefined *puVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  bool bVar20;
  undefined *local_74;
  uint *local_58;
  int local_54;
  int local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint *local_40;
  code *local_3c;
  uint *local_38;
  code *local_34;
  uint *local_30;
  code *local_2c;
  
  uVar3 = 0;
  param_4[0xd] = 0;
  param_4[6] = 0;
  if (param_7 == 0) {
    local_44 = 0;
    local_74 = &DAT_018942e8;
LAB_013c6e08:
    uVar17 = local_44;
LAB_013c6e0c:
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar3,uVar17,local_74);
  }
  uVar10 = 9;
  cVar1 = *(char *)(param_2 + 0x15c);
  pbVar7 = (byte *)(param_6 + 8);
  if ((*pbVar7 & 2) != 0) {
    if (param_7 < 0xd) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(9,0xd,param_7,&DAT_01894358);
    }
    uVar3 = *(uint *)(param_6 + 0x11);
    if (uVar3 != 0) {
      if (0x3fffffff < uVar3) {
        puVar9 = &DAT_01894348;
LAB_013c6df0:
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(puVar9);
      }
      if (0x3ffffffc < uVar3) {
        puVar9 = &DAT_01894338;
        goto LAB_013c6df0;
      }
      uVar10 = uVar3 * 4 + 0xd;
    }
  }
  if (param_7 < uVar10) {
    puVar9 = &DAT_01894328;
    uVar3 = param_7;
    goto LAB_013c6c60;
  }
  param_7 = param_7 - uVar10;
  if (param_7 == 0) {
    uVar5 = 0;
  }
  else {
    pbVar13 = pbVar7 + uVar10;
    iVar18 = param_4[1];
    local_44 = param_4[2];
    iVar16 = param_4[4];
    uVar17 = param_4[5];
    local_74 = &DAT_01894268;
    uVar4 = 0;
    uVar5 = 0;
    do {
      uVar3 = 0;
      uVar19 = 0;
      uVar12 = 0;
      do {
        bVar2 = pbVar13[uVar12];
        if ((uint)(int)(char)bVar2 < 0x80000000) {
          uVar10 = uVar12 + 1;
          if (param_7 <= uVar12) {
            puVar9 = &DAT_01894318;
            uVar3 = param_7;
            goto LAB_013c6c60;
          }
          uVar3 = uVar3 | (uint)bVar2 << (uVar19 & 0x1f);
          uVar3 = -(uVar3 & 1) ^ uVar3 >> 1;
          goto LAB_013c6400;
        }
        uVar10 = uVar19 & 0x1f;
        uVar12 = uVar12 + 1;
        uVar19 = uVar19 + 7;
        uVar3 = uVar3 | (bVar2 & 0x7f) << uVar10;
      } while (param_7 != uVar12);
      uVar3 = 0;
      uVar10 = 0;
LAB_013c6400:
      uVar4 = uVar3 + uVar4;
      uVar3 = uVar4;
      local_4c = uVar4;
      if (uVar17 <= uVar4) goto LAB_013c6e0c;
      uVar3 = *(uint *)(iVar16 + uVar4 * 4);
      if (uVar3 < uVar5) {
        if (local_44 <= uVar3) {
          local_74 = &DAT_01894278;
          goto LAB_013c6e08;
        }
        if (*(uint *)(iVar18 + uVar3 * 4) != uVar4) goto LAB_013c636c;
      }
      else {
LAB_013c636c:
        local_48 = uVar5;
        if (local_44 <= uVar5) {
          local_34 = FUN_007883b8;
          local_3c = FUN_007883b8;
          local_40 = &local_48;
          local_2c = FUN_013bc8e0;
          local_30 = &local_4c;
          local_38 = &local_44;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_0058f9b7,&local_40,&DAT_01894248);
        }
        *(uint *)(iVar18 + uVar5 * 4) = uVar4;
        *(uint *)(iVar16 + uVar4 * 4) = uVar5;
        param_4[6] = uVar5 + 1;
        uVar5 = uVar5 + 1;
      }
      pbVar13 = pbVar13 + uVar10;
      param_7 = param_7 - uVar10;
    } while (param_7 != 0);
  }
  if (*(uint *)(param_6 + 0xd) != 0) {
    uVar3 = *(uint *)(param_6 + 9);
    if ((param_8 & 1) == 0) {
      uVar10 = (param_8 & 0xffff) >> 8;
      if (uVar10 == 10) {
        if ((cVar1 == '\0') && (uVar10 = 10, (*pbVar7 & 8) != 0)) goto LAB_013c64ec;
        uVar17 = uVar3 | 0x20;
        uVar10 = 10;
      }
      else if ((uVar10 == 0xd) && ((cVar1 == '\0' || (uVar10 = 0xd, (*pbVar7 & 8) == 0)))) {
        uVar10 = 0xd;
        uVar17 = uVar3 | 0x20;
      }
      else {
LAB_013c64ec:
        uVar17 = uVar3;
      }
    }
    else {
      uVar10 = (param_8 & 0xffff) >> 8;
      uVar17 = uVar3 | 0x2a;
    }
    bVar2 = *pbVar7;
    uVar4 = uVar17;
    if ((param_8 & 1) == 0) {
      uVar4 = uVar17 | 8;
    }
    if (*(byte *)(param_2 + 0x158) != uVar10) {
      uVar4 = uVar17;
    }
    if ((bVar2 & 8) == 0) {
LAB_013c6514:
      if ((param_8 & 1) == 0) goto LAB_013c656c;
LAB_013c651c:
      uVar10 = 0x140;
      bVar20 = (bVar2 & 4) == 0;
      if (bVar20) {
        uVar10 = 0x280;
      }
      uVar17 = uVar10 | uVar4 | 0x28000;
      if (!bVar20) {
        uVar17 = uVar10 | uVar4 | 0x2a800;
      }
    }
    else {
      if (cVar1 != '\0') {
        if ((param_8 & 0xff01) != 0xd00) {
          uVar4 = uVar4 | 0x10;
        }
        goto LAB_013c6514;
      }
      if ((param_8 & 0xff01) != 0xa00) {
        uVar4 = uVar4 | 0x10;
      }
      if ((param_8 & 1) != 0) goto LAB_013c651c;
LAB_013c656c:
      uVar17 = 0x140;
      uVar10 = (uint)(byte)""[param_8 >> 8 & 0xff];
      if (uVar10 != ((bVar2 & 4) >> 2 ^ 1)) {
        uVar17 = 0x280;
      }
      uVar17 = uVar17 | uVar4;
      if (uVar10 == 0) {
        uVar17 = uVar17 | 0x28000;
      }
      if ((bVar2 & 4) == 0) {
        if (uVar10 != 0) {
          uVar17 = uVar17 | 0x1400;
        }
      }
      else if (uVar10 == 0) {
        uVar17 = uVar17 | 0x2800;
      }
    }
    if ((*(uint *)(param_6 + 0xd) & ~uVar3 & uVar17) != 0) {
      if ((uint)param_4[2] < uVar5) {
        uVar10 = 0;
        puVar9 = &DAT_01894298;
        param_7 = uVar5;
        uVar3 = param_4[2];
LAB_013c6c60:
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar10,param_7,uVar3,puVar9);
      }
      if (uVar5 != 0) {
        iVar16 = uVar5 << 2;
        puVar14 = (undefined4 *)param_4[1];
        do {
          FUN_013c5b10(param_2,*puVar14,uVar17,param_5,param_4 + 7);
          puVar14 = puVar14 + 1;
          iVar16 = iVar16 + -4;
        } while (iVar16 != 0);
      }
      uVar6 = param_4[1];
      uVar8 = param_4[3];
      uVar15 = param_4[7];
      param_4[7] = *param_4;
      param_4[3] = param_4[10];
      uVar11 = param_4[9];
      *param_4 = uVar15;
      param_4[1] = param_4[8];
      uVar15 = param_4[0xb];
      param_4[8] = uVar6;
      param_4[9] = param_4[2];
      param_4[10] = uVar8;
      param_4[0xb] = param_4[4];
      uVar6 = param_4[0xc];
      param_4[0xc] = param_4[5];
      param_4[5] = uVar6;
      uVar6 = param_4[0xd];
      param_4[2] = uVar11;
      param_4[4] = uVar15;
      param_4[0xd] = 0;
      param_4[6] = uVar6;
    }
  }
  local_40 = (uint *)*param_9;
  local_3c = (code *)param_9[1];
  local_38 = (uint *)param_9[2];
  if ((uint)((int)local_40 - (int)local_38) < 9) {
    FUN_013c4434(&local_40,local_38,9,1,1);
  }
  puVar14 = (undefined4 *)((int)local_3c + (int)local_38);
  *puVar14 = 0;
  local_58 = local_40;
  local_50 = (int)local_38 + 9;
  puVar14[1] = 0;
  *(undefined1 *)(puVar14 + 2) = 0;
  uVar3 = *(uint *)(param_2 + 0x130);
  local_54 = (int)local_3c;
  if (((uVar3 & 0x3c) == 0) ||
     ((uint)*(byte *)(param_2 + 0x158) != (param_8 & 0xffff) >> 8 || (param_8 & 1) != 0)) {
joined_r0x013c67ac:
    if ((uVar3 & 0x30) != 0) {
      if (cVar1 == '\0') {
        if ((param_8 & 0xff01) == 0xa00) goto LAB_013c671c;
      }
      else if ((param_8 & 0xff01) == 0xd00) {
LAB_013c671c:
        if (local_50 == 0) goto LAB_013c6d64;
        if ((int)local_38 + 8U < 4) goto LAB_013c6d7c;
        uVar6 = *(undefined4 *)((int)local_3c + 1);
        *(byte *)((int)local_3c + 1) = (byte)uVar6 | 0x10;
        *(char *)((int)local_3c + 4) = (char)((uint)uVar6 >> 0x18);
        *(char *)((int)local_3c + 3) = (char)((uint)uVar6 >> 0x10);
        *(char *)((int)local_3c + 2) = (char)((uint)uVar6 >> 8);
        uVar3 = *(uint *)(param_2 + 0x130);
      }
    }
    if (((uVar3 & 0x3ffc0) == 0) || (((param_8 & 1) == 0 && (""[(param_8 & 0xffff) >> 8] != '\0'))))
    {
LAB_013c6820:
      uVar3 = param_4[6];
      if ((uint)param_4[2] < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar3,param_4[2],&DAT_01894298);
      }
      if (uVar3 == 0) {
        FUN_013c6f70(&local_40,&local_58);
        FUN_013c56bc(param_2,param_4 + 7,&local_40);
        *param_1 = (int)local_40;
        param_1[1] = (int)local_3c;
        param_1[2] = (int)local_38;
        param_1[3] = (int)local_34;
        return;
      }
      uVar3 = *(uint *)param_4[1];
      if (*(uint *)(param_2 + 0x148) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar3,*(uint *)(param_2 + 0x148),&DAT_01894288);
      }
                    /* WARNING: Could not recover jumptable at 0x013c68b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_013c68bc +
                *(int *)(&DAT_013c68bc + *(int *)(*(int *)(param_2 + 0x144) + uVar3 * 0x14) * 4)))()
      ;
      return;
    }
    if (local_50 == 0) goto LAB_013c6d64;
    if (3 < (int)local_38 + 8U) {
      uVar3 = *(uint *)((int)local_3c + 1);
      *(char *)((int)local_3c + 1) = (char)uVar3;
      *(char *)((int)local_3c + 4) = (char)(uVar3 >> 0x18);
      *(char *)((int)local_3c + 3) = (char)((uVar3 | 0x14000) >> 0x10);
      *(char *)((int)local_3c + 2) = (char)((uVar3 | 0x14000) >> 8);
      goto LAB_013c6820;
    }
  }
  else {
    if (local_50 == 0) {
LAB_013c6d64:
      uVar8 = 0;
      uVar6 = 1;
      iVar16 = 0;
      puVar9 = &DAT_01894378;
      goto LAB_013c6dcc;
    }
    if (3 < (int)local_38 + 8U) {
      uVar6 = *(undefined4 *)((int)local_3c + 1);
      *(byte *)((int)local_3c + 1) = (byte)uVar6 | 4;
      *(char *)((int)local_3c + 4) = (char)((uint)uVar6 >> 0x18);
      *(char *)((int)local_3c + 3) = (char)((uint)uVar6 >> 0x10);
      *(char *)((int)local_3c + 2) = (char)((uint)uVar6 >> 8);
      uVar3 = *(uint *)(param_2 + 0x130);
      goto joined_r0x013c67ac;
    }
  }
LAB_013c6d7c:
  iVar16 = (int)local_38 + 8;
  uVar8 = 4;
  uVar6 = 0;
  puVar9 = &DAT_018943d8;
LAB_013c6dcc:
                    /* WARNING: Subroutine does not return */
  FUN_00faa36c(uVar6,uVar8,iVar16,puVar9);
}

