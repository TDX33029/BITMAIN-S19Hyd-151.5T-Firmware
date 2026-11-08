// FUN_0191e1a8 @ 0191e1a8 size=164 calls_out=5 calls_in=1
// strings: 

void FUN_0191e1a8(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined1 auStack_d8 [64];
  uint local_98;
  undefined1 auStack_94 [108];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  (**(code **)(param_2[6] + 0x14))(auStack_d8,param_2[5]);
  if (0x40 < local_98) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,local_98,0x40,&DAT_01d258e8);
  }
  FUN_018ed7dc(auStack_94,auStack_d8);
  iVar1 = *param_2;
  FUN_018ea5f0(&local_28,auStack_94);
  *param_1 = local_28;
  param_1[1] = uStack_24;
  param_1[2] = uStack_20;
  *(bool *)(param_1 + 3) = iVar1 != -0x80000000;
  FUN_019179b8(auStack_94);
  if (iVar1 != -0x80000000) {
    FUN_0134bd64(iVar1,param_2[1]);
  }
  return;
}

