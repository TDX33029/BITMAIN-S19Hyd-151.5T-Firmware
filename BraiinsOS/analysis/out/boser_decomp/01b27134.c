// FUN_01b27134 @ 01b27134 size=156 calls_out=2 calls_in=0
// strings: 

undefined8
FUN_01b27134(int param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5,
            undefined4 param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_5 & 0x3ff) != 0) {
    return 0;
  }
  FUN_01b257dc(param_1,0,0xd8);
  *(undefined4 *)(param_1 + 0xd4) = param_2;
  iVar1 = 0;
  do {
    uVar2 = FUN_01b27094(param_3 + iVar1);
    *(undefined8 *)(param_1 + iVar1) = uVar2;
    iVar1 = iVar1 + 8;
  } while (iVar1 != 0x40);
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(uint *)(param_1 + 0x40) = param_5;
  *(undefined4 *)(param_1 + 0x44) = param_6;
  return 1;
}

