// FUN_019ba7f8 @ 019ba7f8 size=336 calls_out=8 calls_in=2
// strings: 

void FUN_019ba7f8(undefined4 *param_1,undefined2 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  undefined4 local_40;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint *local_28;
  undefined1 *local_24;
  
  uVar5 = 0;
  local_4c = 0;
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  local_5c = 0;
  local_60 = 1;
  local_64 = 0;
  local_68 = 0;
  local_48 = 0;
  iVar1 = FUN_01be7408(param_3,0,&local_68,&local_48);
  if (iVar1 == -0xb) {
    puVar4 = (undefined4 *)FUN_01be3244();
    local_34 = *puVar4;
LAB_019ba92c:
    param_1[1] = uVar5 & 0xff | (int)puVar4 << 8;
    param_1[2] = local_34;
    uVar2 = 1;
  }
  else {
    if (iVar1 != 0) {
      uVar2 = FUN_01be73d4();
      uVar3 = FUN_01bedbda();
      FUN_006643f0(&local_44,uVar2,uVar3);
      local_24 = &LAB_006643c0;
      local_28 = &local_44;
      FUN_00664898(&local_38,&DAT_005a3bf9,&local_28);
      uVar2 = local_34;
      uVar5 = local_38;
      FUN_019a18a8(&local_38,0x29,local_34,local_30);
      if (uVar5 != 0) {
        thunk_FUN_01be4678(uVar2);
      }
      if ((local_44 & 0x7fffffff) != 0) {
        thunk_FUN_01be4678(local_40);
      }
      if ((local_38 & 0xff) != 4) {
        puVar4 = (undefined4 *)(local_38 >> 8);
        uVar5 = local_38;
        goto LAB_019ba92c;
      }
    }
    param_1[1] = local_48;
    param_1[2] = local_48;
    *(undefined2 *)(param_1 + 3) = *param_2;
    uVar2 = 0;
  }
  *param_1 = uVar2;
  return;
}

