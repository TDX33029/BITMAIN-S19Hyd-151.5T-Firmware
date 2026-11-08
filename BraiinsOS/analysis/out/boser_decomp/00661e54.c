// FUN_00661e54 @ 00661e54 size=136 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_00661e54(int param_1,int param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  if (param_1 == 0) {
    return 0;
  }
  do {
    uVar5 = (uint)*(ushort *)(param_1 + 0x32);
    iVar3 = uVar5 << 2;
    iVar2 = 1;
    do {
      iVar6 = iVar2;
      if (iVar3 == 0) goto LAB_00661eb4;
      uVar4 = *(uint *)(param_1 + iVar6 * 4);
      iVar3 = iVar3 + -4;
      bVar7 = param_3 < uVar4;
      bVar1 = !bVar7 && param_3 != uVar4;
      iVar2 = iVar6 + 1;
    } while ((char)(bVar1 - bVar7) == '\x01');
    if (bVar1 == bVar7) {
      return 1;
    }
    uVar5 = iVar6 - 1;
LAB_00661eb4:
    if (param_2 == 0) {
      return 0;
    }
    param_2 = param_2 + -1;
    param_1 = *(int *)(param_1 + uVar5 * 4 + 0x34);
  } while( true );
}

