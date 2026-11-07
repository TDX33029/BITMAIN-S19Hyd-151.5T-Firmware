// FUN_006ceea8 @ 006ceea8 size=204 calls_out=1 calls_in=2
// strings: 

undefined4 FUN_006ceea8(undefined4 *param_1,int param_2,undefined4 param_3,uint param_4)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  do {
    uVar1 = *(ushort *)((int)param_1 + 0x5e);
    uVar5 = 0xffffffff;
    iVar6 = (uint)uVar1 << 3;
    puVar4 = param_1;
    do {
      if (iVar6 == 0) {
        uVar5 = (uint)uVar1;
        goto LAB_006cef44;
      }
      uVar7 = puVar4[1];
      uVar3 = uVar7;
      if (param_4 < uVar7) {
        uVar3 = param_4;
      }
      iVar2 = FUN_01bed842(param_3,*puVar4,uVar3);
      if (iVar2 == 0) {
        iVar2 = param_4 - uVar7;
      }
      iVar6 = iVar6 + -8;
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 2;
    } while ((char)((0 < iVar2) - (iVar2 < 0)) == '\x01');
    if (0 < iVar2 == iVar2 < 0) {
      return 1;
    }
LAB_006cef44:
    if (param_2 == 0) {
      return 0;
    }
    param_2 = param_2 + -1;
    param_1 = (undefined4 *)param_1[uVar5 + 0x18];
  } while( true );
}

