// FUN_0101757c @ 0101757c size=700 calls_out=2 calls_in=1
// strings: 

void FUN_0101757c(undefined2 *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  int local_30;
  int *local_2c;
  code *local_28;
  
  if (*(int *)(param_3 + 0x30) == 1) {
    *(bool *)(param_2 + 0x89) = *(int *)(param_3 + 0x34) != 0;
  }
  if (*(int *)(param_3 + 0x18) == 1) {
    uVar9 = *(uint *)(param_2 + 0x78);
    uVar2 = *(uint *)(param_3 + 0x1c);
    *(uint *)(param_2 + 0x78) = uVar2;
    cVar1 = (uVar2 >= uVar9 && uVar2 != uVar9) - (uVar2 < uVar9);
    if (cVar1 == -1) {
      uVar6 = *(uint *)(param_4 + 0x28);
      if (uVar6 != 0) {
        iVar10 = *(int *)(param_4 + 0x14);
        local_2c = &local_30;
        uVar14 = *(uint *)(param_4 + 0x18);
        iVar7 = uVar9 - uVar2;
        iVar12 = *(int *)(param_4 + 0x34);
        uVar11 = *(uint *)(param_4 + 0x38);
        uVar2 = 0;
        uVar9 = uVar6;
        do {
          if (uVar14 <= uVar2) goto LAB_010177d8;
          iVar3 = iVar10 + uVar2 * 0xc;
          uVar13 = *(uint *)(iVar3 + 8);
          local_30 = *(int *)(iVar3 + 4);
          if (((uVar11 <= uVar13) ||
              (piVar8 = (int *)(iVar12 + uVar13 * 0xf8), *piVar8 == 3 && piVar8[1] == 0)) ||
             (iVar3 = piVar8[0x35], iVar3 != local_30)) {
            local_28 = FUN_0101a4ac;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_00599806,&local_2c,&DAT_01882560);
          }
          iVar4 = piVar8[0x12];
          iVar5 = iVar4 - iVar7;
          if (!SBORROW4(iVar4,iVar7)) {
            iVar3 = piVar8[0x13];
            piVar8[0x12] = iVar5;
            iVar5 = iVar3 - iVar7;
          }
          if (SBORROW4(iVar4,iVar7) || SBORROW4(iVar3,iVar7)) goto LAB_0101779c;
          piVar8[0x13] = iVar5;
          if (uVar6 >= uVar9) {
            uVar2 = uVar2 + 1;
          }
          uVar9 = uVar9 - (uVar6 < uVar9);
        } while (uVar2 < uVar9);
      }
    }
    else if ((cVar1 == '\x01') && (uVar6 = *(uint *)(param_4 + 0x28), uVar6 != 0)) {
      iVar10 = *(int *)(param_4 + 0x14);
      uVar11 = *(uint *)(param_4 + 0x18);
      iVar12 = *(int *)(param_4 + 0x34);
      local_2c = &local_30;
      uVar14 = *(uint *)(param_4 + 0x38);
      iVar7 = uVar2 - uVar9;
      uVar9 = 0;
      uVar2 = uVar6;
      do {
        if (uVar11 <= uVar9) {
LAB_010177d8:
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018a6b80);
        }
        iVar3 = iVar10 + uVar9 * 0xc;
        uVar13 = *(uint *)(iVar3 + 8);
        local_30 = *(int *)(iVar3 + 4);
        if (((uVar14 <= uVar13) ||
            (piVar8 = (int *)(iVar12 + uVar13 * 0xf8), *piVar8 == 3 && piVar8[1] == 0)) ||
           (piVar8[0x35] != local_30)) {
          local_28 = FUN_0101a4ac;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00599806,&local_2c,&DAT_01882560);
        }
        iVar3 = piVar8[0x12];
        bVar15 = SCARRY4(iVar3,iVar7);
        iVar4 = iVar3 + iVar7;
        if (!bVar15) {
          iVar3 = piVar8[0x13];
          piVar8[0x12] = iVar4;
          iVar4 = iVar3 + iVar7;
        }
        if (bVar15 || SCARRY4(iVar3,iVar7)) {
LAB_0101779c:
          *param_1 = 0x101;
          *(undefined4 *)(param_1 + 2) = 3;
          *(undefined ***)(param_1 + 4) = &PTR_LAB_01882570;
          *(undefined4 *)(param_1 + 6) = 1;
          *(undefined4 *)(param_1 + 8) = 0;
          *(undefined4 *)(param_1 + 10) = 0;
          return;
        }
        if (uVar6 >= uVar2) {
          uVar9 = uVar9 + 1;
        }
        uVar2 = uVar2 - (uVar6 < uVar2);
        piVar8[0x13] = iVar4;
      } while (uVar9 < uVar2);
    }
  }
  *(undefined1 *)param_1 = 3;
  return;
}

