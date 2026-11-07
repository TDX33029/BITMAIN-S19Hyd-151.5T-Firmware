// FUN_01497b38 @ 01497b38 size=380 calls_out=3 calls_in=3
// strings: 

void FUN_01497b38(uint *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  bool bVar13;
  bool bVar14;
  undefined8 uVar15;
  uint local_30;
  uint local_2c;
  
  uVar1 = param_3 * 0x10;
  bVar14 = 0xffffffe < param_3;
  bVar13 = param_3 == 0xfffffff;
  if (param_3 < 0x10000000) {
    bVar14 = 0x7ffffffb < uVar1;
    bVar13 = uVar1 == 0x7ffffffc;
  }
  if (bVar14 && !bVar13) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar1);
  }
  if (uVar1 == 0) {
    local_2c = 4;
    local_30 = 0;
  }
  else {
    uVar15 = thunk_FUN_016d4a50(uVar1);
    iVar6 = (int)((ulonglong)uVar15 >> 0x20);
    local_2c = (uint)uVar15;
    if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar1);
    }
    local_30 = param_3;
    if (param_3 != 0) {
      uVar11 = 0;
      uVar10 = 0;
      piVar12 = param_2;
      do {
        if (uVar1 == uVar11) break;
        uVar2 = *(undefined2 *)((int)piVar12 + 0xe);
        iVar3 = piVar12[3];
        if (*piVar12 == -0x80000000) {
          iVar4 = *(int *)((int)param_2 + uVar11 + 4);
          iVar8 = *(int *)((int)param_2 + uVar11 + 8);
          iVar9 = -0x80000000;
        }
        else {
          iVar8 = *(int *)((int)param_2 + uVar11 + 8);
          uVar5 = 0;
          if (iVar8 < 0) {
LAB_01497ca4:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar5,iVar6);
          }
          uVar5 = *(undefined4 *)((int)param_2 + uVar11 + 4);
          if (iVar8 == 0) {
            iVar4 = 1;
            iVar9 = 0;
          }
          else {
            iVar4 = thunk_FUN_016d4a50(iVar8);
            if (iVar4 == 0) {
              uVar5 = 1;
              iVar6 = iVar8;
              goto LAB_01497ca4;
            }
            iVar9 = iVar8;
          }
          FUN_016dd1aa(iVar4,uVar5,iVar8);
          iVar6 = iVar4;
        }
        uVar10 = uVar10 + 1;
        piVar7 = (int *)(local_2c + uVar11);
        *piVar7 = iVar9;
        piVar12 = piVar12 + 4;
        uVar11 = uVar11 + 0x10;
        piVar7[1] = iVar4;
        *(undefined2 *)((int)piVar7 + 0xe) = uVar2;
        *(short *)(piVar7 + 3) = (short)iVar3;
        piVar7[2] = iVar8;
      } while (param_3 != uVar10);
    }
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = param_3;
  return;
}

