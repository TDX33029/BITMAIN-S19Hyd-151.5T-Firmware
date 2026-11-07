// FUN_01504dd8 @ 01504dd8 size=328 calls_out=3 calls_in=5
// strings: 

void FUN_01504dd8(uint *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  uint local_30;
  uint local_2c;
  
  iVar5 = param_3 * 0xc;
  if (0xaaaaaaa < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar5);
  }
  if (iVar5 == 0) {
    local_2c = 4;
    local_30 = 0;
  }
  else {
    uVar10 = thunk_FUN_016d4a50(iVar5);
    iVar3 = (int)((ulonglong)uVar10 >> 0x20);
    local_2c = (uint)uVar10;
    if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar5);
    }
    local_30 = param_3;
    if (param_3 != 0) {
      piVar4 = (int *)(param_2 + 4);
      piVar6 = (int *)(local_2c + 4);
      uVar9 = 0;
      do {
        if (iVar5 == 0) break;
        if (piVar4[-1] == -0x80000000) {
          iVar1 = *piVar4;
          iVar8 = piVar4[1];
          iVar7 = -0x80000000;
        }
        else {
          iVar8 = piVar4[1];
          uVar2 = 0;
          if (iVar8 < 0) {
LAB_01504f10:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar2,iVar3);
          }
          iVar3 = *piVar4;
          if (iVar8 == 0) {
            iVar1 = 1;
            iVar7 = 0;
          }
          else {
            iVar1 = thunk_FUN_016d4a50(iVar8);
            if (iVar1 == 0) {
              uVar2 = 1;
              iVar3 = iVar8;
              goto LAB_01504f10;
            }
            iVar7 = iVar8;
          }
          FUN_016dd1aa(iVar1,iVar3,iVar8);
          iVar3 = iVar1;
        }
        uVar9 = uVar9 + 1;
        piVar6[-1] = iVar7;
        *piVar6 = iVar1;
        piVar6[1] = iVar8;
        iVar5 = iVar5 + -0xc;
        piVar4 = piVar4 + 3;
        piVar6 = piVar6 + 3;
      } while (param_3 != uVar9);
    }
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = param_3;
  return;
}

