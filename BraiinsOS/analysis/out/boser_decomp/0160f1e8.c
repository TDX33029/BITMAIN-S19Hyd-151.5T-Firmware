// FUN_0160f1e8 @ 0160f1e8 size=160 calls_out=1 calls_in=1
// strings: 

void FUN_0160f1e8(undefined1 *param_1,undefined4 *param_2,uint param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint local_14;
  uint *local_10;
  code *local_c;
  
  if ((param_3 & 0xffff) == 4) {
    uVar1 = 0;
    uVar2 = *param_2;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = uVar2;
  }
  else if (param_3 == 0x10) {
    uVar3 = *param_2;
    uVar4 = param_2[1];
    uVar2 = param_2[3];
    *(undefined4 *)(param_1 + 10) = param_2[2];
    uVar1 = 0;
    param_1[1] = 1;
    *(undefined4 *)(param_1 + 0xe) = uVar2;
    *(undefined4 *)(param_1 + 6) = uVar4;
    *(undefined4 *)(param_1 + 2) = uVar3;
  }
  else {
    local_c = FUN_012fd02c;
    local_10 = &local_14;
    local_14 = param_3;
    FUN_00664898(param_1 + 4,&DAT_005911a6,&local_10);
    uVar1 = 1;
  }
  *param_1 = uVar1;
  return;
}

