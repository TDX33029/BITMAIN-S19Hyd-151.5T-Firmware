// FUN_009f2b38 @ 009f2b38 size=352 calls_out=2 calls_in=0
// strings: 

void FUN_009f2b38(uint *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_3f [39];
  
  if ((*(uint *)(param_2 + 8) & 0x2000000) == 0) {
    uVar3 = *param_1;
    uVar4 = param_1[1];
    uVar8 = param_1[3];
    if ((*(uint *)(param_2 + 8) & 0x4000000) == 0) {
      uVar5 = (int)uVar8 >> 0x1f;
      uVar3 = uVar3 ^ uVar5;
      uVar4 = uVar4 ^ uVar5;
      uVar6 = param_1[2] ^ uVar5;
      bVar1 = uVar4 - uVar5 < (uint)(uVar5 <= uVar3);
      iVar2 = FUN_00fab440(uVar3 - uVar5,uVar4 - (uVar5 + (uVar5 > uVar3)),
                           uVar6 - (uVar5 + (uVar5 >= uVar4 && !bVar1)),
                           (uVar8 ^ uVar5) -
                           (uVar5 + (uVar6 <= uVar5 &&
                                    (uint)(uVar5 < uVar4 || bVar1) <= uVar6 - uVar5)),auStack_3f);
      FUN_00fa9698(param_2,~uVar8 >> 0x1f,1,0,auStack_3f + iVar2,0x27 - iVar2);
      return;
    }
    uVar5 = param_1[2];
    iVar2 = 0x1f;
    do {
      iVar9 = iVar2;
      uVar6 = uVar3 & 0xf;
      uVar3 = uVar3 >> 4 | uVar4 << 0x1c;
      auStack_3f[iVar9] = (&DAT_005642f0)[uVar6];
      uVar7 = uVar5 >> 4 | uVar8 << 0x1c;
      uVar4 = uVar4 >> 4 | uVar5 << 0x1c;
      uVar6 = uVar8 >> 4;
      uVar8 = uVar8 >> 4;
      uVar5 = uVar7;
      iVar2 = iVar9 + -1;
    } while ((uVar3 != 0 || uVar7 != 0) || (uVar4 != 0 || uVar6 != 0));
  }
  else {
    uVar4 = *param_1;
    uVar5 = param_1[1];
    uVar8 = param_1[3];
    uVar3 = param_1[2];
    iVar2 = 0x1f;
    do {
      iVar9 = iVar2;
      uVar6 = uVar4 & 0xf;
      uVar4 = uVar4 >> 4 | uVar5 << 0x1c;
      auStack_3f[iVar9] = (&DAT_00563e90)[uVar6];
      uVar7 = uVar3 >> 4 | uVar8 << 0x1c;
      uVar5 = uVar5 >> 4 | uVar3 << 0x1c;
      uVar6 = uVar8 >> 4;
      uVar8 = uVar8 >> 4;
      uVar3 = uVar7;
      iVar2 = iVar9 + -1;
    } while ((uVar4 != 0 || uVar7 != 0) || (uVar5 != 0 || uVar6 != 0));
  }
  FUN_00fa9698(param_2,1,"0x",2,auStack_3f + iVar9,0x21 - (iVar9 + 1));
  return;
}

