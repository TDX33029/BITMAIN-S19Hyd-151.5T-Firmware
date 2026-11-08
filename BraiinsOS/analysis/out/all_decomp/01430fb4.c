// FUN_01430fb4 @ 01430fb4 size=256 calls_out=2 calls_in=7
// strings: 

void FUN_01430fb4(uint *param_1,byte *param_2)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *unaff_r8;
  uint uVar7;
  uint uVar8;
  uint local_30;
  uint uStack_2c;
  uint local_28;
  uint local_24;
  
  uVar8 = (uint)*param_2;
  if (uVar8 == 0) {
    uVar7 = 0;
  }
  else if (uVar8 == 1) {
    uVar7 = (uint)param_2[1] << 8;
  }
  else {
    puVar6 = *(undefined4 **)(param_2 + 4);
    unaff_r8 = (uint *)thunk_FUN_016d4a50(0x10);
    if (unaff_r8 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x10);
    }
    (**(code **)*puVar6)(&local_30,puVar6 + 3,puVar6[1],puVar6[2]);
    uVar7 = 0;
    *unaff_r8 = local_30;
    unaff_r8[1] = uStack_2c;
    unaff_r8[2] = local_28;
    unaff_r8[3] = local_24;
  }
  (*(code *)**(undefined4 **)(param_2 + 8))
            (&local_30,param_2 + 0x14,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10)
            );
  uVar5 = local_24;
  uVar4 = local_28;
  uVar3 = uStack_2c;
  uVar2 = local_30;
  (*(code *)**(undefined4 **)(param_2 + 0x18))
            (&local_30,param_2 + 0x24,*(undefined4 *)(param_2 + 0x1c),
             *(undefined4 *)(param_2 + 0x20));
  param_1[8] = local_28;
  param_1[9] = local_24;
  uVar1 = *(undefined2 *)(param_2 + 0x28);
  *param_1 = uVar7 | uVar8;
  param_1[1] = (uint)unaff_r8;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  param_1[6] = local_30;
  param_1[7] = uStack_2c;
  *(undefined2 *)(param_1 + 10) = uVar1;
  return;
}

