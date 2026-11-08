// FUN_014b2928 @ 014b2928 size=432 calls_out=3 calls_in=1
// strings: 

void FUN_014b2928(uint *param_1,uint *param_2,byte *param_3,uint *param_4)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *unaff_r7;
  uint uVar7;
  bool bVar8;
  undefined *local_40;
  undefined4 *local_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  uVar2 = (uint)(byte)param_4[2];
  bVar8 = uVar2 != 2;
  if (bVar8) {
    uVar2 = *param_2;
  }
  if (!bVar8 || uVar2 == 0) {
    uVar5 = (uint)*param_3;
    uVar4 = uVar5;
    uVar2 = 0;
    if (uVar5 == 0) {
LAB_014b2a30:
      uVar4 = uVar5;
    }
    else {
LAB_014b2968:
      if (uVar4 == 1) {
        uVar5 = (uint)param_3[1] << 8;
      }
      else {
        puVar6 = *(undefined4 **)(param_3 + 4);
        unaff_r7 = (undefined4 *)thunk_FUN_016d4a50(0x10);
        if (unaff_r7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x10);
        }
        (**(code **)*puVar6)(&local_40,puVar6 + 3,puVar6[1],puVar6[2]);
        *unaff_r7 = local_40;
        unaff_r7[1] = local_3c;
        unaff_r7[2] = uStack_38;
        unaff_r7[3] = uStack_34;
        uVar5 = 0;
      }
    }
    local_40 = (undefined *)(uVar5 | uVar4);
    local_3c = unaff_r7;
    (*(code *)**(undefined4 **)(param_3 + 8))
              (&uStack_38,param_3 + 0x14,*(undefined4 *)(param_3 + 0xc),
               *(undefined4 *)(param_3 + 0x10));
    uVar5 = param_4[1];
    uVar4 = param_4[2];
    param_1[6] = *param_4;
    param_1[7] = uVar5;
    param_1[8] = uVar4;
    uVar5 = param_4[4];
    uVar4 = param_4[5];
    uVar7 = param_4[6];
    param_1[9] = param_4[3];
    param_1[10] = uVar5;
    param_1[0xb] = uVar4;
    param_1[0xc] = uVar7;
    *(undefined1 *)(param_1 + 0xe) = 1;
    *param_1 = (uint)local_40;
    param_1[1] = (uint)local_3c;
    param_1[2] = uStack_38;
    param_1[3] = uStack_34;
    param_1[4] = uStack_30;
    param_1[5] = uStack_2c;
    param_1[0xd] = uVar2;
    return;
  }
  puVar3 = (uint *)(uVar2 + 4);
  do {
    puVar6 = (undefined4 *)*puVar3;
    while (puVar6 != (undefined4 *)0xffffffff) {
      if ((int)puVar6 < 0) {
        local_3c = &DAT_0157d360;
        local_40 = &DAT_018ae270;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00590e71,&local_40,&DAT_018ae278);
      }
      unaff_r7 = (undefined4 *)*puVar3;
      if (unaff_r7 == puVar6) {
        bVar1 = (bool)hasExclusiveAccess(puVar3);
        if (bVar1) {
          *puVar3 = (int)puVar6 + 1;
        }
        bVar8 = false;
        if (bVar1) {
          DataMemoryBarrier(0xb);
          bVar8 = true;
        }
      }
      else {
        bVar8 = false;
        ClearExclusiveLocal();
      }
      puVar6 = unaff_r7;
      if (bVar8) {
        uVar5 = (uint)*param_3;
        uVar4 = uVar5;
        if (uVar5 != 0) goto LAB_014b2968;
        goto LAB_014b2a30;
      }
    }
    HintYield();
  } while( true );
}

