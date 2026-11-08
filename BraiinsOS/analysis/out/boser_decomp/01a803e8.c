// FUN_01a803e8 @ 01a803e8 size=280 calls_out=3 calls_in=2
// strings: 

undefined4 FUN_01a803e8(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  piVar1 = (int *)(param_1 + 0x70);
  iVar2 = *piVar1;
  piVar4 = (int *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *piVar1 = 4;
  if (iVar2 == 3) {
    local_60 = *piVar4;
    uStack_5c = *(undefined4 *)(param_1 + 0x78);
    uStack_58 = *(undefined4 *)(param_1 + 0x7c);
    uStack_54 = *(undefined4 *)(param_1 + 0x80);
    local_50 = *(undefined4 *)(param_1 + 0x84);
    local_40 = param_1 + 0xa8;
    local_3c = *(int *)(param_1 + 0xc0) + 9;
    FUN_01375824(&local_38,&local_60,&local_40);
    if (local_38 != 0) {
      FUN_01a80374(piVar1);
      *piVar1 = 3;
      *piVar4 = local_38;
      *(undefined4 *)(param_1 + 0x78) = uStack_34;
      *(undefined4 *)(param_1 + 0x7c) = uStack_30;
      *(undefined4 *)(param_1 + 0x80) = uStack_2c;
      *(undefined4 *)(param_1 + 0x84) = uStack_28;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
    if (iVar2 != 4) {
      local_38 = *piVar4;
      uStack_34 = *(undefined4 *)(param_1 + 0x78);
      uStack_30 = *(undefined4 *)(param_1 + 0x7c);
      uStack_2c = *(undefined4 *)(param_1 + 0x80);
      uStack_28 = *(undefined4 *)(param_1 + 0x84);
      local_60 = *(int *)(param_1 + 0x88);
      uStack_5c = *(undefined4 *)(param_1 + 0x8c);
      uStack_58 = *(undefined4 *)(param_1 + 0x90);
      uStack_54 = *(undefined4 *)(param_1 + 0x94);
      local_50 = *(undefined4 *)(param_1 + 0x98);
      uStack_4c = *(undefined4 *)(param_1 + 0x9c);
      uStack_48 = *(undefined4 *)(param_1 + 0xa0);
      uStack_44 = *(undefined4 *)(param_1 + 0xa4);
      if (*(int *)(param_1 + 0x38) != 3) {
        FUN_01a803a4();
      }
      *(int *)(param_1 + 0x38) = iVar2;
      *(int *)(param_1 + 0x3c) = local_38;
      *(undefined4 *)(param_1 + 0x40) = uStack_34;
      *(undefined4 *)(param_1 + 0x44) = uStack_30;
      *(undefined4 *)(param_1 + 0x48) = uStack_2c;
      *(undefined4 *)(param_1 + 0x4c) = uStack_28;
      *(int *)(param_1 + 0x50) = local_60;
      *(undefined4 *)(param_1 + 0x54) = uStack_5c;
      *(undefined4 *)(param_1 + 0x58) = uStack_58;
      *(undefined4 *)(param_1 + 0x5c) = uStack_54;
      *(undefined4 *)(param_1 + 0x60) = local_50;
      *(undefined4 *)(param_1 + 100) = uStack_4c;
      *(undefined4 *)(param_1 + 0x68) = uStack_48;
      *(undefined4 *)(param_1 + 0x6c) = uStack_44;
    }
  }
  return uVar3;
}

