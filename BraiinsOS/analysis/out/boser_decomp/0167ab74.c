// FUN_0167ab74 @ 0167ab74 size=416 calls_out=3 calls_in=1
// strings: assertion failed: count > 0 | internal error: entered unreachable code

void FUN_0167ab74(int *param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: count > 0",0x1b,&DAT_01d2ff40);
  }
  iVar7 = param_1[5];
  uVar1 = *(ushort *)(iVar7 + 0x32);
  uVar2 = param_2 + uVar1;
  if (0xb < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_00533a99,0x33,&DAT_01d30608);
  }
  iVar11 = param_1[3];
  uVar9 = (uint)*(ushort *)(iVar11 + 0x32);
  if (uVar9 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_00533acc,0x27,&DAT_01d30618);
  }
  iVar8 = iVar7 + 4;
  iVar10 = uVar9 - param_2;
  *(short *)(iVar11 + 0x32) = (short)iVar10;
  *(short *)(iVar7 + 0x32) = (short)uVar2;
  FUN_01bed864(iVar8 + param_2 * 4,iVar8);
  iVar12 = iVar10 + 1;
  if (uVar9 - iVar12 != param_2 - 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
  }
  FUN_01bed4e2(iVar8,iVar11 + 4 + iVar12 * 4,(uVar9 - iVar12) * 4);
  iVar8 = param_1[6];
  iVar3 = *param_1 + param_1[2] * 4;
  iVar6 = param_1[4];
  uVar4 = *(undefined4 *)(iVar3 + 4);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar11 + 4 + iVar10 * 4);
  *(undefined4 *)(iVar7 + param_2 * 4) = uVar4;
  if (iVar6 == 0) {
    if (iVar8 != 0) goto LAB_0167acfc;
  }
  else {
    if (iVar8 == 0) {
LAB_0167acfc:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d30628);
    }
    iVar8 = iVar7 + 0x34;
    FUN_01bed864(iVar8 + param_2 * 4,iVar8,(uint)uVar1 * 4 + 4);
    FUN_01bed4e2(iVar8,iVar11 + 0x34 + iVar12 * 4,param_2 << 2);
    iVar11 = 0;
    do {
      piVar5 = *(int **)(iVar7 + iVar11 * 4 + 0x34);
      *(short *)(piVar5 + 0xc) = (short)iVar11;
      iVar11 = iVar11 + 1;
      *piVar5 = iVar7;
    } while (uVar2 + 1 != iVar11);
  }
  return;
}

