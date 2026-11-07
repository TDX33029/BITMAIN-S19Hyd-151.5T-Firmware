// FUN_012bcd1c @ 012bcd1c size=172 calls_out=3 calls_in=6
// strings: 

int FUN_012bcd1c(int param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char local_34 [16];
  
  local_60 = *param_2;
  local_5c = param_2[1];
  uStack_58 = param_2[2];
  uStack_54 = param_2[3];
  uStack_50 = param_2[4];
  local_4c = param_2[5];
  uStack_48 = param_2[6];
  uStack_44 = param_2[7];
  uStack_40 = param_2[8];
  uStack_3c = param_2[9];
  iVar3 = 1;
  puVar2 = &local_60;
  do {
    if (*(char *)(puVar2 + 1) == '\a') goto LAB_012bcda8;
    local_34[0] = *(char *)(puVar2 + 1);
    uVar1 = *(undefined1 *)puVar2;
    FUN_01bed4e2((uint)local_34 | 1,(undefined1 *)((int)puVar2 + 5),0xf);
    FUN_012b177c(param_1 + 0x10,uVar1,local_34);
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 5;
  } while (iVar3 != 3);
  iVar3 = 2;
LAB_012bcda8:
  FUN_012b97ec(&local_60,iVar3,2);
  return param_1;
}

