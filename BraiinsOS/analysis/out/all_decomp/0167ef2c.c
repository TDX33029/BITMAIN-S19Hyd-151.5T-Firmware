// FUN_0167ef2c @ 0167ef2c size=532 calls_out=7 calls_in=2
// strings: 

undefined4 FUN_0167ef2c(int param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *local_30;
  int local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  
  uVar3 = *(uint *)(param_1 + 0xc);
  if (uVar3 == 0x80000003) {
LAB_0167ef78:
    iVar6 = *(int *)(param_1 + 4);
    puVar7 = *(undefined1 **)(param_1 + 8);
    puVar1 = (undefined1 *)0x0;
    do {
      if (puVar7 == puVar1) {
        if (puVar7 != (undefined1 *)0x0) {
          if ((int)puVar7 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(0,puVar7);
          }
          puVar1 = (undefined1 *)thunk_FUN_016d4a50(puVar7);
          if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,puVar7);
          }
          FUN_016dd1aa(puVar1,iVar6,puVar7);
          puVar5 = puVar7;
          goto joined_r0x0167f0e4;
        }
        puVar7 = (undefined1 *)0x0;
        break;
      }
      uVar3 = (uint)(byte)puVar1[iVar6];
      puVar1 = puVar1 + 1;
    } while (((uVar3 == 0x5f || uVar3 == 0x2d) || (uVar3 - 0x30 < 10)) ||
            ((uVar3 & 0xdf) - 0x41 < 0x1a));
    FUN_0168070c(&local_24,iVar6,puVar7,2);
    uVar3 = 1;
    iVar6 = 1;
    if ((int)local_24 < 0) {
      uVar3 = (uint)local_24 ^ 0x80000000;
    }
    puVar7 = local_24;
    if (uVar3 == 0) {
      puVar1 = (undefined1 *)0x1;
      puVar5 = (undefined1 *)0x0;
    }
    else {
      puVar5 = local_1c;
      puVar1 = local_20;
      if (uVar3 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018ad97c);
      }
joined_r0x0167f0e4:
      uVar2 = 0;
      local_20 = puVar1;
      local_1c = puVar5;
      if ((int)puVar5 < 0) {
LAB_0167f0e8:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar2,puVar5);
      }
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = (undefined1 *)0x0;
        iVar6 = 1;
      }
      else {
        iVar6 = thunk_FUN_016d4a50(puVar5);
        if (iVar6 == 0) {
          uVar2 = 1;
          goto LAB_0167f0e8;
        }
      }
    }
    FUN_016dd1aa(iVar6,puVar1,puVar5);
    local_30 = puVar5;
    local_2c = iVar6;
    local_28 = puVar5;
    if (0 < (int)puVar7) {
      thunk_FUN_016d3fb4(local_20);
    }
  }
  else {
    uVar4 = 1;
    if ((int)uVar3 < 0) {
      uVar4 = uVar3 ^ 0x80000000;
    }
    local_2c = 1;
    local_28 = (undefined1 *)0x0;
    if (uVar4 != 0) {
      if (uVar4 != 1) goto LAB_0167ef78;
      local_2c = *(int *)(param_1 + 0x10);
      local_28 = *(undefined1 **)(param_1 + 0x14);
    }
    local_30 = (undefined1 *)0x80000000;
  }
  local_20 = &LAB_016cf57c;
  local_24 = (undefined1 *)&local_30;
  uVar2 = FUN_00fa948c(*param_2,param_2[1],&DAT_00590e71,&local_24);
  if (((uint)local_30 & 0x7fffffff) == 0) {
    return uVar2;
  }
  thunk_FUN_016d3fb4(local_2c);
  return uVar2;
}

