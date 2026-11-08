// FUN_0140dfb8 @ 0140dfb8 size=388 calls_out=2 calls_in=1
// strings: 

void FUN_0140dfb8(uint *param_1)

{
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int unaff_r4;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  uint *unaff_r8;
  uint uVar17;
  uint *puVar18;
  bool bVar19;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  uVar3 = param_1[3];
  uVar8 = param_1[4];
  puVar18 = (uint *)param_1[6];
  uVar13 = *param_1;
  uVar17 = param_1[1];
  puVar4 = (uint *)param_1[8];
  do {
    if ((uVar13 & 1) == 0) {
      puVar6 = puVar4;
      if (puVar18 != puVar4) {
        unaff_r8 = puVar18 + 0xd;
        puVar6 = (uint *)*puVar18;
        param_1[6] = (uint)unaff_r8;
      }
      if (puVar18 == puVar4 || puVar6 == (uint *)0x2) {
        param_1[4] = 0;
        FUN_00a85af4(param_1 + 5);
        if (param_1[2] == 0) {
          return;
        }
        if (uVar3 == 0) {
          return;
        }
        iVar5 = FUN_016d3bc8();
        uVar8 = *(byte *)(uVar3 - 3) & 0x1f;
        if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
           (uVar13 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar12 = uVar13 - 0x10, uVar13 == 0)) {
          iVar12 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2)
                   << 4;
        }
        uVar13 = (uint)(*(byte *)(uVar3 - 3) >> 5);
        iVar16 = *(int *)(iVar5 + 8) + 0x10;
        iVar15 = iVar12 * uVar8 + iVar12 + -4;
        iVar12 = iVar16 + iVar15;
        if (4 < uVar13) {
          if (uVar13 != 5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar1)();
          }
          uVar13 = *(uint *)(iVar12 + -4);
          if (uVar13 < 5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar1)();
          }
          if (*(char *)(iVar12 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar1)();
          }
        }
        if (iVar12 - uVar3 < uVar13) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar1)();
        }
        if (*(char *)(iVar12 - uVar13) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar1)();
        }
        if (*(char *)(iVar16 + iVar15) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar1)();
        }
        bVar2 = *(byte *)(iVar5 + 0x14);
        uVar13 = 1 << uVar8;
        *(undefined1 *)(uVar3 - 3) = 0xff;
        *(undefined2 *)(uVar3 - 2) = 0;
        do {
          uVar17 = *(uint *)(iVar5 + 0x10);
          uVar3 = *(uint *)(iVar5 + 0xc) | uVar17;
          if ((uVar13 & uVar3) != 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar1)();
          }
          if ((uVar17 == 0) || (uVar3 + uVar13 == (2 << (bVar2 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&uStack_28,iVar5,uVar8);
            FUN_016dddc0(&DAT_018ddd48);
            if (unaff_r4 == 0) {
              return;
            }
            puVar7 = (undefined4 *)FUN_016d2bc8();
            uVar14 = *puVar7;
            FUN_016d6ac4(uStack_28,unaff_r4);
            *puVar7 = uVar14;
            return;
          }
          if (DAT_018ddb0b == '\0') {
            *(uint *)(iVar5 + 0x10) = uVar13 + uVar17;
            return;
          }
          puVar18 = (uint *)(iVar5 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar18);
            uVar3 = *puVar18;
            if (uVar17 != uVar3) goto LAB_016d409c;
            bVar19 = (bool)hasExclusiveAccess(puVar18);
          } while (!bVar19);
          *puVar18 = uVar13 + uVar17;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar17 == uVar3) {
            return;
          }
        } while( true );
      }
      uVar17 = puVar18[1];
      uVar9 = puVar18[8];
      uVar10 = puVar18[9];
      uVar11 = puVar18[10];
      uStack_3c = puVar18[0xb];
      local_38 = puVar18[3];
      uStack_34 = puVar18[4];
      uStack_30 = puVar18[5];
      uStack_2c = puVar18[6];
      uStack_28 = puVar18[7];
      uVar13 = (uint)puVar6 & 1;
      *param_1 = uVar13;
      param_1[1] = uVar17;
      puVar18 = unaff_r8;
      if (uVar9 != 0) {
        (**(code **)(uVar9 + 0x10))(&uStack_3c,uVar10,uVar11);
      }
    }
    else {
      if (uVar8 <= uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar17,uVar8,&DAT_018a65ec);
      }
      iVar5 = uVar3 + uVar17 * 0x24;
      bVar19 = *(int *)(iVar5 + 8) != 0;
      uVar13 = (uint)bVar19;
      if (bVar19) {
        uVar17 = *(uint *)(iVar5 + 0xc);
      }
      *param_1 = uVar13;
      param_1[1] = uVar17;
      local_38 = *(uint *)(iVar5 + 0x10);
      uStack_34 = *(uint *)(iVar5 + 0x14);
      uStack_30 = *(uint *)(iVar5 + 0x18);
      uStack_2c = *(uint *)(iVar5 + 0x1c);
      uStack_28 = *(uint *)(iVar5 + 0x20);
    }
    (**(code **)(local_38 + 0x10))(&uStack_2c,uStack_34,uStack_30);
  } while( true );
}

