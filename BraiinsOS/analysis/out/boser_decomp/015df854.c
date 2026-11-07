// FUN_015df854 @ 015df854 size=224 calls_out=4 calls_in=4
// strings: 

void FUN_015df854(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_01bed4e2(&local_38,(undefined4 *)(param_2 + 0x51),0x10);
    FUN_006666fc(&local_28,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
    uVar1 = *(undefined4 *)(param_2 + 0xc);
    *param_1 = local_28;
    param_1[1] = uStack_24;
    param_1[2] = uStack_20;
    param_1[3] = uVar1;
    param_1[4] = local_38;
    param_1[5] = uStack_34;
    param_1[6] = uStack_30;
    param_1[7] = uStack_2c;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x51);
    puVar2 = (undefined4 *)thunk_FUN_01be5118(0x10);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x10);
    }
    FUN_006666fc(&local_48,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
    uVar3 = *(undefined4 *)(param_2 + 0xc);
    *puVar2 = local_48;
    puVar2[1] = uStack_44;
    puVar2[2] = uStack_40;
    puVar2[3] = uVar3;
    *param_1 = 0x80000000;
    param_1[1] = 1;
    param_1[2] = puVar2;
    param_1[3] = 1;
    param_1[4] = uVar1;
  }
  return;
}

