// FUN_00f6b010 @ 00f6b010 size=448 calls_out=1 calls_in=6
// strings: 

uint FUN_00f6b010(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar4 = (param_1 & 0x1fff) >> 4;
  uVar5 = uVar4 + param_2;
  if (((!SCARRY4(uVar4,param_2)) && (0 < (int)uVar5)) &&
     (uVar5 <= ((int)(param_1 << 0x1c) >> 0x1f) + 0x16eU)) {
    return param_1 & 0xffffe00f | uVar5 * 0x10;
  }
  iVar6 = ((int)param_1 >> 0xd) % 400;
  iVar2 = iVar6;
  if (iVar6 < 0) {
    iVar2 = iVar6 + 400;
  }
  iVar2 = iVar2 * 0x16d + uVar4 + (uint)(byte)(&DAT_0035cf22)[iVar2] + -1;
  iVar3 = iVar2 + param_2;
  if (!SCARRY4(iVar2,param_2)) {
    uVar5 = iVar3 % 0x23ab1;
    uVar4 = uVar5;
    if ((int)uVar5 < 0) {
      uVar4 = uVar5 + 0x23ab1;
    }
    uVar1 = uVar4 / 0x16d;
    uVar7 = uVar4 % 0x16d;
    if (uVar7 < (byte)(&DAT_0035cf22)[uVar4 / 0x16d]) {
      uVar4 = uVar1 - 1;
      if (400 < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(0xffffffff,0x191,&DAT_01880234);
      }
      uVar7 = (uVar7 - (byte)(&DAT_0035cf21)[uVar1]) + 0x16d;
    }
    else {
      if (0x23a4f < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(400,400,&DAT_01880254);
      }
      uVar7 = uVar7 - (byte)(&DAT_0035cf22)[uVar4 / 0x16d];
      uVar4 = uVar1;
    }
    if ((uVar7 >> 1 < 0xb7) &&
       (iVar2 = ((iVar6 >> 0x1f) + ((int)param_1 >> 0xd) / 400 + iVar3 / 0x23ab1 +
                ((int)uVar5 >> 0x1f)) * 400 + uVar4, 0xfff80001 < iVar2 - 0x3ffffU)) {
      uVar4 = uVar7 * 0x10 + iVar2 * 0x2000 + 0x10 | (uint)(byte)(&DAT_0035d4d3)[uVar4];
      if (0x16e0 < (uVar4 & 0x1ff8)) {
        uVar4 = 0;
      }
      return uVar4;
    }
  }
  return 0;
}

