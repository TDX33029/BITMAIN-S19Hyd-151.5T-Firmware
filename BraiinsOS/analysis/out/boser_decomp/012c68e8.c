// FUN_012c68e8 @ 012c68e8 size=100 calls_out=2 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_012c68e8(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined **local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  local_48 = &PTR_LAB_01ce2bec;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  puVar1 = (undefined4 *)((uint)&local_48 | 4);
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  puVar1[4] = uVar5;
  puVar1[5] = uVar6;
  local_2c = *param_1;
  uStack_28 = param_1[1];
  uStack_24 = param_1[2];
  uStack_20 = param_1[3];
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x2c);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x2c);
  }
  *puVar1 = local_48;
  puVar1[1] = uStack_44;
  puVar1[2] = uStack_40;
  puVar1[3] = uStack_3c;
  puVar1[4] = uStack_38;
  puVar1[5] = uStack_34;
  puVar1[6] = uStack_30;
  puVar1[7] = local_2c;
  puVar1[8] = uStack_28;
  puVar1[9] = uStack_24;
  puVar1[10] = uStack_20;
  return;
}

