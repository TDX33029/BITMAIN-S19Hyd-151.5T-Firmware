// FUN_012fc968 @ 012fc968 size=552 calls_out=2 calls_in=7
// strings: 

void FUN_012fc968(uint param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *unaff_r7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  ulonglong uVar14;
  
  uVar14 = CONCAT44(param_2,param_1);
  if (param_2 == 0 && (999 < param_1) <= param_2) {
    uVar7 = param_4;
  }
  else {
    iVar8 = param_3 + -2;
    uVar7 = 0;
    uVar10 = 0xfffffffe;
    do {
      uVar5 = (uint)(uVar14 >> 0x20);
      uVar9 = (uint)uVar14;
      uVar14 = FUN_01bf0ff0(uVar9,uVar5,10000,0);
      uVar11 = (param_4 - 1) + uVar7;
      uVar4 = uVar11 - 3;
      bVar13 = param_4 <= uVar4;
      iVar3 = param_4 - 1;
      uVar12 = uVar7;
      uVar2 = 0x12fc9c8;
      uVar6 = uVar5;
      if (!bVar13) {
        uVar6 = uVar9 + (int)uVar14 * -10000;
        uVar12 = (uint)((short)((uVar6 & 0xffff) >> 2) * 0x147b) >> 0x11;
        iVar3 = iVar8 + param_4;
        unaff_r7 = &DAT_00534998 + uVar12 * 2;
        *(undefined1 *)(iVar3 + -2) = *unaff_r7;
        uVar4 = uVar11 - 2;
        uVar2 = uVar7;
      }
      if (bVar13 || param_4 <= uVar4) {
LAB_012fcb54:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar4,param_4,&DAT_01ce45e8);
      }
      *(undefined1 *)(iVar3 + -1) = unaff_r7[1];
      uVar4 = param_4 + uVar10;
      if (!CARRY4(param_4,uVar10)) goto LAB_012fcb54;
      iVar1 = (uVar6 + uVar12 * -100 & 0xffff) * 2;
      unaff_r7 = (undefined1 *)(uint)(byte)(&DAT_00534998)[iVar1];
      *(undefined1 *)(iVar8 + param_4) = (&DAT_00534998)[iVar1];
      if (param_4 <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar11,param_4,&DAT_01ce45e8);
      }
      iVar8 = iVar8 + -4;
      *(undefined1 *)(iVar3 + 1) = (&DAT_00534999)[iVar1];
      uVar10 = uVar10 - 4;
      uVar7 = uVar2 - 4;
    } while ((uint)(uVar9 < 10000000) <= -uVar5);
    uVar7 = param_4 + uVar7;
  }
  uVar10 = (uint)uVar14;
  if ((uint)-(int)(uVar14 >> 0x20) < (uint)(uVar10 < 10)) {
    uVar4 = uVar7;
    uVar12 = uVar10;
    if (param_1 != 0 || param_2 != 0) {
LAB_012fcb18:
      uVar4 = uVar7;
      uVar12 = (uint)uVar14;
      if (uVar14 == 0) {
        return;
      }
    }
  }
  else {
    uVar12 = (uint)((short)((uVar10 & 0xffff) >> 2) * 0x147b) >> 0x11;
    uVar4 = uVar7 - 2;
    iVar8 = (uVar10 + uVar12 * -100 & 0xffff) * 2;
    *(undefined1 *)(param_3 + uVar4) = (&DAT_00534998)[iVar8];
    if (param_4 <= uVar7 - 1) goto LAB_012fcb7c;
    *(undefined1 *)(param_3 + (uVar7 - 1)) = (&DAT_00534999)[iVar8];
    uVar14 = (ulonglong)uVar12;
    uVar7 = uVar4;
    if (param_1 != 0 || param_2 != 0) goto LAB_012fcb18;
  }
  if (uVar4 - 1 < param_4) {
    *(undefined1 *)(param_3 + (uVar4 - 1)) = (&DAT_00534999)[(uVar12 & 0xf) * 2];
    return;
  }
LAB_012fcb7c:
                    /* WARNING: Subroutine does not return */
  FUN_012fb12c(0x13,0x13,&DAT_01ce45e8);
}

