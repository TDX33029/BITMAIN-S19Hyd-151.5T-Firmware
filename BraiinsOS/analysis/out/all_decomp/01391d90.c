// FUN_01391d90 @ 01391d90 size=332 calls_out=1 calls_in=1
// strings: 

void FUN_01391d90(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 local_f [3];
  undefined2 local_c;
  undefined1 local_a [2];
  
  if ((*(uint *)(param_2 + 8) & 0x2000000) == 0) {
    if ((*(uint *)(param_2 + 8) & 0x4000000) == 0) {
      iVar2 = 3;
      uVar1 = param_1;
      if (9 < (param_1 & 0xff)) {
        iVar2 = 1;
        uVar1 = (uint)((short)(param_1 & 0xff) * 0x29) >> 0xc;
        local_c = *(undefined2 *)(&DAT_0040f4ca + (param_1 + uVar1 * -100 & 0xff) * 2);
      }
      if (((param_1 & 0xff) == 0) || (iVar3 = iVar2, (uVar1 & 0xff) != 0)) {
        iVar3 = iVar2 + -1;
        local_f[iVar2 + 1] = (&DAT_0040f4cb)[(uVar1 & 0x7f) * 2];
      }
      FUN_00fa9698(param_2,1,1,0,local_f + iVar3 + 2,3 - iVar3);
      return;
    }
    puVar4 = local_a;
    iVar2 = 1;
    do {
      iVar3 = iVar2;
      puVar4[iVar3] = (&DAT_005642f0)[param_1 & 0xf];
      param_1 = (param_1 & 0xff) >> 4;
      iVar2 = iVar3 + -1;
    } while (param_1 != 0);
  }
  else {
    puVar4 = local_f;
    iVar2 = 1;
    do {
      iVar3 = iVar2;
      puVar4[iVar3] = (&DAT_00563e90)[param_1 & 0xf];
      param_1 = (param_1 & 0xff) >> 4;
      iVar2 = iVar3 + -1;
    } while (param_1 != 0);
  }
  FUN_00fa9698(param_2,1,"0x",2,puVar4 + iVar3,3 - (iVar3 + 1));
  return;
}

