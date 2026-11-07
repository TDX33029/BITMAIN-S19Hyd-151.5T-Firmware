// FUN_01090210 @ 01090210 size=440 calls_out=1 calls_in=6
// strings: 

void FUN_01090210(undefined4 *param_1,int param_2)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_1d [5];
  undefined2 local_18;
  undefined2 local_16;
  undefined1 auStack_14 [4];
  
  puVar2 = (ushort *)*param_1;
  if ((*(uint *)(param_2 + 8) & 0x2000000) != 0) {
    uVar5 = (uint)*puVar2;
    puVar4 = auStack_1d;
    iVar6 = 3;
    do {
      iVar7 = iVar6;
      uVar8 = uVar5 & 0xf;
      uVar5 = uVar5 >> 4;
      puVar4[iVar7] = (&DAT_00563e90)[uVar8];
      iVar6 = iVar7 + -1;
    } while (uVar5 != 0);
LAB_010902f0:
    FUN_00fa9698(param_2,1,"0x",2,puVar4 + iVar7,5 - (iVar7 + 1));
    return;
  }
  if ((*(uint *)(param_2 + 8) & 0x4000000) != 0) {
    uVar5 = (uint)*puVar2;
    puVar4 = auStack_14;
    iVar6 = 3;
    do {
      iVar7 = iVar6;
      uVar8 = uVar5 & 0xf;
      uVar5 = uVar5 >> 4;
      puVar4[iVar7] = (&DAT_005642f0)[uVar8];
      iVar6 = iVar7 + -1;
    } while (uVar5 != 0);
    goto LAB_010902f0;
  }
  uVar1 = *puVar2;
  uVar5 = (uint)uVar1;
  if (uVar1 >> 3 < 0x7d) {
    iVar6 = 5;
    uVar8 = uVar5;
    if (uVar5 < 10) goto LAB_01090374;
    iVar6 = 3;
    uVar8 = (uint)((short)(uVar1 >> 2) * 0x147b) >> 0x11;
    uVar3 = uVar5;
  }
  else {
    uVar8 = (uint)((short)(uVar1 >> 4) * 0x347) >> 0x13;
    uVar3 = uVar5 + uVar8 * -10000;
    iVar6 = 1;
    local_18 = *(undefined2 *)
                (&DAT_0040f4ca + ((uint)((short)((uVar3 & 0xffff) >> 2) * 0x147b) >> 0x11) * 2);
  }
  local_16 = *(undefined2 *)
              (&DAT_0040f4ca +
              (uVar3 + ((uint)((short)((uVar3 & 0xffff) >> 2) * 0x147b) >> 0x11) * -100 & 0xffff) *
              2);
LAB_01090374:
  if ((uVar5 == 0) || (iVar7 = iVar6, uVar8 != 0)) {
    iVar7 = iVar6 + -1;
    auStack_1d[iVar6 + 3] = (&DAT_0040f4cb)[(uVar8 & 0xf) * 2];
  }
  FUN_00fa9698(param_2,1,1,0,auStack_1d + iVar7 + 4,5 - iVar7);
  return;
}

