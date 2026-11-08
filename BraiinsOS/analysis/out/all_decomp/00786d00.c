// FUN_00786d00 @ 00786d00 size=436 calls_out=1 calls_in=0
// strings: 

void FUN_00786d00(ushort *param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_1d [5];
  undefined2 local_18;
  undefined2 local_16;
  undefined1 auStack_14 [4];
  
  if ((*(uint *)(param_2 + 8) & 0x2000000) != 0) {
    uVar4 = (uint)*param_1;
    puVar3 = auStack_1d;
    iVar5 = 3;
    do {
      iVar6 = iVar5;
      uVar7 = uVar4 & 0xf;
      uVar4 = uVar4 >> 4;
      puVar3[iVar6] = (&DAT_00563e90)[uVar7];
      iVar5 = iVar6 + -1;
    } while (uVar4 != 0);
LAB_00786ddc:
    FUN_00fa9698(param_2,1,"0x",2,puVar3 + iVar6,5 - (iVar6 + 1));
    return;
  }
  if ((*(uint *)(param_2 + 8) & 0x4000000) != 0) {
    uVar4 = (uint)*param_1;
    puVar3 = auStack_14;
    iVar5 = 3;
    do {
      iVar6 = iVar5;
      uVar7 = uVar4 & 0xf;
      uVar4 = uVar4 >> 4;
      puVar3[iVar6] = (&DAT_005642f0)[uVar7];
      iVar5 = iVar6 + -1;
    } while (uVar4 != 0);
    goto LAB_00786ddc;
  }
  uVar1 = *param_1;
  uVar4 = (uint)uVar1;
  if (uVar1 >> 3 < 0x7d) {
    iVar5 = 5;
    uVar7 = uVar4;
    if (uVar4 < 10) goto LAB_00786e60;
    iVar5 = 3;
    uVar7 = (uint)((short)(uVar1 >> 2) * 0x147b) >> 0x11;
    uVar2 = uVar4;
  }
  else {
    uVar7 = (uint)((short)(uVar1 >> 4) * 0x347) >> 0x13;
    uVar2 = uVar4 + uVar7 * -10000;
    iVar5 = 1;
    local_18 = *(undefined2 *)
                (&DAT_0040f4ca + ((uint)((short)((uVar2 & 0xffff) >> 2) * 0x147b) >> 0x11) * 2);
  }
  local_16 = *(undefined2 *)
              (&DAT_0040f4ca +
              (uVar2 + ((uint)((short)((uVar2 & 0xffff) >> 2) * 0x147b) >> 0x11) * -100 & 0xffff) *
              2);
LAB_00786e60:
  if ((uVar4 == 0) || (iVar6 = iVar5, uVar7 != 0)) {
    iVar6 = iVar5 + -1;
    auStack_1d[iVar5 + 3] = (&DAT_0040f4cb)[(uVar7 & 0xf) * 2];
  }
  FUN_00fa9698(param_2,1,1,0,auStack_1d + iVar6 + 4,5 - iVar6);
  return;
}

