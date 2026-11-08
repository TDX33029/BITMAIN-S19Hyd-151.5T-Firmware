// FUN_016c2e68 @ 016c2e68 size=116 calls_out=2 calls_in=0
// strings: 

void FUN_016c2e68(undefined4 *param_1)

{
  ushort uVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined2 local_14;
  
  if ((param_1[2] == 0) ||
     (uVar1 = *(ushort *)(param_1 + 4), *(short *)(param_1 + 4) = (short)(uVar1 + 1),
     (uVar1 + 1 & 0x10000) != 0)) {
    local_1c = 0;
    local_20 = 0;
    local_18 = 0;
    local_14 = 0;
    FUN_016c13a8(&local_30,&local_20,param_1[3]);
    FUN_0134aee0(*param_1,param_1[1],4,0x10);
    *param_1 = local_30;
    param_1[1] = uStack_2c;
    param_1[2] = uStack_28;
  }
  return;
}

