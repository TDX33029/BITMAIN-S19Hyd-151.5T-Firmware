// FUN_006c1f2c @ 006c1f2c size=224 calls_out=1 calls_in=1
// strings: 

int FUN_006c1f2c(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  if (param_1 == 0) {
    return 0;
  }
  do {
    uVar1 = *(ushort *)(param_1 + 0x81a);
    iVar6 = param_1 + 0x794;
    uVar5 = 0xffffffff;
    iVar7 = (uint)uVar1 * 0xc;
    do {
      if (iVar7 == 0) {
        uVar5 = (uint)uVar1;
        goto LAB_006c1fd8;
      }
      uVar4 = *(uint *)(iVar6 + 8);
      uVar3 = uVar4;
      if (param_4 < uVar4) {
        uVar3 = param_4;
      }
      iVar2 = FUN_01bed842(param_3,*(undefined4 *)(iVar6 + 4),uVar3);
      if (iVar2 == 0) {
        iVar2 = param_4 - uVar4;
      }
      iVar7 = iVar7 + -0xc;
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 0xc;
    } while ((char)((0 < iVar2) - (iVar2 < 0)) == '\x01');
    if (0 < iVar2 == iVar2 < 0) {
      return uVar5 * 0xb0 + param_1;
    }
LAB_006c1fd8:
    if (param_2 == 0) {
      return 0;
    }
    param_2 = param_2 + -1;
    param_1 = *(int *)(param_1 + uVar5 * 4 + 0x820);
  } while( true );
}

