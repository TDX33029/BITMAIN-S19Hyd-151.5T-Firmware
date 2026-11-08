// FUN_01be4804 @ 01be4804 size=512 calls_out=4 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x01be48ca) */
/* WARNING: Removing unreachable block (ram,0x01be4966) */
/* WARNING: Removing unreachable block (ram,0x01be496e) */

int * FUN_01be4804(void)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int local_20;
  int local_1c;
  
  if (DAT_01d535c0 == 0) {
    local_1c = DAT_01d535c0;
    local_20 = (int)&local_20 * 0x41c64e6d;
    for (iVar5 = 0; *(int *)(DAT_01d53578 + iVar5) != 0; iVar5 = iVar5 + 8) {
      if (*(int *)(DAT_01d53578 + iVar5) == 0x19) {
        FUN_01bed4e2(&local_20,*(int *)(DAT_01d53578 + iVar5 + 4) + 8);
      }
    }
    DAT_01d535b8 = local_20;
    DAT_01d535bc = local_1c;
    DAT_01d535c0 = 1;
  }
  piVar4 = DAT_01d535c8;
  if (DAT_01d535c8 != (int *)0x0) {
    piVar2 = (int *)DAT_01d535c8[1];
    if (DAT_01d535c8 == piVar2) {
      DAT_01d535c8 = (int *)0x0;
    }
    else {
      *(int **)(*DAT_01d535c8 + 4) = piVar2;
      *piVar2 = *piVar4;
      if (piVar4 == DAT_01d535c8) {
        DAT_01d535c8 = (int *)piVar4[1];
      }
    }
    *piVar4 = 0;
    piVar4[1] = 0;
    return piVar4;
  }
  if (DAT_01d535d0 != 0) {
    DAT_01d535d0 = DAT_01d535d0 + -1;
    piVar4 = DAT_01d535cc;
    goto LAB_01be49b4;
  }
  uVar3 = DAT_01d5358c;
  if (DAT_01d5358c < 0x1000) {
    uVar3 = 0x1000;
  }
  if (DAT_01d535d4 == 0) {
    if (DAT_01d537ac == -1) {
      iVar6 = 2 << (DAT_01d535d8 & 0xff);
      iVar5 = FUN_01be6c88(0,iVar6 * uVar3,0,0x22,0xffffffff);
      if (iVar5 == -1) {
        return (int *)0x0;
      }
      piVar4 = (int *)(iVar5 + uVar3);
      DAT_01d535d4 = (uVar3 >> 0xc) * (iVar6 + -1);
      DAT_01d535d8 = DAT_01d535d8 + 1;
      uVar1 = (uint)piVar4 & uVar3 - 1;
      goto joined_r0x01be49ce;
    }
    bVar7 = DAT_01d537ac == 0;
    if (bVar7) {
      software_interrupt(0);
      DAT_01d537ac = 0;
      iVar5 = uVar3 * 2;
    }
    else {
      iVar5 = DAT_01d537ac + uVar3;
    }
    software_interrupt(0);
    if (bVar7) {
      FUN_01be6c88(DAT_01d537ac,uVar3,0,0x32,0xffffffff);
    }
    DAT_01d535d4 = uVar3 >> 0xc;
    piVar4 = (int *)(iVar5 - uVar3);
    DAT_01d537ac = iVar5;
  }
  else {
    uVar1 = (uint)DAT_01d535e4 & uVar3 - 1;
    piVar4 = DAT_01d535e4;
joined_r0x01be49ce:
    if (((uVar1 == 0) && (DAT_01d535e4 = piVar4, iVar5 = FUN_01be6d14(piVar4,uVar3,3), iVar5 != 0))
       && (piVar2 = (int *)FUN_01be3244(), *piVar2 != 0x26)) {
      return (int *)0x0;
    }
  }
  DAT_01d535e4 = piVar4 + 0x400;
  DAT_01d535d4 = DAT_01d535d4 - 1;
  if (DAT_01d535e0 == (int *)0x0) {
    DAT_01d535dc = piVar4;
  }
  else {
    DAT_01d535e0[2] = (int)piVar4;
  }
  iVar5 = DAT_01d535bc;
  DAT_01d535d0 = 0xa9;
  DAT_01d535e0 = piVar4;
  *piVar4 = DAT_01d535b8;
  piVar4[1] = iVar5;
  DAT_01d535e0[3] = 0xaa;
  piVar4 = DAT_01d535e0 + 4;
LAB_01be49b4:
  DAT_01d535cc = piVar4 + 6;
  *piVar4 = 0;
  piVar4[1] = 0;
  return piVar4;
}

