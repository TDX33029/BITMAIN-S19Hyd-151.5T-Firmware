// FUN_01387064 @ 01387064 size=364 calls_out=3 calls_in=3
// strings: 

void FUN_01387064(char *param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint unaff_r8;
  char local_58;
  undefined2 local_57;
  char local_55;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_40;
  undefined1 local_3f;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  uVar2 = (uint)*(byte *)(param_3 + 0x20);
  uVar3 = uVar2 - 6;
  if (uVar2 < 6) {
    uVar3 = 6;
  }
  uVar3 = uVar3 & 0xff;
  if (uVar3 == 6) {
    uVar3 = 1;
    if (2 < uVar2) {
      uVar3 = uVar2 - 3;
    }
    if ((uVar3 & 0xff) != 0) {
      iVar4 = 4;
      if ((uVar3 & 0xff) == 1) {
        if (uVar2 == 0) {
          iVar4 = 8;
          goto LAB_0138715c;
        }
        if (uVar2 != 2) goto LAB_0138715c;
        uVar1 = *(undefined1 *)(param_3 + 0x21);
        if (*(int *)(param_3 + 0x24) == -0x80000000) {
          local_28 = 0x80000000;
        }
        else {
          FUN_006666fc(&local_28,*(undefined4 *)(param_3 + 0x28),*(undefined4 *)(param_3 + 0x2c));
        }
        uStack_3c = local_28;
        uStack_38 = uStack_24;
        uStack_34 = uStack_20;
        local_40 = 2;
        local_3f = uVar1;
        FUN_013b8db0(&local_58);
        unaff_r8 = local_54;
        if (local_58 != '\x05') goto LAB_013870d8;
        if ((local_54 & 1) == 0) goto LAB_013870a4;
      }
      else {
LAB_0138715c:
        local_50 = *(uint *)((byte *)(param_3 + 0x20) + iVar4);
      }
      local_58 = '\x05';
      *(uint *)(param_1 + 4) = local_50;
      goto LAB_01387168;
    }
  }
  else if (((uVar3 == 5 || uVar3 == 3) && param_4 == 0) && ((*(byte *)(param_3 + 0x21) & 1) != 0)) {
    local_57 = CONCAT11(local_57._1_1_,8);
    local_58 = '\x03';
    local_50 = uVar2;
LAB_013870d8:
    *(undefined2 *)(param_1 + 1) = local_57;
    param_1[3] = local_55;
    *(undefined4 *)(param_1 + 0xc) = local_4c;
    *(undefined4 *)(param_1 + 0x10) = uStack_48;
    *(undefined4 *)(param_1 + 0x14) = uStack_44;
    *(uint *)(param_1 + 4) = unaff_r8;
    *(uint *)(param_1 + 8) = local_50;
    goto LAB_01387168;
  }
LAB_013870a4:
  FUN_01385788(param_3,*param_2,param_2[1]);
  local_58 = '\x06';
LAB_01387168:
  *param_1 = local_58;
  return;
}

