// FUN_01094e68 @ 01094e68 size=456 calls_out=1 calls_in=1
// strings: 

void FUN_01094e68(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 auStack_25 [5];
  undefined2 local_20;
  undefined2 local_1e;
  undefined1 auStack_1c [4];
  
  if ((*(uint *)(param_2 + 8) & 0x2000000) != 0) {
    puVar4 = auStack_25;
    iVar3 = 3;
    do {
      iVar2 = iVar3;
      puVar4[iVar2] = (&DAT_00563e90)[param_1 & 0xf];
      param_1 = (param_1 & 0xffff) >> 4;
      iVar3 = iVar2 + -1;
    } while (param_1 != 0);
LAB_01094f44:
    FUN_00fa9698(param_2,1,"0x",2,puVar4 + iVar2,5 - (iVar2 + 1));
    return;
  }
  if ((*(uint *)(param_2 + 8) & 0x4000000) != 0) {
    puVar4 = auStack_1c;
    iVar3 = 3;
    do {
      iVar2 = iVar3;
      puVar4[iVar2] = (&DAT_005642f0)[param_1 & 0xf];
      param_1 = (param_1 & 0xffff) >> 4;
      iVar3 = iVar2 + -1;
    } while (param_1 != 0);
    goto LAB_01094f44;
  }
  uVar1 = param_1 & 0xffff;
  if (uVar1 >> 3 < 0x7d) {
    iVar3 = 5;
    uVar5 = param_1;
    if (uVar1 < 10) goto joined_r0x01094fe0;
    iVar3 = 3;
    uVar5 = (uint)((short)(uVar1 >> 2) * 0x147b) >> 0x11;
    uVar1 = param_1;
  }
  else {
    uVar5 = (uint)((short)(uVar1 >> 4) * 0x347) >> 0x13;
    uVar1 = param_1 + uVar5 * -10000;
    iVar3 = 1;
    local_20 = *(undefined2 *)
                (&DAT_0040f4ca + ((uint)((short)((uVar1 & 0xffff) >> 2) * 0x147b) >> 0x11) * 2);
  }
  local_1e = *(undefined2 *)
              (&DAT_0040f4ca +
              (uVar1 + ((uint)((short)((uVar1 & 0xffff) >> 2) * 0x147b) >> 0x11) * -100 & 0xffff) *
              2);
joined_r0x01094fe0:
  if (((param_1 & 0xffff) == 0) || ((uVar5 & 0xffff) != 0)) {
    auStack_25[iVar3 + 3] = (&DAT_0040f4cb)[(uVar5 & 0xf) * 2];
    iVar3 = iVar3 + -1;
  }
  FUN_00fa9698(param_2,1,1,0,auStack_25 + iVar3 + 4,5 - iVar3);
  return;
}

