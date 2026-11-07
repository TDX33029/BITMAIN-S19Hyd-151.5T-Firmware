// FUN_018efb38 @ 018efb38 size=312 calls_out=3 calls_in=0
// strings: 

void FUN_018efb38(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  uint uVar4;
  int local_48;
  undefined1 *local_44;
  uint local_40;
  uint local_3c;
  int local_34;
  int iStack_30;
  int iStack_2c;
  
  (**(code **)(param_6 + 0x10))(&local_48,param_5,param_7,param_8,&DAT_00523a42);
  piVar2 = (int *)((uint)&local_48 | 4);
  iVar1 = *piVar2;
  puVar3 = (undefined1 *)piVar2[1];
  uVar4 = piVar2[2];
  local_3c = piVar2[3];
  if (local_48 == -0x7fffffd7) {
    local_48 = iVar1;
    local_44 = puVar3;
    local_40 = uVar4;
    if (uVar4 < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(local_3c,uVar4,uVar4,&DAT_01d250a8);
    }
    iVar1 = FUN_018efa5c(param_2,param_3,param_4,puVar3 + local_3c,uVar4 - local_3c);
    *param_1 = -0x7fffffd7;
    param_1[1] = iVar1;
    param_1[2] = (int)&DAT_01d23d68;
    if (uVar4 != 0) {
      do {
        *puVar3 = 0;
        uVar4 = uVar4 - 1;
        puVar3 = puVar3 + 1;
      } while (uVar4 != 0);
      puVar3 = local_44;
    }
    local_40 = 0;
    for (iVar1 = local_48; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    FUN_0134bd64(local_48,local_44);
  }
  else {
    param_1[5] = local_34;
    param_1[6] = iStack_30;
    param_1[7] = iStack_2c;
    param_1[1] = iVar1;
    param_1[2] = (int)puVar3;
    param_1[3] = uVar4;
    param_1[4] = local_3c;
    *param_1 = local_48;
  }
  return;
}

