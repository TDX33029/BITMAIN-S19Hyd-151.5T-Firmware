// FUN_0194f848 @ 0194f848 size=192 calls_out=1 calls_in=2
// strings: 

void FUN_0194f848(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  while( true ) {
    uVar4 = 0xffffffff;
    uVar1 = *(ushort *)(param_2 + 0xb8a);
    iVar6 = (uint)uVar1 << 4;
    iVar5 = param_2;
    do {
      if (iVar6 == 0) {
        uVar4 = (uint)uVar1;
        goto LAB_0194f8cc;
      }
      iVar2 = FUN_01bed842(param_4,iVar5,0x10);
      iVar6 = iVar6 + -0x10;
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x10;
    } while ((char)((0 < iVar2) - (iVar2 < 0)) == '\x01');
    if (0 < iVar2 == iVar2 < 0) break;
LAB_0194f8cc:
    if (param_3 == 0) {
      uVar3 = 1;
      param_3 = 0;
LAB_0194f8e8:
      *param_1 = uVar3;
      param_1[1] = param_2;
      param_1[2] = param_3;
      param_1[3] = uVar4;
      return;
    }
    param_3 = param_3 + -1;
    param_2 = *(int *)(param_2 + uVar4 * 4 + 0xb8c);
  }
  uVar3 = 0;
  goto LAB_0194f8e8;
}

