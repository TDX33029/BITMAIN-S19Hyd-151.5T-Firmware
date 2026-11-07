// FUN_0135ec58 @ 0135ec58 size=460 calls_out=3 calls_in=1
// strings: 

void FUN_0135ec58(int *param_1,uint param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = param_1[3];
  uVar8 = (uint)*(ushort *)(iVar9 + 0x32);
  if (0xb < param_2 + uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00410b6b,0x32,&DAT_01892440);
  }
  iVar7 = param_1[5];
  if (*(ushort *)(iVar7 + 0x32) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00410b9d,0x28,&DAT_01892450);
  }
  iVar5 = param_1[2];
  iVar6 = *(ushort *)(iVar7 + 0x32) - param_2;
  iVar3 = *param_1;
  iVar10 = uVar8 + 1;
  *(short *)(iVar9 + 0x32) = (short)(param_2 + uVar8);
  uVar1 = *(undefined4 *)(iVar7 + param_2 * 4);
  iVar3 = iVar3 + iVar5 * 4;
  *(short *)(iVar7 + 0x32) = (short)iVar6;
  uVar4 = *(undefined4 *)(iVar3 + 4);
  *(undefined4 *)(iVar3 + 4) = uVar1;
  *(undefined4 *)(iVar9 + 4 + uVar8 * 4) = uVar4;
  iVar3 = iVar7 + 4;
  FUN_016dd1aa(iVar9 + 4 + iVar10 * 4,iVar3,param_2 * 4 + -4);
  FUN_016dd52c(iVar3,iVar3 + param_2 * 4,iVar6 * 4);
  if (param_1[4] == 0) {
    if (param_1[6] != 0) goto LAB_0135ee0c;
  }
  else {
    if (param_1[6] == 0) {
LAB_0135ee0c:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_01892460);
    }
    iVar5 = iVar9 + 0x34;
    iVar3 = iVar7 + 0x34;
    FUN_016dd1aa(iVar5 + iVar10 * 4,iVar3,param_2 << 2);
    FUN_016dd52c(iVar3,iVar3 + param_2 * 4,iVar6 * 4 + 4);
    piVar2 = *(int **)(iVar5 + iVar10 * 4);
    *piVar2 = iVar9;
    *(short *)(piVar2 + 0xc) = (short)iVar10;
    if (param_2 != 1) {
      piVar2 = *(int **)(iVar5 + (uVar8 + 2) * 4);
      *(short *)(piVar2 + 0xc) = (short)(uVar8 + 2);
      *piVar2 = iVar9;
      if (param_2 != 2) {
        piVar2 = *(int **)(iVar5 + (uVar8 + 3) * 4);
        *(short *)(piVar2 + 0xc) = (short)(uVar8 + 3);
        *piVar2 = iVar9;
        if (param_2 != 3) {
          piVar2 = *(int **)(iVar5 + (uVar8 + 4) * 4);
          *(short *)(piVar2 + 0xc) = (short)(uVar8 + 4);
          *piVar2 = iVar9;
          if (param_2 != 4) {
            piVar2 = *(int **)(iVar5 + (uVar8 + 5) * 4);
            *(short *)(piVar2 + 0xc) = (short)(uVar8 + 5);
            *piVar2 = iVar9;
          }
        }
      }
    }
    iVar9 = 0;
    do {
      piVar2 = *(int **)(iVar7 + iVar9 * 4 + 0x34);
      *(short *)(piVar2 + 0xc) = (short)iVar9;
      iVar9 = iVar9 + 1;
      *piVar2 = iVar7;
    } while (iVar6 + 1 != iVar9);
  }
  return;
}

