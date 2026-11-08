// FUN_010a67d0 @ 010a67d0 size=352 calls_out=3 calls_in=2
// strings: 

void FUN_010a67d0(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  
  uVar10 = *(uint *)(param_2 + 0xc);
  uVar11 = *(uint *)(param_2 + 0x10);
  uVar3 = 0;
  if ((uVar11 < uVar10) || (uVar7 = *(uint *)(param_2 + 8), uVar7 < uVar11)) {
LAB_010a68a4:
    *param_1 = uVar3;
    return;
  }
  iVar9 = param_2 + 0x14;
  uVar1 = (uint)*(byte *)(param_2 + 0x18);
  iVar4 = *(int *)(param_2 + 4);
  uVar8 = uVar1 - 1;
  iVar5 = iVar4 + uVar10;
  if (uVar1 < 5) {
    do {
      uVar12 = FUN_00fb737c(*(undefined1 *)(iVar9 + uVar8),iVar5,uVar11 - uVar10);
      if ((uVar12 & 1) == 0) goto LAB_010a6900;
      uVar11 = (int)(uVar12 >> 0x20) + uVar10;
      if (uVar8 <= uVar11) {
        uVar6 = uVar11 - uVar8;
        if (((!CARRY4(uVar6,uVar1)) && (uVar6 + uVar1 <= uVar7)) &&
           (iVar2 = thunk_FUN_016dd50a(iVar4 + uVar6,iVar9,uVar1), iVar2 == 0)) {
          uVar3 = 1;
          *(uint *)(param_2 + 0x10) = uVar6;
          param_1[1] = uVar6;
          param_1[2] = uVar6 + uVar1;
          goto LAB_010a68a4;
        }
      }
      *(uint *)(param_2 + 0x10) = uVar11;
    } while ((uVar10 <= uVar11) && (uVar11 <= uVar7));
  }
  else {
    do {
      uVar12 = FUN_00fb737c(*(undefined1 *)(iVar9 + uVar8),iVar5,uVar11 - uVar10);
      if ((uVar12 & 1) == 0) goto LAB_010a6900;
      uVar11 = (int)(uVar12 >> 0x20) + uVar10;
      if (((uVar8 <= uVar11) && (!CARRY4(uVar11 - uVar8,uVar1))) &&
         ((uVar11 - uVar8) + uVar1 <= uVar7)) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar1,4,&DAT_018af150);
      }
      *(uint *)(param_2 + 0x10) = uVar11;
    } while ((uVar10 <= uVar11) && (uVar11 <= uVar7));
  }
LAB_010a6904:
  *param_1 = 0;
  return;
LAB_010a6900:
  *(uint *)(param_2 + 0x10) = uVar10;
  goto LAB_010a6904;
}

