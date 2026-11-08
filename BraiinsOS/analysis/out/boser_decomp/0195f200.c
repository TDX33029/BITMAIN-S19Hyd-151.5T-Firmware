// FUN_0195f200 @ 0195f200 size=192 calls_out=1 calls_in=3
// strings: 

int FUN_0195f200(int param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (param_1 == 0) {
    return 0;
  }
  do {
    uVar1 = *(ushort *)(param_1 + 0xb8a);
    uVar4 = 0xffffffff;
    iVar3 = (uint)uVar1 << 4;
    iVar5 = param_1;
    do {
      if (iVar3 == 0) {
        uVar4 = (uint)uVar1;
        goto LAB_0195f28c;
      }
      iVar2 = FUN_01bed842(param_3,iVar5,0x10);
      iVar3 = iVar3 + -0x10;
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x10;
    } while ((char)((0 < iVar2) - (iVar2 < 0)) == '\x01');
    if (0 < iVar2 == iVar2 < 0) {
      return param_1 + uVar4 * 0xfc + 0xb4;
    }
LAB_0195f28c:
    if (param_2 == 0) {
      return 0;
    }
    param_2 = param_2 + -1;
    param_1 = *(int *)(param_1 + uVar4 * 4 + 0xb8c);
  } while( true );
}

