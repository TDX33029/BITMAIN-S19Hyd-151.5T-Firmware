// FUN_01244a40 @ 01244a40 size=568 calls_out=8 calls_in=0
// strings: 

int FUN_01244a40(undefined4 *param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined4 extraout_s1;
  double dVar12;
  undefined8 uVar13;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  int local_bc;
  undefined4 local_b4;
  undefined4 local_b0 [3];
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined2 local_8c;
  undefined1 local_58;
  char *local_54;
  undefined8 local_40;
  int *local_38;
  uint local_34;
  
  uVar13 = CONCAT44(local_c4,local_c8);
  if ((*param_2 == '\x04') && (*(int *)(param_2 + 0xc) != 0)) {
    iVar9 = 0;
    iVar3 = *(int *)(param_2 + 0xc) * 0x18;
    pcVar10 = *(char **)(param_2 + 8);
    do {
      if (*pcVar10 != '\x02') {
LAB_01244ad8:
        piVar7 = (int *)*param_1;
        do {
          iVar3 = *piVar7;
          bVar2 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar2);
        *piVar7 = iVar3 + 1;
        if (iVar3 < 0) {
LAB_01244c64:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x1244c64);
          (*pcVar1)();
        }
        uVar5 = param_1[1];
        if (param_4 == 0) {
          local_b0[0] = 0;
        }
        else {
          DataMemoryBarrier(0xb);
          if (*(int *)(param_4 + 0x14) != 0) {
            FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
          }
          piVar4 = *(int **)(param_4 + 0xc);
          do {
            iVar3 = *piVar4;
            bVar2 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar2);
          *piVar4 = iVar3 + 1;
          if (iVar3 < 0) goto LAB_01244c64;
          local_d0 = *(undefined4 *)(param_4 + 0xc);
          local_cc = *(undefined4 *)(param_4 + 0x10);
          uVar8 = (*(int **)(param_4 + 4))[1];
          uVar6 = 0;
          if (uVar8 <= uVar5) {
            iVar3 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar7 + 2,uVar8);
            uVar6 = uVar8;
            if (iVar3 != 0) {
              uVar6 = 0;
            }
          }
          uVar13 = FUN_011e1508((int)(piVar7 + 2) + uVar6,uVar5 - uVar6);
          local_d4 = 3;
          local_b0[0] = 2;
        }
        local_c0 = 0x80000001;
        local_bc = iVar9;
        local_b4 = param_3;
        local_40 = FUN_01238114(&local_c0);
        local_8c = 0x400;
        local_90 = &DAT_80000028;
        local_58 = 6;
        uStack_a4 = local_d4;
        local_a0 = local_d0;
        uStack_9c = local_cc;
        local_54 = pcVar10;
        local_38 = piVar7;
        local_34 = uVar5;
        uStack_98 = uVar13;
        iVar3 = thunk_FUN_016d4a50(0x80);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x80);
        }
        FUN_016dd1aa(iVar3,local_b0,0x80);
        return iVar3;
      }
      uVar5 = *(uint *)(pcVar10 + 0xc);
      if ((uVar5 != 0 || uVar5 < (1 < *(uint *)(pcVar10 + 8))) &&
         (dVar12 = *(double *)(pcVar10 + 0x10),
         uVar11 = FUN_016d62a0(SUB84(dVar12,0),uVar5 - (1 >= *(uint *)(pcVar10 + 8))),
         dVar12 - (double)CONCAT44(extraout_s1,uVar11) != 0.0)) goto LAB_01244ad8;
      iVar9 = iVar9 + 1;
      iVar3 = iVar3 + -0x18;
      pcVar10 = pcVar10 + 0x18;
    } while (iVar3 != 0);
  }
  return 0;
}

