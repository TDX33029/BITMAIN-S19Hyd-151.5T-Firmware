// FUN_01aa7790 @ 01aa7790 size=236 calls_out=2 calls_in=1
// strings: 

void FUN_01aa7790(uint *param_1,byte *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint *unaff_r9;
  uint uVar3;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint local_28;
  
  uVar2 = (uint)*param_2;
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else if (uVar2 == 1) {
    uVar3 = (uint)param_2[1] << 8;
  }
  else {
    unaff_r9 = (uint *)thunk_FUN_01be5118(0x10);
    if (unaff_r9 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x10);
    }
    puVar1 = *(undefined4 **)(param_2 + 4);
    (**(code **)*puVar1)(&local_38,puVar1 + 3,puVar1[1],puVar1[2]);
    uVar3 = 0;
    *unaff_r9 = local_38;
    unaff_r9[1] = uStack_34;
    unaff_r9[2] = uStack_30;
    unaff_r9[3] = uStack_2c;
  }
  (*(code *)**(undefined4 **)(param_2 + 8))
            (&local_48,param_2 + 0x14,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10)
            );
  (*(code *)**(undefined4 **)(param_2 + 0x18))
            (&local_38,param_2 + 0x24,*(undefined4 *)(param_2 + 0x1c),
             *(undefined4 *)(param_2 + 0x20));
  local_28 = CONCAT22(local_28._2_2_,*(undefined2 *)(param_2 + 0x28));
  *param_1 = uVar3 | uVar2;
  param_1[1] = (uint)unaff_r9;
  param_1[2] = local_48;
  param_1[3] = uStack_44;
  param_1[4] = uStack_40;
  param_1[5] = uStack_3c;
  param_1[6] = local_38;
  param_1[7] = uStack_34;
  param_1[8] = uStack_30;
  param_1[9] = uStack_2c;
  param_1[10] = local_28;
  return;
}

