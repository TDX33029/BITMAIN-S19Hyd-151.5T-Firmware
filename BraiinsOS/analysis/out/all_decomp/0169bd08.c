// FUN_0169bd08 @ 0169bd08 size=544 calls_out=3 calls_in=2
// strings: SetGloba | SetGloba | lDefaultError

void FUN_0169bd08(int param_1,int param_2,undefined4 param_3,char *param_4)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  uint *puVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  int iVar17;
  undefined *local_2c;
  undefined4 *local_28;
  
  if (param_1 == 0) {
    DataMemoryBarrier(0xb);
    pcVar7 = s_SetGloba_00414c05;
    puVar4 = &DAT_018ae394;
    if ((DAT_018dd984 == 2) && (pcVar7 = DAT_018daa74, puVar4 = DAT_018daa78, DAT_018daa70 != 0)) {
      pcVar7 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
    }
    cVar5 = (**(code **)(puVar4 + 0x10))(pcVar7,param_3);
    cVar1 = *param_4;
    cVar12 = cVar1;
    if (cVar1 != cVar5) {
      cVar12 = '\x01';
    }
    if (cVar1 == '\x03') {
      cVar12 = cVar5;
    }
    *param_4 = cVar12;
    return;
  }
  if (param_1 == 1) {
    iVar6 = 4;
    iVar14 = *(int *)(param_2 + 8);
  }
  else {
    iVar6 = 0x10;
    iVar14 = *(int *)(param_2 + 0x14);
  }
  if (iVar14 != 0) {
    iVar17 = *(int *)(param_2 + iVar6);
    iVar6 = 0;
    do {
      puVar11 = (uint *)(iVar17 + iVar6 * 0xc);
      uVar13 = *puVar11;
      piVar16 = (int *)puVar11[1];
      uVar15 = puVar11[2];
      piVar9 = piVar16;
      if (uVar13 == 1) {
        if (piVar16 != (int *)0xffffffff) {
          iVar10 = *piVar16;
          do {
            if (iVar10 == 0) goto LAB_0169bdf0;
            if (iVar10 < 0) {
              local_28 = &DAT_0157d360;
              local_2c = &DAT_018ae270;
                    /* WARNING: Subroutine does not return */
              FUN_00faa478(&DAT_00590e71,&local_2c,&DAT_018ae288);
            }
            iVar8 = *piVar16;
            if (iVar8 == iVar10) {
              bVar2 = (bool)hasExclusiveAccess(piVar16);
              if (bVar2) {
                *piVar16 = iVar10 + 1;
              }
              bVar3 = false;
              if (bVar2) {
                DataMemoryBarrier(0xb);
                bVar3 = true;
              }
            }
            else {
              bVar3 = false;
              ClearExclusiveLocal();
            }
            iVar10 = iVar8;
          } while (!bVar3);
          piVar9 = (int *)((int)piVar16 + (*(int *)(uVar15 + 8) - 1U & 0xfffffff8) + 8);
          goto LAB_0169be90;
        }
      }
      else {
LAB_0169be90:
        cVar5 = (**(code **)(uVar15 + 0x10))(piVar9,param_3);
        cVar1 = *param_4;
        cVar12 = cVar1;
        if (cVar1 != cVar5) {
          cVar12 = '\x01';
        }
        if (cVar1 == '\x03') {
          cVar12 = cVar5;
        }
        *param_4 = cVar12;
        if ((uVar13 & 1) != 0) {
          DataMemoryBarrier(0xb);
          do {
            iVar10 = *piVar16;
            bVar3 = (bool)hasExclusiveAccess(piVar16);
          } while (!bVar3);
          *piVar16 = iVar10 + -1;
          if (iVar10 == 1) {
            DataMemoryBarrier(0xb);
            FUN_015614d8(piVar16,uVar15);
          }
        }
      }
LAB_0169bdf0:
      iVar6 = iVar6 + 1;
    } while (iVar6 != iVar14);
  }
  return;
}

