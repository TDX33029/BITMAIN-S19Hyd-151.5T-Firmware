// FUN_00f13ff4 @ 00f13ff4 size=484 calls_out=8 calls_in=1
// strings: 

void FUN_00f13ff4(uint *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 local_58;
  uint local_54;
  uint *local_50;
  int local_4c;
  uint *local_48;
  int local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 **local_34;
  code *local_30;
  uint *local_2c;
  undefined1 *local_28;
  
  if (param_2[1] == 0) {
    *param_1 = 0x80000000;
    return;
  }
  uVar5 = *param_2;
  param_2[1] = param_2[1] + -1;
  FUN_00efbe38(&local_58,uVar5);
  if (local_58 != 1) {
    local_44 = local_4c;
    local_48 = local_50;
    if (local_4c != 0) {
      local_2c = &DAT_005674cc;
      local_34 = &local_48;
      local_30 = FUN_00fac4cc;
      local_28 = &LAB_00fac484;
      FUN_00600d2c(&local_40,&DAT_0056c1eb,&local_34);
      puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xc);
      if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      *puVar2 = local_40;
      puVar2[1] = uStack_3c;
      puVar2[2] = uStack_38;
      *param_1 = 0x80000001;
      param_1[1] = (uint)puVar2;
      return;
    }
    puVar4 = local_50;
    if ((uint *)0xfffff < local_50) {
      puVar4 = (uint *)0x100000;
    }
    if (local_50 == (uint *)0x0) {
      pcVar3 = (code *)0x1;
      puVar4 = (uint *)0x0;
    }
    else {
      pcVar3 = (code *)thunk_FUN_016d4a50(puVar4);
      if (pcVar3 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,puVar4);
      }
    }
    local_2c = (uint *)0x0;
    local_34 = (undefined4 **)puVar4;
    local_30 = pcVar3;
    while (puVar4 = local_2c, local_50 != local_2c) {
      FUN_00e6679c(&local_58,uVar5);
      if ((char)local_58 != '\0') {
        if (local_34 != (undefined4 **)0x0) {
          thunk_FUN_016d3fb4(local_30);
          *param_1 = 0x80000001;
          param_1[1] = local_54;
          return;
        }
        goto LAB_00f14034;
      }
      uVar1 = local_58._1_1_;
      if ((undefined4 **)puVar4 == local_34) {
        FUN_00edf938(&local_34);
        pcVar3 = local_30;
      }
      *(undefined1 *)((int)pcVar3 + (int)puVar4) = uVar1;
      local_2c = (uint *)((int)puVar4 + 1);
    }
    local_54 = (uint)local_30;
    if (local_34 != (undefined4 **)0x80000000) {
      *param_1 = (uint)local_34;
      param_1[1] = (uint)local_30;
      param_1[2] = (uint)local_2c;
      return;
    }
  }
LAB_00f14034:
  *param_1 = 0x80000001;
  param_1[1] = local_54;
  return;
}

