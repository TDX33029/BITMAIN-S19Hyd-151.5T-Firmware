// FUN_0106e150 @ 0106e150 size=992 calls_out=12 calls_in=1
// strings: 

void FUN_0106e150(int param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int extraout_r1;
  int extraout_r1_00;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  undefined4 uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  bool bVar20;
  int local_28;
  
  uVar7 = *(uint *)(param_1 + 0x74) & 0x3f;
  uVar14 = param_3 >> uVar7 | param_4 << (0x20 - uVar7 & 0xff);
  if (-1 < (int)(uVar7 - 0x20)) {
    uVar14 = param_4 >> (uVar7 - 0x20 & 0xff);
  }
  uVar7 = 0;
  if (*(uint *)(param_1 + 0x74) != 0x40) {
    uVar7 = uVar14;
  }
  if (*(uint *)(param_1 + 0x5c) <= uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar7,*(uint *)(param_1 + 0x5c),&DAT_0188428c);
  }
  iVar8 = *(int *)(param_1 + 0x58);
  iVar4 = FUN_0106fc6c();
  local_28 = iVar4;
  piVar5 = (int *)FUN_01097034();
  sVar1 = *(short *)(param_2 + 0x46);
  uVar14 = (uint)*(ushort *)(param_2 + 0x44);
  sVar2 = *(short *)(param_2 + 0x4a);
  sVar3 = *(short *)(param_2 + 0x48);
  piVar9 = piVar5;
  do {
    uVar17 = piVar9[1] - 1;
    uVar16 = uVar17 & param_3;
    if (piVar9[1] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar16,0,&DAT_01883b60);
    }
    iVar19 = *piVar9;
    uVar18 = *(uint *)(iVar19 + uVar16 * 4);
    if ((uVar18 & 1) == 0) {
      piVar12 = (int *)(uVar18 & 0xfffffff8);
      if (piVar12 == (int *)0x0) {
LAB_0106e394:
        puVar15 = (uint *)0x0;
        goto LAB_0106e39c;
      }
      iVar10 = *piVar12;
      iVar6 = FUN_0103cf5c(iVar10 + 8,param_2);
      uVar16 = uVar16 + 1;
      uVar11 = uVar17;
      if (((((iVar6 != 0) && (*(short *)(iVar10 + 0x50) == sVar3)) &&
           ((sVar3 != 0x24 || (*(short *)(iVar10 + 0x52) == sVar2)))) &&
          (*(ushort *)(iVar10 + 0x4c) == uVar14)) &&
         ((1 < uVar14 - 5 || (*(short *)(iVar10 + 0x4e) == sVar1)))) {
LAB_0106e414:
        puVar15 = (uint *)0x0;
        if ((uVar18 & 2) == 0) {
          puVar15 = (uint *)piVar12[1];
          do {
            uVar14 = *puVar15;
            bVar20 = (bool)hasExclusiveAccess(puVar15);
          } while (!bVar20);
          *puVar15 = uVar14 + 1;
          if (0x7fffffff < uVar14) {
                    /* WARNING: Subroutine does not return */
            FUN_015bef44();
          }
        }
LAB_0106e39c:
        FUN_0109717c(iVar8 + uVar7 * 8,iVar4,piVar5,piVar9);
        iVar8 = extraout_r1;
        if ((iVar4 != 0) &&
           (iVar19 = *(int *)(iVar4 + 0x40c) + -1, *(int *)(iVar4 + 0x40c) = iVar19, iVar19 == 0)) {
          DataMemoryBarrier(0xb);
          *(undefined4 *)(iVar4 + 0x420) = 0;
          if (*(int *)(iVar4 + 0x410) == 0) {
            FUN_00fbb698(iVar4);
            iVar8 = extraout_r1_00;
          }
        }
        if (puVar15 != (uint *)0x0) {
          FUN_0109dd1c(param_5,puVar15[0x21]);
          FUN_0109df14(param_5,puVar15[0x21]);
          FUN_0109d7e0(puVar15);
          return;
        }
        iVar4 = *(int *)(param_5 + 0x54);
        if (iVar4 != 0) {
          iVar8 = *(int *)(param_5 + 0x58);
        }
        if (iVar4 == 0 || iVar8 == iVar4) {
          return;
        }
        iVar19 = *(int *)(param_5 + 0x48);
        bVar20 = iVar19 == 1;
        if (bVar20) {
          iVar19 = *(int *)(param_5 + 0x4c);
        }
        if (bVar20 && iVar19 == iVar4) {
          uVar13 = *(undefined4 *)(iVar19 + 4);
          *(undefined4 *)(param_5 + 0x48) = 1;
          *(undefined4 *)(param_5 + 0x4c) = uVar13;
          iVar19 = *(int *)(iVar4 + 4);
          iVar6 = *(int *)(iVar4 + 8);
        }
        else {
          iVar19 = *(int *)(iVar4 + 4);
          iVar6 = *(int *)(iVar4 + 8);
        }
        if (iVar6 == 0) {
          *(int *)(param_5 + 0x54) = iVar19;
        }
        else {
          if (iVar19 == 0) {
            return;
          }
          *(int *)(iVar6 + 4) = iVar19;
          iVar19 = *(int *)(iVar4 + 4);
        }
        *(undefined4 *)(iVar4 + 4) = 0;
        if (iVar19 == 0) {
          return;
        }
        *(undefined4 *)(iVar19 + 8) = *(undefined4 *)(iVar4 + 8);
        if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00419463,0x28,&DAT_01883dc0);
        }
        *(int *)(iVar4 + 8) = iVar8;
        *(int *)(param_5 + 0x58) = iVar4;
        *(int *)(iVar8 + 4) = iVar4;
        return;
      }
      while( true ) {
        if (uVar11 == 0) goto LAB_0106e394;
        uVar18 = *(uint *)(iVar19 + (uVar16 & uVar17) * 4);
        if ((uVar18 & 1) != 0) break;
        piVar12 = (int *)(uVar18 & 0xfffffff8);
        if (piVar12 == (int *)0x0) goto LAB_0106e394;
        iVar10 = *piVar12;
        iVar6 = FUN_0103cf5c(iVar10 + 8,param_2);
        if ((((iVar6 != 0) && (*(short *)(iVar10 + 0x50) == sVar3)) &&
            ((sVar3 != 0x24 || (*(short *)(iVar10 + 0x52) == sVar2)))) &&
           ((*(ushort *)(iVar10 + 0x4c) == uVar14 &&
            ((1 < uVar14 - 5 || (*(short *)(iVar10 + 0x4e) == sVar1)))))) goto LAB_0106e414;
        uVar16 = uVar16 + 1;
        uVar11 = uVar11 - 1;
      }
    }
    piVar12 = (int *)FUN_01072ee0(piVar9,&local_28,*(undefined4 *)(param_1 + 0x60),
                                  *(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),
                                  *(undefined4 *)(param_1 + 0x6c),0);
    if (piVar12 != (int *)0x0) {
      piVar9 = piVar12;
    }
  } while( true );
}

