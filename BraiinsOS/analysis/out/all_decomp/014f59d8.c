// FUN_014f59d8 @ 014f59d8 size=356 calls_out=1 calls_in=0
// strings: 

void FUN_014f59d8(byte *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 local_f [3];
  undefined2 local_c;
  undefined1 local_a [2];
  
  if ((*(uint *)(param_2 + 8) & 0x2000000) == 0) {
    if ((*(uint *)(param_2 + 8) & 0x4000000) == 0) {
      bVar1 = *param_1;
      uVar5 = ((int)(char)bVar1 ^ (int)(char)bVar1 >> 7) - ((int)(char)bVar1 >> 7);
      iVar2 = 3;
      uVar6 = uVar5 & 0xff;
      if (9 < uVar6) {
        uVar3 = uVar5 * 2 + 0x38;
        if (uVar6 < 100) {
          uVar3 = uVar5 * 2;
        }
        uVar5 = (uint)(99 < uVar6);
        local_c = *(undefined2 *)(&DAT_0040f4ca + (uVar3 & 0xff));
        iVar2 = 1;
      }
      if (((int)(char)bVar1 == 0) || (iVar4 = iVar2, (uVar5 & 0xff) != 0)) {
        iVar4 = iVar2 + -1;
        local_f[iVar2 + 1] = (&DAT_0040f4cb)[(uVar5 & 0x7f) * 2];
      }
      FUN_00fa9698(param_2,bVar1 >> 7 ^ 1,1,0,local_f + iVar4 + 2,3 - iVar4);
      return;
    }
    uVar5 = (uint)*param_1;
    puVar7 = local_a;
    iVar2 = 1;
    do {
      iVar4 = iVar2;
      uVar6 = uVar5 & 0xf;
      uVar5 = uVar5 >> 4;
      puVar7[iVar4] = (&DAT_005642f0)[uVar6];
      iVar2 = iVar4 + -1;
    } while (uVar5 != 0);
  }
  else {
    uVar5 = (uint)*param_1;
    puVar7 = local_f;
    iVar2 = 1;
    do {
      iVar4 = iVar2;
      uVar6 = uVar5 & 0xf;
      uVar5 = uVar5 >> 4;
      puVar7[iVar4] = (&DAT_00563e90)[uVar6];
      iVar2 = iVar4 + -1;
    } while (uVar5 != 0);
  }
  FUN_00fa9698(param_2,1,"0x",2,puVar7 + iVar4,3 - (iVar4 + 1));
  return;
}

