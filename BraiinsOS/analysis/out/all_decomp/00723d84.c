// FUN_00723d84 @ 00723d84 size=480 calls_out=1 calls_in=0
// strings: 

void FUN_00723d84(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  ushort *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_1d [5];
  undefined2 local_18;
  undefined2 local_16;
  undefined1 auStack_14 [4];
  
  puVar2 = (ushort *)*param_1;
  if ((*(uint *)(param_2 + 8) & 0x2000000) != 0) {
    uVar4 = (uint)*puVar2;
    puVar3 = auStack_1d;
    iVar5 = 3;
    do {
      iVar7 = iVar5;
      uVar6 = uVar4 & 0xf;
      uVar4 = uVar4 >> 4;
      puVar3[iVar7] = (&DAT_00563e90)[uVar6];
      iVar5 = iVar7 + -1;
    } while (uVar4 != 0);
LAB_00723e74:
    FUN_00fa9698(param_2,1,"0x",2,puVar3 + iVar7,5 - (iVar7 + 1));
    return;
  }
  if ((*(uint *)(param_2 + 8) & 0x4000000) != 0) {
    uVar4 = (uint)*puVar2;
    puVar3 = auStack_14;
    iVar5 = 3;
    do {
      iVar7 = iVar5;
      uVar6 = uVar4 & 0xf;
      uVar4 = uVar4 >> 4;
      puVar3[iVar7] = (&DAT_005642f0)[uVar6];
      iVar5 = iVar7 + -1;
    } while (uVar4 != 0);
    goto LAB_00723e74;
  }
  uVar1 = *puVar2;
  uVar4 = ((int)(short)uVar1 ^ (int)(short)uVar1 >> 0xf) - ((int)(short)uVar1 >> 0xf);
  uVar6 = uVar4 & 0xffff;
  if (uVar6 >> 3 < 0x7d) {
    iVar5 = 5;
    if (uVar6 < 10) goto joined_r0x00723f04;
    uVar6 = (uint)((short)(uVar6 >> 2) * 0x147b) >> 0x11;
    iVar5 = 3;
  }
  else {
    uVar6 = (uint)((short)(uVar6 >> 4) * 0x347) >> 0x13;
    uVar4 = uVar4 + uVar6 * -10000;
    local_18 = *(undefined2 *)
                (&DAT_0040f4ca + ((uint)((short)((uVar4 & 0xffff) >> 2) * 0x147b) >> 0x11) * 2);
    iVar5 = 1;
  }
  local_16 = *(undefined2 *)
              (&DAT_0040f4ca +
              (uVar4 + ((uint)((short)((uVar4 & 0xffff) >> 2) * 0x147b) >> 0x11) * -100 & 0xffff) *
              2);
  uVar4 = uVar6;
joined_r0x00723f04:
  if (((int)(short)uVar1 == 0) || ((uVar4 & 0xffff) != 0)) {
    auStack_1d[iVar5 + 3] = (&DAT_0040f4cb)[(uVar4 & 0xf) * 2];
    iVar5 = iVar5 + -1;
  }
  FUN_00fa9698(param_2,uVar1 >> 0xf ^ 1,1,0,auStack_1d + iVar5 + 4,5 - iVar5);
  return;
}

