// FUN_013cc0d0 @ 013cc0d0 size=300 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_013cc0d0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ushort local_56;
  ushort *local_54;
  undefined1 *local_50;
  ushort **local_4c;
  undefined1 *local_48;
  ushort *local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  ushort *local_2c;
  code *local_28;
  
  iVar3 = *param_1;
  local_2c = &local_56;
  uVar4 = *param_2;
  uVar5 = param_2[1];
  local_30 = iVar3 + 0x18;
  local_48 = &LAB_01449818;
  local_4c = &local_2c;
  local_56 = *(ushort *)(iVar3 + 0x1c) & 0xfffc | (ushort)*(byte *)(iVar3 + 0x1e) |
             (ushort)*(byte *)(iVar3 + 0x1f) << 1;
  local_50 = &LAB_016cd65c;
  local_54 = (ushort *)&local_30;
  iVar1 = FUN_012fa178(uVar4,uVar5,&DAT_0057d5fc,&local_54);
  if (iVar1 == 0) {
    local_50 = (undefined1 *)0x0;
    local_4c = *(ushort ***)(iVar3 + 0xc);
    local_48 = *(undefined1 **)(iVar3 + 0x10);
    local_34 = *(undefined4 *)(iVar3 + 0x14);
    if (local_4c == (ushort **)0x0) {
      local_34 = 0;
    }
    local_54 = (ushort *)(uint)(local_4c != (ushort **)0x0);
    local_40 = 0;
    local_44 = local_54;
    local_3c = (int)local_4c;
    local_38 = local_48;
    do {
      piVar2 = (int *)FUN_013ce0b4(&local_54);
      if (piVar2 == (int *)0x0) {
        return 0;
      }
      local_30 = *piVar2;
      local_28 = FUN_013db25c;
      local_2c = (ushort *)&local_30;
      iVar1 = FUN_012fa178(uVar4,uVar5,&DAT_005b95ed,&local_2c);
    } while (iVar1 == 0);
  }
  return 1;
}

