// FUN_01b2b5d8 @ 01b2b5d8 size=184 calls_out=3 calls_in=1
// strings: 

undefined8 FUN_01b2b5d8(int *param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int extraout_r2;
  
  iVar1 = FUN_01b2b248();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_01b257dc(*param_1,0,param_2 << 2,0);
  uVar2 = 0;
  do {
    uVar2 = FUN_01b0c688(param_4 ^ uVar2);
    for (iVar1 = 0; param_2 != iVar1; iVar1 = iVar1 + 1) {
      *(uint *)(*param_1 + iVar1 * 4) =
           *(uint *)(*param_1 + iVar1 * 4) | *(uint *)(param_3 + iVar1 * 4) & uVar2;
    }
    uVar2 = extraout_r2 + 1;
    param_3 = param_3 + param_2 * 4;
  } while (uVar2 != 0x20);
  param_1[1] = param_2;
  return 1;
}

