// FUN_0139d250 @ 0139d250 size=536 calls_out=5 calls_in=4
// strings: 

undefined4 FUN_0139d250(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte **local_4c;
  code *local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  byte *local_28;
  
  if (*(int *)(param_2 + 0x170) == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01893578);
  }
  iVar1 = *param_4;
  uVar4 = 0;
  uVar3 = param_4[1];
  uVar2 = param_4[2];
  iVar5 = *(int *)(param_1 + 0x278);
  local_30 = 0;
  local_40 = 0;
  local_4c = (byte **)0x0;
  local_2c = 0;
  local_38 = 0;
  if ((*(byte *)(param_3 + 0x18) & 1) == 0) {
    do {
      uVar4 = 0;
      if (*(char *)(iVar5 + 0x15a) == '\x01') {
        uVar4 = (uint)*(byte *)(iVar5 + 0x15b);
      }
      local_28 = (byte *)FUN_01379370(param_1,param_2,param_3,&local_4c);
      if ((local_28 != (byte *)0x0) ||
         ((((uint)local_4c & uVar4 & 1) != 0 &&
          (local_28 = (byte *)FUN_0138d5d8(param_3,&local_4c,param_1,param_2),
          local_28 != (byte *)0x0)))) goto LAB_0139d2d4;
      if (((uint)local_4c & 1) == 0) {
        return 0;
      }
      if ((local_48 < uVar3) && (*(char *)(iVar1 + (int)local_48) == '\0')) {
        uVar2 = uVar2 + 1;
        *(undefined1 *)(iVar1 + (int)local_48) = 1;
        param_4[2] = uVar2;
      }
    } while (uVar2 != uVar3);
  }
  else {
    if (*(char *)(iVar5 + 0x15a) == '\x01') {
      uVar4 = (uint)*(byte *)(iVar5 + 0x15b);
    }
    local_28 = (byte *)FUN_01379370(param_1,param_2,param_3,&local_4c);
    if ((local_28 != (byte *)0x0) ||
       ((((uint)local_4c & uVar4 & 1) != 0 &&
        (local_28 = (byte *)FUN_0138d5d8(param_3,&local_4c,param_1,param_2), local_28 != (byte *)0x0
        )))) {
LAB_0139d2d4:
      if (1 < *local_28) {
        local_4c = &local_28;
        local_48 = FUN_013c828c;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_005733f0,&local_4c,&DAT_01892790);
      }
      thunk_FUN_016d3fb4();
      return 1;
    }
    if (((((uint)local_4c & 1) != 0) && (local_48 < uVar3)) &&
       (*(char *)(iVar1 + (int)local_48) == '\0')) {
      *(undefined1 *)(iVar1 + (int)local_48) = 1;
      param_4[2] = uVar2 + 1;
    }
  }
  return 0;
}

