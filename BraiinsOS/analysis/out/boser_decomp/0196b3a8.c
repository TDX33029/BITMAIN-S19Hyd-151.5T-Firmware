// FUN_0196b3a8 @ 0196b3a8 size=220 calls_out=1 calls_in=31
// strings: 

int FUN_0196b3a8(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  if (param_1 == 0) {
    return 0;
  }
  do {
    iVar7 = param_1 + 0x10c;
    uVar1 = *(ushort *)(param_1 + 0x192);
    uVar6 = 0xffffffff;
    iVar5 = (uint)uVar1 * 0xc;
    do {
      if (iVar5 == 0) {
        uVar6 = (uint)uVar1;
        goto LAB_0196b450;
      }
      uVar4 = *(uint *)(iVar7 + 8);
      uVar3 = uVar4;
      if (param_4 < uVar4) {
        uVar3 = param_4;
      }
      iVar2 = FUN_01bed842(param_3,*(undefined4 *)(iVar7 + 4),uVar3);
      if (iVar2 == 0) {
        iVar2 = param_4 - uVar4;
      }
      iVar5 = iVar5 + -0xc;
      uVar6 = uVar6 + 1;
      iVar7 = iVar7 + 0xc;
    } while ((char)((0 < iVar2) - (iVar2 < 0)) == '\x01');
    if (0 < iVar2 == iVar2 < 0) {
      return param_1 + uVar6 * 0x18;
    }
LAB_0196b450:
    if (param_2 == 0) {
      return 0;
    }
    param_2 = param_2 + -1;
    param_1 = *(int *)(param_1 + uVar6 * 4 + 0x198);
  } while( true );
}

