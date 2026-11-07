// FUN_0102d6e8 @ 0102d6e8 size=364 calls_out=2 calls_in=3
// strings: 

void FUN_0102d6e8(undefined1 *param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *extraout_r1;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 local_2c;
  undefined4 *local_28;
  int local_24 [3];
  
  uVar3 = (uint)*(byte *)(param_3 + 0x20);
  uVar4 = uVar3 - 6;
  if (uVar3 < 6) {
    uVar4 = 6;
  }
  uVar4 = uVar4 & 0xff;
  if (uVar4 == 6) {
    uVar4 = 1;
    if (2 < uVar3) {
      uVar4 = uVar3 - 3;
    }
    if ((uVar4 & 0xff) != 0) {
      puVar2 = (undefined4 *)&DAT_00000004;
      if ((uVar4 & 0xff) == 1) {
        if (uVar3 == 0) {
          puVar2 = (undefined4 *)&DAT_00000008;
        }
        else if (uVar3 == 2) {
          uVar1 = *(undefined1 *)(param_3 + 0x21);
          if ((*(int *)(param_3 + 0x24) == -0x80000000) ||
             (FUN_00602a1c(local_24,*(undefined4 *)(param_3 + 0x28),*(undefined4 *)(param_3 + 0x2c))
             , puVar2 = extraout_r1, local_24[0] == -0x80000000)) {
            local_28 = puVar2;
            local_2c = CONCAT31(CONCAT21(local_2c._2_2_,uVar1),1);
          }
          else {
            FUN_01650c14(&local_2c,uVar1,local_24);
          }
          uVar1 = 4;
          param_2 = local_28;
          goto LAB_0102d778;
        }
      }
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)((byte *)(param_3 + 0x20) + (int)puVar2);
      *param_1 = 5;
      return;
    }
  }
  else if (((uVar4 == 5 || uVar4 == 3) && param_4 == 0) && ((*(byte *)(param_3 + 0x21) & 1) != 0)) {
    uVar1 = 3;
    local_2c = uVar3;
LAB_0102d778:
    *param_1 = uVar1;
    *(uint *)(param_1 + 4) = local_2c;
    *(undefined4 **)(param_1 + 8) = param_2;
    param_1[1] = 8;
    return;
  }
  uVar5 = (**(code **)*param_2)(param_2[1]);
  if (*(int *)(param_3 + 0x40) != 0) {
    (**(code **)(*(int *)(param_3 + 0x40) + 0xc))(*(undefined4 *)(param_3 + 0x44));
  }
  *(undefined8 *)(param_3 + 0x40) = uVar5;
  *param_1 = 6;
  return;
}

