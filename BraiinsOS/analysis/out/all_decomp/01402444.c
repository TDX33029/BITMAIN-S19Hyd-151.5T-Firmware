// FUN_01402444 @ 01402444 size=344 calls_out=1 calls_in=19
// strings: 

void FUN_01402444(byte *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 local_f [3];
  undefined2 local_c;
  undefined1 local_a [2];
  
  if ((*(uint *)(param_2 + 8) & 0x2000000) == 0) {
    if ((*(uint *)(param_2 + 8) & 0x4000000) == 0) {
      uVar3 = (uint)*param_1;
      if (uVar3 < 10) {
        iVar1 = 3;
        uVar2 = uVar3;
      }
      else {
        uVar2 = (uint)((short)(ushort)*param_1 * 0x29) >> 0xc;
        local_c = *(undefined2 *)(&DAT_0040f4ca + (uVar3 + uVar2 * -100 & 0xff) * 2);
        iVar1 = 1;
      }
      if ((uVar3 == 0) || (uVar2 != 0)) {
        local_f[iVar1 + 1] = (&DAT_0040f4cb)[(uVar2 & 0x7f) * 2];
        iVar1 = iVar1 + -1;
      }
      FUN_00fa9698(param_2,1,1,0,local_f + iVar1 + 2,3 - iVar1);
      return;
    }
    uVar3 = (uint)*param_1;
    puVar5 = local_a;
    iVar1 = 1;
    do {
      iVar4 = iVar1;
      uVar2 = uVar3 & 0xf;
      uVar3 = uVar3 >> 4;
      puVar5[iVar4] = (&DAT_005642f0)[uVar2];
      iVar1 = iVar4 + -1;
    } while (uVar3 != 0);
  }
  else {
    uVar3 = (uint)*param_1;
    puVar5 = local_f;
    iVar1 = 1;
    do {
      iVar4 = iVar1;
      uVar2 = uVar3 & 0xf;
      uVar3 = uVar3 >> 4;
      puVar5[iVar4] = (&DAT_00563e90)[uVar2];
      iVar1 = iVar4 + -1;
    } while (uVar3 != 0);
  }
  FUN_00fa9698(param_2,1,"0x",2,puVar5 + iVar4,3 - (iVar4 + 1));
  return;
}

