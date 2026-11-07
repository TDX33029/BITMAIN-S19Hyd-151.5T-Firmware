// FUN_013d0f54 @ 013d0f54 size=272 calls_out=4 calls_in=0
// strings: 

undefined4 FUN_013d0f54(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte local_4f;
  byte local_4e;
  byte local_4d;
  undefined4 local_4c;
  undefined4 local_48;
  byte *local_40;
  code *local_3c;
  byte *local_38;
  code *local_34;
  byte *local_30;
  code *local_2c;
  undefined4 *local_28;
  undefined1 *local_24;
  
  iVar1 = *param_1;
  uVar3 = *param_2;
  uVar2 = param_2[1];
  local_4f = *(byte *)(iVar1 + 0x10);
  if (3 < local_4f) {
    if (local_4f == 4) {
      local_4f = *(byte *)(iVar1 + 0x11);
    }
    else {
      local_4f = 0xff;
    }
  }
  local_4e = *(byte *)(iVar1 + 0xc);
  if (1 < local_4e) {
    if (local_4e == 3) {
      local_4e = 0xff;
    }
    else {
      local_4e = *(byte *)(iVar1 + 0xd);
    }
  }
  local_4d = *(byte *)(iVar1 + 0xe);
  if (2 < local_4d) {
    if (local_4d == 4) {
      local_4d = 0xff;
    }
    else {
      local_4d = *(byte *)(iVar1 + 0xf);
    }
  }
  DataMemoryBarrier(0xb);
  if (DAT_01d4e544 != 2) {
    FUN_013d50fc();
  }
  FUN_01321fc0(&local_4c,DAT_01d4e54c,DAT_01d4e550,*(undefined4 *)(iVar1 + 4),
               *(undefined4 *)(iVar1 + 8));
  local_24 = &LAB_00632348;
  local_30 = &local_4d;
  local_38 = &local_4e;
  local_40 = &local_4f;
  local_2c = FUN_012fcc70;
  local_34 = FUN_012fcc70;
  local_3c = FUN_012fcc70;
  local_28 = &local_4c;
  uVar2 = FUN_012fa178(uVar3,uVar2,&DAT_0058791e,&local_40);
  FUN_019bb7e0(local_4c,local_48);
  return uVar2;
}

