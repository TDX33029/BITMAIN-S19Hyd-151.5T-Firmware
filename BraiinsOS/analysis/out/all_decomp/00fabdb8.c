// FUN_00fabdb8 @ 00fabdb8 size=560 calls_out=2 calls_in=22
// strings: 

void FUN_00fabdb8(uint param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined1 *unaff_r7;
  int iVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  ulonglong uVar15;
  
  uVar15 = CONCAT44(param_2,param_1);
  if (param_2 == 0 && (999 < param_1) <= param_2) {
    uVar4 = param_1;
    uVar12 = param_4;
    uVar9 = param_4;
    if ((uint)(param_1 < 10) <= -param_2) goto LAB_00fabf1c;
LAB_00fabef0:
    uVar3 = (uint)uVar15;
    if (param_1 != 0 || param_2 != 0) {
LAB_00fabf70:
      uVar3 = (uint)uVar15;
      if (uVar15 == 0) {
        return;
      }
    }
  }
  else {
    iVar10 = param_3 + -2;
    uVar9 = 0;
    uVar12 = 0xfffffffe;
    do {
      puVar7 = (undefined1 *)(uVar15 >> 0x20);
      puVar11 = (undefined1 *)uVar15;
      uVar15 = FUN_01846088(puVar11,puVar7,10000,0);
      uVar4 = (uint)uVar15;
      uVar13 = (param_4 - 1) + uVar9;
      uVar6 = uVar13 - 3;
      bVar14 = param_4 <= uVar6;
      iVar5 = param_4 - 1;
      uVar3 = uVar9;
      uVar2 = 0xfabe18;
      puVar8 = puVar7;
      if (!bVar14) {
        puVar8 = puVar11 + uVar4 * -10000;
        uVar3 = (uint)((short)(((uint)puVar8 & 0xffff) >> 2) * 0x147b) >> 0x11;
        iVar5 = iVar10 + param_4;
        unaff_r7 = &DAT_0040f4ca + uVar3 * 2;
        *(undefined1 *)(iVar5 + -2) = *unaff_r7;
        uVar6 = uVar13 - 2;
        uVar2 = uVar9;
      }
      if (bVar14 || param_4 <= uVar6) {
LAB_00fabfac:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar6,param_4,&DAT_01880db4);
      }
      *(undefined1 *)(iVar5 + -1) = unaff_r7[1];
      uVar6 = param_4 + uVar12;
      if (!CARRY4(param_4,uVar12)) goto LAB_00fabfac;
      iVar1 = ((uint)(puVar8 + uVar3 * -100) & 0xffff) * 2;
      unaff_r7 = (undefined1 *)(uint)(byte)(&DAT_0040f4ca)[iVar1];
      *(undefined1 *)(iVar10 + param_4) = (&DAT_0040f4ca)[iVar1];
      if (param_4 <= uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar13,param_4,&DAT_01880db4);
      }
      iVar10 = iVar10 + -4;
      *(undefined1 *)(iVar5 + 1) = (&DAT_0040f4cb)[iVar1];
      uVar12 = uVar12 - 4;
      uVar9 = uVar2 - 4;
    } while ((uint)(puVar11 < &LAB_00989680) <= (uint)-(int)puVar7);
    uVar12 = param_4 + uVar9;
    uVar9 = param_4 + uVar9;
    if ((uint)-(int)(uVar15 >> 0x20) < (uint)(uVar4 < 10)) goto LAB_00fabef0;
LAB_00fabf1c:
    uVar3 = (uint)((short)((uVar4 & 0xffff) >> 2) * 0x147b) >> 0x11;
    uVar9 = uVar12 - 2;
    iVar10 = (uVar4 + uVar3 * -100 & 0xffff) * 2;
    *(undefined1 *)(param_3 + uVar9) = (&DAT_0040f4ca)[iVar10];
    if (param_4 <= uVar12 - 1) goto LAB_00fabfd4;
    *(undefined1 *)(param_3 + (uVar12 - 1)) = (&DAT_0040f4cb)[iVar10];
    uVar15 = (ulonglong)uVar3;
    if (param_1 != 0 || param_2 != 0) goto LAB_00fabf70;
  }
  if (uVar9 - 1 < param_4) {
    *(undefined1 *)(param_3 + (uVar9 - 1)) = (&DAT_0040f4cb)[(uVar3 & 0xf) * 2];
    return;
  }
LAB_00fabfd4:
                    /* WARNING: Subroutine does not return */
  FUN_00faa4a4(0x13,0x13,&DAT_01880db4);
}

