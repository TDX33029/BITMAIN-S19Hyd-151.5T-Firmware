// FUN_016d4140 @ 016d4140 size=512 calls_out=4 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x016d4206) */
/* WARNING: Removing unreachable block (ram,0x016d42a2) */
/* WARNING: Removing unreachable block (ram,0x016d42aa) */

int * FUN_016d4140(void)

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
  
  if (DAT_018ddb58 == 0) {
    local_1c = DAT_018ddb58;
    local_20 = (int)&local_20 * 0x41c64e6d;
    for (iVar5 = 0; *(int *)(DAT_018ddb10 + iVar5) != 0; iVar5 = iVar5 + 8) {
      if (*(int *)(DAT_018ddb10 + iVar5) == 0x19) {
        FUN_016dd1aa(&local_20,*(int *)(DAT_018ddb10 + iVar5 + 4) + 8);
      }
    }
    DAT_018ddb50 = local_20;
    DAT_018ddb54 = local_1c;
    DAT_018ddb58 = 1;
  }
  piVar4 = DAT_018ddb60;
  if (DAT_018ddb60 != (int *)0x0) {
    piVar2 = (int *)DAT_018ddb60[1];
    if (DAT_018ddb60 == piVar2) {
      DAT_018ddb60 = (int *)0x0;
    }
    else {
      *(int **)(*DAT_018ddb60 + 4) = piVar2;
      *piVar2 = *piVar4;
      if (piVar4 == DAT_018ddb60) {
        DAT_018ddb60 = (int *)piVar4[1];
      }
    }
    *piVar4 = 0;
    piVar4[1] = 0;
    return piVar4;
  }
  if (DAT_018ddb68 != 0) {
    DAT_018ddb68 = DAT_018ddb68 + -1;
    piVar4 = DAT_018ddb64;
    goto LAB_016d42f0;
  }
  uVar3 = DAT_018ddb24;
  if (DAT_018ddb24 < 0x1000) {
    uVar3 = 0x1000;
  }
  if (DAT_018ddb6c == 0) {
    if (DAT_018ddd44 == -1) {
      iVar6 = 2 << (DAT_018ddb70 & 0xff);
      iVar5 = FUN_016d69b4(0,iVar6 * uVar3,0,0x22,0xffffffff);
      if (iVar5 == -1) {
        return (int *)0x0;
      }
      piVar4 = (int *)(iVar5 + uVar3);
      DAT_018ddb6c = (uVar3 >> 0xc) * (iVar6 + -1);
      DAT_018ddb70 = DAT_018ddb70 + 1;
      uVar1 = (uint)piVar4 & uVar3 - 1;
      goto joined_r0x016d430a;
    }
    bVar7 = DAT_018ddd44 == 0;
    if (bVar7) {
      software_interrupt(0);
      DAT_018ddd44 = 0;
      iVar5 = uVar3 * 2;
    }
    else {
      iVar5 = DAT_018ddd44 + uVar3;
    }
    software_interrupt(0);
    if (bVar7) {
      FUN_016d69b4(DAT_018ddd44,uVar3,0,0x32,0xffffffff);
    }
    DAT_018ddb6c = uVar3 >> 0xc;
    piVar4 = (int *)(iVar5 - uVar3);
    DAT_018ddd44 = iVar5;
  }
  else {
    uVar1 = (uint)DAT_018ddb7c & uVar3 - 1;
    piVar4 = DAT_018ddb7c;
joined_r0x016d430a:
    if (((uVar1 == 0) && (DAT_018ddb7c = piVar4, iVar5 = FUN_016d6a40(piVar4,uVar3,3), iVar5 != 0))
       && (piVar2 = (int *)FUN_016d2bc8(), *piVar2 != 0x26)) {
      return (int *)0x0;
    }
  }
  DAT_018ddb7c = piVar4 + 0x400;
  DAT_018ddb6c = DAT_018ddb6c - 1;
  if (DAT_018ddb78 == (int *)0x0) {
    DAT_018ddb74 = piVar4;
  }
  else {
    DAT_018ddb78[2] = (int)piVar4;
  }
  iVar5 = DAT_018ddb54;
  DAT_018ddb68 = 0xa9;
  DAT_018ddb78 = piVar4;
  *piVar4 = DAT_018ddb50;
  piVar4[1] = iVar5;
  DAT_018ddb78[3] = 0xaa;
  piVar4 = DAT_018ddb78 + 4;
LAB_016d42f0:
  DAT_018ddb64 = piVar4 + 6;
  *piVar4 = 0;
  piVar4[1] = 0;
  return piVar4;
}

