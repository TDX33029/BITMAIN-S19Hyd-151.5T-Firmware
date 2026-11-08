// FUN_019eb218 @ 019eb218 size=196 calls_out=4 calls_in=3
// strings: 

void FUN_019eb218(int param_1,int param_2)

{
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (*(int *)(param_2 + 0x20) == 3) {
    FUN_01bf01d6(*(undefined4 *)(param_2 + 0x24));
  }
  *(undefined4 *)(param_2 + 0x20) = 2;
  if (*(int *)(param_2 + 0x28) == 3) {
    FUN_01bf01d6(*(undefined4 *)(param_2 + 0x2c));
  }
  *(undefined4 *)(param_2 + 0x28) = 2;
  FUN_019b46e0(&local_58,param_2);
  if (local_58 == 2) {
    local_b4 = uStack_54;
    local_b8 = 3;
    local_b0 = uStack_50;
  }
  else {
    local_30 = local_4c;
    uStack_2c = uStack_48;
    uStack_28 = uStack_44;
    uStack_24 = uStack_40;
    local_3c = local_58;
    local_34 = uStack_50;
    local_38 = uStack_54;
    FUN_019eab18(&local_b8,*(undefined1 *)(param_2 + 0x7c));
  }
  FUN_01bed4e2(param_1,&local_b8,0x60);
  *(undefined1 *)(param_1 + 0x214) = 0;
  return;
}

