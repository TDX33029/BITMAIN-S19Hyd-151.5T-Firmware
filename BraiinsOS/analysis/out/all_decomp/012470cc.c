// FUN_012470cc @ 012470cc size=528 calls_out=11 calls_in=2
// strings: 

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x01247150 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

int FUN_012470cc(undefined4 *param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  double *pdVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined8 in_d0;
  undefined4 uVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 uVar14;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0 [3];
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined1 local_68;
  char *local_64;
  undefined8 local_50;
  int *local_48;
  uint local_44;
  
  uVar14 = CONCAT44(local_c4,local_c8);
  iVar6 = 0;
  if (*param_2 == '\x02') {
    pdVar3 = (double *)(param_2 + 0x10);
    uVar12 = *(undefined8 *)(param_1 + 2);
    if (*(int *)(param_2 + 8) == 0) {
      dVar13 = (double)FUN_01845f30(*(undefined4 *)pdVar3,*(undefined4 *)(param_2 + 0x14));
    }
    else if (*(int *)(param_2 + 8) == 1) {
      dVar13 = (double)FUN_01845d5c(*(undefined4 *)pdVar3,*(undefined4 *)(param_2 + 0x14));
    }
    else {
      dVar13 = *pdVar3;
    }
    uVar11 = (undefined4)((ulonglong)in_d0 >> 0x20);
    uVar10 = SUB84(dVar13,0);
    FUN_016d62a0(uVar10);
    FUN_016d56d0(uVar10,uVar11,(int)uVar12);
    if (((double)CONCAT44(uVar11,uVar10) != 0.0) ||
       (dVar13 - (double)CONCAT44(uVar11,uVar10) != 0.0)) {
      piVar7 = (int *)*param_1;
      do {
        iVar6 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar6 + 1;
      if (iVar6 < 0) {
LAB_012472c8:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x12472c8);
        (*pcVar1)();
      }
      uVar9 = param_1[1];
      if (param_4 == 0) {
        local_c0[0] = 0;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
        }
        piVar4 = *(int **)(param_4 + 0xc);
        do {
          iVar6 = *piVar4;
          bVar2 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar2);
        *piVar4 = iVar6 + 1;
        if (iVar6 < 0) goto LAB_012472c8;
        uVar5 = 0;
        local_d0 = *(undefined4 *)(param_4 + 0xc);
        local_cc = *(undefined4 *)(param_4 + 0x10);
        uVar8 = (*(int **)(param_4 + 4))[1];
        if (uVar8 <= uVar9) {
          iVar6 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar7 + 2,uVar8);
          uVar5 = uVar8;
          if (iVar6 != 0) {
            uVar5 = 0;
          }
        }
        uVar14 = FUN_011e1508((int)(piVar7 + 2) + uVar5,uVar9 - uVar5);
        local_d4 = 3;
        local_c0[0] = 2;
      }
      local_50 = FUN_01238114(param_3);
      local_a0 = 0x80000021;
      local_68 = 6;
      uStack_b4 = local_d4;
      local_b0 = local_d0;
      uStack_ac = local_cc;
      local_98 = uVar12;
      local_64 = param_2;
      local_48 = piVar7;
      local_44 = uVar9;
      uStack_a8 = uVar14;
      iVar6 = thunk_FUN_016d4a50(0x80);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x80);
      }
      FUN_016dd1aa(iVar6,local_c0,0x80);
    }
  }
  return iVar6;
}

