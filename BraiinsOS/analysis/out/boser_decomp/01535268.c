// FUN_01535268 @ 01535268 size=200 calls_out=3 calls_in=0
// strings: 

void FUN_01535268(undefined4 *param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar1 = 0;
  if (*param_4 == '\x03') {
    FUN_006666fc((uint)&local_58 | 4,*(undefined4 *)(param_4 + 8),*(undefined4 *)(param_4 + 0xc));
    local_58 = CONCAT31(local_58._1_3_,3);
    local_3c = 1;
    local_40 = 1;
    local_38 = local_58;
    uStack_34 = uStack_54;
    local_30 = uStack_50;
    uStack_2c = uStack_4c;
    uStack_28 = uStack_48;
    uStack_24 = uStack_44;
    puVar2 = (undefined4 *)thunk_FUN_01be5118(0x20);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x20);
    }
    *puVar2 = local_40;
    puVar2[1] = local_3c;
    puVar2[2] = local_38;
    puVar2[3] = uStack_34;
    puVar2[4] = local_30;
    puVar2[5] = uStack_2c;
    puVar2[6] = uStack_28;
    puVar2[7] = uStack_24;
    piVar3 = (int *)thunk_FUN_01be5118(4);
    if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,4);
    }
    *piVar3 = (int)puVar2;
    param_1[1] = piVar3;
    param_1[2] = &DAT_01cfb650;
    uVar1 = 1;
  }
  *param_1 = uVar1;
  return;
}

