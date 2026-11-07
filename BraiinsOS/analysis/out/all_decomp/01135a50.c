// FUN_01135a50 @ 01135a50 size=348 calls_out=1 calls_in=19
// strings: 

void FUN_01135a50(undefined4 *param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 local_f [3];
  undefined2 local_c;
  undefined1 local_a [2];
  
  pbVar1 = (byte *)*param_1;
  if ((*(uint *)(param_2 + 8) & 0x2000000) == 0) {
    if ((*(uint *)(param_2 + 8) & 0x4000000) == 0) {
      uVar4 = (uint)*pbVar1;
      if (uVar4 < 10) {
        iVar2 = 3;
        uVar3 = uVar4;
      }
      else {
        uVar3 = (uint)((short)(ushort)*pbVar1 * 0x29) >> 0xc;
        local_c = *(undefined2 *)(&DAT_0040f4ca + (uVar4 + uVar3 * -100 & 0xff) * 2);
        iVar2 = 1;
      }
      if ((uVar4 == 0) || (uVar3 != 0)) {
        local_f[iVar2 + 1] = (&DAT_0040f4cb)[(uVar3 & 0x7f) * 2];
        iVar2 = iVar2 + -1;
      }
      FUN_00fa9698(param_2,1,1,0,local_f + iVar2 + 2,3 - iVar2);
      return;
    }
    uVar4 = (uint)*pbVar1;
    puVar6 = local_a;
    iVar2 = 1;
    do {
      iVar5 = iVar2;
      uVar3 = uVar4 & 0xf;
      uVar4 = uVar4 >> 4;
      puVar6[iVar5] = (&DAT_005642f0)[uVar3];
      iVar2 = iVar5 + -1;
    } while (uVar4 != 0);
  }
  else {
    uVar4 = (uint)*pbVar1;
    puVar6 = local_f;
    iVar2 = 1;
    do {
      iVar5 = iVar2;
      uVar3 = uVar4 & 0xf;
      uVar4 = uVar4 >> 4;
      puVar6[iVar5] = (&DAT_00563e90)[uVar3];
      iVar2 = iVar5 + -1;
    } while (uVar4 != 0);
  }
  FUN_00fa9698(param_2,1,"0x",2,puVar6 + iVar5,3 - (iVar5 + 1));
  return;
}

