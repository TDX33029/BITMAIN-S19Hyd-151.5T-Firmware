// FUN_01ad4ea4 @ 01ad4ea4 size=172 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_01ad4ea4(int param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = (uint)*(ushort *)(param_1 + 0x10b2);
  param_1 = param_1 + 0x102c;
  uVar4 = 0xffffffff;
  uVar6 = 1;
  iVar5 = uVar7 * 0xc;
  do {
    if (iVar5 == 0) goto LAB_01ad4f40;
    uVar8 = *(uint *)(param_1 + 8);
    uVar3 = uVar8;
    if (param_3 < uVar8) {
      uVar3 = param_3;
    }
    iVar2 = FUN_01bed842(param_2,*(undefined4 *)(param_1 + 4),uVar3);
    if (iVar2 == 0) {
      iVar2 = param_3 - uVar8;
    }
    iVar5 = iVar5 + -0xc;
    cVar1 = (0 < iVar2) - (iVar2 < 0);
    uVar4 = uVar4 + 1;
    param_1 = param_1 + 0xc;
  } while (cVar1 == '\x01');
  uVar6 = (uint)(cVar1 == -1);
  uVar7 = uVar4;
LAB_01ad4f40:
  return CONCAT44(uVar7,uVar6);
}

