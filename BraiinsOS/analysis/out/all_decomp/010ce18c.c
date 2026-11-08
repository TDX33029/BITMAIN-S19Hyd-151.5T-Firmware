// FUN_010ce18c @ 010ce18c size=336 calls_out=4 calls_in=1
// strings: 

void FUN_010ce18c(undefined4 *param_1,undefined4 param_2,uint param_3,undefined2 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined2 *puVar4;
  undefined4 local_34;
  uint uStack_30;
  byte local_2c;
  undefined1 uStack_2b;
  undefined2 uStack_2a;
  undefined2 local_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined4 local_22;
  undefined3 uStack_1e;
  
  if (param_3 < 0x10) {
    local_28 = (undefined2)param_3;
    uStack_26 = (undefined2)(param_3 >> 0x10);
    local_2c = (byte)param_2;
    uStack_2b = (undefined1)((uint)param_2 >> 8);
    uStack_2a = (undefined2)((uint)param_2 >> 0x10);
    FUN_00fb3af4(&local_34,&local_2c);
    uVar1 = CONCAT13((undefined1)uStack_30,local_34._1_3_);
    if ((CONCAT22(uStack_26,local_28) == 0 & (byte)local_34) != 0) {
      puVar4 = (undefined2 *)thunk_FUN_016d4a50(0x20);
      if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = 0;
        puVar4[3] = param_4;
        *(undefined4 *)(puVar4 + 1) = uVar1;
        *param_1 = puVar4;
        param_1[1] = puVar4;
        param_1[2] = 1;
        param_1[3] = puVar4 + 0x10;
        return;
      }
      goto LAB_010ce2d0;
    }
  }
  local_34 = param_2;
  uStack_30 = param_3;
  FUN_00fb3f68(&local_2c,&local_34);
  uVar3 = uStack_2b;
  if ((uStack_30 != 0) || ((local_2c & 1) == 0)) {
    *param_1 = 0;
    return;
  }
  uVar1 = CONCAT22(local_28,uStack_2a);
  uVar2 = CONCAT22(uStack_24,uStack_26);
  puVar4 = (undefined2 *)thunk_FUN_016d4a50(0x20);
  if (puVar4 != (undefined2 *)0x0) {
    *(undefined4 *)((int)puVar4 + 5) = uVar1;
    *(undefined4 *)((int)puVar4 + 0xd) = local_22;
    *(undefined1 *)(puVar4 + 2) = uVar3;
    *puVar4 = 1;
    *(undefined4 *)((int)puVar4 + 9) = uVar2;
    *(uint *)(puVar4 + 8) = CONCAT31(uStack_1e,local_22._3_1_);
    puVar4[0xe] = param_4;
    *(undefined4 *)(puVar4 + 10) = 0;
    *(undefined4 *)(puVar4 + 0xc) = 0;
    *param_1 = puVar4;
    param_1[1] = puVar4;
    param_1[2] = 1;
    param_1[3] = puVar4 + 0x10;
    return;
  }
LAB_010ce2d0:
                    /* WARNING: Subroutine does not return */
  FUN_00600874(4,0x20);
}

