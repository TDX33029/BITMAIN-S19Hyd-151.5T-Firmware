// FUN_014f838c @ 014f838c size=580 calls_out=6 calls_in=1
// strings: i8i16

undefined4 FUN_014f838c(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  uint local_48 [2];
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 auStack_34 [20];
  
  iVar2 = *param_1;
  if (iVar2 == 0) {
    if (param_1[4] == 0) {
      return 0;
    }
    uVar5 = FUN_00faace8(param_1[4],"?",1);
    return uVar5;
  }
  uVar10 = param_1[1];
  uVar11 = param_1[2];
  uVar4 = uVar10;
  uVar1 = uVar11;
  if (uVar10 < uVar11) {
    uVar4 = uVar11;
  }
  do {
    uVar7 = uVar1;
    if (uVar4 == uVar7) goto LAB_014f8430;
    uVar9 = (uint)*(byte *)(iVar2 + uVar7);
    param_1[2] = uVar7 + 1;
    uVar8 = uVar9 - 0x30;
    bVar12 = uVar8 < 10;
    if (!bVar12) {
      uVar8 = uVar9 - 0x61;
    }
    uVar1 = uVar7 + 1;
  } while (bVar12 || uVar8 < 6);
  if (uVar9 != 0x5f) {
LAB_014f8430:
    if ((param_1[4] == 0) || (iVar2 = FUN_00faace8(param_1[4],&DAT_00564580,0x10), iVar2 == 0)) {
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 0;
      return 0;
    }
    return 1;
  }
  if ((uVar11 == 0) || (uVar10 <= uVar11)) {
    if (uVar10 < uVar7) goto LAB_014f8418;
  }
  else if ((uVar10 < uVar7) || (*(char *)(iVar2 + uVar11) < -0x40)) {
LAB_014f8418:
                    /* WARNING: Subroutine does not return */
    FUN_00faa8ac(iVar2,uVar10,uVar11,uVar7,&DAT_018a70c8);
  }
  FUN_014f88d0(local_48,iVar2 + uVar11,uVar7 - uVar11);
  iVar6 = param_1[4];
  if ((local_48[0] & 1) == 0) {
    if (iVar6 == 0) {
      return 0;
    }
    iVar3 = FUN_00faace8(iVar6,"0x",2);
    if (iVar3 != 0) {
      return 1;
    }
    iVar2 = FUN_00faace8(iVar6,iVar2 + uVar11,uVar7 - uVar11);
  }
  else {
    if (iVar6 == 0) {
      return 0;
    }
    iVar2 = FUN_00fabdb8(local_40,local_3c,auStack_34,0x14);
    iVar2 = FUN_00fa9698(iVar6,1,1,0,auStack_34 + iVar2,0x14 - iVar2);
  }
  if (iVar2 != 0) {
    return 1;
  }
  if ((*(byte *)(iVar6 + 10) & 0x80) != 0) {
    return 0;
  }
  uVar4 = param_2 - 0x61U & 0xff;
  if ((0x19 < uVar4) || ((0x3bcfbbfU >> uVar4 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018a7118);
  }
  uVar5 = FUN_00faace8(iVar6,(&PTR_s_i8i16_018b38bc)[uVar4],
                       *(undefined4 *)(&DAT_004224fc + uVar4 * 4));
  return uVar5;
}

