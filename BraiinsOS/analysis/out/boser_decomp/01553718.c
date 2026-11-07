// FUN_01553718 @ 01553718 size=280 calls_out=5 calls_in=0
// strings: 

void FUN_01553718(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 *local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  code *local_28;
  
  local_44 = param_3;
  iVar1 = FUN_01596a18(*(undefined1 *)(param_2 + 8),param_3);
  if (iVar1 == 0) {
    local_30 = &LAB_015388d8;
    local_34 = &local_44;
    local_28 = FUN_01596c7c;
    local_2c = (undefined1 *)(param_2 + 8);
    FUN_00664898(&local_40,&DAT_005b70c6,&local_34);
    puVar2 = (undefined4 *)thunk_FUN_01be5118(0x18);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x18);
    }
    puVar3 = (undefined4 *)thunk_FUN_01be5118(4);
    if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620();
    }
    *puVar3 = 0x65707974;
    puVar2[3] = local_40;
    puVar2[4] = local_3c;
    puVar2[5] = uStack_38;
    *puVar2 = 4;
    puVar2[1] = puVar3;
    puVar2[2] = 4;
    *param_1 = 1;
    param_1[1] = puVar2;
    param_1[2] = 1;
    param_1[3] = 0;
    param_1[4] = 4;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  else {
    *param_1 = 0x80000000;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return;
}

