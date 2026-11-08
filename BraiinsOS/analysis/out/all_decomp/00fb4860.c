// FUN_00fb4860 @ 00fb4860 size=340 calls_out=3 calls_in=2
// strings: 

void FUN_00fb4860(undefined2 *param_1,char *param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined6 uVar3;
  undefined2 local_6c;
  char *local_68;
  int local_64;
  uint local_48;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined2 local_42;
  uint local_40;
  undefined4 local_3c;
  uint uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  
  local_68 = param_2;
  local_64 = param_3;
  FUN_00fb3af4(&local_48,&local_68);
  if (((char)local_48 == '\x01') && (local_64 != 0)) {
    local_64 = local_64 + -1;
    iVar2 = CONCAT13(uStack_44,local_48._1_3_);
    if (*local_68 == ':') {
      local_3c = CONCAT31(local_3c._1_3_,1);
      local_40 = 10;
      local_48 = 0;
      local_68 = local_68 + 1;
      uVar3 = FUN_00fb43dc(&local_48,&local_68);
      local_6c = (undefined2)((uint6)uVar3 >> 0x20);
      if (((uint)uVar3 & 0xffff) == 1) {
        if (local_64 == 0) {
          uVar1 = 0;
          goto LAB_00fb4970;
        }
        goto LAB_00fb499c;
      }
    }
  }
  local_68 = param_2;
  local_64 = param_3;
  FUN_00fb4684(&local_48,&local_68);
  if ((local_48 & 1) != 0) {
    local_6c = local_42;
    if (local_64 == 0) {
      iVar2 = (uint)CONCAT11(uStack_43,uStack_44) << 0x10;
      local_48 = local_40;
      uStack_44 = (undefined1)local_3c;
      uStack_43 = (undefined1)((uint)local_3c >> 8);
      local_42 = (undefined2)((uint)local_3c >> 0x10);
      local_40 = uStack_38;
      local_3c = uStack_34;
      uStack_38 = uStack_30;
      uStack_34 = uStack_2c;
      uVar1 = 1;
LAB_00fb4970:
      *(uint *)(param_1 + 4) = local_48;
      *(uint *)(param_1 + 6) = CONCAT22(local_42,CONCAT11(uStack_43,uStack_44));
      *(uint *)(param_1 + 8) = local_40;
      *(undefined4 *)(param_1 + 10) = local_3c;
      *(uint *)(param_1 + 0xc) = uStack_38;
      *(undefined4 *)(param_1 + 0xe) = uStack_34;
      param_1[3] = local_6c;
      *(int *)(param_1 + 1) = iVar2;
      *param_1 = uVar1;
      return;
    }
  }
LAB_00fb499c:
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 3;
  return;
}

