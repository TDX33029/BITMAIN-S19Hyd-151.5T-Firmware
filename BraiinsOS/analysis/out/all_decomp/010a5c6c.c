// FUN_010a5c6c @ 010a5c6c size=428 calls_out=1 calls_in=0
// strings: 

void FUN_010a5c6c(ushort *param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 auStack_15 [5];
  undefined2 local_10;
  undefined2 local_e;
  undefined1 auStack_c [4];
  
  uVar1 = *param_1;
  uVar2 = (uint)uVar1;
  if ((*(uint *)(param_2 + 8) & 0x2000000) != 0) {
    puVar6 = auStack_15;
    iVar5 = 3;
    do {
      iVar3 = iVar5;
      puVar6[iVar3] = (&DAT_00563e90)[uVar2 & 0xf];
      uVar2 = uVar2 >> 4;
      iVar5 = iVar3 + -1;
    } while (uVar2 != 0);
LAB_010a5d48:
    FUN_00fa9698(param_2,1,"0x",2,puVar6 + iVar3,5 - (iVar3 + 1));
    return;
  }
  if ((*(uint *)(param_2 + 8) & 0x4000000) != 0) {
    puVar6 = auStack_c;
    iVar5 = 3;
    do {
      iVar3 = iVar5;
      puVar6[iVar3] = (&DAT_005642f0)[uVar2 & 0xf];
      uVar2 = uVar2 >> 4;
      iVar5 = iVar3 + -1;
    } while (uVar2 != 0);
    goto LAB_010a5d48;
  }
  if (uVar1 >> 3 < 0x7d) {
    iVar5 = 5;
    if (9 < uVar2) {
      iVar5 = 3;
      uVar4 = (uint)((short)(uVar1 >> 2) * 0x147b) >> 0x11;
      goto LAB_010a5d98;
    }
  }
  else {
    uVar4 = (uint)((short)(uVar1 >> 4) * 0x347) >> 0x13;
    uVar2 = uVar2 + uVar4 * -10000;
    iVar5 = 1;
    local_10 = *(undefined2 *)
                (&DAT_0040f4ca + ((uint)((short)((uVar2 & 0xffff) >> 2) * 0x147b) >> 0x11) * 2);
LAB_010a5d98:
    local_e = *(undefined2 *)
               (&DAT_0040f4ca +
               (uVar2 + ((uint)((short)((uVar2 & 0xffff) >> 2) * 0x147b) >> 0x11) * -100 & 0xffff) *
               2);
    uVar2 = uVar4;
    if (uVar4 == 0) goto LAB_010a5dec;
  }
  auStack_15[iVar5 + 3] = (&DAT_0040f4cb)[(uVar2 & 0xf) * 2];
  iVar5 = iVar5 + -1;
LAB_010a5dec:
  FUN_00fa9698(param_2,1,1,0,auStack_15 + iVar5 + 4,5 - iVar5);
  return;
}

