// FUN_015fba7c @ 015fba7c size=376 calls_out=3 calls_in=2
// strings: 

void FUN_015fba7c(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  
  uVar9 = *(uint *)(param_2 + 0xc);
  uVar8 = *(uint *)(param_2 + 0x10);
  uVar3 = 0;
  if ((uVar8 < uVar9) || (uVar10 = *(uint *)(param_2 + 8), uVar10 < uVar8)) {
LAB_015fbb64:
    *param_1 = uVar3;
    return;
  }
  uVar1 = (uint)*(byte *)(param_2 + 0x18);
  iVar4 = *(int *)(param_2 + 4);
  uVar11 = uVar1 - 1;
  iVar5 = iVar4 + uVar9;
  iVar6 = param_2 + 0x14;
  if (uVar1 < 5) {
    do {
      uVar12 = FUN_00fb737c(*(undefined1 *)(iVar6 + uVar11),iVar5,uVar8 - uVar9);
      if ((uVar12 & 1) == 0) goto LAB_015fbbc4;
      uVar8 = (int)(uVar12 >> 0x20) + uVar9;
      if (uVar11 <= uVar8) {
        uVar7 = uVar8 - uVar11;
        if (((!CARRY4(uVar7,uVar1)) && (uVar7 + uVar1 <= uVar10)) &&
           (iVar2 = thunk_FUN_016dd50a(iVar4 + uVar7,iVar6,uVar1), iVar2 == 0)) {
          uVar3 = 1;
          *(uint *)(param_2 + 0x10) = uVar7;
          param_1[1] = uVar7;
          param_1[2] = uVar7 + uVar1;
          goto LAB_015fbb64;
        }
      }
      *(uint *)(param_2 + 0x10) = uVar8;
    } while ((uVar9 <= uVar8) && (uVar8 <= uVar10));
  }
  else {
    do {
      uVar12 = FUN_00fb737c(*(undefined1 *)(iVar6 + uVar11),iVar5,uVar8 - uVar9);
      if ((uVar12 & 1) == 0) goto LAB_015fbbc4;
      uVar8 = (int)(uVar12 >> 0x20) + uVar9;
      if (((uVar11 <= uVar8) && (!CARRY4(uVar8 - uVar11,uVar1))) &&
         ((uVar8 - uVar11) + uVar1 <= uVar10)) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar1,4,&DAT_018ab5f0);
      }
      *(uint *)(param_2 + 0x10) = uVar8;
    } while ((uVar9 <= uVar8) && (uVar8 <= uVar10));
  }
LAB_015fbbc8:
  *param_1 = 0;
  return;
LAB_015fbbc4:
  *(uint *)(param_2 + 0x10) = uVar9;
  goto LAB_015fbbc8;
}

